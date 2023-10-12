#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long int n, i;
    char s[100000];
    typedef struct Contact
    {
        char name[10000];
        char phone[9];
    } contact;

    scanf("%ld", &n);
    contact contacts[n];
    for (i = 0; i < n; i++)
    {
        scanf("%s %s", contacts[i].name, contacts[i].phone);
    }

    while (scanf("%s", s) != EOF)
    {
        int contResult = -1;
        for (i = 0; i < n; i++)
        {
            if (strcmp(contacts[i].name, s) == 0)
            {
                contResult = i;
            }
        }
        if (contResult != -1)
            printf("%s=%s\n", contacts[contResult].name, contacts[contResult].phone);
        else
            printf("Not found\n");
    }

    return 0;
}
