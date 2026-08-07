class Solution {
public:
    int maximumGap(vector<int>& nums) {
       if (nums.size() < 2) return 0;
        int maxGap = 0;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 1; i++) {
            int newDiff = nums[i + 1] - nums[i];
            if (newDiff > maxGap)
                maxGap = newDiff;
        }
        return maxGap;  
    }
};