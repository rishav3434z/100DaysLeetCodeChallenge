class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) {
        int n=points.size();

        int i=0;
        int x1=points[i][0];
        int y1=points[i][1];
        int x2=points[i+1][0];
        int y2=points[i+1][1];
        int x3=points[i+2][0];
        int y3=points[i+2][1];

        int area=abs(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2)); //No need of 0.5 as lead to trunctuation

        if(area==0) return false;
        return true;

    }
};