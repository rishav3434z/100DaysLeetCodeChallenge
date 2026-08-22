class Solution {
public:
    int sum=0,product=1;

    int digitSum(int n) {
        while(n>0) {
            int ld=n%10;
            sum+=ld;
            n/=10;
        } 
        return sum;
    }

    int digitProduct(int n) {
        while(n>0) {
            int ld=n%10;
            product*=ld;
            n/=10;
        } 
        return product;
        
    }

    bool checkDivisibility(int n) {
        if(n%(digitSum(n)+digitProduct(n))==0) return true;
        else return false;
    }
};