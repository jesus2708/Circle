#pragma once  //______________________________________ Circle.h  
#include "Resource.h"
class Circle: public Win::Dialog
{
public:
	Circle()
	{
	}
	~Circle()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Textbox tbxRadio;
	Win::Label lb1;
	Win::Button btCalcular;
	Win::Label lb4;
	Win::Label lb5;
	Win::Textbox tbxArea;
	Win::Textbox tbxPerimetro;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx=Sys::Convert::CentimetersToDlgUnitX(14.04938);
		dlgTemplate.cy=Sys::Convert::CentimetersToDlgUnitY(2.16958);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"Circle";
		tbxRadio.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 2.88396, 0.79375, 2.03729, 0.60854, hWnd, 1000);
		lb1.CreateX(NULL, L"Radio", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.44979, 0.79375, 1.93146, 0.60854, hWnd, 1001);
		btCalcular.CreateX(NULL, L"Calcular", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 5.34458, 0.82021, 2.77812, 0.68792, hWnd, 1002);
		lb4.CreateX(NULL, L"Area", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 8.51958, 0.44979, 1.98438, 0.60854, hWnd, 1003);
		lb5.CreateX(NULL, L"Perimetro", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 8.59896, 1.37583, 2.03729, 0.60854, hWnd, 1004);
		tbxArea.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 11.13896, 0.44979, 2.72521, 0.60854, hWnd, 1005);
		tbxPerimetro.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 11.16542, 1.37583, 2.69875, 0.60854, hWnd, 1006);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		tbxRadio.Font = fontArial009A;
		lb1.Font = fontArial009A;
		btCalcular.Font = fontArial009A;
		lb4.Font = fontArial009A;
		lb5.Font = fontArial009A;
		tbxArea.Font = fontArial009A;
		tbxPerimetro.Font = fontArial009A;
	}
	//_________________________________________________
	void btCalcular_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btCalcular.IsEvent(e, BN_CLICKED)) {btCalcular_Click(e); return true;}
		return false;
	}
};
