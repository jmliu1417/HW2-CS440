# HW2-CS440

Assume that we have a relation Employee(id, name, bio, manager-id).  The values of id and manager-id are integers each with the fixed sizes of 8 bytes. The values of name and bio are character strings with maximum lengths of 200 and 500 characters, respectively. Using the provided skeleton code with this assignment, write a C or C++ program that stores relation Employee in a single file on the external storage, i.e., hard disk, and accesses its records.  

The Input File: Your program must first read the input Employee relation and store it on a new file on disk. The input relation is stored in a CSV file, i.e., each tuple is in a separate line and the fields of each record are separated by commas. Your program must assume that the input CSV file is in the current working directory, i.e., the one from which your program is running, and its name is Employee.csv. We have included an input CSV file with this assignment as a sample test case for your program. Your program must create the new file and store and access records on the new file correctly for other CSV files with the same fields as the sample file.

Data File Creation: Your program must store the records of the input CSV file in a new data file with the name EmployeeRelation in the current working directory. The data file is a binary file of type, e.g., .dat. More details on the C++ APIs for opening, reading from, writing to, and closing (.dat) files are provided in the skeleton code.

Searching the Data File: After finishing the file creation, your program must accept an Employee id in its command line and search the file you just created, i.e., EmployeeRelation.dat for all records with the given id. The user of your program should be able to search for records of multiple ids, one id at a time.

Each student has an account on hadoop-master.engr.oregonstate.edu server, which is a Linux machine. Your should ensure that your program can be compiled and run on this machine. You can use the following bash command to connect to it:

> ssh your_onid_username@hadoop-master.engr.oregonstate.edu
Then it asks for your ONID password and probably one another question. To access this server, you must be on campus or connect to the Oregon State VPN.

You can use the following commands to compile and run C++ code:

> g++ -std=c++11 main.cpp -o main.out
> main.out
