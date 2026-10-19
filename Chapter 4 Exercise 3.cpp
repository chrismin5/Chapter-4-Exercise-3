/*  Program File Name: Chapter 4 Exercise 3
    Programmer: Christian Min
    Date: 10/18/26
    Requirements:
    Write a program that asks the user to enter a month in numeric form, a day, and a two-digit year. determine whether the month times the day is equal to the year. if so,
    display a message saying the date is magic. otherwise, display a message saying the date is not magfic. *input validation: think about what legal valies the program should
    accept for month and day.

*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int day, month, year;       //to hold the values for the variables of day/month,year the user will enter

    cout << "Enter the month in numeric form, 1-12: ";
    cin >> month;
    if (month < 1 || month > 12) {      //*input validation: use an if conditional to check that the user's integer is between 1-12, and if not, display the fact
        cout << "\n" << "The month you entered in numeric form is not between the values of 1-12!" << "\n";
        return 1;
    }

    cout << "Enter the day in numeric form: ";
    cin >> day;

    int monthDays = 31;     //sets the base max number of days in a month to 31
    if (month == 11 || month == 9 || month == 6 || month == 4) {        //use an if conditional to set the max number of days respective to the month in the calander
        monthDays = 30;
    }
    else if (month == 2) {      //use an if conditional to set the max number of days respective to the month in the calander for feb.
        monthDays = 29;
    }
    if (day < 1 || day > monthDays) {       //*input validation: use an if conditional check to see if the entered day is within range of the actual max number of days in that respective month
        cout << "\n" << "The day you entered in numeric form is not between the values of 1-" << monthDays << "!" << "\n";
        return 1;
    }

    cout << "Enter the two-digit year in numeric form: ";
    cin >> year;
    if (year < 0 || year >99) {     //*input validation: use an if conditional to check and see if the entered year is within the range of 0-99
        cout << "\n" << "The year you entered in numeric form is not between the values of 0-99!" << "\n";
        return 1;
    }

    if ((month * day) == year) {        //calculate using the "magic" formula to see if the month * day matches the year. output the findings accordingly through a text output
        cout << "\n" << "The date you entered is magic!" << "\n";
    }
    else {
        cout << "\n" << "The date you entered is NOT magic!" << "\n";
    }

    return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
