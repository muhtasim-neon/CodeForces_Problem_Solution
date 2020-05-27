  
                               ███    ██ ███████  ██████  ███    ██ 
                               ████   ██ ██      ██    ██ ████   ██ 
                               ██ ██  ██ █████   ██    ██ ██ ██  ██ 
                               ██  ██ ██ ██      ██    ██ ██  ██ ██ 
                               ██   ████ ███████  ██████  ██   ████
                               
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ll n;
    cin>>n;
    if(n==0)
        cout<<n<<endl;
    else if(n%2==0)
        cout<<n+1<<endl;
    else
        cout<<(n/2)+1<<endl;

 return 0;
}                               
