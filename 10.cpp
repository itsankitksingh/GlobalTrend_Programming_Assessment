#include <bits/stdc++.h> 
using namespace std; 
 
bool isAlpha(const string &str) 
{ 
    for (char c : str) 
    { 
        if (!isalpha(c)) 
        { 
            return false; 
        } 
    } 
    return true; 
} 
 
int main() 
{ 
    string test1 = "abcd"; 
    string test2 = "abc5"; 
    string test3 = "abc+deg"; 
 
    cout << (isAlpha(test1) ? "True" : "False") << endl; 
    cout << (isAlpha(test2) ? "True" : "False") << endl; 
    cout << (isAlpha(test3) ? "True" : "False") << endl; 
 
    return 0; 
}