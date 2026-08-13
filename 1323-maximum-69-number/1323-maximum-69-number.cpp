class Solution {
public:
    int maximum69Number (int num) {
        string s=to_string(num);
        for(char &c:s) {  // we have to modify in place
            if(c=='6') { // greedy
                c='9';
                break;
            }
        }
        return stoi(s);
    }
};