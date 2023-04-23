class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> s;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
           int num = nums[i];
            int l=i+1,r=nums.size()-1;
            while(l<r){
                if(nums[l]+nums[r]+num == 0){
                    s.insert({nums[l],nums[r],num});
                    l++;
                }else if(nums[l]+nums[r]+num > 0){
                    r--;
                }else {
                    l++;
                }
            }
        }
        vector<vector<int>> ans(s.begin(),s.end());
        return ans;
    }
};