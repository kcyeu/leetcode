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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root->val == p->val) {
            return p;
        }

        if (root->val == q->val) {
            return q;
        }

        if (root->val > p->val && root->val > q->val) {
            return this->lowestCommonAncestor(root->left, p, q);
        }

        if (root->val < p->val && root->val < q->val) {
            return this->lowestCommonAncestor(root->right, p, q);
        }

        return root;
    }
};

int main() {
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(-1);
    root->right = new TreeNode(2);

    root->left->left = new TreeNode(0);

    Solution sol;
    cout << sol.lowestCommonAncestor(root, new TreeNode(-1), new TreeNode(2))->val << endl;
    cout << sol.lowestCommonAncestor(root, new TreeNode(-1), new TreeNode(0))->val << endl;
}

