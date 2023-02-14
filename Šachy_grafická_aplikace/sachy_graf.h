//---------------------------------------------------------------------------

#ifndef sachy_grafH
#define sachy_grafH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
#include <ImgList.hpp>
#include <CheckLst.hpp>
#include <Menus.hpp>
#include <HTTPApp.hpp>

//---------------------------------------------------------------------------
class THra : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TImage *Image65;
	TButton *Button1;
	TImage *Image66;
	TEdit *Edit1;
	TEdit *Edit2;
	TButton *Button3;
	TLabel *Label5;
	TImage *damabb;
	TImage *damabc;
	TImage *damacb;
	TImage *damacc;
	TImage *kralbb;
	TImage *kralbc;
	TImage *kralcb;
	TImage *kralcc;
	TImage *kunbb;
	TImage *kunbc;
	TImage *kuncb;
	TImage *kuncc;
	TImage *pinclbb;
	TImage *pinclbc;
	TImage *pinclcb;
	TImage *pinclcc;
	TImage *strelecbb;
	TImage *strelecbc;
	TImage *streleccb;
	TImage *streleccc;
	TImage *vezbb;
	TImage *vezbc;
	TImage *vezcb;
	TImage *vezcc;
	TButton *Button4;
	TLabel *Label6;
	TLabel *Label7;
	TEdit *Edit3;
	TImage *pomoc;
	TMainMenu *S;
	TMenuItem *Hra1;
	TMenuItem *Novahra1;
	TMenuItem *Ukonit1;
	TMenuItem *Npovda1;
	TMenuItem *neznteachy1;
	TMenuItem *Oprogramu1;
	TTimer *Timer1;
	TMenuItem *Historie1;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall pomocClick(TObject *Sender);
	void __fastcall FormResize(TObject *Sender);
	void __fastcall Panel1Resize(TObject *Sender);
	void __fastcall Novahra1Click(TObject *Sender);
	void __fastcall Ukonit1Click(TObject *Sender);
	void __fastcall neznteachy1Click(TObject *Sender);
	void __fastcall Oprogramu1Click(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall Historie1Click(TObject *Sender);
private:

public:
	int tah;
	int pole[9][9];
	int mod;
	int help;
	int x;
	int y;
	int stav;
	int mat;
	int ***polerem;
	int tretirozmer;
	int zmena_pincla;
	int obtiznost;
	TImage *I[65];
	void vykresli();
	void zmenarozmerusachovnice();
	__fastcall THra(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE THra *Hra;
//---------------------------------------------------------------------------
#endif
