class Solution {
public:
    void add(vector<int> nums, vector<vector<int>>& arr){
        if(nums.size() == 0) return;
        for(auto i: arr){
            if(i == nums) return;
        }
        arr.push_back(nums);
        vector<int> temp;
        for(int i = 0; i < nums.size(); i++){
            temp = nums;
            temp.erase(temp.begin() + i);
            add(temp, arr);
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> arr = {{}};
        vector<vector<int>> arr2 = {{}};
        add(nums, arr);
        for(auto i: arr){
            for(int j = 0; j < arr2.size(); j++){

            }
        }
        return arr;
    }
};
