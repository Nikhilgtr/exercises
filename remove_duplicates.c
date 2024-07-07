#include <stdio.h>
#define SIZE_BIN_TABLE 256
#define UNIQUE_CHARACTER 0
#define MARK_USED 1
/* Removes duplicate characters from the Input string */
char *RemoveDupChar(char *pString)
{
    short  binTable[SIZE_BIN_TABLE] = {0}; //Bin table
    int startIndex = 0, resultIndex = 0; // Index
    unsigned char binTableIndex = 0;
    while (*(pString + startIndex)) //Till not get null character
    {
        binTableIndex = *(pString + startIndex); //get character from startIndex
        if (binTable[binTableIndex] == UNIQUE_CHARACTER) //check unique character
        {
            binTable[binTableIndex] = MARK_USED; //Marked the binTableIndex
            *(pString + resultIndex) = *(pString + startIndex); //copy character in result string
            resultIndex++;
        }
        startIndex++;
    }
    *(pString+resultIndex) = '\0'; //Assign null character to remove extra character
    return pString;
}
int main()
{
    char pString[]  =  "silence is a source of great strength"; //input string
    char *pResultString = RemoveDupChar(pString); //Remove duplicate
    printf("%s", pResultString ); //print result string
    return 0;
}
