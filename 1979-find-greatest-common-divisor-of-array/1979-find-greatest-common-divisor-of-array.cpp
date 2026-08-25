class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int i=0;
        int first=nums[i],last=nums[n-1];
        int ans=1;
        for(int i=1;i<=first;i++) {
            if(first%i==0 && last%i==0 && i>ans) ans=i;
        }
        return ans;
    }
};