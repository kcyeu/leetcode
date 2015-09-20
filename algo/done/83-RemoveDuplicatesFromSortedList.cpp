#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL) return NULL;

        ListNode* current = head;

        while (current->next != NULL) {
            if (current->val == current->next->val) {
                current->next = current->next->next;
            } else {
                current = current->next;
            }
        }    
        return head;
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

        ListNode *tmp2 = new ListNode(i);
        current->next = tmp2;
        current = tmp2;

    }

    Solution sol;
    sol.traverseNode(head);
    sol.deleteDuplicates(head);
    sol.traverseNode(head);

}

