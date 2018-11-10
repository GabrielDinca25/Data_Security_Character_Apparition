#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int GetNumberOfCharApparitions(char str[256], char ch)
{
    int i = 0;
    int count = 0;
    int length = strlen(str);

    for (i = 0; i < length; i++)
    {
        if (tolower(str[i]) == ch)
        {
            count++;
        }
    }

    return count;

}

int main()
{
    char* alphabet = "abcdefghijklmnopqrstuvwxyz";
    char str[256];

    printf("Enter string to search in: ");
	scanf("%[^'\n']s", str, sizeof(str));

    int apps = 0;
    int i = 0;
    for(i = 0; i < strlen(alphabet); i++)
    {
        apps = GetNumberOfCharApparitions(str, alphabet[i]);
        if(apps)
        {
            printf("%c appears %d times \n", alphabet[i], apps);
        }
        apps = 0;
    }
}
