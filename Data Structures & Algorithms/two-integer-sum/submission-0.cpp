class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;
        for (int i=0; i<(int)nums.size(); i++){
            if (seen.find(target-nums[i])==seen.end()) seen.insert({nums[i], i});
            else return {seen[target - nums[i]], i};
        }
        return {};
    }
};
