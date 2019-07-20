#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string str[10],delimeter[6]={"(",")","=","/0"},keyword[6]={"if","else","while","/0"},constant[6]={"1","2","3","/0"},identifier[6]={"x","y","z","/0"};

	int i,j,k=0,n;
cout<<"Enter string length"<<endl;
cin>>n;
cout<<"Enter a string: ";

   for(i=0;i<n;i++)
 {

cin>>str[i];
k=k+1;
 }

	for(i=0;i<n;i++)
	{

	    for(j=0;j<n;j++)
        {



            if((str[i]==keyword[j]) || (str[i]==delimeter[j]) || (str[i]==identifier[j]) || (str[i]==constant[j]))
                {
                if(str[i]==keyword[j])
                {


                cout<<str[i]<<" "<<"is a keyword"<<endl;
                continue;
                }
                 else if (str[i]==delimeter[j])
                {


                cout<<str[i]<<" "<<"is a delimeter"<<endl;
                continue;
                }
                  else if(str[i]==identifier[j])
                {


                cout<<str[i]<<" "<<"is an identifier"<<endl;
                continue;
                }
                    else if (str[i]==constant[j])
                {


                cout<<str[i]<<" "<<"is a constant"<<endl;
                continue;
                }
                }
            else
                {


                               continue;
                }

        }
 }

}

