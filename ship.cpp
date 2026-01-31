#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
class Solution {
public:
    int canDays(vector<int>& weights, int days, int cap) {
        int d=1;
        int load=0;
        for(int i=0;i<weights.size();i++){
            if(load+weights[i]>cap){
                d++;
                load=weights[i];
            }
            else{
                load+=weights[i];
            }
        }
        return d<=days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(),0);
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(canDays(weights,days,mid)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};
int main() {
    Solution sol;
    vector<int> weights = {1,2,3,4,5,6,7,8,9,10};
    int days = 5;
    int result = sol.shipWithinDays(weights, days);
    printf("The least weight capacity of the ship is: %d\n", result);
    return 0;
}