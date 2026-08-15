class Solution {
public:
    bool isValid(string s) {
        unordered_map <string, string> bif = {
            {"(", ")"},
            {"{", "}"},
            {"[", "]"}
        };
        vector <string> st;
        string a;
        for(char i : s){
            a = i;
            bool found = false;
            for(const auto& b : bif){
                if(a == b.first){
                    st.push_back(a);
                    found = true;
                    break;
                }
                else if(a == b.second){
                    if(st.size() > 0 && st[st.size() - 1] == b.first){
                        st.pop_back();
                        found = true;
                        break;
                    }else return false;
                }
            }
        }
        if(st.size() > 0){
            return false;
        }else return true;
    }
};