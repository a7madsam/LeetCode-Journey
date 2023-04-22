class Solution {
public:
    vector<int> twoSum(vector<int>& n, int t) {
        for(int i=0; i<n.size(); i++) {
            int low = 0;
            int high = n.size() - 1;
            int mid;
            int idx = -1;
            int tt = t-n[i];
            while (low <= high) {
                mid = low + (high - low) / 2;
                if (n[mid] == tt) {
                    if (mid == i) {
                        if (mid-1 >= 0 && n[mid-1] == tt) {
                            high = mid - 2;
                        } else {
                            low = mid + 1;
                        }
                    } else {
                        idx = mid;
                        break;
                    }
                } else if (n[mid] < tt) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
            if(idx !=-1) {
                if(n[i] + n[idx] == t) {
                    return {i+1,idx+1};
                }
            }
        }
        return {-1,-1};
    }
};
