class Solution {
public:
    vector<int> twoSum(vector<int>& n, int t) {
        int l=0,r=n.size()-1;
        while(l<r) {
            int cur = n[l]+n[r];
            if(cur>t) {
                r--;
            } else if(cur<t) {
                l++;
            } else {
                return {l+1,r+1};
            }
        }
        return {-1,-1};
    }
};
