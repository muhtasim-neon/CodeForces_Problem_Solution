  
                               ███    ██ ███████  ██████  ███    ██ 
                               ████   ██ ██      ██    ██ ████   ██ 
                               ██ ██  ██ █████   ██    ██ ██ ██  ██ 
                               ██  ██ ██ ██      ██    ██ ██  ██ ██ 
                               ██   ████ ███████  ██████  ██   ████

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    bool flag=true;
    cin>>s;
    int l=s.size();
    for(int i=0;i<l;i++){
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
            i+=2;
            if(!flag){
            cout<<" ";
            }
        }
        else{
            cout<<s[i];
            flag=false;
        }
    }
return 0;
}
