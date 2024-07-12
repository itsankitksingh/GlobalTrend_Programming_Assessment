#include <bits/stdc++.h> 
using namespace std; 
 
int findSum(int n) 
{ 
    int sum = 0; 
    while (n != 0) 
    { 
        sum = sum + n % 10; 
        n = n / 10; 
    } 
    return sum; 
} 
 
int main() 
{ 
    int n = 687; 
 
    cout << "Sum is: " << findSum(n); 
    return 0; 
} 
