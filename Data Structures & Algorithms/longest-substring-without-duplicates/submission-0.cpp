class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int> window;
        int left=0;
        int maxLen =0;
        for(int right=0;right<s.length();right++){
            while(window.find(s[right]) != window.end()){
                window.erase(s[left]);
                left++;
            }
            window.insert(s[right]);
            maxLen = max(maxLen, right-left+1);
        }
        return maxLen;
    }
};
