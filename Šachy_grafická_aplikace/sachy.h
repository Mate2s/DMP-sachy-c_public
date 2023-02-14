#ifndef funkceh
#define funkceh
#ifdef __cplusplus
extern "C" {
#endif

int vlastnisachb(int pole[9][9]);                     				//pouziti pro zjisteni vlastniho sachu
int vlastnisachc(int pole[9][9]);                                     //pouziti pro zjisteni vlastniho sachu
int sachc(int pole[9][9]);                                            //pouziti pro zjisteni dostani sachu(vlastne to same jak vlastnisach bez krale)
int sachb(int pole[9][9]);                                           	//pouziti pro zjisteni dostani sachu(vlastne to same jak vlastnisach bez krale)
int obranasachub(int pole[9][9]);                                     //pouziti pro zjisteni matu/remizy
int obranasachuc(int pole[9][9]);                                     //pouziti pro zjisteni matu/remizy
void tahz(int pole[9][9],int x, int y,int o, int p,int *mod,int *tah,int *stav,int ***polerem,int *tretirozmer,int *zmena_pincla,int obtiznost);  //udela tah
void nacistfigurky(int pole[9][9]);                                   //nacte figurky na sachovnici
int remiza(int pole[9][9]);                                           //pouziti pro zjisteni remizy
void stavc(int *cerne,int pole[9][9]);                          //zjisteni hodnoty vsech cernych figur
void stavb(int *bile,int pole[9][9]);                          //zjisteni hodnoty vsech bilých figur

void aib(int *x,int *y,int *xkam,int *ykam,int pole[9][9],int obtiznost);       //umela inteligence bilych
void aic(int *x,int *y,int *xkam,int *ykam,int pole[9][9],int obtiznost);       //umela inteligence cernych

typedef struct{
	int x;
	int y;
	int xx;
	int yy;
}souradnice;

void vnitrekrtah(int *figurka,int *tah,int a,int b,int c,int d,int pole[9][9],souradnice vyber[16][20]);                  //funkce pro zjistìní všech možných tahù pro následné použití pro náhodný tah v hlavní funkci aicallinone
void vnitrekzacatekaic(int *x,int *y,int *xkam,int *ykam,int *hodnotab,int a,int b,int c,int d,int startstavb,int pole[9][9]);     //vrat souradnice "nejlepsiho" mozneho 1.tahu bez ohledu na dalsi tahy
void vnitrekaic(int *x,int *y,int *xkam,int *ykam,int *hodnotab,int *hodnotac,int *hodnotas,int a,int b,int c,int d,int startstavb,int startstavc,int pole[9][9]);         //funkce pro simulaci tahù, vybere "nejlepší" možný tah
void vnitrekaicc(int *x,int *y,int *xkam,int *ykam,int *hodnotab,int *hodnotac,int *hodnotas,int a,int b,int c,int d,int startstavb,int startstavc,int pole[9][9]);        //funkce pro simulaci 2.tahu
void vnitrekaiccc(int *x,int *y,int *xkam,int *ykam,int *hodnotab,int *hodnotac,int *hodnotas,int a,int b,int c,int d,int startstavb,int startstavc,int pole[9][9]);       //funkce pro simulaci 3.tahu
void vnitrekprotitahaib(int *x,int *y,int *xkam,int *ykam,int *hodnotab,int a,int b,int c,int d,int startstavb,int pole[9][9]);                         //zjisti "nejlepsi" protitah

void vnitrekrtahb(int *figurka,int *tah,int a,int b,int c,int d,int pole[9][9],souradnice vyber[16][20]);               //funkce pro zjistìní všech možných tahù pro následné použití pro náhodný tah v hlavní funkci aiballinone
void vnitrekzacatekaib(int *x,int *y,int *xkam,int *ykam,int *hodnotac,int a,int b,int c,int d,int startstavc,int pole[9][9]);      //vrat souradnice "nejlepsiho" mozneho 1.tahu bez ohledu na dalsi tahy
void vnitrekaib(int *x,int *y,int *xkam,int *ykam,int *hodnotac,int *hodnotab,int *hodnotas,int a,int b,int c,int d,int startstavb,int startstavc,int pole[9][9]);        //funkce pro simulaci tahù, vybere "nejlepší" možný tah
void vnitrekaibb(int *x,int *y,int *xkam,int *ykam,int *hodnotac,int *hodnotab,int *hodnotas,int a,int b,int c,int d,int startstavb,int startstavc,int pole[9][9]);       //funkce pro simulaci 2.tahu
void vnitrekaibbb(int *x,int *y,int *xkam,int *ykam,int *hodnotac,int *hodnotab,int *hodnotas,int a,int b,int c,int d,int startstavb,int startstavc,int pole[9][9]);      //funkce pro simulaci 3.tahu
void vnitrekprotitahaic(int *x,int *y,int *xkam,int *ykam,int *hodnotac,int a,int b,int c,int d,int startstavc,int pole[9][9]);                        //zjisti "nejlepsi" protitah

void aicallinone(int *x,int *y,int *xkam,int *ykam,int *hodnotab,int *hodnotac,int *hodnotas,int a,int b,int c,int d,int startstavb,int startstavc,int pole[9][9],int vnoreni);       //kostra pro ostatni funkce umelé inteligence pro èerné
void vnitrekaicallinone(int *x,int *y,int *xkam,int *ykam,int *hodnotab,int *hodnotac,int *figurka,int *hodnotas,int *tah,int a,int b,int c,int d,int startstavb,int startstavc,int pole[9][9],souradnice vyber[16][20],int vnoreni);

void vnitrekaiballinone(int *x,int *y,int *xkam,int *ykam,int *hodnotac,int *hodnotab,int *figurka,int *hodnotas,int *tah,int a,int b,int c,int d,int startstavb,int startstavc,int pole[9][9],souradnice vyber[16][20],int vnoreni);
void aiballinone(int *x,int *y,int *xkam,int *ykam,int *hodnotac,int *hodnotab,int *hodnotas,int a,int b,int c,int d,int startstavb,int startstavc,int pole[9][9],int vnoreni);      //kostra pro ostatni funkce umelé inteligence pro bílé

#ifdef __cplusplus
}
#endif
#endif
