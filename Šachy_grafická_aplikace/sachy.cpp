//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
//---------------------------------------------------------------------------
USEFORM("sachy_graf.cpp", Hra);
USEFORM("Unit1.cpp", Mod);
USEFORM("Unit2.cpp", Vyber);
USEFORM("Unit3.cpp", Historie);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	try
	{
		Application->Initialize();
		Application->CreateForm(__classid(THra), &Hra);
		Application->CreateForm(__classid(TMod), &Mod);
		Application->CreateForm(__classid(TVyber), &Vyber);
		Application->CreateForm(__classid(THistorie), &Historie);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
