#include <vector>
#include <iostream>

using namespace std;

class Queue {
private:
    vector<int> q;
public:
    // Push element x to the back of queue.
    void push(int x) {
        q.push_back(x);
    }

    // Removes the element from in front of queue.
    void pop(void) {
        q.erase(q.begin());
    }

    // Get the front element.
    int peek(void) {
        return *(q.begin());
    }

    // Return whether the queue is empty.
    bool empty(void) {
        return (q.size() == 0);
    }
};

int main() {
    Queue q;

    q.push(1);
    q.push(2);
    q.push(3);
    cout << q.peek() << endl;
    q.pop();
    cout << q.peek() << endl;
    q.push(4);
    cout << q.peek() << endl;
    
}
