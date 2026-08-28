class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> hashMap;
        vector<pair<int,int>> freq;
        vector<int> result;

        for(int i=0;i<nums.size();i++){
            hashMap[nums[i]]++;
        }

        for(auto it:hashMap){
            freq.push_back({it.first,it.second});
        }
        sort(freq.begin(), freq.end(), [](const auto& a, const auto& b) {
            return a.second > b.second;
        });

        for(int i=0;i<k;i++){
            result.push_back(freq[i].first);
        }

        return result;
    }
};
