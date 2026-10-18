class Solution {
public: 
    bool validPalindrome(string s){
        for(int i=0;i<s.length();i++){
            string str;
            for(int j=0;j<s.length();j++){
                if(i == j)continue;

                str+= s[j];
            }
            int left =0, right= str.length()-1;
            if(helperFunction(str,left,right)) return true;
        }
        return false;
    } 
      bool helperFunction(string str,int left,int right){
       while(left <= right){
        if(str[left] != str[right]){
            return false;
        }
        left++;
        right--;
       }
       return true;
    }
};