#include <iostream>
#include <map>

using namespace std;

class Solution {
private:
    map<char, int> storage;    
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        if (s == t) return true;
        
        for (string::iterator pin = s.begin(); pin != s.end(); pin++){
            storage[*pin]++;
        }

        for (string::iterator pin = t.begin(); pin != t.end(); pin++){
            map<char, int>::iterator it = this->storage.find(*pin);
                
            if (it == storage.end())
                return false;

            it->second--;
            if (it->second == 0)
                storage.erase(it);

        }
        return true;
    }

};

int main() {
    Solution sol;

    if (sol.isAnagram("ab", "ba")) {
        cout << "IS anagram" << endl;
    } else {
        cout << "NOT anagram" << endl;
    }
}
