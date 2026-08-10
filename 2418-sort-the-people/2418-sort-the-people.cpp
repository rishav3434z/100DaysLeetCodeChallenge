class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        unordered_map<int,string> mpp;
        int n=heights.size();
        int m=names.size();

        for(int i=0;i<n;i++) {
            mpp[heights[i]]=names[i];
        }
        sort(heights.begin(),heights.end());
        vector<string> sorted_names(m);
        for(int i=m-1;i>=0;i--) {
            sorted_names[m-i-1]=mpp[heights[i]];
        }
        return sorted_names;
    }
};