class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
             
            if(m.find(target-nums[i]) != m.end() && i!=m[target-nums[i]]){
                if(m[target-nums[i]]!=-1 && m[nums[i]]!=-1 ){
                ans.push_back(i);
                ans.push_back(m[target-nums[i]]);
                m[target-nums[i]]=-1;
                m[nums[i]]=-1;
                }

            }
        }
        return ans;
        
        
    }
};
