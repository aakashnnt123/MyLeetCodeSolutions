class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mpp;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int requireNum = target - nums[i];

            if (mpp.find(requireNum) != mpp.end())
                return {mpp[requireNum], i};

            else
                mpp[nums[i]] = i;
        }

        return {-1, -1};
    }
};