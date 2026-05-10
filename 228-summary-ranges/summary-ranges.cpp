class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int j =1;
        int  i =0;
        if (nums.empty()) return {};
        string s;
         vector<string> ans;
        if(nums.size()==1){
            s = to_string(nums[i]);
            ans.push_back(s);
            return ans;
        }
       
       while(j<nums.size()){
        if(nums[j] != nums[j-1] + 1  ){
            if(j-1==i){
                s = to_string(nums[i]);
                  ans.push_back(s);
            }
            else{
            s = to_string(nums[i])+ "->"+ to_string( nums[j-1]);
             ans.push_back(s);
            
            }
             i=j;
        }

        j++;
       }
       if(nums[j-1] != nums[j-2] + 1 ){
        s = to_string(nums[j-1]);
   ans.push_back(s);
       }
       else{
         s = to_string(nums[i])+ "->"+ to_string( nums[j-1]);
             ans.push_back(s);
       }
       return ans;
      }
};