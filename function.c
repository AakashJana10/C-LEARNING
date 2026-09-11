#include<stdio.h>
void printnamaste();
void printbonjour();

int main(){
char i;
printf("enter language :- ");
scanf("%c", &i);
if(i == 'f'){
    printnamaste();
}
else{
   printbonjour();
}

    return 0;
}
void printnamaste(){
   printf("namaste");
    }

    void printbonjour(){
  printf("bonjour");
    }

