  
                               ███    ██ ███████  ██████  ███    ██ 
                               ████   ██ ██      ██    ██ ████   ██ 
                               ██ ██  ██ █████   ██    ██ ██ ██  ██ 
                               ██  ██ ██ ██      ██    ██ ██  ██ ██ 
                               ██   ████ ███████  ██████  ██   ████
                               
#include<bits/stdc++.h>
using namespace std;

int squareTree(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a==c)
        cout<<a+b-d<<" "<<b<<" "<<a+b-d<<" "<<d;
    else if(b==d)
        cout<<a<<" "<<a+b-c<<" "<<c<<" "<<a+b-c;
    else if(abs(a-c)==abs(b-d))
        cout<<a<<" "<<d<<" "<<c<<" "<<b;
    else
        cout<<-1;
}
int main(){
    squareTree();
return 0;
}                               
