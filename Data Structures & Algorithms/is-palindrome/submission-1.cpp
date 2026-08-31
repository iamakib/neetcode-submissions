class Solution {
public:
    bool isPalindrome(string s) {
    
        // code to remove non alphanumeric. collected from google
        s.erase(
            remove_if(s.begin(), s.end(), [](char c) {
                return !isalnum(c);
            }),
            s.end()
        );

        // cout << s;

        int n=s.size();
        int i=0,j=n-1;

        while(j>=i){

            if(tolower(s[i])!=tolower(s[j])){
                return false;
            }

            i++;
            j--;
        }
        // cout<<i<<" "<<j;
        return true;
    }
};
