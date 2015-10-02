#include <iostream>
#include <vector>
#include <set>

using namespace std;

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        set<int> iSet;

        for (vector<int>::iterator it = nums.begin(); it != nums.end(); ++it) {
            if (iSet.find(*it) == iSet.end()) {
                iSet.insert(*it);
            } else {
                return true;
            }
        }
        return false;
    }
};

int main() {
    std::vector<int> myvector;
    for (int i=1; i<=150; i++) myvector.push_back(i);
    //myvector.push_back(150);

    Solution obj;

    if (obj.containsDuplicate(myvector)) {
        cout << "TRUE" << endl;
    } else {
        cout << "FALSE" << endl;
    }
}
