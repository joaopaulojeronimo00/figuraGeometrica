#include <iostream>
#include "../header/FiguraGeometrica.h"
#include "../header/Leitor.h"

#include <vector>

int main(){

  Sculptor* t;
  Leitor desenha(t);

  desenha.ler("teste.txt");

  return 0;
  //std::vector<FiguraGeometrica*> figs;
  /*figs.push_back(new Reta);
  figs.push_back(new retangulo);
  figs.push_back(new circulo);
  for(int i=0; i<figs.size(); i++)
  {
      figs[i]->draw();
  }*/
  /*FiguraGeometrica *pf;
  Reta r;
  retangulo ret;
  circulo c;
  r.draw();
  pf = &r;
  pf->draw();
  ret.draw();
  pf = &ret;
  pf->draw();
  c.draw();
  pf = &c;
  pf->draw();*/
  
}
