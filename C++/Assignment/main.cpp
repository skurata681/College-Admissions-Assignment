/**
* main.cpp
*
* EECS 183
* Lab 6: College Admissions
*
* <#Name(s)#>
* <#uniqname(s)#>
*
* <#A description of the lab here#>
*/

#include "college_admissions.h"
#include <iostream>
using namespace std;

int main() {
    // print menu
    cout << "-------------------------------" << endl
         << "EECS 183 Lab 6 Menu Options" << endl
         << "-------------------------------" << endl;
    cout << "1) Test getter functions" << endl;
    cout << "2) Execute college_admissions()" << endl;
    cout << "3) Execute college_admissions_revised()" << endl;
    cout << "Any other number - Exit lab" << endl;
    cout << "Choice --> ";
    
    int choice;
    cin >> choice;
    // remove the return character from the cin stream buffer
    string junk;
    getline(cin, junk);
    
    
    if (choice == 1) {
        test_getters();
    }
    else if (choice == 2) {
        string student_data = get_data();
        college_admissions(student_data);
    }
    else if (choice == 3) {
        string student_data = get_data();
        college_admissions_revised(student_data);
    }
    return 0;
}
