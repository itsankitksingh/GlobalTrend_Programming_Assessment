#include <bits/stdc++.h> 
 
using namespace std; 
 
int longestSubLen(string s) { 
    unordered_map<char, int> charIndMp; 
    int maxLength = 0; 
    int start = 0; 
 
    for (int end = 0; end < s.length(); ++end) { 
        if (charIndMp.find(s[end]) != charIndMp.end()) { 
            start = max(charIndMp[s[end]] + 1, start); 
        } 
        charIndMp[s[end]] = end; 
        maxLength = max(maxLength, end - start + 1); 
    } 
 
    return maxLength; 
} 
 
int main() { 
    string s = "vabvcabv"; 
    cout << longestSubLen(s) << endl; 
 
    s = "apple"; 
    cout << longestSubLen(s) << endl; 
 
    s = "mmmm"; 
    cout << longestSubLen(s) << endl; 
 
    return 0;
}