#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char *s;
    int f[10];
    s=(char*)malloc(1024*sizeof(char)); 
    scanf("%s",s);
    for(int i=0;i<10;i++)
        f[i]=0;
    for(int i=0;i<strlen(s);i++){
        if(s[i]>=48 && s[i]<=57){
            if(s[i]==48)
                f[0]+=1;
            else if(s[i]==49)
                f[1]+=1;
            else if(s[i]==50)
                f[2]+=1;
            else if(s[i]==51)
                f[3]+=1;
            else if(s[i]==52)
                f[4]+=1;
            else if(s[i]==53)
                f[5]+=1;
            else if(s[i]==54)
                f[6]+=1;
            else if(s[i]==55)
                f[7]+=1;
            else if(s[i]==56)
                f[8]+=1;
            else
                f[9]+=1;
        }
    }
    for(int i=0;i<10;i++)
        printf("%d ",f[i]);
    return 0;
}

