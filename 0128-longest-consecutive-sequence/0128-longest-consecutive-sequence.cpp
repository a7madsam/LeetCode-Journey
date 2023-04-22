class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> m(nums.begin(),nums.end());
        int ans= 0;
        for(int j=0; j<nums.size(); j++) {
            if(m.find(nums[j]-1) != m.end())
                continue;
            int len = 0;
            while(m.find(nums[j]+len)!=m.end())
                len++;
            ans = max(ans,len);
        }
        return ans;
    }
};

//Hint: the beginning of the sequences does not have a left neighbor 

