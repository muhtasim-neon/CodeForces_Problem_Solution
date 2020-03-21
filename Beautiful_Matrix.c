#include<stdio.h>
#include<stdlib.h>
int main(){
    char a[5][5];
    int i,j,c,d,move;

    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            scanf("%s",&a[i][j]);
        }
    }
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(a[i][j]=='1'){
                c=i;
                d=j;
            }
        }
    }
    c=abs(3-c);
    d=abs(3-d);
    move=c+d;

    printf("%d\n",move);

return 0;
}
