#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int hIndex(vector<int>& citations) {
        int size = citations.size();

        sort(citations.begin(), citations.end());
//        reverse(citations.begin(), citations.end());
        int h = 0;

        for (int i = 0; i < size; i++) {
            if (citations[i] >= size - i) return size - i;
        }

        return 0;
    }
};


int main() {
    Solution sol;
    vector<int> vec;

    vec.push_back(3);
    vec.push_back(0);
    vec.push_back(6);
    vec.push_back(1);
    vec.push_back(5);

    cout << sol.hIndex(vec) << endl;
}
