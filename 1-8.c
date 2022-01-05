#include<stdio.h>
int main(){
int a[10] = {1,2,3,4,5,6,7,8,9,10};
int *p[10];
p[1] = &a[1];
p[0] = &a[2];
printf("%d",*p[0]);
}