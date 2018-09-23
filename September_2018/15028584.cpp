#include<iostream>
using namespace std;
int main()
{ int i,t,a[100000];
  cin>>t;
  for(i=0;i<t;i++)
  {
  cin>>a[i];
   if(a[i]<1500)
    {cout<<a[i]*2<<endl;
    }
    else
    {
   cout<<a[i]*1.98+500<<endl;
    }
  }
  return 0;
}