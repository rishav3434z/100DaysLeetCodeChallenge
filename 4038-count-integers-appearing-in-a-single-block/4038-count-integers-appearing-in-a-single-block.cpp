class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n=nums.size();
        
        unordered_map<int,int> mp;
        mp[nums[0]]=1;

        for(int i=1;i<n;i++) {
            if(nums[i]!=nums[i-1]) mp[nums[i]]++;
        }
        
        int cnt=0;
        for(auto &p: mp) {
            if(p.second==1) cnt++;
        }
        return cnt;
    }
};