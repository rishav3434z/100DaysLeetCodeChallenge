class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int ans=-1;
        int minDist=INT_MAX;

        for(int i=0;i<drones.size();i++) {
            int x=drones[i][0];
            int y=drones[i][1];
            int range=drones[i][2];

            int dist=abs(x-target[0])+abs(y-target[1]);

            if(dist<=range && dist<minDist) {
                    minDist=dist;
                    ans=i;
                }
        }
        return ans;
    }
};