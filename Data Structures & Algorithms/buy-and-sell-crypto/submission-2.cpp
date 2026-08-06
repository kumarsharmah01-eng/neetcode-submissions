class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minval=prices[0];
        int max_diff=0;
        for(int i=-i<prices.size();i++){
            minval=min(minval,prices[i]);
            max_diff=max(max_diff,prices[i]-minval)
        }
        return max_diff;
    }
};
