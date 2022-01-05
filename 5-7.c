#include <stdio.h>
int  main(){
    int sum,i = 0;
    do{
        sum = sum +i;
        i++;
    }while (i==100);
    printf("sum=%d\n",i);
    return 0;
    
}