class Solution {
public:
    int digitProduct(int x) {
        if (x == 0) return 0;

        int product = 1;
        while (x > 0) {
            int digit = x % 10;

            // If any digit is 0, the product becomes 0.
            if (digit == 0) return 0;

            product *= digit;
            x /= 10;
        }
        return product;
    }

    int smallestNumber(int n, int t) {
        while (true) {
            if (digitProduct(n) % t == 0)
                return n;
            n++;
        }
    }
};