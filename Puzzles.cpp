  
                               ███    ██ ███████  ██████  ███    ██ 
                               ████   ██ ██      ██    ██ ████   ██ 
                               ██ ██  ██ █████   ██    ██ ██ ██  ██ 
                               ██  ██ ██ ██      ██    ██ ██  ██ ██ 
                               ██   ████ ███████  ██████  ██   ████
   
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,min,diff,i;
    cin>>n>>m;
    int a[m];
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    sort(a,a+m);

     min=a[n-1]-a[0];
    for(int i=1;i<=m-n;i++){

      diff=a[n-1+i]-a[i];
        if(diff<0){
            break;
        }
        if(diff<min){
            min=diff;
        }
    }
    cout<<min<<endl;

return 0;
}   
