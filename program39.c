#include<stdio.h>
#include<stdbool.h>
 // prime no is a no which is divisible by one itself
bool CheckPrime(int iNo)
{
    int iCnt = 0;
    bool bFlag = true;
    //          1           2                       3
    for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
    {
        if(iNo % iCnt == 0)     // 4
        {
            bFlag = false;
            break;
        }
    }
    return bFlag;
}

int main()
{
    int iValue = 0;
    bool bRet;
    printf("Enter number\n");
    scanf("%d",&iValue);
    bRet = CheckPrime(iValue);
    if(bRet == true)
    {
        printf("%d is prime number\n",iValue);
    }
    else
    {
        printf("%d is not a prime number\n",iValue);
    }
    return 0;
}