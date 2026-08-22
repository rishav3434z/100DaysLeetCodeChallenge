class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
      int cnt=0;

      for(auto it: words) {
        if(s.substr(0,it.size())==it) cnt++;
      }  
      return cnt;
    }
};