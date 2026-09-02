
// Program to check if the given number is palindrome or not using stack
#include <bits/stdc++.h>
using namespace std;

int main() {
    int num, temp, digit;    stack<int> s;

    cout << "Enter a number: ";
    cin >> num;

    temp = num;

    
    while (temp > 0) {
        digit = temp % 10;
        s.push(digit);
        temp /= 10;
    }

    temp = num;

    while (temp > 0) {
        digit = temp % 10;

        if (digit != s.top()) {
            cout << num << " is not a palindrome." << endl;
            return 0;
        }

        s.pop();
        temp /= 10;
    }

    cout << num << " is a palindrome." << endl;

    return 0;
}
