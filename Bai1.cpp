#include <stdio.h>
int main(void){
    // Your code here!
    int n, x;
    printf("nhap so n: ");
    scanf("%d", &n);
    for(int i = 0; i < n ; i++)
    {
        printf("nhap x: ");
        scanf("%d", &x);
        if(x%7==0)
        {
            printf("cac so chia het cho 7 trong day so la %d ", x);
        }
    }
    
    
    
}
