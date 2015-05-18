#include <stdio.h>
int main(){
    int i,j,k;
    while(scanf("%d%d",&i,&j)!=EOF){
        int max = -1;
        for(k=i;k<=j;++k){
            int n = k;
            int c=1;
            while(n!=1){
                if(n%2==1)n = 3*n+1;
                else n /=2;
                c++;
            }
            if(c>max)max = c;
        }
        printf("%d %d %d\n",i,j,max);
    }
    return 0;
}