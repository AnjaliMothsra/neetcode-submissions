class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //By bucket sort: TC: O(n)
        int n= nums.size();
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        vector<vector<int>> bucket(n+1);
        for(auto it :  mpp){
            int freq = it.second;
            bucket[freq].push_back(it.first);
        }
        vector<int> ans;
        for(int i = n;i > 0;i--){
            for(int num : bucket[i]){
                ans.push_back(num);
                k--;
            }
            if(k == 0) break;
        }
        return ans;
    }
};
//Brute force: 
//TC: O(m + k) → worst case O(n).
//The important reason of solution becomes O(n²) is repeatedly scanning the whole frequency map to find the next maximum.
/*
1. Create a frequency map
2. Traverse nums:
      increase frequency of each element
3. Create an empty answer list
4. Create an empty set to store already selected elements
5. Repeat k times:
      maxFrequency = 0
      Traverse the frequency map:
          if current frequency > maxFrequency
             AND element is not already selected:
                 
                 update maxFrequency
                 store current element as answer
      Add selected element to set
      Add selected element to answer
6. Return answer
*/