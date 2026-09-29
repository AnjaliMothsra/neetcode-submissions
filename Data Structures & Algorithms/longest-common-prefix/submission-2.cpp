class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       string ans = "";
       for(int i=0;i<strs[0].size();i++){
        char ch1 = strs[0][i];
        bool match = true;
        for(int j=1;j<strs.size();j++){
            char ch2 = strs[j][i];
            if(ch1 != ch2){
                return ans;
            }
        }
        if(match == true){
            ans += ch1;
        }
       }
       return ans;
    }
};