#include <iostream>

using namespace std;

int main()
{
    /* Finding the grade of a given mark */

    int marks;

    cout << " Enter your marks : " << endl;

    cin >> marks;
    if ( marks >= 80 ){
        cout << "Your grade is A" << endl;
    }
    else if ( marks >= 75 && marks <= 79 ){
        cout << "Your grade is B+" << endl;
    }
    else if ( marks >= 70 && marks <= 74 ){
         cout << "Your grade is B" << endl;
    }
    else if ( marks >= 65 && marks <= 69 ){
         cout << "Your grade is C+" << endl;
    }
    else if ( marks >= 60 && marks <= 64 ){
         cout << "Your grade is C-" << endl;
    }
    else if ( marks >= 55 && marks <= 59 ){
         cout << "Your grade is D+" << endl;
    }
    else if ( marks >= 50 && marks <= 54 ){
         cout << "Your grade is D" << endl;
    }
    else if ( marks >= 40 && marks <= 49 ){
         cout << "Your grade is E" << endl;
    }
    else if ( marks >= 0 && marks <= 39 ){
         cout << "Your grade is B" << endl;
    }


    return 0;
}
