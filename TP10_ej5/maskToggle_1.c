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

void maskOn (byte_t* port, int mascara)//A=0000 1010
{
    if ((port!=NULL) && (mascara<=0xFF && mascara>=0))
     port->byte_port = ((port->byte_port) ^ mascara)
}