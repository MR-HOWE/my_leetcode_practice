#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;


class Solution {
public:
     int countPrimes(int n) 
     {
        vector<bool> prime(n, true);
        prime[0] = false, prime[1] = false;
        for (int i = 0; i < sqrt(n); ++i) 
        {
            if (prime[i]) {
                for (long long j = i*i; j < n; j += i) {
                    prime[j] = false;
                }    
            }    
        }
        return count(prime.begin(), prime.end(), true);
    }
};

int main()
{
	Solution a;
	cout << a.countPrimes(999987799) << endl;
	//99998用时0.0222s 
	//999987用时0.12s
	//9999879用时4s
	//999987999用时134s
}
