// Problem #125: Valid Palindrome 

#include <iostream>
#include <vector>

using namespace std;

bool isPalindrome(string s) 
{
    bool isPalindrome = false;
    // remove all non-alphanumeric characters
    for (int i = 0; i < s.size(); i++) {
        // check for bounds of alphanumeric characters
        // 122 is upper bound, 48 is lower bound, last two conditionals are ranges
        if (s.at(i) > 122 || 
            s.at(i) < 48 || (s.at(i) > 91 && s.at(i) < 97) 
                        || (s.at(i) > 57 && s.at(i) < 65)) {
            // erases and shortens string
            s.erase(i);
        } 
    }

    // convert all letters to lowercase
    for (int i = 0; i < s.size(); i++) {
        s.at(i) = tolower(s.at(i));
    }

    // compare string backwards by concatentation
    string temp = "";
    for (int i = s.size() - 1; i >= 0; i--) {
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
    // string test2 = "A man, a plan, a canal: Panama";
    // cout << isPalindrome(test2) << endl;
    string test3 = "0P";
    cout << isPalindrome(test3) << endl;
    return 0;
}