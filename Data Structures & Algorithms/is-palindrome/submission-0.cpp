class Solution {
public:
    bool isPalindrome(string s) {

        int a = 0;
        int b = s.size() - 1;

        while(a < b){
            s[a] = std::tolower(s[a]);
            s[b] = std::tolower(s[b]);
            if(not std::isalnum(s[a])){
                a += 1;
                continue;
            }
            if(not std::isalnum(s[b])){
                b -= 1;
                continue;
            }
            if(s[a] != s[b]){
                return false;
            }
            a += 1;
            b -= 1;
        }
        return true;
    }
};
