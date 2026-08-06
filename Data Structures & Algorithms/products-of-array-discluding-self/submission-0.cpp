class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod=1;
        for(int i=0;i<nums.size();i++){
            prod=prod*nums[i];
        }
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            ans[i]=(prod/nums[i]);
        }
        return ans;
        
    }
};
