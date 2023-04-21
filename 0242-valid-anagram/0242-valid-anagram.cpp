class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> freq;
        int slen = s.length();
        int tlen = t.length();

        if(slen!=tlen)
        return false;
        for(int i=0;i<slen;i++){
            freq[s[i]-'a']++;
            freq[t[i]-'a']--;
        }
        for(int i=0;i<26;i++){
            if(freq[i]!=0)
            return false;
        }
        
        return true;
    }

};