class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        vector <int> arr(n,0);
        for(int i = 0; i < nums.size(); i++){
            if(arr[nums[i]]){
                return nums[i];
            }
            arr[nums[i]] = nums[i];
        }
        return -1;
    }
};
