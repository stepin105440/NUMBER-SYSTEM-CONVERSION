#include <stdio.h>
#include <math.h>
#include<string.h>
#include <conio.h>
#include "Bin_to_Dec.h"
#include "Bin_to_Oct.h"
#include "Bin_to_Hex.h"
#include "Dec_to_Bin.h"
#include "Dec_to_Oct.h"
#include "Dec_to_Hex.h"
#include "Oct_to_Bin.h"
#include "Oct_to_Dec.h"
#include "Oct_to_Hex.h"
#include "Hex_to_Bin.h"
#include "Hex_to_Dec.h"
#include "Hex_to_Oct.h"
#include "test_convr.h"
long int Bin_to_Dec(long int bin)
{
    int rem,sum=0,i=0;
    while(bin!=0)
    {
        rem=bin%10;
        bin=bin/10;
        sum=sum+rem*pow(2,i);
        i++;
    }

    printf("\nEquivalent Decimal Number : %d",sum);

}