  
                               ███    ██ ███████  ██████  ███    ██ 
                               ████   ██ ██      ██    ██ ████   ██ 
                               ██ ██  ██ █████   ██    ██ ██ ██  ██ 
                               ██  ██ ██ ██      ██    ██ ██  ██ ██ 
                               ██   ████ ███████  ██████  ██   ████
                               
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,a,b,sum1,sum2;
    cin>>n>>m>>a>>b;

    sum1=n*a;
    sum2=(n/m)*b+min((n%m)*a,b);

    cout<<min(sum1,sum2)<<endl;

return 0;
}
                               
