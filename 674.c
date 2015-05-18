#include <stdio.h>
#include <string.h>
int main(){
    int i,j,N;
    while(scanf("%d",&N)!=EOF){
        int coins[5]={50,25,10,5,1};
        long long int dp[N+1];
        for(i=0;i<=N;++i)dp[i]=0;
        dp[0]=1;
        for(i=0;i<5;++i){
            for(j=coins[i];j<=N;++j){
                dp[j]+=dp[j-coins[i]];
            }
        }
        printf("%lli\n",dp[N]);
    }
    
    return 0;
}