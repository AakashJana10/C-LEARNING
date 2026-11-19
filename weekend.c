#include<stdio.h>
int main(){
    char a;
    printf("enter day : ");
    scanf("%c", &a);
if(a == 's'){
    printf("weekend");
}
else{
    printf("no weekend");
}
return 0;
}