class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        return (n&(n-1))==0;//如果是2的幂，则(n&(n-1))==0。
    }
};
