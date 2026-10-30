class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       sort(strs.begin(),strs.end());
       string ans = "";
       int n= strs.size();
       string fst = strs.front();
       string lst = strs.back();   //TC: O(n log n)

       int mnLn = min(fst.size(),lst.size());
       
       for(int i=0;i<mnLn;i++){
        if(fst[i] != lst[i]) break;

        ans += fst[i];
       }
    //    for(int i=0;i<strs[0].size();i++){
    //     int j=1;                     // TC: (n*m)
    //     char ch = strs[0][i]; 
    //     while(j < strs.size()) { 
    //         if(ch != strs[j][i])return ans;
    //         j++;
    //     }
    //         ans += ch1;
    //    }
       return ans;
    }
};