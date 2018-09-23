#include<iostream>
using namespace std;
int main()
{ int i,t,a[t],even=0,odd=0;
  cin>>t;
  for(i=0;i<t;i++)
  { cin>>a[i];
    if(a[i]%2==0)
    even++;
    else
    odd++;
  }
  if(even>odd)
  cout<<"READY FOR BATTLE";
  else
  cout<<"NOT READY";
  return 0;
}