#include <stdio.h>

int main(){
 int a  =100,b=10;
 int * point1,* point2;
 point1=&a;
 point2 =&b;
 printf("a=%d,b=%d \n",a,b);
 printf("%p,%p \n",point1,point2);
 printf("*p=%d,*p2=%d \n",point1,point2);
}
