  
                               ███    ██ ███████  ██████  ███    ██ 
                               ████   ██ ██      ██    ██ ████   ██ 
                               ██ ██  ██ █████   ██    ██ ██ ██  ██ 
                               ██  ██ ██ ██      ██    ██ ██  ██ ██ 
                               ██   ████ ███████  ██████  ██   ████

#include<bits/stdc++.h>
using namespace std;

int min_num(int y,int x[]){
    int min=x[0];
    for(int i=1;i<y;i++){
        if(min>x[i])
            min=x[i];
    }
    return min;
}
int max_num(int y,int x[]){
    int max=x[0];
    for(int i=1;i<y;i++){
        if(max<x[i])
            max=x[i];
    }
    return max;
}
int main(){
    int n,min,max,min1,max1;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
    cin>>a[i];
    }
    min=min_num(n,a);
    max=max_num(n,a);

    for(int i=0;i<n;i++){
        if(a[i]==min){
            min1=i+1;
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]==max){
            max1=i+1;
            break;
        }
    }
    (min1<max1)?cout<<max1-min1+n-2<<endl : cout<<max1-min1+n-1<<endl;

return 0;
}
