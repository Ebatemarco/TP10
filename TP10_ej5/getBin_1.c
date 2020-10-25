/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "EmuladordePuertos.h"

void getBin (int arreglo[8], int mascara)
{
    int i;
    int mask=mascara;
    for(i=7;i>=0;i--)
    {
        arreglo[i]=(mask%2);
        mask/=2;
    }
}