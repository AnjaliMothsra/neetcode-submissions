class Solution {
public:
    bool isPalindrome(string s) {
        int i=0, j = s.length()-1;
        while(i<j){
            if(!isalnum(s[i])){// isalnum(ch) → checks whether ch is a letter (A-Z, a-z) or digit (0-9); otherwise ignore it.
                i++;
            }else if (!isalnum(s[j])){
                j--;
            }else{
                if(tolower(s[i]) != tolower(s[j])){
                    return false;
                }
                i++;
                j--;
            }
        }
        return true;
    }
};
