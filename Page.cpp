#include <bits/stdc++.h>
#include <chrono>\
#include <string>
#include <stdlib.h>
using namespace std;

#define INITIAL_CHOICE 1;
#define INITIAL 1;

int main(int argc, char* argv[]) {

    auto start = std::chrono::high_resolution_clock::now();
    unsigned long long address;
    unsigned long page_number;
    unsigned long offset;
    bool choice = INITIAL_CHOICE; 
    int status = INITIAL;
    bool flag=true;

    while(1) {

        switch (choice) {

            case 1 : {

                if(status){ 

                    address = atoll(argv[1]); 
                    
                    // PAGE SIZE GIVEN IS 4KB
                    
                    page_number = address >> 12; 
                    
                    offset = address & 0xfff; 

                    cout << "ADDRESS:\t PAGE NUMBER: \t OFFSET: \n";
                    cout << "----------------------------------------" << endl;
                    cout << address << "\t\t\t" << page_number << "\t " << offset << endl;

                } else {

                    string address_string;
                    cout << "Enter the address: " ;
                    cin >> address_string;

                    address = stoll(address_string);

                    // PAGE SIZE GIVEN IS 4KB
                    
                    page_number = address >> 12;
                    
                    offset = address & 0xfff;
                    flag=false;
                    cout << "ADDRESS:\t PAGE NUMBER: \t OFFSET: \n";
                    cout << "----------------------------------------" << endl;
                    cout << address << "\t\t\t" << page_number << "\t " << offset << endl;

                }
                break;
            }

            case 0 : {

                cout << "#### PROGRAM TERMINATION ####" << endl;

                auto end = std::chrono::high_resolution_clock::now();
                std::chrono::duration<double> elapsed = end - start; 

                cout << "EXECUTION TIME: " << elapsed.count() << " sec" << endl;
                exit(0);
            }

        }
        cout << "Input choice to proceed (0/1) : ";
        cin >> choice;

        status = 0;
    }
    
    return 0;
}
