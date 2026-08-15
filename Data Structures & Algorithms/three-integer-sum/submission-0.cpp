class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> a;
        vector<int> arr;
        for(int i = 0; i < nums.size() - 2; i++){
            for(int j = i + 1; j < nums.size() - 1; j++){
                for(int k = j + 1; k < nums.size(); k++){
                    if(nums[i] + nums[j] + nums[k] == 0){
                        arr.push_back(nums[i]);
                        arr.push_back(nums[j]);
                        arr.push_back(nums[k]);
                        sort(arr.begin(), arr.end());
                        for(int l = 0; l < a.size(); l++){
                            if(arr == a[l]){
                                arr.pop_back();
                                arr.pop_back();
                                arr.pop_back();
                                break;
                            }
                        }
                        if(arr.size() == 3){
                            a.push_back(arr);
                            arr.pop_back();
                            arr.pop_back();
                            arr.pop_back();
                        }
                    }
                }
            }
        }
        return a;
    }
};
