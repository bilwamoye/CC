#include<iostream>
#include<cstring>
using namespace std;
int main()
{
              char str[20],ak[20],aop[10];
	char delimeter[20]={'(',')',';',' ','\0'},keyword[20]={'w','h','i','l','e','f','o','r','\0'};
	char constant[20]={'1','2','3','4','5','6','7','8','9','0','\0'};
	char identifier[20]={'x','y','z','a','b','c','n','\0'},operator1[20]={'=','+','-','*','/','<','\0'};
	int i,j,k=0,n,m=0,c=0,p=0,op=0;
              cout<<"Enter a string: ";
cin.get(str,20);
  	 k=strlen(str);
	for(i=0;i<k;i++)
	{

	    for(j=0;j<12;j++)
      		  {

                    if((str[i]==keyword[j]) || (str[i]==delimeter[j]) || (str[i]==identifier[j]) || (str[i]==operator1[j]) || (str[i]==constant[j]))
            			    {
                			if(str[i]==keyword[j])
             				   {
                                ak[i]=keyword[j];    //array to store the keywords
                    				m=m+1;
                 			              cout<<ak[i];
                     				   if(p==1)           //to check if an entered letter is an identifier
                       				   {
                           				 cout<<" is an identifier"<<endl;
                        				  }
                			 }

             				    else if (str[i]==delimeter[j])
             				   {
                        				if((m==2) || (m==3) || (m==5))
                     				   {
                                                cout<<" is a keyword"<<endl;
                         				        cout<<str[i]<<" "<<"is a delimeter"<<endl;
                           				        m=-20;
                           				        p=1;
                      				  }
              					  	else
{
              						  cout<<str[i]<<" "<<"is a delimeter"<<endl;
               						 }
                                }
                			 else if (str[i]==operator1[j])
              				       {
                 				    c=i+1;
                    				  if((str[i]=='+') && (str[c]=='+'))
             					        {
                        					 cout<<str[i]<<str[c];
                         					 cout<<" is an operator"<<endl;
                      				               op=1;

                   				       }
                   				  else if((str[i]=='-') && (str[c]=='-'))
                   				     {
                      					    cout<<str[i]<<str[c];
                   				                   cout<<" is an operator"<<endl;
                         				      op=2;
                  				     }
                			              else if((str[i]=='<') && (str[c]=='='))
                    				    {
                       					   cout<<str[i]<<str[c];
                    					      cout<<" is an operator"<<endl;
                    					      op=3;
                                        }
                   			  else if((str[i]=='>') && (str[c]=='='))
                    				   {
                  					        cout<<str[i]<<str[c];
                     					     cout<<" is an operator"<<endl;
                        					     op=4;
                                        }
                   			  else if((str[i]=='=') && (str[c]=='='))
                                        {
                   					       cout<<str[i]<<str[c];
                 				                   cout<<" is an operator"<<endl;
             					                  op=5;
                                        }
                   			  else if((op==1) || (op==2) || (op==3) || (op==4) || (op==5))
                                     {
                         					break;
                				     }
                                else
                                    {
                                    cout<<str[i]<<" is an operator"<<endl;
                                    }

                                  }
                     		else if(str[i]==identifier[j])
                                {
               			 cout<<str[i]<<" "<<"is an identifier"<<endl;
            	    	 	   }
                  		  else if (str[i]==constant[j])
                                {
             				 cout<<str[i]<<" "<<"is a constant"<<endl;
                                }
                        }
                        else
          	            {
                               continue;
                        }
                }
            }
 }

