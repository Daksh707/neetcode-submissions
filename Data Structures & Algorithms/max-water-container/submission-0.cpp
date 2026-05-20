class Solution {
public:
    int maxArea(vector<int>& heights) {
        int lp=0,rp=heights.size()-1;int maxA=0;
        while(lp<=rp){
            int w=rp-lp;
            int ht=min(heights[lp],heights[rp]);
            int area=w*ht;
            maxA=max(maxA,area);
            if(heights[lp]<heights[rp]) lp++;
            else rp--;
        }
        return maxA;
    }
};
