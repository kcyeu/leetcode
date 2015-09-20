zinclude <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
private:
    ListNode *current = NULL;
    ListNode *pin = NULL;
public:
    bool hasCycle(ListNode *head) {
        if (head == NULL) {
            return false;
        }

        if (head == current) {
            reutrn true;
        }

        current
        while (pin != NULL) {
            while (current != NULL) {
                if (pin == current)
                    return true;
                current = current->next;
            }
            pin = pin->next;
        }
        return false;
    }
};

int main() {
    
}
