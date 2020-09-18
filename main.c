#include <stdio.h>
#include <stdlib.h>
int diff(int i,int j);
float _div(float i,float j); //div deh reversed word fa 3ashan kda khaletha _div
int mul(int i, int j);
int sum(int i, int j);
int main()
{
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;
    printf("enter num1:");
    scanf("%f",&x);
    printf("enter num2:");
    scanf("%f",&y);
    printf("div=%f",_div(x,y));
    printf("\ndiff=%d",diff(x,y));
    printf("\nmul=%d",mul(x,y));
    printf("\nsum=%d",sum(x,y));
    return 0;
}
int diff(int i,int j)
{
    int x=i-j;
    return x;
}
float _div(float i,float j)
{
    float x=i/j;
    return x;
}
int mul(int i,int j)
{
    int x=i*j;
    return x;
}
int sum(int i, int j)
{
    int x=i+j;
    return x;
}
