#include <bits/stdc++.h> 
using namespace std; 
 
struct TreeNode { 
    int val; 
    TreeNode *left; 
    TreeNode *right; 
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {} 
}; 
 
class Solution { 
public: 
    int maxPathSum(TreeNode* root) { 
        int maxSum = INT_MIN; 
        maxGain(root, maxSum); 
        return maxSum; 
    } 
 
private: 
    int maxGain(TreeNode* node, int &maxSum) { 
        if (node == nullptr) return 0; 
 
        int leftGain = max(maxGain(node->left, maxSum), 0); 
        int rightGain = max(maxGain(node->right, maxSum), 0); 
 
        int currentPathSum = node->val + leftGain + rightGain; 
 
        maxSum = max(maxSum, currentPathSum); 
 
        return node->val + max(leftGain, rightGain); 
    } 
}; 
 
int main() { 
    TreeNode* root = new TreeNode(-10); 
    root->left = new TreeNode(9); 
    root->right = new TreeNode(20); 
    root->right->left = new TreeNode(15); 
    root->right->right = new TreeNode(7); 
 
    Solution solution; 
    cout << "The max path sum is " << solution.maxPathSum(root) << endl; 
 
    return 0; 
} 