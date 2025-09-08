#include <iostream>
#include <climits>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return helper(root, LONG_MIN, LONG_MAX);
    }
    
private:
    bool helper(TreeNode* node, long low, long high) {
        if (!node) return true;
        
        if (node->val <= low || node->val >= high) 
            return false;
        
        return helper(node->left, low, node->val) &&
               helper(node->right, node->val, high);
    }
};

int main() {

    TreeNode* root1 = new TreeNode(2);
    root1->left = new TreeNode(1);
    root1->right = new TreeNode(3);

    Solution s;
    cout << (s.isValidBST(root1) ? "True" : "False") << endl;  

    TreeNode* root2 = new TreeNode(5);
    root2->left = new TreeNode(1);
    root2->right = new TreeNode(4);
    root2->right->left = new TreeNode(3);
    root2->right->right = new TreeNode(6);

    cout << (s.isValidBST(root2) ? "True" : "False") << endl;  

    return 0;
}
