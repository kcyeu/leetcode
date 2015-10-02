#include <iostream>
#include <vector>
#include <set>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() == 0 || prices.size() == 1) return 0;

        int profit = 0;

        vector<int>::iterator it = prices.begin();
        int anchor = *it;
        int tmp = 0;
        it++;

        for (; it != prices.end(); it++) {
            if (tmp < *it - anchor) {
                tmp = *it - anchor;
            } else {
                profit += tmp;
                tmp = 0;

                anchor = *it;
            }
        }
        profit += tmp;
        return profit;        
    }
};

int main() {
    std::vector<int> myvector;
    myvector.push_back(1);
    myvector.push_back(5);
    myvector.push_back(4);
    myvector.push_back(10);

    Solution sol;

    cout << sol.maxProfit(myvector);
}
