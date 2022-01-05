#include<stdio.h>
#include<stdlib.h>


int main(){
    FILE *fp;
    char ch;
    char filename[28] ={"./testopenwrite.c"};
    printf("please enter the file name:");
    if((fp=fopen(filename,"w"))==NULL){

        printf("Unable to open this file \n");
        exit(0);
    }

    ch=getchar(); 
   
    while(ch!='#'){ 
         fputc(ch,fp);
         putchar(ch);
         ch=getchar();
    }
    fclose(fp);
    putchar(10);
    return 0;
}

