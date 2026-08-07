class Solution {
public:
    double r,a,b;
    Solution(double radius, double x_center, double y_center) {
        r=radius;
        a=x_center;
        b=y_center;
    }
    
    vector<double> randPoint() {
        double leftx=a-r;
        double rightx=a+r;
        double lowy=b-r;
        double highy=b+r;
        double f1=(double)rand()/RAND_MAX;
        double f2=(double)rand()/RAND_MAX;
        double x_corr=leftx+f1*(rightx-leftx);
        double y_corr=lowy+f2*(highy-lowy);
        while(true) {
            if((pow((x_corr-a),2)+pow((y_corr-b),2))<=pow(r,2)) break;
            f1=(double)rand()/RAND_MAX;
            f2=(double)rand()/RAND_MAX;
            x_corr=leftx+f1*(rightx-leftx);
            y_corr=lowy+f2*(highy-lowy);
        }
        return {x_corr,y_corr};
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(radius, x_center, y_center);
 * vector<double> param_1 = obj->randPoint();
 */