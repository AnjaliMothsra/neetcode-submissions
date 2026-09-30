class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>, vector<string>> mp;
        for(string &str : strs){
            vector<int> key(26,0);
            for(char ch : str){
                key[ch - 'a']++;
            }
            mp[key].push_back(str);
        }
        vector<vector<string>> ans;
        for(auto it : mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};












//Brute force:
/*
 bool helperCheckAnagrams(string & word1, string & word2){
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;
        for(char ch : word1){
            mp1[ch]++;
        }
        for(char ch : word2){
            mp2[ch]++;
        }
        if(mp1 == mp2) return true;
        return false;
    }

    vector<vector<string>> temp;
        unordered_set<int> used;
        for(int i=0;i<strs.size();i++){
            string word1 = strs[i];
            vector<string> group;
            if(used.find(i) == used.end()){  //TC : O(n^2 * k)
                used.insert(i);
                group.push_back(word1);
            }
            for(int j=i+1;j<strs.size();j++){
                string word2 = strs[j];
                if(helperCheckAnagrams(word1,word2) && used.find(j) == used.end() ){
                    used.insert(j);
                    group.push_back(word2);
                }
            }
            if(!group.empty())
            temp.push_back(group);
        }
         sort(temp.begin(),temp.end());
        return temp;
        */