class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>exist;
        for(int i=0;i<nums.size();i++){
            if(exist.find(nums[i])!=exist.end()){
               return {i,exist[nums[i]]}; 
            }else {
                exist[target-nums[i]] = i;
            }
        }
        return {-1,-1};
    }
        
        
    
};
