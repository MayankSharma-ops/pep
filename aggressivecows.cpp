#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
    bool canPlace(vector<int>& stalls, int k, int dist) {
        int cows = 1;
        int lastPos = stalls[0];

        for (int i = 1; i < stalls.size(); i++) {
            if (stalls[i] - lastPos >= dist) {
                cows++;
                lastPos = stalls[i];
            }
            if (cows == k) return true;
        }
        return false;
    }
    int aggressiveCows(vector<int> &stalls, int k) {
        sort(stalls.begin(), stalls.end());

        int low = 1;
        int high = stalls.back() - stalls.front();
        int ans = 0;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (canPlace(stalls, k, mid)) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> stalls = {1, 2, 8, 4, 9};
    int k = 3;
    int result = sol.aggressiveCows(stalls, k);
    printf("The largest minimum distance is: %d\n", result);
    return 0;
}