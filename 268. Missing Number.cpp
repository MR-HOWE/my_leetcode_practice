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
    }//ȱ�㣺int sum���ܻᱬ���� 
};

class Solution {
public:
    int missingNumber(vector<int>& nums) { //����xor������� ,�ɱ���int���� 
    int res = nums.size();
    for(int i=0; i<nums.size(); i++){
        res ^= i;
        res ^= nums[i];
    }
    return res;
    }
};


