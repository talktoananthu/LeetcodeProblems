class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
          int i =0;
          int j = numbers.size()-1;
          vector<int> ans;
          while(i<j){
            int pairSum = numbers.at(i) + numbers.at(j);
            if(pairSum==target){
                ans.push_back(i+1);
                ans.push_back(j+1);
              break;
            }
            else if(pairSum>target){
                j--;
            }
             else if(pairSum<target){
                i++;
            }
          } 
           return ans;
    }
};