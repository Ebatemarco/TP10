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

void maskOn (int* puntero, int mascara)
{
    int i;
    int arreglo[8];
    getBin(arreglo[0], mascara, 0);//creo un arreglo de 8 elementos con 1 y 0 correspondientes a la mascara
    for(i=0; i<=8;i++)
    {   
        if(arreglo[i]==1)
            puntero[i]=arreglo[i];             
    }
   
}