//Name		:Gokula Krishnan
//Date		:5/5/2021
//Description	:Program to implement strtok function
//Input 	:./39my_strtok.c
//Output	:Enter the string1......

#include <stdio.h>
#include <string.h>  
#include <malloc.h>

char* my_strtok(char* s, char* delm)
{
    static int currIndex = 0;
    if(!s || !delm || s[currIndex] == '\0')
    return NULL;
    char *W = (char *)malloc(sizeof(char)*100);
    int i = currIndex, k = 0, j = 0;

    while (s[i] != '\0'){
        j = 0;
        while (delm[j] != '\0'){
            if (s[i] != delm[j])
                W[k] = s[i];
            else goto It;
            j++;
        }

        i++;
        k++;
    }
It:
    W[i] = 0;
    currIndex = i+1;
    //Iterator = ++ptr;
    return W;
}

int main(void)
{
char c;
do
{
    char s[100];
    printf("Enter the string1=");
    scanf("%s", s);
    char delm[100];
    printf("Enter the string2=");
    scanf("%s", delm);
    char *str = 0;
    str= my_strtok(s, delm);
    while(str)
    {
        printf("\n%s", str);
        free(str);
        str = my_strtok(s, delm);
    }

printf("\nDo you want to continue (y/Y):");
scanf( " %c", &c);
}while((c == 'y') || (c == 'Y'));				//Condition to iterate the do while loop				

}
