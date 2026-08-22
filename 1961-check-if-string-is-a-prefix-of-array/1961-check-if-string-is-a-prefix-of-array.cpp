class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string ans="";

        for(auto it: words) {
            ans+=it;
            if(ans==s) return true;
            else if(ans.size()>s.size()) return false;
        //    else return false;
        }
        return false;  // Add extra return if req as false
    }
};