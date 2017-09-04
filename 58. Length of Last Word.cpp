#include<iostream>
using namespace std;

int lengthOfLastWord(string s) {
    if(s.empty()) return 0;
    int len = s.length();
    int count = 0;
	while(s[len-1] == ' '){
    	len -= 1;
	}//除去s="abc     "后面的众多空格. 
    for(int i = len-1;i >= 0;i--)
    {
       count++; 
    }
    return count;
}

int main()
{
	cout << lengthOfLastWord("a  ") << endl;
}
