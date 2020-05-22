  
                               ███    ██ ███████  ██████  ███    ██ 
                               ████   ██ ██      ██    ██ ████   ██ 
                               ██ ██  ██ █████   ██    ██ ██ ██  ██ 
                               ██  ██ ██ ██      ██    ██ ██  ██ ██ 
                               ██   ████ ███████  ██████  ██   ████
                               
#include<bits/stdc++.h>
using namespace std;

int main(){
    char letter[1001];
    int len,count=0;
    gets(letter);
    len=strlen(letter);

    sort(letter,letter+len);

    for(int i=0;i<len;i++){
        if(letter[i]>='a' && letter[i]<='z'){
             count++;
            if(letter[i]==letter[i+1])
                count--;
        }
    }
    cout<<count<<endl;
return 0;
} 
