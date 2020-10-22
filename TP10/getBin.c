/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

void getBin (int* arreglo, int mascara,int estado)
{
    if(mascara==0)
        return;
    else
        getBin(arreglo[estado+1]/2);
        arreglo[]=(mascara%2);
}