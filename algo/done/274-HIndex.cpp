#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int hIndex(vector<int>& citations) {
        int size = citations.size();

        if (size == 0) return 0;

        sort(citations.begin(), citations.end());
        reverse(citations.begin(), citations.end());

        int tmp[size];

        for (int i = 0; i < size; i++) {
            tmp[i] = min(i + 1, citations[i]);
        }

        return *max_element(tmp, tmp + size);
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
