/*
	Name: DECtoHEX
	Copyright: KYChen
	Author: KYChen
	Date: 31/10/17 17:47
	Description: 寫請一個函數來執行一個四位數字從10進制轉16進制，並加上流程圖來解釋
*/

#include <stdio.h>
#include <stdlib.h>

char* DECtoHEX (int);
char* RevertHEX (char*);

int main (void)
{
    int i4DigitsNum = NULL;
    
    printf("Please input a 4 digits number: ");
    scanf("%d", &i4DigitsNum);
    
    printf("This is you input: %d\n", i4DigitsNum);
    
    char* chTrans = DECtoHEX( i4DigitsNum );
    printf("This is result for transfering DEC to HEX: %s\n", chTrans);
    
    //system("PAUSE");
    return 0;
}

char* DECtoHEX (int inDEC)
{
    char* outHEX;
    int remain, i;
    
    //Calculating
    i = 0;
    while ( inDEC != 0)
    {
        remain = inDEC % 16;
        switch(remain)
        {
            case 10: outHEX[i] = 'A'; break;
            case 11: outHEX[i] = 'B'; break;
            case 12: outHEX[i] = 'C'; break;
            case 13: outHEX[i] = 'D'; break;
            case 14: outHEX[i] = 'E'; break;
            case 15: outHEX[i] = 'F'; break;
            default: outHEX[i] = remain+'0'; break;
        }
        
        inDEC /= 16;
        i++;
    }
    outHEX[i] = '\0';
    
    //Revert for printing => There got some problem with reverting the char*...
    //outHEX = RevertHEX(outHEX);
    
    return outHEX;
}

char* RevertHEX (char* inHEX)
{
	char* revHEX = inHEX;
	
	int counter = 0, j = 0;
	while(inHEX[counter] != '\0')
		counter++;
	for(int i = counter-1; i >= 0; i--)
	{
		printf("%c", inHEX[i]);
		revHEX[j++] = inHEX[i];
	}
	printf("\n");
	
	revHEX[j] = '\0';
	return revHEX;
}
