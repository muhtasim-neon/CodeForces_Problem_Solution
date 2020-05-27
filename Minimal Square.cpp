  
                               ███    ██ ███████  ██████  ███    ██ 
                               ████   ██ ██      ██    ██ ████   ██ 
                               ██ ██  ██ █████   ██    ██ ██ ██  ██ 
                               ██  ██ ██ ██      ██    ██ ██  ██ ██ 
                               ██   ████ ███████  ██████  ██   ████
                               
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,a,b,c,d;
    cin>>t;
    while(t--){
      cin>>a>>b;
      c=2*a;
      d=2*b;
      if(a<=b)
         (c<=b)?cout<<b*b<<endl:cout<<c*c<<endl;

      else
         (d<=a)?cout<<a*a<<endl:cout<<d*d<<endl;
   }
return 0;
}                               
