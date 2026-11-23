class Solution {
public:
    string encode(vector<string>& strs) {
        string enStr;
        for(string str : strs){
            enStr += to_string(str.size());
            enStr += '#';
            for(char ch : str){
                enStr += ch;
            }
        }
        return enStr;
    }

    vector<string> decode(string s) {
        vector<string> decStrs;
        int i=0;
        while(i < s.length()){
            int len =0;
            while(s[i] != '#'){
                len = len*10 + (s[i] - '0');
                i++;
            }
            i++;
            string word="" ;
            for(int j=0;j<len;j++){
                word += s[i];
                i++;
            }
            decStrs.push_back(word);    
        }
        return decStrs;
    }
};
//TC: O(n)
