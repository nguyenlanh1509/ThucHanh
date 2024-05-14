#include <stdio.h>
int check_SCP(int n)
{
    int x =sqrt(n);
    return x*x == n;
}
void dem_So_CP(int  n)
{
    int count = 0;   
    for(int i = 2; i < n ; i++)
    {
        if(check_SCP(i))
        {
            printf(" %d", i);
            count++;
        }
    }
    printf(" \nco %d  so chinh phuong nho hon %d", count,n);
}
int main(void){
    // Your code here!
    int n;
    
    scanf("%d", &n);
    dem_So_CP(n);
    
}
