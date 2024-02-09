/*Comments 
Name:Gokula Krishnan
Date:15-6-2021
Description:Program to to implement my_scanf() function.
Input: 46my_scanf.c
Output:Enter a number: 20
You entered 20
Enter a string: Hii
You entered Hii */

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "ntype_lib.c"

static int validCount = 0;
static int ch = 0;


void scan_char(char *cptr);
void scan_int(int *dptr);
void scan_str(char *sptr);

int my_scanf(char *fmt, ...);

int main()
{
    int i;
    char ci;
    char s[100];
    
    
    printf("Enter a number:");
    scanf("%d", &i);
    printf("You entered %d\n", i);
    my_scanf("%s", &i);
    
    printf("Enter a character:");
    scanf("%c", &ci);
    printf("You entered %c\n", ci);
    my_scanf("%s", &ci);
    
    rewind(stdin);
    printf("Enter a string:");
    scanf("%s", s);
    printf("You entered %s\n", s);
    my_scanf("%s", s);
    
    return 0;
}

int my_scanf(char *format, ...)
{
    rewind(stdin);
    va_list ap;
    
    int *d_ptr = NULL;
    char *c_ptr = NULL;
    char *s_ptr = NULL;
    char *ptr;
    
    /* Initialize the arg list */
    va_start(ap, format);
    
    for (ptr = format; *ptr; ptr++)
    {
        if (*format == '%')
        {
            format++;
            if (*format == '\0') {
                printf("Error: %% Invalid format specifier\n");
                exit(1);
            }
            
            if ( *format == 'd')
            {
                d_ptr = va_arg(ap, int *);
                scan_int(d_ptr);
                validCount++;
                format++;
            }
            if ( *format == 'c')
            {
                c_ptr = va_arg(ap, char *);
                scan_char(c_ptr);
                validCount++;
                format++;
            }
            if ( *format == 's')
            {
                s_ptr = va_arg(ap, char *);
                scan_str(s_ptr);
                validCount++;
                format++;
            }
            else
            {
                format++;
            }
        }
    }
    va_end(ap);
    return validCount;
}


void scan_char(char *cptr)
{
    *cptr = getchar();
}

void scan_int(int *dptr)
{
    char sbuf[MAXLEN];
    
    int i;
    
    ch = getchar();
    /* read the data from stdin till it reaches space, 
     * tab or newline and save that into a buf
     */
    for (i = 0; ((ch != ' ') && (ch != '\t') && (ch != '\n')) ; i++)
    {
        sbuf[i] = ch;
        if (i > MAXLEN)
        {
            printf("ERROR: Out of space\n");
        }
        (ch = getchar());
    }
    
    /* return intger value into obtained address */
    *dptr = atoi(sbuf);

}

void scan_str(char *sptr)
{
    char sbuf[MAXLEN];
    
    int i;
    
    ch = getchar();
    /* read the data from stdin till it reaches space,
     * tab or newline and save that into a buf
     */
    for (i = 0; ((ch != ' ') && (ch != '\t') && (ch != '\n')) ; i++)
    {
        sbuf[i] = ch;
        if (i > MAXLEN)
        {
            printf("ERROR: Out of space\n");
        }
        (ch = getchar());
    }
    sbuf[i] = '\0';
    /* return intger value into obtained address */
    strcpy(sptr, sbuf);
    
}