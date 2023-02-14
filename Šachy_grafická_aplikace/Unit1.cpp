//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "sachy_graf.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TMod *Mod;
//---------------------------------------------------------------------------
__fastcall TMod::TMod(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TMod::Button1Click(TObject *Sender)
{
	Hra->mod=1;
	Hra->Label5->Visible=true;
	Hra->Label7->Visible=true;
	Hra->Edit3->Visible=true;
	Hra->Edit2->Visible=true;
	Mod->Close();
}
//---------------------------------------------------------------------------
void __fastcall TMod::Button3Click(TObject *Sender)
{
	Hra->Label5->Visible=true;
	Hra->Edit2->Visible=true;
	Hra->Edit3->Text="Poèítaè";
	Hra->mod=2;
	Hra->obtiznost=RadioGroup1->ItemIndex;
	Mod->Close();
}
//---------------------------------------------------------------------------
void __fastcall TMod::Button4Click(TObject *Sender)
{
	Hra->Label7->Visible=true;
	Hra->Edit3->Visible=true;
	Hra->Edit2->Text="Poèítaè";
	Hra->mod=3;
	Hra->obtiznost=RadioGroup1->ItemIndex;
	Mod->Close();
}
//---------------------------------------------------------------------------
void __fastcall TMod::FormCreate(TObject *Sender)
{
	Hra->mod=1;
	Hra->tah=0;

	Mod->ShowModal();
	Hra->Button1->Visible=true;
	Hra->Button3->Visible=false;
Mod->Top=Hra->Top+(Hra->Height/2)-145;
Mod->Left=Hra->Left+(Hra->Width/2)-175;
}
//---------------------------------------------------------------------------

void __fastcall TMod::Button2Click(TObject *Sender)
{
	Hra->mod=rand()%2+2;
	if(Hra->mod==3)
	{
		Hra->Label7->Visible=true;
		Hra->Edit3->Visible=true;
		Hra->Edit2->Text="Poèítaè";
	}
	if(Hra->mod==2)
	{
		Hra->Label5->Visible=true;
		Hra->Edit2->Visible=true;
		Hra->Edit3->Text="Poèítaè";
	}
	Hra->obtiznost=RadioGroup1->ItemIndex;
	Mod->Close();
}
//---------------------------------------------------------------------------

