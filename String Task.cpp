  
                               ███    ██ ███████  ██████  ███    ██ 
                               ████   ██ ██      ██    ██ ████   ██ 
                               ██ ██  ██ █████   ██    ██ ██ ██  ██ 
                               ██  ██ ██ ██      ██    ██ ██  ██ ██ 
                               ██   ████ ███████  ██████  ██   ████
                               
#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
       cin>>str;
       int l=str.size();
       for(int i=0;i<l;i++){
            if(str[i]>='A' && str[i]<='Z')
                str[i]+=32;
        }
       for(int i=0;i<l;i++){
            if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u' && str[i]!='y')
                cout<<"."<<str[i];
        }
 return 0;
} 
