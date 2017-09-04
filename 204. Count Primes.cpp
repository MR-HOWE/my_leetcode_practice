#include<iostream>

using namespace std;


class Solution {
public:
    int countPrimes(int n) {
       int count = 0;
       for (int i = 1; i < n; i++) {
          if (isPrime(i)) count++;
       }
       return count; 
    }
private:
    bool isPrime(int num)
    {
        if (num <= 1) return false;
        // Loop's ending condition is i * i <= num instead of i <= sqrt(num)
        // to avoid repeatedly calling an expensive function sqrt().
        for (long long i = 2; i * i <= num; i++) 
        {
            if (num % i == 0) return false;
        }
        return true;
    }
};

int main()
{
	Solution a;
	cout << a.countPrimes(99998) << endl;
	//99998用时0.07039s 
	//999987用时1.34s 
	//9999879用时34s
}
