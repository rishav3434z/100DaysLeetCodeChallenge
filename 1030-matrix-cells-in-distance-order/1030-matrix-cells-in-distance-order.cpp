class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        vector<vector<int>> ans;
        for(int i=0;i<rows;i++) {
            for(int j=0;j<cols;j++) {
                ans.push_back({i,j});
            }

        }
        for(int i=0;i<ans.size();i++) {
            for(int j=i+1;j<ans.size();j++) {
                int d1=abs(ans[i][0]-rCenter)+abs(ans[i][1]-cCenter);
                int d2=abs(ans[j][0]-rCenter)+abs(ans[j][1]-cCenter);
                if(d1>d2) swap(ans[i],ans[j]);
            }
        }
        return ans;

    }
};