class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int sizetarget = nums.size()/2;
          sort(nums.begin(),nums.end());
          if(nums.size()==1){
            return nums[0];
          }
          int i=0;
          int j =0;
          int count=0;
          while(j<nums.size()){

             if(nums[j]==nums[i]){
                count++;
             }
             if(nums[j]!=nums[i] ){
               
                 if(count<=sizetarget){
                   i= j;
                count=1;
                 }
                 

             }

             j++;
          }
            return nums[i];
        
    }
};