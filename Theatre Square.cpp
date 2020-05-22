                               ███    ██ ███████  ██████  ███    ██ 
                               ████   ██ ██      ██    ██ ████   ██ 
                               ██ ██  ██ █████   ██    ██ ██ ██  ██ 
                               ██  ██ ██ ██      ██    ██ ██  ██ ██ 
                               ██   ████ ███████  ██████  ██   ████

#include<bits/stdc++.h>
using namespace std;
typedef long long int llf;

int main(){
    llf n,m,a,x,y;
    cin>>n>>m>>a;

    //Using Conditional Expression
    (n%a==0)? x=(n/a): x=(n/a)+1;
    (m%a==0)? y=(m/a): y=(m/a)+1;

    cout<<x*y<<endl;
return 0;
}
