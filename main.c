#include<stdio.h>
#include<strings.h>
void main()
{
    int i,decimal=0,len;
    char binary[100];

    printf("Enter Binary: ");
    scanf("%s",binary);
    len = strlen(binary);

    for(i=0; i<len; i++)
    {
        if(binary[i]=='1')
        {
            decimal += pow(2,len-(i+1));
        }
    }

    printf("Decimal value: %d",decimal);
}
