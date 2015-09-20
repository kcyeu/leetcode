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
    TreeNode* invertTree(TreeNode* root) {
        if (root == NULL) return NULL;

        if (root->left != NULL)
            this->invertTree(root->left);

        if (root->right != NULL)
            this->invertTree(root->right);

        TreeNode* tmp = root->left;
        root->left = root->right;
        root->right = tmp;

        return root;
    }
};

int main() {
    TreeNode *root = new TreeNode(-1);
    root->left = new TreeNode(0);
    root->right = new TreeNode(1);

    root->right->right = new TreeNode(2);

    Solution sol;
    cout << sol.isSameTree(root, root) << endl;
}

