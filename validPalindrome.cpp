// Problem #125: Valid Palindrome 

#include <iostream>
#include <vector>

using namespace std;

bool isPalindrome(string s) 
{

    bool isPalindrome = false;
    // remove all non-alphanumeric characters
    for (int i = 0; i < s.size(); i++) {
        // don't include a, and z
        if (s.at(i) < 97 || s.at(i) > 123) {
            s.erase(i);
        } 
    }

    // convert all letters to lowercase
    for (int i = 0; i < s.size(); i++) {
        s.at(i) = tolower(s.at(i));
    }

    // compare 
    string temp = "";
    for (int i = s.size() - 1; i >= 0; i--) {
        // concatenate string backwards
        temp += s.at(i);
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
    string test2 = "A man, a plan, a canal: Panama";
    cout << isPalindrome(test2) << endl;

    return 0;
}