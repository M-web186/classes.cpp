# staticdata.cpp

A simple C++ program demonstrating the use of static data members within a class.

## Description

showcases how static data members work in C++. The program defines a `car` class that includes a static member variable to count the number of objects created. Each time a `car` object is instantiated, the static member is incremented. The program also accepts user input for car details and displays them.

## Features

- Demonstrates static data members in C++
- Counts the number of objects created from the class
- Accepts and displays car details using member functions

## How to Compile and Run

1. **Clone the repository:**
   ```bash
   git clone https://github.com/M-web186/classes.cpp.git
   cd classes.cpp
Compile the code:

bash
g++ -o staticdata staticdata.cpp
Run the executable:

bash
./staticdata

Example Usage
txt
 enter the Id of the car:
1
 enter the name of the car:
Toyota
 number of the marks (1 - 10):
9

 Id of the car: 1
 name of the car: Toyota
 marks: 9

 enter the Id of the car:
2
 enter the name of the car:
Honda
 number of the marks (1 - 10):
8

 Id of the car: 2
 name of the car: Honda
 marks: 8

 No. of objects created in the class: 2
 
License
This project is open source and available under the MIT License.
