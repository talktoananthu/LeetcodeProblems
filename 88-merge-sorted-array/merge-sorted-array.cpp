class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> nums3(n+m);
       for(int i =0;i<m;i++){
        nums3[i] = nums1[i];
       }
       for(int i=m;i<n+m;i++){
         nums3[i] = nums2[i-m];
       }

       sort(nums3.begin(),nums3.end());
       nums1= nums3;
         for(int i=0;i<n+m;i++){
        nums1[i] = nums3[i] ;
       }
    }
};