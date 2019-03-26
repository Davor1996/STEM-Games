#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 1001
int Stog1[MAX];

int sp1 = -1;

void push(char x) {
    if (sp1 == MAX - 1)
        printf("Stog je pun!\n");
    else {
        sp1 = sp1 + 1;
        Stog1[sp1] = x;
    }
}
char pop() {
    char x;
    x = Stog1[sp1];
    sp1 = sp1 - 1;
    return x;
}
int is_empty() {
    if (sp1 == -1)
        return 1;
    else
        return 0;
}

int main(){
    char a[MAX],c;
    int i,z=0;
    scanf("%s",a);
    int n=strlen(a);
    for (i=0;i<n;i++){
        if(a[i]==')'||a[i]==']'||a[i]=='}'){
            c=pop();
            if(sp1==-1||(a[i]==')'&&c=='('||a[i]==']'&&c=='['||a[i]=='}'&&c=='{')){
			}else{
				z=1;
				break;
			}
        }
        else{
            push(a[i]);
        }
    }
    if(z==0&&is_empty()){
		printf("T");
	}else{
		printf("F");
	}
    return 0;
}
