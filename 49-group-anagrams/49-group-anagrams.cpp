class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if(strs.size()==1) return {{strs[0]}};
        unordered_map<string, vector<string>> m;
        for(int i=0;i<strs.size();i++){
            string temp= strs[i];
            sort(temp.begin(),temp.end());
            m[temp].push_back(strs[i]);
        }
        vector<vector<string>> ans(m.size());
        int i=0;
        for(auto it=m.begin();it!=m.end();it++){
            ans[i] = it->second;
            i++;
        }
        return ans;
    }
};