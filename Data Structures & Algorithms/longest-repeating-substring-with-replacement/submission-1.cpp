class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> window(26,0);
        int maxLen =0, maxFreq=0;
        int left =0;
        for(int right=0;right<s.length();right++){
            window[s[right] - 'A']++;
            maxFreq = max(maxFreq, window[s[right] - 'A']);
            while((right-left+1) - maxFreq > k){
                window[s[left] - 'A']--;
                left++;
            }
            maxLen = max(maxLen, right-left+1);
        }
        return maxLen;
    }
};
/*
Explanation :->
Hum bas minimum replacements calculate kar rahe hain.
Our condition:
{Replacements} = {Window Size} - {Max Frequency}
- Agar replacements <= k → Window valid hai, expand kar sakte hain.
- Agar replacements > k → Window invalid hai, left++ karke shrink karni hai.

Hum window ko tabhi shrink karte hain jab required replacements k se exceed kar jaayein.
Actual string mein koi character replace nahi hota.
*/