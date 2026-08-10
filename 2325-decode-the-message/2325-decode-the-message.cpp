class Solution {
public:
    string decodeMessage(string key, string message) {
        map<char,char> mpp;
         
        char ch='a';
        for(int i=0;i<key.size();i++) {
            if(key[i]!=' ' && !mpp.contains(key[i])) {
                mpp[key[i]]=ch;
                ch++;
            }
        }
        string ans="";
        for(int i=0;i<message.size();i++) {
            if(message[i]==' ') {
                ans+=' ';
            } else {
                ans+=mpp[message[i]];
            }
        }
        return ans;

    }
};