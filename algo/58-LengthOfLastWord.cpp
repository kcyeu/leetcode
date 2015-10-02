#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        char *str = s.str();

        if (strlen(str) == 0) return 0;

        char *token, *next;
        token = strtok(str, " ");
        int len = 0, max = strlen(token);
 
        while ((token != NULL)) {
            if (token != NULL) {
                token = strtok(NULL, " ");
                len = strlen(token);
                if (len > max) max = len;
            }
        }
    }
};

int main() {
    Solution obj;
    string str = "one three evlkdsjfldsf";

    cout << obj.lengthOfLastWord(str) << endl;

    return 0;
}
