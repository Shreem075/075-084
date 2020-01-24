#include<stdio.h>
#include<string.h>
int main()
{
    char str[50]="idea without execution is worthless";
    int l = strlen(str);
    char *ptr;
    for (int i=0;i<l;i++)
    {
        ptr= *(str+i);
        if (ptr=='c')
        {
            printf("the position of c is %d from the left",i+1);
        }

    }
    return 0;
}
