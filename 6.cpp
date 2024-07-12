#include <bits/stdc++.h> 
using namespace std; 
unsigned int factorial(unsigned int n)  
{  
if (n == 0 || n == 1)  
return 1;  
return n * factorial(n - 1);  
}  
int main()  
{  
int num = 6;  
cout << "factorial: "<< factorial(num) << endl;  
return 0;  
}  