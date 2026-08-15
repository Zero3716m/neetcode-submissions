class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        map<char, int> mp,mp2;
        for(int i = 0; i < s.size(); i++){
            mp[s[i]]++;
        }
        for(int i = 0; i < t.size(); i++){
            mp2[t[i]]++;
        }
        for(int i = 0; i < s.size(); i++){
            if(mp[s[i]] != mp2[s[i]]){
                return false;
            }
        }
        return true;
    }
};
