class Solution {
public:
    bool isPalindrome(string s,int i,int j){
        while(i < j){
            if(s[i] != s[j]){
                return false;
            } 
            i++;
            j--;
        }
        return true;
    } 
    bool validPalindrome(string s){
        int left =0,right = s.length()-1;
        int i=0,j=0;
       while(left < right){
        if(s[left] != s[right]){
            //case 1: left remove check:
             i= left,j=right;
             i++;
            if(isPalindrome(s,i,j)) return true;
                //case 2: right remove check :
                i =left, j = right;
                j--;
                break;
        }
        left++;
        right--;
       }
        if(isPalindrome(s,i,j)) return true;
       return false;
    }
};