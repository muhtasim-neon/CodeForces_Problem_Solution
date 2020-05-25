  
                               ███    ██ ███████  ██████  ███    ██ 
                               ████   ██ ██      ██    ██ ████   ██ 
                               ██ ██  ██ █████   ██    ██ ██ ██  ██ 
                               ██  ██ ██ ██      ██    ██ ██  ██ ██ 
                               ██   ████ ███████  ██████  ██   ████
                               
#include<bits/stdc++.h>
using namespace std;

int main(){
    char s[100];
    int len,l=0,i;
    cin>>s;
    len=strlen(s);

    for(i=0;i<1;i++){
        if(s[i]>='a' && s[i]<='z')
            l++;
    }
    for(i=0;i<len;i++){
        if(s[i]>='A' && s[i]<='Z')
            l++;
      }

    if(l==len){
       for(i=0;i<len;i++){
            if(s[i]>='A' && s[i]<='Z')
                 s[i]+=32;
            else
                s[i]-=32;
           }
            cout<<s;
      }
    else
        cout<<s;
        
return 0;
}                               
