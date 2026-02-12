#include <iostream>
#include <stack>
#include <vector>
using namespace std;
class Solution {
  public:
    vector<int> prevSmaller(vector<int>& arr) {
        //  code here
        stack<int> st;
        vector<int> result;
        for(int i=0;i<arr.size();i++){
            while(!st.empty() && arr[i]<=st.top()){
                st.pop();
            }
        if(st.empty()){
            result.push_back(-1);
        }
        else{
            result.push_back(st.top());
        }
        st.push(arr[i]);
        }
        return result;
    }
};
int main() {
    Solution sol;
    vector<int> arr = {4, 5, 2, 10, 8};
    vector<int> result = sol.prevSmaller(arr);
    for(int val : result) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}