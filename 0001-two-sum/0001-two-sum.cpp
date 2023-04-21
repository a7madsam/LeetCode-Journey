class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        unordered_set<int> temp;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            if(m.find(target-nums[i]) != m.end() && i!=m[target-nums[i]]){
                temp.insert(i);
                temp.insert(m[target-nums[i]]);
            }
        }
        vector<int> ans(temp.begin(),temp.end());
        return ans;
        
        
    }
};
