#include<iostream>
using namespace std;
int main()
{ int i,t,a[10000];
 cin>>t;
 for(i=0;i<t;i++)
 {cin>>a[i];
 }
 for(i=0;i<t;i++)
 {if(a[i]<10)
  cout<<"\nWhat an obedient servant you are!";
  else 
  cout<<"\n"<<"-1";
 }
 return 0;
}