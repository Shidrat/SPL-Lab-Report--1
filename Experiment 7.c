#include<stdio.h>
int main()
{
    int n;
    int num = 1;
    printf("Enter the value: ");
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        for(int j = i+1; j > 0; j--){
            printf("%d",num);
            printf(" ");
            num++;
        }
          printf("\n");
    }
    return 0;
}
