/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* maskToggle: Dado un puerto y una máscara, debe cambiar el estado
 * de todos aquellos  bits  que  estén  prendidos  en  la  máscara  
 * al  opuesto,  sin  cambiar  el estado de los restantes. Por ejemplo,
 * dado el puerto A, que originalmente se encuentra  en  el  estado  0x02,
 * al  aplicarle  la  máscara  0x03,  el  resultado  será 0x01.*/

#include "HeadersofTP10.h" 

void maskOn (int* puntero, int mascara)//A=0000 1010
{
    int i;
    int arreglo[8];
    getBin(arreglo[0], mascara);//creo un arreglo de 8 elementos con 1 y 0 correspondientes a la mascara
    for(i=0; i<=8;i++)
    {   
        if(arreglo[i]==1)
        {
            if(puntero[i]==0)
                puntero[i]=1;
            else
                puntero[i]=0;
        }
    }
   
}