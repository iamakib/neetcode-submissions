class Solution {
public:
    int maxArea(vector<int>& heights) {

        int n = heights.size();
        int i=0,j=n-1;
        
        int result=0,mx=0;
        while(i<j){
            mx = (j-i)*min(heights[i],heights[j]);
            result = max(result,mx);

            if(heights[i]<heights[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return result;
    }
};
