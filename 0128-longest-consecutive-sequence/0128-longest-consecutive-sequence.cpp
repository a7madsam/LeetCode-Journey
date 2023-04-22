class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(!nums.size())
            return 0;
        unordered_map<int,int> m;
        unordered_map<int,bool> visited;
        for(int i=0; i<nums.size(); i++) {
            m[nums[i]] = i;
        }
        int mx= 0;
        for(int j=0; j<nums.size(); j++) {
            if(visited.find(m[nums[j]]) != visited.end() || m.find(nums[j]-1) != m.end()) {
                continue;
            }
            int begin = nums[j];
            int cnt = 0;
            for(int i=begin;; i++) {
                if(m.find(i)!=m.end()) {
                    cnt++;
                    visited[m[i]] = true;
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

