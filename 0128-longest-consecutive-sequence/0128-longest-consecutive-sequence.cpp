class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(!nums.size())
            return 0;
        unordered_map<int,int> m;
        for(int i=0; i<nums.size(); i++) {
            m[nums[i]] = i;
        }
        int mx= 0;
        for(int j=0; j<nums.size(); j++) {
            if(m.find(nums[j]-1) != m.end()) {
                continue;
            }
            int cnt = 0;
            for(int i=nums[j];; i++) {
                if(m.find(i)!=m.end()) {
                    cnt++;
                } else {
                    break;
                }
            }
            if(cnt>mx) {
                mx=cnt;
            }

        }

        return mx;
    }
};

