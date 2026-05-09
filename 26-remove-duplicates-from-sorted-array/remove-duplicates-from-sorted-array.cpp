class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;

        int i = 0;

        for(int j = 1; j < nums.size(); j++){
            if(nums[j] != nums[i]){
                i++;
                nums[i] = nums[j];
            }
        }

        return i + 1;
    }
    //here actually 2 pointer approach is used elements are removed but the duplicates elements are being pushed to front then returning the last pushed elements ith index value +1
};