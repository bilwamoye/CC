#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str[5];
	int i;
	cout<<"Enter a string"<<endl;
	cin>>str;
	for(i=0;i<5;i++)
	{
	 if((str[i]=='a')|| (str[i]=='c'))
	 {
		 cout<<str[i]<<" "<<"is a character"<<endl;
	 }
	 else if((str[i]=='1')||(str[i]=='2')||(str[i]=='3'))
	 {
		 cout<<str[i]<<" "<<"is a number"<<endl;
	 }
	 else
	 {
		 continue;
	 }
	 
 }
	
}
