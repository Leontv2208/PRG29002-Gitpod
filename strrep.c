#include <stdio.h>
#include <strings.h>

void strrep(char *str, int n, char *dst){
    int i;
    if(n==0){
        dst[0]=0;
    } else {
        strcpy(dst, src);
        for (i=0; i<n-1; i++) {
        starcat(dst, src);
    }
    }
    
}

int main(void)
{
    char nome[100] = "Liel";
    char nomerep[100];
    strrep(nome, 1, nomerep);
    printf("%s\n", nomerep);
    return 0;
}