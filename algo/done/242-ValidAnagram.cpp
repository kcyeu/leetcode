#include <iostream>
#include <map>

using namespace std;

class Solution {
private:
    int f[26];
public:
    Solution() {
        for (int i = 0; i < 26; i++) {
            f[i] = 0;
        }
    }

    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        if (s == t) return true;
        
        for (string::iterator pin = s.begin(); pin != s.end(); pin++){
            f[*pin - 97]++;
        }

        for (string::iterator pin = t.begin(); pin != t.end(); pin++){
            if (f[*pin - 97] == 0)
                return false;

            f[*pin - 97]--;
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
