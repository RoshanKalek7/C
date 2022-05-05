#include<stdio.h>

// Input : 7856
// Output :
// 6
// 5
// 8
// 7

void DisplayDigits(int iNo)
{
    int iDigit = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10; //   print last no of digit
        printf("%d\n",iDigit);
        iNo = iNo /10;   ///   remove last no in each itration
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    DisplayDigits(iValue);

    return 0;
}






/*

iNo = 98675


















*/

























