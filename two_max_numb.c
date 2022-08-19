#include<stdio.h> 
int main(void)
{
    int a[]={2,45,3,34,5,6,29,12,9,18};
    int i=0;
    int max=a[0];
    int second_max=a[0];
    while(i<sizeof(arr)/sizeof(*arr)) {
        if(a[i]>max) {
            max=a[i];
        }
        if(a[i]>second_max&&a[i]<max) {
            second_max=a[i];
        }
        ++i;  
    }
    printf("fist max:%d second max:%d",max,second_max);
        return 0;
    

}

