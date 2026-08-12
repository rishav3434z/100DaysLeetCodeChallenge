class OrderedStream {
public:
    map<int,string> mp;
    int maxSize=-1,currIndex=1;
    OrderedStream(int n) {
        maxSize=n;
        for(int i=1;i<=n;i++) mp[i]="----";
    }
    
    vector<string> insert(int idKey, string value) {
        vector<string> res;
        mp[idKey]=value;
        int i=-1;
        for(int i=currIndex;i<=maxSize;i++) {
            if(mp[i]!="----") res.push_back(mp[i]);
            else {
                currIndex=i;
                break;
            }
        }
        return res;
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */