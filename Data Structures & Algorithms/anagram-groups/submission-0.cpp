class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> hashMap;

        int i=0;
        for(string str:strs){
            sort(str.begin(),str.end());
            hashMap[str].push_back(strs[i]);
            i++;
        }

        vector<vector<string>> result;

        for(auto it:hashMap){
            result.push_back(it.second);
        }

        return result;
    }
};
