//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
THistorie *Historie;
//---------------------------------------------------------------------------
__fastcall THistorie::THistorie(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall THistorie::Button1Click(TObject *Sender)
{
	Memo1->Clear();
	Memo1->Lines->SaveToFile("historie.txt");
}
//---------------------------------------------------------------------------
void __fastcall THistorie::KonecClick(TObject *Sender)
{
	Historie->Close();	
}
//---------------------------------------------------------------------------
