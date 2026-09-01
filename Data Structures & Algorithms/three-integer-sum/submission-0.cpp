class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        set<vector<int>> result;
        sort(nums.begin(),nums.end());

        int n=nums.size();
        int start=0;

        while(start<n-2){
            int i=start+1,j=n-1;
            while(i<j){
                if(nums[start] + nums[i] + nums[j] < 0){
                    i++;
                }
                else if(nums[start] + nums[i] + nums[j]>0){
                    j--;
                }
                else{
                    result.insert({nums[start],nums[i],nums[j]});
                    i++;
                    j--;
                }
            }
            start++;
        }
        return vector<vector<int>>(result.begin(),result.end());
    }
};
