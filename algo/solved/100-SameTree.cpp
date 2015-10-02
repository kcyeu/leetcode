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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == NULL && q == NULL) return true;

        if (p == NULL && q != NULL) return false;

        if (p != NULL && q == NULL) return false;

        if (p->val == q->val) {
            bool result = this->isSameTree(p->right, q->right);
            if (result == false) return false;

            result = this->isSameTree(p->left, q->left);
            if (result == false) return false;
        } else {
            return false;
        }
        return true;
    }

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
    cout << sol.isSameTree(root, root) << endl;
}

