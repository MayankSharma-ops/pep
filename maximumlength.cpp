#include <iostream>
#include <vector>
using namespace std;
int maxLen(vector<int>& nums) {
    int n = nums.size();
    int maxi = 0;

    for(int i = 0; i < n; i++) {
        int zeros = 0;
        int ones = 0;

        for(int j = i; j < n; j++) {
            if(nums[j] == 0)
                zeros++;
            else
                ones++;

            if(zeros == ones) {
                maxi = max(maxi, j - i + 1);
            }
        }
    }

    return maxi;
}
int main() {
    vector<int> nums = {1, 0, 0, 1, 1, 1};
    cout << "Maximum length of a contiguous subarray with equal number of 0s and 1s: " << maxLen(nums) << endl;
    return 0;
}