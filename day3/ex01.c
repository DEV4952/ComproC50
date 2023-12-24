#include <stdio.h>
main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("A = %d\n B = %d\n",a,b);
    int temp=a;
    a = b;
    b = temp;
    printf("A = %d\n B = %d\n",a,b);
}
