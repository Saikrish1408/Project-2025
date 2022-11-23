#include <stdio.h>
#include <string.h>
int main()
{
    char s[50],a,b;
    fgets(s,50,stdin);
    scanf("%c\n",&a);
    scanf("%c",&b);
    int i=0,occurence=0;
    while(s[i] != '\0')
    {
        if(s[i] == a)
        {
            i = i + 1;
            if(s[i] == b)
            {
                occurence = occurence + 1;
            }
            i = i - 1;
        }
        i = i + 1;
    }
    printf("%d",occurence);
    return 0;
}
