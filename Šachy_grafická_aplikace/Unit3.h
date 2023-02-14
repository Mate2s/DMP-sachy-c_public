//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class THistorie : public TForm
{
__published:	// IDE-managed Components
	TMemo *Memo1;
	TButton *Button1;
	TButton *Konec;
	TLabel *Label1;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall KonecClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall THistorie(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE THistorie *Historie;
//---------------------------------------------------------------------------
#endif
