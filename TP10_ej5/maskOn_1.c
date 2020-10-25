/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* Dado un puerto y una máscara, debe prender todos aquellos
 * bits que estén  prendidos  en  la  máscara,
 * sin  cambiar  el  estado  de  los  restantes.  Por ejemplo,
 * dado el puerto A, que originalmente se encuentra en el estado 0x01, al
 * aplicarle la máscara 0x0A, el resultado será 0xB. */

#include "EmuladordePuertos.h"

void maskOn (byte_t* port, int mascara)//A=0000 1010
{
    if ((port!=NULL) && (mascara<=0xFF && mascara>=0))
    {
     port->byte_port = ((port->byte_port) | mascara);
    }
    else 
        printf ("Error");
}