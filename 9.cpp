#include <bits/stdc++.h> 
using namespace std; 
 
int maxDiff(const vector<int>& nums) { 
 
    int maxElement = *max_element(nums.begin(), nums.end()); 
    int minElement = *min_element(nums.begin(), nums.end()); 
 
    return maxElement - minElement; 
} 
 
int main() { 
    vector<int> nums = {1, 2, 90, 10, 110}; 
     
        int result = maxDiff(nums); 
        cout << "Max diff: " << result << endl; 
 
    return 0; 
} 
 
