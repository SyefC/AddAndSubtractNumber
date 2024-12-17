#include<stdio.h>
#include<string.h>
#include<conio.h>
#include <stdlib.h>

void hi(int a);

int main(){
    int a;
    int b = 0;
    printf("0 ");
    while(1) {
    a = getch();
   switch(a) {
    case'a':
        b++;
        printf("%d ",b);
        break;
        case's':
        b--;
         printf("%d ",b);
        break;
        case 'q':
        hi(1);
        break;
   }
    }
}

void hi(int a) {
    if(a==1){
        printf("quitted");
        exit(0);
    }
}