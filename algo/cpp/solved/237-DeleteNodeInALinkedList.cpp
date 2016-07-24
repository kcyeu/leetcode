#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    void deleteNode(ListNode* node) {

        if (node->next != NULL) {
            ListNode *next = node->next;
            node->val = node->next->val;
            node->next = node->next->next;
//            delete(origin);
        }    
    }

    void traverseNode(ListNode* node) {
        if (node != NULL) {
            cout << node->val << endl;

            return this->traverseNode(node->next);
        }
    }
};

int main() {
    ListNode *head = new ListNode(-1);
    ListNode *current = head;
    ListNode *trash = NULL;

    for (int i = 0; i < 4; i++) {
        ListNode *tmp = new ListNode(i);
        current->next = tmp;
        current = tmp;

        if (i == 3) {
            trash = tmp;
        }
    }

    Solution sol;
    sol.traverseNode(head);
cout << head->val << endl;
    sol.deleteNode(head);
cout << head->val << endl;
    sol.traverseNode(head);

}

