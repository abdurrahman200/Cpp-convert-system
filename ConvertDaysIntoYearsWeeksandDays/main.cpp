#include <iostream>

using namespace std;
// Write a C++ Program to Convert Days Into Years Weeks and Days
int main()
{
    int year, day,week;
    cout << "Enter No Of Days : ";
    cin >> day;

    year = day / 365;
    day = day % 365;
    week = day / 7 ;
    day = day % 7;

    cout<<"\nNo. of Years :"<< year<<"\nNo. of Weeks :" << week<<"\nNo. of Days :" << day<< endl;

    return 0;
}
