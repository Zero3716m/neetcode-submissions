class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        multimap<float, vector<int>> res;
        vector<vector<int>> ans;
        float dist;
        for(auto i : points){
            dist = std::pow(i[0]*i[0] + i[1]*i[1], 0.5);
            res.insert({dist, {i[0], i[1]}});
        }
        for(auto i : res){
            if(k == 0) break;
            ans.push_back(i.second);
            k--;
        }
        return ans;
    }
};
