#include <iostream>
#include <conio.h>
using namespace std;
// C++ Program to convert inches to feet yards and inches
int main()
{
    int inch,feet,yards;

    cout << "Enter Number Inches To convert : ";
    cin >> inch;

    yards = inch / 432;
    inch =  inch % 432;

    feet = inch / 12 ;
    inch =  inch % 12;

    cout<<"\nAfter Conversion from inches to feet, yards and inches :: \n";
    cout<<"\nYards = "<<yards<<"\n\nFeet = "<<feet<<"\n\nInches = "<<inch<<"\n";
    return 0;
}
