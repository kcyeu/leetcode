#include <iostream>

using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == NULL)
            return NULL;

        if (head->next == NULL)
            return NULL;

        ListNode *first = head;
        ListNode *rest = head->next;

        this->reverseList(rest);
        first->next->next = first;
        first->next = NULL;
        head = rest;
    }

    void showList(ListNode* head) {
        if (head != NULL) {
            cout << head->val << endl;
            return showList(head->next);
        }
    }
};

int main() {
    ListNode *head = new ListNode(-1);
    ListNode *current = head;

    for (int i = 0; i < 5; i++) {
        current->next = new ListNode(i);
        current = current->next;
    }

    Solution sol;

    sol.showList(head);

    sol.reverseList(head);
    sol.showList(head);
}
