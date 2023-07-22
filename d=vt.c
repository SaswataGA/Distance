#include<stdio.h>
int main()
{
    float d,v,t;
    printf("Enter velocity(v) in meter/second: ");
    scanf("%f",&v);
    printf("Enter the time(t) in seconds:");
    scanf("%f",&t);
    d=v*t;
    printf("Distance(d)= %.2f meter ", d);
}
