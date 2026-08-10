class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1,
                                           vector<vector<int>>& items2) {
        map<int, int> mpp;   //sorted and unique

        for (auto item : items1) {
            mpp[item[0]] += item[1];
        }
        for (auto item : items2) {
            mpp[item[0]] += item[1];
        }
        vector<vector<int>> result;
        for (auto it : mpp) {
            result.push_back({it.first, it.second});
        }
        return result;
    }
};