  
                               ███    ██ ███████  ██████  ███    ██ 
                               ████   ██ ██      ██    ██ ████   ██ 
                               ██ ██  ██ █████   ██    ██ ██ ██  ██ 
                               ██  ██ ██ ██      ██    ██ ██  ██ ██ 
                               ██   ████ ███████  ██████  ██   ████
                               
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,p,q,i,j,count=0;
    cin>>n>>p;
    int a[p];
    for(i=0;i<p;i++){
        cin>>a[i];
    }

    cin>>q;
    int b[q];
    for(j=0;j<q;j++){
        cin>> b[j];
    }

    //join two array or merge array
    int merge[p+q];
    for(i=0;i<p;i++){
        merge[i]=a[i];
    }
    for(i=0,j=p; j<p+q && i<q ; i++,j++){
        merge[j]=b[i];
    }

    sort(merge,merge+(p+q));    //soring merge

    for(i=1;i<=n;i++){
        for(j=0;j<p+q;j++){
            if(merge[j]==i){
                count++;
                i++;
            }
        }
    }
      if(count==n)
        cout<<"I become the guy."<<endl;
      else
        cout<<"Oh, my keyboard!"<<endl;

return 0;
}                             
