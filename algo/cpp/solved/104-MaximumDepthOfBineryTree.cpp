#include <iostream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
 
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == NULL) {
            return 0;
        } else {
            int leftDepth = this->maxDepth(root->left);
            int rightDepth = this->maxDepth(root->right);

            if (leftDepth > rightDepth) {
                return leftDepth + 1;
            } else {
                return rightDepth + 1;
            }
        }
    }
};

int main() {
    TreeNode *root = new TreeNode(-1);
    root->left = new TreeNode(0);
    root->right = new TreeNode(1);

    root->right->right = new TreeNode(2);

    Solution sol;
    cout << sol.maxDepth(root) << endl;
}

