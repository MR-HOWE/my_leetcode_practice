class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        vector<int>::iterator it;
        for(it=nums.begin();it!=nums.end();it++)
        {
            sum += *it;
        }
        return (1+n)*n/2 - sum;
    }//缺点：int sum可能会爆掉。 
};

class Solution {
public:
    int missingNumber(vector<int>& nums) { //利用xor异或运算 ,可避免int爆掉 
    int res = nums.size();
    for(int i=0; i<nums.size(); i++){
        res ^= i;
        res ^= nums[i];
    }
    return res;
    }
};


