//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "sachy_graf.h"
#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "sachy.h"
#include "hlavicky.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
THra *Hra;
//---------------------------------------------------------------------------
__fastcall THra::THra(TComponent* Owner)
	: TForm(Owner)
{

	srand(time(NULL));
	tretirozmer=20;
	zmena_pincla=0;
	obtiznost=0;
	int k,m;
	polerem=(int***)malloc(sizeof(int**)*8);							//alokace trirozmerneho pole
	for(k=0;k<8;k++)
	{                                                                    //pole urceno k zaznamu
		polerem[k]=(int**)malloc(sizeof(int*)*8);
		for(m=0;m<8;m++)
		{
			polerem[k][m]=(int*)malloc(sizeof(int)*tretirozmer);
		}
	}
	int yy,xx;
	for(yy=1;yy<9;yy++)
	{
		for(xx=1;xx<9;xx++)
		{
			 I[(8*(yy-1))+xx]=new TImage(pinclbb);
		}
	}

}
//---------------------------------------------------------------------------
void __fastcall THra::Button1Click(TObject *Sender)
{
	Panel1->Enabled=true;
	Edit2->Visible=false;
	Edit3->Visible=false;
	Label7->Visible=false;
	Label5->Visible=false;
	Label3->Visible=True;
	Label4->Visible=true;
	Panel1->Visible=true;
	Button1->Visible=false;
	Label3->Caption=Edit2->Text;
	Label4->Caption=Edit3->Text;
	nacistfigurky(pole);
	zmenarozmerusachovnice();
	Hra->vykresli();
	if(mod==3)
	{
		Timer1->Enabled=true;
	}
}
//---------------------------------------------------------------------------
void __fastcall THra::Button3Click(TObject *Sender)
{
	mod=1;
	tah=0;

	Mod->ShowModal();
	Button1->Visible=true;
	Button3->Visible=false;

}
//---------------------------------------------------------------------------





void __fastcall THra::Button4Click(TObject *Sender)
{

	int k,m;
	for(k=0;k<8;k++)                             //uvolneni 3rozmerneho pole
	{
		for(m=0;m<8;m++)
		{
			free(polerem[k][m]);
		}
		free(polerem[k]);
	}
	free(polerem);
	Application->Terminate();

}
//---------------------------------------------------------------------------

void THra::vykresli()
{

	 if(mod==3)
	 {
		 if((tah%2)!=0)
		 {
			pomoc->Width=Image65->Width;
			pomoc->Height=Image65->Width;
			pomoc->Left=pomoc->Left-((((Panel1->Width)-8)/8)/15);
			pomoc->Top=pomoc->Top-((((Panel1->Width)-8)/8)/15);
		 }
	 }
	 if(mod==2)
	 {
		if((tah%2)==0)
		 {
			pomoc->Width=Image65->Width;
			pomoc->Height=Image65->Width;
			pomoc->Left=pomoc->Left-((((Panel1->Width)-8)/8)/15);
			pomoc->Top=pomoc->Top-((((Panel1->Width)-8)/8)/15);
		 }
	 }
	 if(mod==1)
	 {
		pomoc->Width=Image65->Width;
		pomoc->Height=Image65->Width;
		pomoc->Left=pomoc->Left-((((Panel1->Width)-8)/8)/15);
		pomoc->Top=pomoc->Top-((((Panel1->Width)-8)/8)/15);
	 }



	int xx=1,yy=1;
	for(yy=1;yy<9;yy++)
	{
		for(xx=1;xx<9;xx++)
		{
			if(tah==0)
			{
				if((xx+yy)%2==0)
				{
					switch(pole[xx][yy])
					{
						case 1:I[(8*(yy-1))+xx]->Picture=pinclbb->Picture; 	break;
						case 2:I[(8*(yy-1))+xx]->Picture=kunbb->Picture;    break;
						case 3:I[(8*(yy-1))+xx]->Picture=strelecbb->Picture;break;
						case 4:I[(8*(yy-1))+xx]->Picture=vezbb->Picture;	break;
						case 5:I[(8*(yy-1))+xx]->Picture=damabb->Picture;	break;
						case 6:I[(8*(yy-1))+xx]->Picture=kralbb->Picture;	break;
						case 7:I[(8*(yy-1))+xx]->Picture=pinclcb->Picture;	break;
						case 8:I[(8*(yy-1))+xx]->Picture=kuncb->Picture;	break;
						case 9:I[(8*(yy-1))+xx]->Picture=streleccb->Picture;break;
						case 10:I[(8*(yy-1))+xx]->Picture=vezcb->Picture;	break;
						case 11:I[(8*(yy-1))+xx]->Picture=damacb->Picture;	break;
						case 12:I[(8*(yy-1))+xx]->Picture=kralcb->Picture;	break;
					}
					if(pole[xx][yy]>=13)
					{
						I[(8*(yy-1))+xx]->Picture=Image65->Picture;
					}
				}
				else
				{
					switch(pole[xx][yy])
					{
						case 1:I[(8*(yy-1))+xx]->Picture=pinclbc->Picture; 	break;
						case 2:I[(8*(yy-1))+xx]->Picture=kunbc->Picture;	break;
						case 3:I[(8*(yy-1))+xx]->Picture=strelecbc->Picture;break;
						case 4:I[(8*(yy-1))+xx]->Picture=vezbc->Picture;	break;
						case 5:I[(8*(yy-1))+xx]->Picture=damabc->Picture;	break;
						case 6:I[(8*(yy-1))+xx]->Picture=kralbc->Picture;	break;
						case 7:I[(8*(yy-1))+xx]->Picture=pinclcc->Picture;	break;
						case 8:I[(8*(yy-1))+xx]->Picture=kuncc->Picture;	break;
						case 9:I[(8*(yy-1))+xx]->Picture=streleccc->Picture;break;
						case 10:I[(8*(yy-1))+xx]->Picture=vezcc->Picture;	break;
						case 11:I[(8*(yy-1))+xx]->Picture=damacc->Picture;	break;
						case 12:I[(8*(yy-1))+xx]->Picture=kralcc->Picture;	break;
					}
					if(pole[xx][yy]>=13)
					{
						I[(8*(yy-1))+xx]->Picture=Image66->Picture;
					}
				}
			}
			else
			{
				if(pole[xx][yy]!=polerem[xx-1][yy-1][tah-1])
				{
					if((xx+yy)%2==0)
					{
						switch(pole[xx][yy])
						{
							case 1:I[(8*(yy-1))+xx]->Picture=pinclbb->Picture; 	break;
							case 2:I[(8*(yy-1))+xx]->Picture=kunbb->Picture;    break;
							case 3:I[(8*(yy-1))+xx]->Picture=strelecbb->Picture;break;
							case 4:I[(8*(yy-1))+xx]->Picture=vezbb->Picture;	break;
							case 5:I[(8*(yy-1))+xx]->Picture=damabb->Picture;	break;
							case 6:I[(8*(yy-1))+xx]->Picture=kralbb->Picture;	break;
							case 7:I[(8*(yy-1))+xx]->Picture=pinclcb->Picture;	break;
							case 8:I[(8*(yy-1))+xx]->Picture=kuncb->Picture;	break;
							case 9:I[(8*(yy-1))+xx]->Picture=streleccb->Picture;break;
							case 10:I[(8*(yy-1))+xx]->Picture=vezcb->Picture;	break;
							case 11:I[(8*(yy-1))+xx]->Picture=damacb->Picture;	break;
							case 12:I[(8*(yy-1))+xx]->Picture=kralcb->Picture;	break;
						}
						if(pole[xx][yy]>=13)
						{
							I[(8*(yy-1))+xx]->Picture=Image65->Picture;
						}
					}
					else
					{
						switch(pole[xx][yy])
						{
							case 1:I[(8*(yy-1))+xx]->Picture=pinclbc->Picture; 	break;
							case 2:I[(8*(yy-1))+xx]->Picture=kunbc->Picture;	break;
							case 3:I[(8*(yy-1))+xx]->Picture=strelecbc->Picture;break;
							case 4:I[(8*(yy-1))+xx]->Picture=vezbc->Picture;	break;
							case 5:I[(8*(yy-1))+xx]->Picture=damabc->Picture;	break;
							case 6:I[(8*(yy-1))+xx]->Picture=kralbc->Picture;	break;
							case 7:I[(8*(yy-1))+xx]->Picture=pinclcc->Picture;	break;
							case 8:I[(8*(yy-1))+xx]->Picture=kuncc->Picture;	break;
							case 9:I[(8*(yy-1))+xx]->Picture=streleccc->Picture;break;
							case 10:I[(8*(yy-1))+xx]->Picture=vezcc->Picture;	break;
							case 11:I[(8*(yy-1))+xx]->Picture=damacc->Picture;	break;
							case 12:I[(8*(yy-1))+xx]->Picture=kralcc->Picture;	break;
						}
						if(pole[xx][yy]>=13)
						{
							I[(8*(yy-1))+xx]->Picture=Image66->Picture;
						}
					}
				}
			}
		}
	}
}


void THra::zmenarozmerusachovnice()
{
	
	Image65->Width=((Panel1->Width-8)/8);
	int yy,xx;
	for(yy=1;yy<9;yy++)
	{
		for(xx=1;xx<9;xx++)
		{
			 I[(8*(yy-1))+xx]->Parent=Panel1;
			 I[(8*(yy-1))+xx]->Top=((yy-1)*((Panel1->Width-8)/8));
			 I[(8*(yy-1))+xx]->Left=((xx-1)*((Panel1->Width-8)/8));
			 I[(8*(yy-1))+xx]->Width=((Panel1->Width-8)/8);
			 I[(8*(yy-1))+xx]->Height=((Panel1->Width-8)/8);
			 I[(8*(yy-1))+xx]->Visible=true;
			 I[(8*(yy-1))+xx]->Stretch=true;
			 I[(8*(yy-1))+xx]->OnClick=pomocClick;
		}
	}
	pomoc=Image65;
	Label4->Top=Panel1->Top+Panel1->Height+20;

}


//---------------------------------------------------------------------------



void __fastcall THra::pomocClick(TObject *Sender)
{
	TImage *a=(TImage*)Sender;
	if(mod==1)
	{
		if(help!=1)
		{
		   help=1;
		   x=(a->Left+((Panel1->Width-8)/8))/((Panel1->Width-8)/8);
		   y=(a->Top+((Panel1->Width-8)/8))/((Panel1->Width-8)/8);
		   a->Top=(a->Top)+((((Panel1->Width)-8)/8)/15);
		   a->Left=(a->Left)+((((Panel1->Height)-8)/8)/15);
		   a->Width=(a->Width)-((((Panel1->Width)-8)/8)/10);
		   a->Height=(a->Height)-((((Panel1->Width)-8)/8)/10);
		   pomoc=a;
		}
		else
		{
			help=0;
			try
			{
				tahz(pole,x,y,(a->Left+((Panel1->Width-8)/8))/((Panel1->Width-8)/8),(a->Top+((Panel1->Width-8)/8))/((Panel1->Width-8)/8),&mod,&tah,&stav,polerem,&tretirozmer,&zmena_pincla,obtiznost);
			}
			catch(...)
			{
				Vyber->ShowModal();
				tahz(pole,x,y,(a->Left+((Panel1->Width-8)/8))/((Panel1->Width-8)/8),(a->Top+((Panel1->Width-8)/8))/((Panel1->Width-8)/8),&mod,&tah,&stav,polerem,&tretirozmer,&zmena_pincla,obtiznost);

			}
			Hra->vykresli();
			if(tah%2==0)
			{
				Label6->Caption=Label3->Caption+" je na tahu";
				Label6->Width=Hra->Width-(Panel1->Left+Panel1->Width)-25;
			}
			else
			{
				Label6->Caption=Label4->Caption+" je na tahu";
				Label6->Width=Hra->Width-(Panel1->Left+Panel1->Width)-25;
			}
			switch(stav)
			{
				case 1:	Label6->Caption=Label4->Caption+" má šach!";	break;
				case 2:	Label6->Caption=Label3->Caption+" má šach!";	break;
				case 3:	Label6->Caption=Label4->Caption+" dal mat! >>KONEC hry<<";
						try
						{
							Historie->Memo1->Lines->LoadFromFile("historie.txt");
							Historie->Memo1->Lines->Add("Ve dne "+Date()+" v "+Time()+" vyhrál "+Label4->Caption+" nad "+Label3->Caption);
							Historie->Memo1->Lines->SaveToFile("historie.txt");
						}
						catch(...)
						{
							Historie->Memo1->Lines->Add("Ve dne "+Date()+" v "+Time()+" vyhrál "+Label4->Caption+" nad "+Label3->Caption);
							Historie->Memo1->Lines->SaveToFile("historie.txt");
						}
						break;

				case 4:	Label6->Caption=Label3->Caption+" dal mat! >>KONEC hry<<";
						try
						{
							Historie->Memo1->Lines->LoadFromFile("historie.txt");
							Historie->Memo1->Lines->Add("Ve dne "+Date()+" v "+Time()+" vyhrál "+Label3->Caption+" nad "+Label4->Caption);
							Historie->Memo1->Lines->SaveToFile("historie.txt");
						}
						catch(...)
						{
							Historie->Memo1->Lines->Add("Ve dne "+Date()+" v "+Time()+" vyhrál "+Label3->Caption+" nad "+Label4->Caption);
							Historie->Memo1->Lines->SaveToFile("historie.txt");
						}
						break;

				case 5:	Label6->Caption="Remíza -KONEC hry";
						try
						{
							Historie->Memo1->Lines->LoadFromFile("historie.txt");
							Historie->Memo1->Lines->Add("Ve dne "+Date()+" v "+Time()+" "+Label3->Caption+" remízoval s "+Label4->Caption);
							Historie->Memo1->Lines->SaveToFile("historie.txt");
						}
						catch(...)
						{
							Historie->Memo1->Lines->Add("Ve dne "+Date()+" v "+Time()+" "+Label3->Caption+" remízoval s "+Label4->Caption);
							Historie->Memo1->Lines->SaveToFile("historie.txt");
						}
						break;

				case 6:	Label6->Caption="Zkuste táhnout tak,a nemáte šach ("+Label3->Caption+")";  break;
				case 7:	Label6->Caption="Zkuste táhnout tak,a nemáte šach ("+Label4->Caption+")";  break;
			}
			if(stav==3 || stav==4 || stav==5)
			{
				Panel1->Enabled=false;
				Button3->Visible=true;
				Button3->Caption="Nová hra";
			}
		}
	}
	if(mod==2)
	{
		if(0==(tah%2))               //je na rade bily(hrac)
		{
			if(help!=1)
			{
			   help=1;
			   x=(a->Left+((Panel1->Width-8)/8))/((Panel1->Width-8)/8);
			   y=(a->Top+((Panel1->Width-8)/8))/((Panel1->Width-8)/8);
			   a->Top=(a->Top)+((((Panel1->Width)-8)/8)/15);
			   a->Left=(a->Left)+((((Panel1->Height)-8)/8)/15);
			   a->Width=(a->Width)-((((Panel1->Width)-8)/8)/10);
			   a->Height=(a->Height)-((((Panel1->Width)-8)/8)/10);
			   pomoc=a;
			}
			else
			{
				help=0;
				try
				{
					tahz(pole,x,y,(a->Left+((Panel1->Width-8)/8))/((Panel1->Width-8)/8),(a->Top+((Panel1->Width-8)/8))/((Panel1->Width-8)/8),&mod,&tah,&stav,polerem,&tretirozmer,&zmena_pincla,obtiznost);
				}
				catch(...)
				{
					Vyber->ShowModal();
					tahz(pole,x,y,(a->Left+((Panel1->Width-8)/8))/((Panel1->Width-8)/8),(a->Top+((Panel1->Width-8)/8))/((Panel1->Width-8)/8),&mod,&tah,&stav,polerem,&tretirozmer,&zmena_pincla,obtiznost);
				}
				Hra->vykresli();
				if(tah%2==0)
				{
					Label6->Caption=Label3->Caption+" je na tahu";
					Label6->Width=Hra->Width-(Panel1->Left+Panel1->Width)-25;
				}
				else
				{
					Label6->Caption=Label4->Caption+" je na tahu";
					Label6->Width=Hra->Width-(Panel1->Left+Panel1->Width)-25;
				}
				switch(stav)
				{
					case 1:	Label6->Caption=Label4->Caption+" má šach!";	break;
					case 2:	Label6->Caption=Label3->Caption+" má šach!";	break;
					case 3:	Label6->Caption=Label4->Caption+" dal mat! >>KONEC hry<<";
                        	try
							{
								Historie->Memo1->Lines->LoadFromFile("historie.txt");
								Historie->Memo1->Lines->Add("Ve dne "+Date()+" v "+Time()+" vyhrál "+Label4->Caption+" nad "+Label3->Caption);
								Historie->Memo1->Lines->SaveToFile("historie.txt");
							}
							catch(...)
							{
								Historie->Memo1->Lines->Add("Ve dne "+Date()+" v "+Time()+" vyhrál "+Label4->Caption+" nad "+Label3->Caption);
								Historie->Memo1->Lines->SaveToFile("historie.txt");
							}
							break;

					case 4:	Label6->Caption=Label3->Caption+" dal mat! >>KONEC hry<<";
                        	try
							{
								Historie->Memo1->Lines->LoadFromFile("historie.txt");
								Historie->Memo1->Lines->Add("Ve dne "+Date()+" v "+Time()+" vyhrál "+Label3->Caption+" nad "+Label4->Caption);
								Historie->Memo1->Lines->SaveToFile("historie.txt");
							}
							catch(...)
							{
								Historie->Memo1->Lines->Add("Ve dne "+Date()+" v "+Time()+" vyhrál "+Label3->Caption+" nad "+Label4->Caption);
								Historie->Memo1->Lines->SaveToFile("historie.txt");
							}
							break;
					case 5:	Label6->Caption="Remíza -KONEC hry";
                        	try
							{
								Historie->Memo1->Lines->LoadFromFile("historie.txt");
								Historie->Memo1->Lines->Add("Ve dne "+Date()+" v "+Time()+" "+Label3->Caption+" remízoval s "+Label4->Caption);
								Historie->Memo1->Lines->SaveToFile("historie.txt");
							}
							catch(...)
							{
								Historie->Memo1->Lines->Add("Ve dne "+Date()+" v "+Time()+" "+Label3->Caption+" remízoval s "+Label4->Caption);
								Historie->Memo1->Lines->SaveToFile("historie.txt");
							}
							break;

					case 6:	Label6->Caption="Zkuste táhnout tak,a nemáte šach ("+Label3->Caption+")";  break;
					case 7:	Label6->Caption="Zkuste táhnout tak,a nemáte šach ("+Label4->Caption+")";  break;
				}
				if(stav==3 || stav==4 || stav==5)
				{
					Panel1->Enabled=false;
					Button3->Visible=true;
					Button3->Caption="Nová hra";
				}
				else
				{
					Timer1->Enabled=true;
				}
			}
		}
	}

	if(mod==3)
	{
						   //je na rade hrac
		if((tah%2)!=0)
		{
			if(help!=1)
			{
			   help=1;
			   x=(a->Left+((Panel1->Width-8)/8))/((Panel1->Width-8)/8);
			   y=(a->Top+((Panel1->Width-8)/8))/((Panel1->Width-8)/8);
			   a->Top=(a->Top)+((((Panel1->Width)-8)/8)/15);
			   a->Left=(a->Left)+((((Panel1->Height)-8)/8)/15);
			   a->Width=(a->Width)-((((Panel1->Width)-8)/8)/10);
			   a->Height=(a->Height)-((((Panel1->Width)-8)/8)/10);
			   pomoc=a;
			}
			else
			{
				help=0;
				try
				{
					tahz(pole,x,y,(a->Left+((Panel1->Width-8)/8))/((Panel1->Width-8)/8),(a->Top+((Panel1->Width-8)/8))/((Panel1->Width-8)/8),&mod,&tah,&stav,polerem,&tretirozmer,&zmena_pincla,obtiznost);
				}
				catch(...)
				{
					Vyber->ShowModal();
					tahz(pole,x,y,(a->Left+((Panel1->Width-8)/8))/((Panel1->Width-8)/8),(a->Top+((Panel1->Width-8)/8))/((Panel1->Width-8)/8),&mod,&tah,&stav,polerem,&tretirozmer,&zmena_pincla,obtiznost);
				}
				Hra->vykresli();
				if(tah%2==0)
				{
					Label6->Caption=Label3->Caption+" je na tahu";
					Label6->Width=Hra->Width-(Panel1->Left+Panel1->Width)-25;
				}
				else
				{
					Label6->Caption=Label4->Caption+" je na tahu";
					Label6->Width=Hra->Width-(Panel1->Left+Panel1->Width)-25;
				}
				switch(stav)
				{
					case 1:	Label6->Caption=Label4->Caption+" má šach!";	break;
					case 2:	Label6->Caption=Label3->Caption+" má šach!";	break;
					case 3:	Label6->Caption=Label4->Caption+" dal mat! >>KONEC hry<<";
                        	try
							{
								Historie->Memo1->Lines->LoadFromFile("historie.txt");
								Historie->Memo1->Lines->Add("Ve dne "+Date()+" v "+Time()+" vyhrál "+Label4->Caption+" nad "+Label3->Caption);
								Historie->Memo1->Lines->SaveToFile("historie.txt");
							}
							catch(...)
							{
								Historie->Memo1->Lines->Add("Ve dne "+Date()+" v "+Time()+" vyhrál "+Label4->Caption+" nad "+Label3->Caption);
								Historie->Memo1->Lines->SaveToFile("historie.txt");
							}
							break;

					case 4:	Label6->Caption=Label3->Caption+" dal mat! >>KONEC hry<<";
							try
							{
								Historie->Memo1->Lines->LoadFromFile("historie.txt");
								Historie->Memo1->Lines->Add("Ve dne "+Date()+" v "+Time()+" vyhrál "+Label3->Caption+" nad "+Label4->Caption);
								Historie->Memo1->Lines->SaveToFile("historie.txt");
							}
							catch(...)
							{
								Historie->Memo1->Lines->Add("Ve dne "+Date()+" v "+Time()+" vyhrál "+Label3->Caption+" nad "+Label4->Caption);
								Historie->Memo1->Lines->SaveToFile("historie.txt");
							}
							break;

					case 5:	Label6->Caption="Remíza -KONEC hry";
                        	try
							{
								Historie->Memo1->Lines->LoadFromFile("historie.txt");
								Historie->Memo1->Lines->Add("Ve dne "+Date()+" v "+Time()+" "+Label3->Caption+" remízoval s "+Label4->Caption);
								Historie->Memo1->Lines->SaveToFile("historie.txt");
							}
							catch(...)
							{
								Historie->Memo1->Lines->Add("Ve dne "+Date()+" v "+Time()+" "+Label3->Caption+" remízoval s "+Label4->Caption);
								Historie->Memo1->Lines->SaveToFile("historie.txt");
							}
							break;

					case 6:	Label6->Caption="Zkuste táhnout tak,a nemáte šach ("+Label3->Caption+")";  break;
					case 7:	Label6->Caption="Zkuste táhnout tak,a nemáte šach ("+Label4->Caption+")";  break;
				}
				if(stav==3 || stav==4 || stav==5)
				{
					Panel1->Enabled=false;
					Button3->Visible=true;
					Button3->Caption="Nová hra";
				}
				else
				{
					Timer1->Enabled=true;
				}
			}
		}
	}
}
//--------------------------------------------------------------------------


void __fastcall THra::FormResize(TObject *Sender)
{
	if(Hra->Height>=1000)
	{
		if(Hra->Width>=1200)
		{
         	Panel1->Width=808;
			Panel1->Height=808;
		}
		else
        {
			if(Hra->Width>=1000)
			{
				Panel1->Width=608;
				Panel1->Height=608;
			}
			else
			{
             	Panel1->Width=408;
				Panel1->Height=408;
            }
        }
	}
	else
	{
		if(Hra->Height>=800)
		{
			if(Hra->Width>=1000)
			{
				Panel1->Width=608;
				Panel1->Height=608;
			}
			else
			{
            	Panel1->Width=408;
				Panel1->Height=408;
            }
		}
		else
		{
			if(Hra->Width>=800)
			{
				Panel1->Width=408;
				Panel1->Height=408;
			}
		}
	}


	Panel1->Left=((Hra->Width/2)-(Panel1->Width/2)-8);
	Label4->Left=((Hra->Width/2)-(Panel1->Width/2));
	Label3->Left=((Hra->Width/2)-(Panel1->Width/2));
	Button3->Left=Hra->Width-200;
	Button4->Left=Hra->Width-200;
	Button1->Left=Hra->Width-200;
	Label6->Top=(Panel1->Top+(Panel1->Height/2)-6);
	Label6->Left=(Panel1->Left+Panel1->Width)+10;
	Label6->Constraints->MaxWidth=Hra->Width-(Panel1->Left+Panel1->Width);
	Label6->Width=Hra->Width-(Panel1->Left+Panel1->Width)-25;
}
//---------------------------------------------------------------------------

void __fastcall THra::Panel1Resize(TObject *Sender)
{
	zmenarozmerusachovnice();
	Hra->Height=Panel1->Width+200;
}
//---------------------------------------------------------------------------


void __fastcall THra::Novahra1Click(TObject *Sender)
{
	mod=1;
	tah=0;
	Mod->ShowModal();
	Button1->Visible=true;
	Button3->Visible=false;
}
//---------------------------------------------------------------------------


void __fastcall THra::Ukonit1Click(TObject *Sender)
{
	int k,m;
	for(k=0;k<8;k++)                             //uvolneni 3rozmerneho pole
	{
		for(m=0;m<8;m++)
		{
			free(polerem[k][m]);
		}
		free(polerem[k]);
	}
	free(polerem);
	Application->Terminate();
}
//---------------------------------------------------------------------------



void __fastcall THra::neznteachy1Click(TObject *Sender)
{
	ShowMessage(AnsiString("\tInformace o høe na: \n\n http://cs.wikipedia.org/wiki/Šachy"));
}
//---------------------------------------------------------------------------

void __fastcall THra::Oprogramu1Click(TObject *Sender)
{
	ShowMessage(AnsiString("Tento program byl vytvoøen ve školním roce 2013/2014 \n\tza úèelem DMP, tvùrcem je Matìj Kotyz"));
}
//---------------------------------------------------------------------------






void __fastcall THra::Timer1Timer(TObject *Sender)
{
	if(mod==2)
	{
		if(0!=(tah%2))               //je na rade poèítaè
		{
			 tahz(pole,x,y,1,2,&mod,&tah,&stav,polerem,&tretirozmer,&zmena_pincla,obtiznost);
			 Hra->vykresli();
			 if(tah%2==0)
			 {
				Label6->Caption=Label3->Caption+" je na tahu";
				Label6->Width=Hra->Width-(Panel1->Left+Panel1->Width)-25;
			 }
			 else
			 {
				Label6->Caption=Label4->Caption+" je na tahu";
				Label6->Width=Hra->Width-(Panel1->Left+Panel1->Width)-25;
			 }
			 switch(stav)
			 {
				case 1:	Label6->Caption=Label4->Caption+" má šach!";	break;
				case 2:	Label6->Caption=Label3->Caption+" má šach!";	break;
				case 3:	Label6->Caption=Label4->Caption+" dal mat! >>KONEC hry<<";
                    	try
						{
							Historie->Memo1->Lines->LoadFromFile("historie.txt");
							Historie->Memo1->Lines->Add("Ve dne "+Date()+" v "+Time()+" vyhrál "+Label4->Caption+" nad "+Label3->Caption);
							Historie->Memo1->Lines->SaveToFile("historie.txt");
						}
						catch(...)
						{
							Historie->Memo1->Lines->Add("Ve dne "+Date()+" v "+Time()+" vyhrál "+Label4->Caption+" nad "+Label3->Caption);
							Historie->Memo1->Lines->SaveToFile("historie.txt");
						}
						break;

				case 4:	Label6->Caption=Label3->Caption+" dal mat! >>KONEC hry<<";
                    	try
						{
							Historie->Memo1->Lines->LoadFromFile("historie.txt");
							Historie->Memo1->Lines->Add("Ve dne "+Date()+" v "+Time()+" vyhrál "+Label3->Caption+" nad "+Label4->Caption);
							Historie->Memo1->Lines->SaveToFile("historie.txt");
						}
						catch(...)
						{
							Historie->Memo1->Lines->Add("Ve dne "+Date()+" v "+Time()+" vyhrál "+Label3->Caption+" nad "+Label4->Caption);
							Historie->Memo1->Lines->SaveToFile("historie.txt");
						}
						break;

				case 5:	Label6->Caption="Remíza -KONEC hry";
                        try
						{
							Historie->Memo1->Lines->LoadFromFile("historie.txt");
							Historie->Memo1->Lines->Add("Ve dne "+Date()+" v "+Time()+" "+Label3->Caption+" remízoval s "+Label4->Caption);
							Historie->Memo1->Lines->SaveToFile("historie.txt");
						}
						catch(...)
						{
							Historie->Memo1->Lines->Add("Ve dne "+Date()+" v "+Time()+" "+Label3->Caption+" remízoval s "+Label4->Caption);
							Historie->Memo1->Lines->SaveToFile("historie.txt");
						}
						break;

				case 6:	Label6->Caption="Zkuste táhnout tak,a nemáte šach ("+Label3->Caption+")";  break;
				case 7:	Label6->Caption="Zkuste táhnout tak,a nemáte šach ("+Label4->Caption+")";  break;
			 }
			 if(stav==3 || stav==4 || stav==5)
			 {
				Panel1->Enabled=false;
				Button3->Visible=true;
				Button3->Caption="Nová hra";
			 }
		}
		Timer1->Enabled=false;
	}

	if(mod==3)
	{
		if((tah%2)==0)
		{
			tahz(pole,x,y,1,2,&mod,&tah,&stav,polerem,&tretirozmer,&zmena_pincla,obtiznost);
			Hra->vykresli();
			if(tah%2==0)
			{
				Label6->Caption=Label3->Caption+" je na tahu";
				Label6->Width=Hra->Width-(Panel1->Left+Panel1->Width)-25;
			}
			else
			{
				Label6->Caption=Label4->Caption+" je na tahu";
				Label6->Width=Hra->Width-(Panel1->Left+Panel1->Width)-25;
			}
			switch(stav)
			{
				case 1:	Label6->Caption=Label4->Caption+" má šach!";	break;
				case 2:	Label6->Caption=Label3->Caption+" má šach!";	break;
				case 3:	Label6->Caption=Label4->Caption+" dal mat! >>KONEC hry<<";
                    	try
						{
							Historie->Memo1->Lines->LoadFromFile("historie.txt");
							Historie->Memo1->Lines->Add("Ve dne "+Date()+" v "+Time()+" vyhrál "+Label4->Caption+" nad "+Label3->Caption);
							Historie->Memo1->Lines->SaveToFile("historie.txt");
						}
						catch(...)
						{
							Historie->Memo1->Lines->Add("Ve dne "+Date()+" v "+Time()+" vyhrál "+Label4->Caption+" nad "+Label3->Caption);
							Historie->Memo1->Lines->SaveToFile("historie.txt");
						}
						break;

				case 4:	Label6->Caption=Label3->Caption+" dal mat! >>KONEC hry<<";
                    	try
						{
							Historie->Memo1->Lines->LoadFromFile("historie.txt");
							Historie->Memo1->Lines->Add("Ve dne "+Date()+" v "+Time()+" vyhrál "+Label3->Caption+" nad "+Label4->Caption);
							Historie->Memo1->Lines->SaveToFile("historie.txt");
						}
						catch(...)
						{
							Historie->Memo1->Lines->Add("Ve dne "+Date()+" v "+Time()+" vyhrál "+Label3->Caption+" nad "+Label4->Caption);
							Historie->Memo1->Lines->SaveToFile("historie.txt");
						}
						break;

				case 5:	Label6->Caption="Remíza -KONEC hry";
                    	try
						{
							Historie->Memo1->Lines->LoadFromFile("historie.txt");
							Historie->Memo1->Lines->Add("Ve dne "+Date()+" v "+Time()+" "+Label3->Caption+" remízoval s "+Label4->Caption);
							Historie->Memo1->Lines->SaveToFile("historie.txt");
						}
						catch(...)
						{
							Historie->Memo1->Lines->Add("Ve dne "+Date()+" v "+Time()+" "+Label3->Caption+" remízoval s "+Label4->Caption);
							Historie->Memo1->Lines->SaveToFile("historie.txt");
						}
						break;

				case 6:	Label6->Caption="Zkuste táhnout tak,a nemáte šach ("+Label3->Caption+")";  break;
				case 7:	Label6->Caption="Zkuste táhnout tak,a nemáte šach ("+Label4->Caption+")";  break;
			}
			if(stav==3 || stav==4 || stav==5)
			{
				Panel1->Enabled=false;
				Button3->Visible=true;
				Button3->Caption="Nová hra";
			}
		}
		Timer1->Enabled=false;
	}
	if(mod==4)
	{
		tahz(pole,x,y,1,2,&mod,&tah,&stav,polerem,&tretirozmer,&zmena_pincla,obtiznost);
		Hra->vykresli();
		if(tah%2==0)
		{
			Label6->Caption=Label3->Caption+" je na tahu";
			Label6->Width=Hra->Width-(Panel1->Left+Panel1->Width)-25;
		}
		else
		{
			Label6->Caption=Label4->Caption+" je na tahu";
			Label6->Width=Hra->Width-(Panel1->Left+Panel1->Width)-25;
		}
		switch(stav)
		{
			case 1:	Label6->Caption=Label4->Caption+" má šach!";	break;
			case 2:	Label6->Caption=Label3->Caption+" má šach!";	break;
			case 3:	Label6->Caption=Label4->Caption+" dal mat! >>KONEC hry<<";
					try
					{
						Historie->Memo1->Lines->LoadFromFile("historie.txt");
						Historie->Memo1->Lines->Add("Ve dne "+Date()+" v "+Time()+" vyhrál "+Label4->Caption+" nad "+Label3->Caption);
						Historie->Memo1->Lines->SaveToFile("historie.txt");
					}
					catch(...)
					{
						Historie->Memo1->Lines->Add("Ve dne "+Date()+" v "+Time()+" vyhrál "+Label4->Caption+" nad "+Label3->Caption);
						Historie->Memo1->Lines->SaveToFile("historie.txt");
					}
					break;

			case 4:	Label6->Caption=Label3->Caption+" dal mat! >>KONEC hry<<";
                	try
					{
						Historie->Memo1->Lines->LoadFromFile("historie.txt");
						Historie->Memo1->Lines->Add("Ve dne "+Date()+" v "+Time()+" vyhrál "+Label3->Caption+" nad "+Label4->Caption);
						Historie->Memo1->Lines->SaveToFile("historie.txt");
					}
					catch(...)
					{
						Historie->Memo1->Lines->Add("Ve dne "+Date()+" v "+Time()+" vyhrál "+Label3->Caption+" nad "+Label4->Caption);
						Historie->Memo1->Lines->SaveToFile("historie.txt");
					}
					break;

			case 5:	Label6->Caption="Remíza -KONEC hry";
                	try
					{
						Historie->Memo1->Lines->LoadFromFile("historie.txt");
						Historie->Memo1->Lines->Add("Ve dne "+Date()+" v "+Time()+" "+Label3->Caption+" remízoval s "+Label4->Caption);
						Historie->Memo1->Lines->SaveToFile("historie.txt");
					}
					catch(...)
					{
						Historie->Memo1->Lines->Add("Ve dne "+Date()+" v "+Time()+" "+Label3->Caption+" remízoval s "+Label4->Caption);
						Historie->Memo1->Lines->SaveToFile("historie.txt");
					}
					break;
					
			case 6:	Label6->Caption="Zkuste táhnout tak,a nemáte šach ("+Label3->Caption+")";  break;
			case 7:	Label6->Caption="Zkuste táhnout tak,a nemáte šach ("+Label4->Caption+")";  break;
		}
		if(stav==3 || stav==4 || stav==5)
		{
			Panel1->Enabled=false;
			Button3->Visible=true;
			Button3->Caption="Nová hra";
			Timer1->Enabled=false;
		}
	}
}
//---------------------------------------------------------------------------




void __fastcall THra::Historie1Click(TObject *Sender)
{
	try
	{
		Historie->Memo1->Lines->LoadFromFile("historie.txt");
		Historie->Show();
	}
	catch(...)
	{
		Historie->Show();
	}

}
//---------------------------------------------------------------------------





