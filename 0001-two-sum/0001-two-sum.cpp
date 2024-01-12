class Solution {
public:
    
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result(2, 0);
        int num_size = nums.size();

        for (int i = 0; i < num_size; i++) {
            for (int k = i + 1; k < num_size; k++) {
                if (nums[i] + nums[k] == target) {
                    result[0] = i;
                    result[1] = k;
                    return result;
                }
            }
        }

        return result;
    }

};