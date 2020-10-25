/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "HeadersofTP10.h"
#include <stdio.h>

int validar (int* puntero, int bit)
{
    int val=1;
    if (puntero == NULL)
    {
        printf ("Error");
        val=0;
    }
    else if (bit<=0 || bit>=7)
    {
        printf ("Error, numero de bit incorrecto");
        val=0;
    }
    return val;
}