class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
      for(int i = 0; i < nums.size(); i++){
        for(int j = i+1; j < nums.size(); j++){
            if(nums[i] == nums[j]){
                return true;
            }
        }
      }
      return false;
      /**
      1. need 1 for loop for i that sees one number
      2. need a 2nd for loop for j to compare to i
      3. need an if statement for if i == j to return true else return false
      **/  
    }
};