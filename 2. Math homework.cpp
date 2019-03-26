#include<stdio.h>

int main(){
    int M,N,A,B,sum=0,n;
    scanf("%d %d",&N,&M);
    scanf("%d %d",&A,&B);
    while(N!=M){
        n=N/2;
        if(n>M){
            if(n*A>B){
				N=N/2;
				sum=sum+B;
			}
        	else{
                sum=sum+(N-M)*A;
                N=M;
        	}
    	}
    }
    printf("%d",sum);
    return 0;
}
