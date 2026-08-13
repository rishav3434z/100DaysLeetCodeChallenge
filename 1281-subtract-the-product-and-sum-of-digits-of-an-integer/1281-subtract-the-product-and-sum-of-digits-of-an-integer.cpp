class Solution {
public:
    int subtractProductAndSum(int n) {
        int product=1;
        int sum=1;
        while(n) {
            int ld=n%10;
            product*=ld;
            sum+=ld;
            n=n/10;
        }
        
        return product-sum+1;
        
    }
};