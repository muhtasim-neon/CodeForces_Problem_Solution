  
                               ███    ██ ███████  ██████  ███    ██ 
                               ████   ██ ██      ██    ██ ████   ██ 
                               ██ ██  ██ █████   ██    ██ ██ ██  ██ 
                               ██  ██ ██ ██      ██    ██ ██  ██ ██ 
                               ██   ████ ███████  ██████  ██   ████
                               
#include<bits/stdc++.h>
using namespace std;

int main(){
    char a[101];
    gets(a);
    int l=strlen(a);
    for(int i=0;i<l;i++)
        if(a[i]=='H' || a[i]=='Q' || a[i]=='9'){
            cout<<"YES"<<endl;
            return 0;
        }
    cout<<"NO"<<endl;
 return 0;
}
