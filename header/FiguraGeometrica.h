#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <iostream>
#include "Sculptor.h"

//toda classe que contem pelo menos uma funçao virtual pura é chamada uma classe abstrata

class FiguraGeometrica{
protected: 
  float r, g, b, a;

public:  
  FiguraGeometrica();
  virtual ~FiguraGeometrica();
  //virtual é usado para poder ser usado o metodo do contrutor das classes derivadas
  //função virtual pura
  /*virtual void draw(){
    std::cout << "draw figurageometrica\n";
  }*/
  virtual void draw()=0; //função virtual pura, força a existencia desse mesmo metodo nas classes derivadas

};

#endif // FIGURAGEOMETRICA_H
