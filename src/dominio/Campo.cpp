#include "..\..\include\dominio\Campo.h"


Campo::Campo()  //constructor de campo. Damos valores iniciales
{
	suelo.SetLim(20.0f, 0.0f, -20.0f, 0.0f);//(x1,y1,x2,y2)
	suelo.SetColor(45, 100, 25);
	
	techo.SetLim(20.0f, 20.0f, -20.0f, 20.0f);//(x1,y1,x2,y2)
	techo.SetColor(45, 100, 25);

	pared_dcha.SetLim(20.0f, 0.0f, 20.0f, 20.0f);//(x1,y1,x2,y2)
	pared_dcha.SetColor(85, 220, 35);

	pared_izq.SetLim(-20.0f, 0.0f, -20.0f, 20.0f);//(x1,y1,x2,y2)
	pared_izq.SetColor(85, 220, 35);

	red.SetLim(0.0f, 0.0f, 0.0f, 5.0f);//(x1,y1,x2,y2)
	red.SetColor(80,50, 150);
	
}

Campo::~Campo()
{
}

void Campo::Dibuja(){

	suelo.Dibuja();
	techo.Dibuja();
	pared_dcha.Dibuja();
	pared_izq.Dibuja();
	red.Dibuja();

}