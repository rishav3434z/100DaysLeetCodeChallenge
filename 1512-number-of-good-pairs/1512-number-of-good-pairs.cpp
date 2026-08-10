class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int ans=0;
        unordered_map<int,int> mpp;
        for(auto it: nums) {
            ans+=mpp[it]++;
        }
        return ans;

    }
};