class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int sizetarget = nums.size()/2;
          sort(nums.begin(),nums.end());
          if(nums.size()==1){
            return nums[0];
          }
          int frequency = 0;
          int candidateKey =0;
          for(int i=0;i<nums.size();i++){
            if(frequency ==0){
                candidateKey = nums[i];
            }
            if(candidateKey ==nums[i]){
                frequency++;
            }
            else{
                 frequency--;
            }
          }
          return candidateKey;
}
}
;