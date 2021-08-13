// AbuadGradeChecker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int scores[]{ 100, 90, 47, 78, 32, 86, 65, 86, 71, 58, 57, 98, 67, 87, 65 };

    for (int i{ 0 }; i < 16; ++i) {
        if (scores[i] >= 70) {
            cout << "A" << endl;
        }
        else if (scores[i] >= 60 && scores[i] < 70) {
            cout << "B" << endl;
        }
        else if (scores[i] >= 50 && scores[i] < 60) {
            cout << "C" << endl;
        }
        else if (scores[i] >= 45 && scores[i] < 50) {
            cout << "D" << endl;
        }
        else if (scores[i] >= 40 && scores[i] < 45) {
            cout << "E" << endl;
        }
        else {
            cout << "F" << endl;
        }
    }

    cout << endl;
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
