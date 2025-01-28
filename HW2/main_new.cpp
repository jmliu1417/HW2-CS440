/*
Skeleton code for External storage management
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
#include "classes_new.h"
using namespace std;


int main(int argc, char* const argv[]) {

    // Initialize the Storage Manager Class with the Binary .dat file name we want to create
    StorageManager manager("EmployeeRelation.dat");

    // Assuming the Employee.CSV file is in the same directory, 
    // we want to read from the Employee.csv and write into the new data_file
    manager.createFromFile("Employee.csv");

    // TODO: You'll receive employee IDs as arguments, process them to retrieve the record, or display a message if not found. 

    for (int i = 1; i < argc; ++i) {
        if(argc > 4){
            cout << " Only the first 3 Employee IDs will be processed." << endl;
            break;
        }else{
            try {
                int searchId = stoi(argv[i]); // Convert argument to integer
                cout << "Searching for Employee ID: " << searchId << endl;
                manager.findAndPrintEmployee(searchId); // Search and print the record
            } catch (const invalid_argument& e) {
                cerr << "Invalid Employee ID: " << argv[i] << ". Please provide a numeric ID." << endl;
            } catch (const out_of_range& e) {
                cerr << "Employee ID out of range: " << argv[i] << endl;
            }
        }
    }

    return 0;
}
