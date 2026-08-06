class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,j;
        
        for(int i=0;i<nums.size()-1;i++){
            int t=target-nums[i];
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]==t){
                    return {i,j};
                }
            }
        }
        return {};
    }
};
