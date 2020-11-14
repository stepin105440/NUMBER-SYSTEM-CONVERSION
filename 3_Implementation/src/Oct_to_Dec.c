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
long int Oct_to_Dec(long int oct)
{
    int decimal=0,i=0,num,ans;

    while(oct!=0)
    {
        ans=oct % 10;
        decimal = decimal + ans * pow(8,i);
        i++;
        oct = oct/10;
    }
    printf("\nEquivalent Decimal Number : %d",decimal);
}
