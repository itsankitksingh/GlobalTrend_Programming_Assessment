#include <bits/stdc++.h> 
using namespace std; 
 
struct TreeNode { 
    int val; 
    TreeNode* left; 
    TreeNode* right; 
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {} 
}; 
 
class Codec { 
public: 
    // Encodes a tree to a single string. 
    string serialize(TreeNode* root) { 
        stringstream ss; 
        serializeHelper(root, ss); 
        return ss.str(); 
    } 
 
    // Decodes your encoded data to tree. 
    TreeNode* deserialize(string data) { 
        stringstream ss(data); 
        return deserializeHelper(ss); 
    } 
 
private: 
    void serializeHelper(TreeNode* node, stringstream& ss) { 
        if (node == nullptr) { 
            ss << "# "; 
            return; 
        } 
        ss << node->val << " "; 
        serializeHelper(node->left, ss); 
        serializeHelper(node->right, ss); 
    } 
 
    TreeNode* deserializeHelper(stringstream& ss) { 
        string val; 
        ss >> val; 
        if (val == "#") { 
            return nullptr; 
        } 
        TreeNode* node = new TreeNode(stoi(val)); 
        node->left = deserializeHelper(ss); 
        node->right = deserializeHelper(ss); 
        return node; 
    } 
}; 
 
void printTree(TreeNode* root) { 
    if (root == nullptr) { 
        cout << "# "; 
        return; 
    } 
    cout << root->val << " "; 
    printTree(root->left); 
    printTree(root->right); 
} 
 
int main() { 
    Codec codec; 
     
    TreeNode* root = new TreeNode(1); 
    root->left = new TreeNode(2); 
    root->right = new TreeNode(3); 
    root->right->left = new TreeNode(4); 
    root->right->right = new TreeNode(5); 
 
    string serialized = codec.serialize(root); 
    cout << "Serialized tree: " << serialized << endl; 
 
    TreeNode* deserializedRoot = codec.deserialize(serialized); 
    cout << "Deserialized tree: "; 
    printTree(deserializedRoot); 
    cout << endl; 
 
    return 0; 
} 
 