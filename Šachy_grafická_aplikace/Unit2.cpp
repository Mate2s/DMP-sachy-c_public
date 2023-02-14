//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "sachy_graf.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TVyber *Vyber;
//---------------------------------------------------------------------------
__fastcall TVyber::TVyber(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TVyber::kunClick(TObject *Sender)
{
	if(Hra->tah%2!=0)
	{
		Hra->zmena_pincla=8;
	}
	else
	{
		Hra->zmena_pincla=2;
	}
	Vyber->Close();
}
//---------------------------------------------------------------------------
void __fastcall TVyber::strelecClick(TObject *Sender)
{
	if(Hra->tah%2!=0)
	{
		Hra->zmena_pincla=9;
	}
	else
	{
		Hra->zmena_pincla=3;
	}
	Vyber->Close();
}
//---------------------------------------------------------------------------
void __fastcall TVyber::vezClick(TObject *Sender)
{
	if(Hra->tah%2!=0)
	{
		Hra->zmena_pincla=10;
	}
	else
	{
		Hra->zmena_pincla=4;
	}
	Vyber->Close();
}
//---------------------------------------------------------------------------
void __fastcall TVyber::damaClick(TObject *Sender)
{
	if(Hra->tah%2!=0)
	{
		Hra->zmena_pincla=11;
	}
	else
	{
		Hra->zmena_pincla=5;
	}
	Vyber->Close();
}
//---------------------------------------------------------------------------
