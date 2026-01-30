#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int i,j;
        vector<vector<int>> result;
        int t=1<<candidates.size();
        for(i=0;i<t;i++){
            vector<int> ans;
            int sum=0;
            for(j=0;j<candidates.size();j++){
                if(i & (1<<j)){
                    ans.push_back(candidates[j]);
                    sum+=candidates[j];
                }
            }
            if(sum==target){
                result.push_back(ans);
            }
        }
        return result;
    }
};


int main() {
    Solution sol;
    vector<int> candidates = {2, 3, 4, 6, 7};
    int target = 7;
    vector<vector<int>> combinations = sol.combinationSum(candidates, target);
    for (const auto& combination : combinations) {
        for (int num : combination) {
            printf("%d ", num);
        }
        printf("\n");
    }
    return 0;
}