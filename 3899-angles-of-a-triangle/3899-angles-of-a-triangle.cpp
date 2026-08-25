class Solution {
public:
    vector<double> internalAngles(vector<int>& sides) {
        sort(sides.begin(),sides.end());
        vector<double> ans;

        int a = sides[0];
        int b = sides[1];
        int c = sides[2];
        if(a + b <= c) return {};

        double A=acos((b*b+c*c-a*a)/(2.0*b*c))*180.0/M_PI;
        double B=acos((a*a+c*c-b*b)/(2.0*a*c))*180.0/M_PI;
        double C=acos((a*a+b*b-c*c)/(2.0*a*b))*180/M_PI;

        ans.push_back(A);
        ans.push_back(B);
        ans.push_back(C);

        return ans;

    }
};