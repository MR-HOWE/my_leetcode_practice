#include<iostream>
using namespace std;
int main()
{
	int num,mod;
	while(cin >> num)
	{
		if(num > 9){
			mod = num % 9;
		}
		else{
			mod = num;
		}
		if(mod == 0 && num != 0)
		{
			mod = 9;
		}
		cout << mod << endl;
	}
}
