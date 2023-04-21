class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> freq;
        if(s.length() != t.length())
        return false;
        for(int i=0;i<s.length();i++){
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