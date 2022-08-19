#include<stdio.h>
#include<math.h>
double area_triangle(double x, double y, double z, double s)
{
    return sqrt(s*(s-x)*(s-y)*(s-z));
}
int main(void)
{
    double a, b, c,d,area, n;
    n=scanf("%lf%lf%lf",&a,&b,&c);

    if(n!=3) {
        printf("Error: wrong input.\n");
        return 1;
    }

    if(a==0||b==0||c==0) {
        printf("Error: this triangle not exist\n");
        return 2;
    }
    d=(a+b+c)/2;
    if(d<a||d<b||d<c) {
        printf("Error: this triangle not exist\n");
        return 3;
    } 
    area=area_triangle(a,b,c,d);
    printf("Area=%.2f\n",area);

    return 0;
}
