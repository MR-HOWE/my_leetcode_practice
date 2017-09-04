class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if(digits.empty())
        {
            digits.push_back(1);
            return digits;
        }
        vector<int>::iterator it;
        it = digits.end() - 1;
        *it += 1;
        while(*it > 9 && it != digits.begin())
        {
            *it = 0;
            it--;
            *it += 1;
        }
        if(it == digits.begin() && *it == 10)
        {
            *it = 0;
            digits.insert(digits.begin(),1);
        }
        return digits;
    }
};