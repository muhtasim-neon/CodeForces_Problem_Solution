                               ███    ██ ███████  ██████  ███    ██ 
                               ████   ██ ██      ██    ██ ████   ██ 
                               ██ ██  ██ █████   ██    ██ ██ ██  ██ 
                               ██  ██ ██ ██      ██    ██ ██  ██ ██ 
                               ██   ████ ███████  ██████  ██   ████
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string word;
    for(int i=0;i<n;i++){
        cin>>word;
        int len=word.size();
        
        //Using Conditional Expression
        (len>10)? cout<<word[0]<<len-2<<word[len-1]<<endl: cout<<word<<endl;
    }
return 0;
}
