class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product=1;
        vector<int> prefix;
        vector<int> suffix;
        vector<int> result;

        for(int i=0;i<nums.size();i++){
            prefix.push_back(product);
            product = product*nums[i];
        }

        product=1;
        for(int i=nums.size()-1;i>=0;i--){
            suffix.push_back(product);
            product = product*nums[i];
        }

        for(int i=0;i<nums.size();i++){
            result.push_back(prefix[i]*suffix[nums.size()-i-1]);
        }

        return result;
    }
};
