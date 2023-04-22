class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int sz = nums.size();
        unordered_map<int,bool> m;
        for(int i=0; i<sz; i++) {
            m[nums[i]] = true;
        }
        int ans= 0;
        for(int j=0; j<sz; j++) {
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

