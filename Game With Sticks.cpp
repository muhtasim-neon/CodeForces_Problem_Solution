  
                               ███    ██ ███████  ██████  ███    ██ 
                               ████   ██ ██      ██    ██ ████   ██ 
                               ██ ██  ██ █████   ██    ██ ██ ██  ██ 
                               ██  ██ ██ ██      ██    ██ ██  ██ ██ 
                               ██   ████ ███████  ██████  ██   ████
                               
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c=0;
    cin>>a>>b;
    for(int i=1;;i++){
        a-=1;
        b-=1;
        if(a==0 || b==0){
            break;
        }
        c++;
    }
    (c%2==0)?cout<<"Akshat"<<endl : cout<<"Malvika"<<endl;
return 0;
}
