
#include<bits/stdc++.h>
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,-1);
        stack<int> s;
        
        for(int i=2*(n-1); i>=0; i--){
            while(!s.empty() && s.top() <= nums[i%n]){   
                s.pop();
            }
            if(i<n){
                if(!s.empty()){
                   // ans.push_back(s.top());
                   ans[i] = s.top();
                }
            }
            s.push(nums[i%n]);
        }
        return ans;
    }
};
best = O(1)
time best = O(n)
time worst = O(n)
