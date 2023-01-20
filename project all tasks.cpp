
#include <iostream>
#include <random>
using namespace std;

bool is_perfect(int n) {
    int sum = 0;

    // Find the sum of the divisors of n, excluding n itself
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    // Return true if the sum of the divisors is equal to n
    return sum == n;
}
double findMin(double num1, double num2, double num3) {
    double min = num1;
    if (num2 < min) min = num2;
    if (num3 < min) min = num3;
    return min;
}
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
int reverseNumber(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}
int Greatest_Common_Divisor(int num1, int num2) {
    int GCD;
    for (int i = 1; i <= num1 && i <= num2; ++i) {
        if (num1 % i == 0 && num2 % i == 0) {
            GCD = i;
        }
    }
    return GCD;
}
int Quality_point(int average) {
    int Grade;
    if (average <= 100 && average >= 90) {
        Grade = 4;
    }
    else if (average <= 89 && average >= 80) {
        Grade = 3;
    }
    else if (average <= 79 && average >= 70) {
       
        Grade = 2;
    }
    else if (average <= 69 && average >= 60) {
      
        Grade = 1;
    }
    else if (average < 60) {
        Grade = 0;
    }
    return Grade;
}
int flip() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, 1);
    return dis(gen);
}

int main() {
    int choice=0, num;
    while (choice != 8) {
        cout << "\n1. Perfect Number" << endl;
        cout << "2. Find the Minimum" << endl;
        cout << "3. Prime Number" << endl;
        cout << "4. Reverse Digits" << endl;
        cout << "5. Greatest Common Divisor " << endl;
        cout << "6. Quality Points Grades " << endl;
        cout << "7. Coin Tossing " << endl;
        cout << "8. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            int n;
            cout << "Enter a number: ";
            cin >> n;

            if (is_perfect(n)) {
                cout << n << " is a perfect number!" << endl;
            }
            else {
                cout << n << " is not a perfect number." << endl;
            }
        }
        else if (choice == 2) {
            double num1, num2, num3;
            cout << "Enter three numbers: ";
            cin >> num1 >> num2 >> num3;
            double min = findMin(num1, num2, num3);
            cout << "The minimum is: " << min << endl;

        }
        else if (choice == 3) {
            cout << "Enter a number: ";
            cin >> num;
            if (Prime_Number(num)) {
                cout << num << " is a prime number " << endl;
            }
            else {
                cout << num << " is a not prime number " << endl;
            }
        }
        else if (choice == 4) {
            cout << "Enter a number: ";
            cin >> num;
            cout << "Reversed number: " << reverseNumber(num) << endl;
        }
        else if (choice == 5) {
            int num1, num2, GCD;
            cout << "Enter First Number\n";
            cin >> num1;
            cout << "Enter Second Number \n";
            cin >> num2;
            GCD = Greatest_Common_Divisor(num1, num2);
            cout << "Greatest Common Divisor = " << GCD << endl;
        }
        else if (choice == 6) {
            int average, Grade;
            cout << "Please Enter your students Average\n";
            cin >> average;
            Grade = Quality_point(average);
            cout << " Your Grade is " << Grade << endl;
        }
        else if (choice == 7) {
            int heads = 0, tails = 0;
            for (int i = 0; i < 100; i++) {
                int coin = flip();
                if (coin == 0) {
                    tails++;
                    //cout << "tails" << std::endl;
                }
                else {
                    heads++;
                    //cout << "heads" << std::endl;
                }
            }
            cout << "heads: " << heads << endl;
            cout << "tails: " << tails << endl;

        }
        else if (choice == 8) {
            cout << "We are existing good bye " << endl;
        }
        else {
            cout << "Invalid choice" << endl;
        }
    }
}