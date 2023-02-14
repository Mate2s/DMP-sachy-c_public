//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TVyber : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TButton *kun;
	TButton *strelec;
	TButton *vez;
	TButton *dama;
	void __fastcall kunClick(TObject *Sender);
	void __fastcall strelecClick(TObject *Sender);
	void __fastcall vezClick(TObject *Sender);
	void __fastcall damaClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TVyber(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TVyber *Vyber;
//---------------------------------------------------------------------------
#endif
