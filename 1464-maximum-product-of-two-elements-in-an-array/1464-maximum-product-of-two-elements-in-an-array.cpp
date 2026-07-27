class Solution {
public:
    int maxProduct(vector<int>& nums) {
      priority_queue<int,vector<int>, greater<int>> pq;
      for(int x: nums) {
        pq.push(x);
        if(pq.size()>2) pq.pop();
      }  
      int product=pq.top()-1;
      pq.pop();
      product*=(pq.top()-1);

      return product;
    }
};