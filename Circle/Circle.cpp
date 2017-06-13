#include "stdafx.h"  //________________________________________ Circle.cpp
#include "Circle.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	Circle app;
	return app.BeginDialog(IDI_Circle, hInstance);
}

void Circle::Window_Open(Win::Event& e)
{
}

void Circle::btCalcular_Click(Win::Event& e)
{
	int pregunta = this->MessageBox(L"Quieres usar pies", L"Circle", MB_YESNO | MB_ICONQUESTION);
	if (pregunta == IDYES)
	{
		double radio = tbxRadio.DoubleValue;
		this->tbxArea.DoubleValue = radio;
		double area = (radio*radio)*(M_PI);
		double perimetro = 2 * M_PI*radio;
		this->tbxArea.DoubleValue = area * 0.032808398950131;
		this->tbxPerimetro.DoubleValue = perimetro * 0.032808398950131;
	}
	else
	{
		double radio = tbxRadio.DoubleValue;
		this->tbxArea.DoubleValue = radio;
		double area = (radio*radio)*(M_PI);
		double perimetro = 2 * M_PI*radio;
		this->tbxArea.DoubleValue = area;
		this->tbxPerimetro.DoubleValue = perimetro;
	}

}

