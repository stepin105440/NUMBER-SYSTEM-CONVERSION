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
long int Dec_to_Oct(long int dec)
{
    int rem[50],i,len=0;
    do
    {
        rem[i]=dec%8;
        dec=dec/8;
        i++;
        len++;
    }
    while(dec!=0);

    printf("\nEquivalent Octal Number : ");
    for(i=len-1;i>=0;i--)
    {
        printf("%d",rem[i]);
    }
}
