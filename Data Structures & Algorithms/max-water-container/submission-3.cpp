class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0;
        int h=heights.size()-1;
        int ans=0;
        while(l<h){
            int width=h-l;
            int min_h=min(heights[l],heights[h]);
            ans=max(ans,width*min_h);
            if(heights[l]<heights[h]){
                l++;
            }else{
                h--;
            }
        }
        return ans;
    }
};