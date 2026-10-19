class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
         int i=0, k= m,j=0;
         while(i<m+n && k<m+n && j< n){
           if(nums1[i] > nums2[j]){
            nums1[k] = nums1[i];
            nums1[i] = nums2[j];
            j++;
            k++;
           }
           i++;
         }
         while(j<n && k < m+n){
            nums1[k] = nums2[j];
            k++;
            j++;
         }
         sort(nums1.begin(),nums1.end());
    }
};