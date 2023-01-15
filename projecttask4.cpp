// projecttask4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
using namespace std;
int Prime_Number(int num) {
    int i;

    // Corner case
    if (num <= 1)
        return false;

    // Check from 2 to n-1
    for (i = 2; i < num; i++)
        if (num % i == 0)
            return false;

    return true;
}

int main() {
    int choice, num;
    cout << "1. Prime_Number" << endl;
    cout << "2. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter a number: ";
        cin >> num;
        if (Prime_Number(num)) {
            cout << num << " is a prime number " << endl;
        }
        else {
            cout << num << " is a not prime number " << endl;
        }
   
    }
    else {
        cout << "Invalid choice" << endl;
    }
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
