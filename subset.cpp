#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end()); 
        set<vector<int>> result;
        int t = 1 << nums.size();
        
        for (int i = 0; i < t; i++) {
            vector<int> ans; 
            for (int j = 0; j < nums.size(); j++) {
                if (i & (1 << j)) {
                    ans.push_back(nums[j]);
                }
            }
            result.insert(ans);
        }
        return vector<vector<int>>(result.begin(), result.end());
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 2};
    vector<vector<int>> subsets = sol.subsetsWithDup(nums);
    cout << "Subsets with duplicates removed:\n";
    for (const auto& subset : subsets) {
        cout << "[ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "]\n";
    }

    return 0;
}
