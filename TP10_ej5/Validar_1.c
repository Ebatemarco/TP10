/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "HeadersofTP10.h"

void validar (int* puntero, int bit)
{
    if (puntero == 'NULL')
        printf ("Error");
    else if (bit<=0 || bit>=7)
        printf ("Error, numero de bit incorrecto");
}