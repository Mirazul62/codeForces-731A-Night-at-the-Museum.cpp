#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    char a,b;
    cin>>s;
    long long int n,i,count=0,ans=0,len,extra=0;
    len=s.length();
    for(i=0;i<len-1;i++)
    {
        ans=abs(s[i]-s[i+1]);
        if(ans<13)
        {
          ///  cout<<ans<<endl;
            count+=ans;
        }
        else
        {
            ans=26-ans;
         ///   cout<<ans<<endl;
            count+=ans;
        }

   /// cout<<ans<<endl;
    }
    extra=abs('a'-s[0]);
    if(extra<13)
        count+=extra;
    else
    {
        extra=26-extra;
        count+=extra;
    }
   /// cout<<extra<<endl;
    cout<<count;
   /// cout<<'a'-'b';


}
