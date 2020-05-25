  
                               ███    ██ ███████  ██████  ███    ██ 
                               ████   ██ ██      ██    ██ ████   ██ 
                               ██ ██  ██ █████   ██    ██ ██ ██  ██ 
                               ██  ██ ██ ██      ██    ██ ██  ██ ██ 
                               ██   ████ ███████  ██████  ██   ████
                               
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b;
    cin>>n;
    if(n<=0){
        a=n%100;
        n=(n/100)*10;
    //find last two digits
        b=a%10;
        a=a/10;
        cout<<n+max(b,a)<<endl;
    }
    else
        cout<<n<<endl;

return 0;
}
