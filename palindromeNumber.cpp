// Problem #9: palinedrome number problem

#include <iostream>

using namespace std;

bool isPalindrome(int x) 
{
    // assume the number is NOT a palindrome
    bool checkNum = false;
    // convert type int to string using to_string
    string numInString = to_string(x);

    // concatenate converted string backwards 
    string palindromeString;
    for (int i = numInString.size() - 1; i >= 0; i--) {
        palindromeString += numInString.at(i);
    }

    // check if strings are identical
    if (palindromeString == numInString) {
        checkNum = true;
    } else {
        checkNum = false;
    }

    return checkNum;
}
int main()
{
    // testing palindrome
    int testCaseNum1 = 121;
    bool num = isPalindrome(testCaseNum1);
    cout << num << endl;
    return 0;
}
