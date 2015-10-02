#include <iostream>
#include <stack>

using namespace std;

class Solution {
private:
stack<char> bin;
public:
    bool isValid(string s) {
        for (string::iterator it = s.begin(); it != s.end(); it++){
            switch (*it) {
                case '(':
                case '[':
                case '{':
                    bin.push(*it);
                    break;
                case ')':
                    if (! match('(')) return false;
                    break;
                case ']':
                    if (! match('[')) return false;
                    break;
                case '}':
                    if (! match('{')) return false;
                    break;
                default:
                    break;
            }
        }
        return bin.empty();
    }

    bool match(char right) {
        if (bin.empty()) return false;
        if (bin.top() != right) return false;
        bin.pop(); 
        return true;
    }
};


int main() {
    Solution sol;

    if (sol.isValid("([{}])")) {
        cout << "IS valid" << endl;
    } else {
        cout << "NOT valid" << endl;
    }
}
