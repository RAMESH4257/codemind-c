#include<stdio.h>
int main()
{
    int a,s,i,c=0;
    scanf("%d%d",&a,&s);
    while(1)
    {
        if(a%s==0)
        break;
        else
        {
            a++;
            c++;
        }
    }
    printf("%d",c);
}