/*
Skeleton code for storage management

Jamie Liu 
934463192 
liujam@oregonstate.edu

Colby Noah
934319645
noahc@oregonstate.edu

*/



#include <string>
#include <ios>
#include <fstream>
#include <vector>
#include <string>
#include <string.h>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include <cmath>
#include "classes-4.h"
using namespace std;

int main(int argc, char* argv[]) {
    // Initialize the Storage Manager Class with the Binary .dat file name we want to create
    StorageManager manager("EmployeeRelation.dat");

    // Assuming the Employee.CSV file is in the same directory, 
    // we want to read from the Employee.csv and write into the new data_file

    // Colby: changed this, was originally "Employee.csv", which isn't the file we have
    manager.createFromFile("Employee-2.csv");

    // Searching for Employee IDs Using [manager.findAndPrintEmployee(id)]
    /***TO_DO***/ 

    int user_input;

    while(user_input != 2){
        cout << "Menu" << endl;
        cout << "1) Search employee via. ID \n2) Exit program (enter '2') " << endl;

        cin >> user_input;
        
        if(user_input == 1){
            int input_id;

            cout << "\nEnter employee ID: ";
            cin >> input_id;

            manager.findAndPrintEmployee(input_id);
            cout << endl;
        }
    }    

    cout << "Exiting program." <<endl;

    return 0;
}
