class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> sets;
        int n = nums.size();
        for(int i=0;i<n;i++){
            sets.insert(nums[i]);
        }

        int count=0;
        int result=0;
        auto now = sets.begin();
        auto prev = now;
        now++;
        
        if(n<2){
            return n;
        }
        else{
        while(now!=sets.end()){
            if(*prev + 1 == *now){
                count++;
                result=max(count,result);
            }
            else{
                // result=max(result,count);
                count=0;
            }

            prev = now;
            now++;
        }
        }

        // for(auto it:sets){
        //     cout<<it<<endl;
        // }

        return result + 1;
    }
};
