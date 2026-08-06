class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxp=INT_MIN;
        int low=0;
        int high=prices.size()-1;
        while(low<high){
            maxp=max(maxp,prices[high]-prices[low]);
            low++;
            high--;
        }
        return maxp;
    }
};
