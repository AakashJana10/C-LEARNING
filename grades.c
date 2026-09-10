#include<stdio.h>
int main()
{
    int marks;
    printf("enter marks");
    scanf("%d", &marks);

    if(marks<30){
        printf("grade c");
    }
else if(marks>=30 && marks<=70){
    printf("grade b");
}
else if(marks>=70 && marks<90){
    printf("grade a");
}
else if(marks>=90 && marks<=100){
    printf("grade a+");
}
else if(marks>100){
    printf("no such a number");
}
return 0;
}