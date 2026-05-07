class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxElement = nums[0];
        int currentMax = nums[0];

        for(int i=1;i<nums.size();i++){
            currentMax = max(currentMax+nums[i],nums[i]);
            maxElement = max(currentMax,maxElement);
        }
        return maxElement;
    }
};