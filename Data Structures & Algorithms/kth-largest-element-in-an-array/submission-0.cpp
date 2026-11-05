class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        multiset<int> st;
        int ans;
        for(auto i : nums){
            st.insert(i);
        }
        for(int i = 1; i < k; i++){
            auto lastElementIt = std::prev(st.end());
            st.erase(lastElementIt);
        }
        for(auto i : st){
            ans = i;
        }
        return ans;
    }
};
