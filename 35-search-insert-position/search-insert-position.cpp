class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
         int last = nums.size()-1;
         int first =  0;
         int mid = (nums.size()+ first)/2;
         while(first <=last){
              if(nums[mid]==target){
                return mid;
              }
              else if(target < nums[mid]){
                last  = mid - 1;
              }
              else{
                   first  = mid +1;
              }
              mid = (first + last)/2;
         }
            return first; 
    }
};