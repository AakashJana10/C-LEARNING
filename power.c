#include <stdio.h>
void square(float side);
void circle(float rad);
void rectangle(float a, float b);

int main(){
    float rad = 51;
    circle(rad);
    return 0;
}

void square(float side){
    printf("area of square is : %f ", side * side);
}

void circle(float rad){
    printf("area of circle is : %f", 3.14 * rad* rad);
}

void rectangle(float a, float b){
    printf("areea of rectangle is : %f", a * b);
}