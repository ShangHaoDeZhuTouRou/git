#include<stdio.h>

int main(){
    int i =2;
    printf("i-----%i\n",i);
    printf("&i----%p\n",&i);
    int *a;
    printf("a-----%p\n",a);
    printf("&a----%p\n",&a);
    a =&i;
    printf("a-----%p\n",a);
    int **p;
    p=&a;
    printf("p-----%p\n",p);
    printf("*p----%p\n",*p);
    printf("&p-----%p\n",&p);
}