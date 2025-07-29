//A c++ program to access the static data members 

#include<iostream>
#include<string.h>

using namespace std;
class car
{
private:
    int car_id;
    char car_name[20];
    int marks;

public:
    static int static_member;

    car()
    {
    static_member++;
    }

    void inp()
    {
    cout << " \n\n enter the Id of the car: " << endl;
    cin >> car_id; //input the id
    cout << " enter the name of the car: " << endl;
    cin >> car_name;
    cout << " number of the marks (1 - 10): " << endl;
    cin >> marks;
    }

    //display the entered details
    void disp ()
    {
    cout << " \n Id of the car: " << car_id;
    cout << " \n name of the car: " << car_name;
    cout << " \n marks: " << marks;
    }
     };

     //initialized the static data member to 0
     int car:: static_member = 0;

     int main ()
     {
         //create object for the class car
         car c1;
         // call inp() function to insert values
         c1. inp();
         c1. disp();

         //create another object
         car c2;
         // call inp() function to insert values
         c2. inp();
         c2. disp();

         cout << " \n No. of objects created in the class: " << car :: static_member <<endl;
         return 0;
     }

