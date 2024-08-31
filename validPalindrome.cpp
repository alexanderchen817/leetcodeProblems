// Problem #125: Valid Palindrome 

#include <iostream>
#include <vector>

using namespace std;


bool isNumber(char &x)
{
    if (x >= 48 && x <= 57) {
        return true;
    }
    return false;
}

bool isAlpha(char &x)
{
    if ((x <= 90 && x >= 65) || (x >= 97 && x <= 122)) {
        return true;
    }
    return false;
}


bool isPalindrome(string s) 
{
    bool isPalindrome = false;
    string alpha_string = "";
    // remove all non-alphanumeric characters
    for (int i = 0; i < s.size(); i++) {
        if (isNumber(s.at(i)) || isAlpha(s.at(i))) {
            alpha_string += s.at(i);
        } 
    }

    // convert all letters to lowercase
    for (int i = 0; i < s.size(); i++) {
        alpha_string.at(i) = tolower(alpha_string.at(i));
    }

    // compare string backwards by concatentation
    string temp = "";
    for (int i = s.size() - 1; i >= 0; i--) {
        temp += alpha_string.at(i);
    }

    if (temp == s) {
        isPalindrome = true;
    } else {
        // do nothing, the string is NOT a palindrome.
    }

    // return
    return isPalindrome;
}
int main()
{
    string test = "aabb";
    // should return false
    // cout << isPalindrome(test) << endl;
    // string test2 = "A man, a plan, a canal: Panama";
    // cout << isPalindrome(test2) << endl;
    // string test3 = "0P";
    // cout << isPalindrome(test3) << endl;
    string test4 = "a.b,.";
    cout << isPalindrome(test4) << endl;
    return 0;
}