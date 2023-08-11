#include <stdio.h>
#include <string.h> //enables the use of string functions

#define BUFFER_SIZE 25 //limits string to 25 characters
#define INPUT_FILE "l6p2.txt"

//Function prototypes
void extractCaps(char *str, char* ostr, int iPos, int iCurrPos);

int main()
{    
    
    char string[BUFFER_SIZE] = { 0 };
    char ostring[BUFFER_SIZE] = { 0 };

    //Open the text file
    FILE *fp = NULL;
    fp = fopen(INPUT_FILE, "r"); 
   
    fscanf(fp, "%s", string);

    
    extractCaps(string, ostring, 0, 0); 
    printf("%s",ostring);

    return 0;
}
void extractCaps(char *str, char* ostr, int iPos, int iCurrPos)
{
    if (iPos < strlen(str))
    {
        if((str[iPos] >= 65 && str[iPos] <= 90)) //if the letter at this index is capital (ASCII codes for A and Z)
        {
            ostr[iCurrPos] = str[iPos];
            extractCaps(str, ostr, iPos + 1, iCurrPos + 1);
        }
        else
            extractCaps(str, ostr, iPos + 1, iCurrPos);

    }
}
