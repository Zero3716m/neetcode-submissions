class Solution {
public:
    int search(vector<int>& nums, int target) {
        int a;
        int b = 0;
        while(nums.size() > 1){
            cout << "Hello, World!" << endl;
            a = nums.size() / 2;
            cout << a << endl;
            if(nums[a] == target){
                b += a;
                return b;
            }
            if(nums[a] > target){
                nums.erase(nums.begin() + a, nums.begin() + nums.size());
                for(int k : nums) cout << k << "a" << endl;
            }else{
                nums.erase(nums.begin(), nums.begin() + a);
                for(int k : nums) cout << k << "b" << endl;
                b += a;
            }
        }
        if(nums[0] == target) return 0;
        return -1;
    }
};
