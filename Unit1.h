//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Menus.hpp>
#include <ExtCtrls.hpp>
#include <Dialogs.hpp>
#include <string.h>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TPanel *Panel1;
        TPanel *Panel2;
        TPanel *Panel3;
        TPanel *Panel4;
        TPanel *Panel5;
        TPanel *Panel6;
        TPanel *Panel7;
        TPanel *Panel8;
        TPanel *Panel9;
        TPanel *Panel10;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label6;
        TLabel *Label7;
        TLabel *Label8;
        TLabel *Label9;
        TLabel *Label10;
        TLabel *Label11;
        TLabel *Label12;
        TLabel *Label13;
        TLabel *Label14;
        TLabel *Label15;
        TLabel *Label16;
        TLabel *Label17;
        TLabel *Label18;
        TLabel *Label19;
        TLabel *Label20;
        TLabel *Label21;
        TLabel *Label22;
        TLabel *Label23;
        TLabel *Label24;
        TLabel *Label25;
        TLabel *Label26;
        TLabel *Label27;
        TLabel *Label28;
        TLabel *Label29;
        TLabel *Label30;
        TLabel *Label31;
        TLabel *Label32;
        TLabel *Label33;
        TLabel *Label34;
        TLabel *Label35;
        TLabel *Label36;
        TLabel *Label37;
        TLabel *Label38;
        TLabel *Label39;
        TLabel *Label40;
        TLabel *Label41;
        TLabel *Label42;
        TLabel *Label43;
        TLabel *Label44;
        TLabel *Label45;
        TLabel *Label46;
        TLabel *Label47;
        TLabel *Label48;
        TLabel *Label49;
        TLabel *Label50;
        TLabel *Label51;
        TLabel *Label52;
        TLabel *Label53;
        TLabel *Label54;
        TLabel *Label55;
        TLabel *Label56;
        TLabel *Label57;
        TLabel *Label58;
        TLabel *Label59;
        TLabel *Label60;
        TLabel *Label61;
        TLabel *Label62;
        TLabel *Label63;
        TLabel *Label64;
        TLabel *Label65;
        TLabel *Label66;
        TLabel *Label67;
        TLabel *Label68;
        TLabel *Label69;
        TLabel *Label70;
        TLabel *Label71;
        TLabel *Label72;
        TLabel *Label73;
        TLabel *Label74;
        TLabel *Label75;
        TLabel *Label76;
        TLabel *Label77;
        TLabel *Label78;
        TLabel *Label79;
        TLabel *Label80;
        TLabel *Label81;
        TLabel *Label82;
        TMainMenu *MainMenu1;
        TMenuItem *Nowe1;
        TMenuItem *Latwe1;
        TMenuItem *Trudne1;
        TMenuItem *Reset1;
        TMenuItem *Opcje1;
        TMenuItem *Kolor1;
        TMenuItem *About1;
        TColorDialog *ColorDialog1;
        TTimer *Timer1;
        TLabel *Timer;
        void __fastcall Panel5Click(TObject *Sender);
        void __fastcall Panel1Click(TObject *Sender);
        void __fastcall Panel2Click(TObject *Sender);
        void __fastcall Panel3Click(TObject *Sender);
        void __fastcall Panel4Click(TObject *Sender);
        void __fastcall Panel6Click(TObject *Sender);
        void __fastcall Panel7Click(TObject *Sender);
        void __fastcall Panel8Click(TObject *Sender);
        void __fastcall Panel9Click(TObject *Sender);
        void __fastcall Panel10Click(TObject *Sender);
        void __fastcall FormKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall Label1Click(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall Latwe1Click(TObject *Sender);
        void __fastcall Label2Click(TObject *Sender);
        void __fastcall Label3Click(TObject *Sender);
        void __fastcall Label4Click(TObject *Sender);
        void __fastcall Label5Click(TObject *Sender);
        void __fastcall Label6Click(TObject *Sender);
        void __fastcall Label7Click(TObject *Sender);
        void __fastcall Label8Click(TObject *Sender);
        void __fastcall Label9Click(TObject *Sender);
        void __fastcall Label10Click(TObject *Sender);
        void __fastcall Label11Click(TObject *Sender);
        void __fastcall Label12Click(TObject *Sender);
        void __fastcall Label13Click(TObject *Sender);
        void __fastcall Label14Click(TObject *Sender);
        void __fastcall Label15Click(TObject *Sender);
        void __fastcall Label16Click(TObject *Sender);
        void __fastcall Label17Click(TObject *Sender);
        void __fastcall Label18Click(TObject *Sender);
        void __fastcall Label19Click(TObject *Sender);
        void __fastcall Label20Click(TObject *Sender);
        void __fastcall Label21Click(TObject *Sender);
        void __fastcall Label22Click(TObject *Sender);
        void __fastcall Label23Click(TObject *Sender);
        void __fastcall Label24Click(TObject *Sender);
        void __fastcall Label25Click(TObject *Sender);
        void __fastcall Label26Click(TObject *Sender);
        void __fastcall Label27Click(TObject *Sender);
        void __fastcall Label28Click(TObject *Sender);
        void __fastcall Label29Click(TObject *Sender);
        void __fastcall Label30Click(TObject *Sender);
        void __fastcall Label31Click(TObject *Sender);
        void __fastcall Label32Click(TObject *Sender);
        void __fastcall Label33Click(TObject *Sender);
        void __fastcall Label34Click(TObject *Sender);
        void __fastcall Label35Click(TObject *Sender);
        void __fastcall Label36Click(TObject *Sender);
        void __fastcall Label37Click(TObject *Sender);
        void __fastcall Label38Click(TObject *Sender);
        void __fastcall Label39Click(TObject *Sender);
        void __fastcall Label40Click(TObject *Sender);
        void __fastcall Label41Click(TObject *Sender);
        void __fastcall Label42Click(TObject *Sender);
        void __fastcall Label43Click(TObject *Sender);
        void __fastcall Label44Click(TObject *Sender);
        void __fastcall Label45Click(TObject *Sender);
        void __fastcall Label46Click(TObject *Sender);
        void __fastcall Label47Click(TObject *Sender);
        void __fastcall Label48Click(TObject *Sender);
        void __fastcall Label49Click(TObject *Sender);
        void __fastcall Label50Click(TObject *Sender);
        void __fastcall Label51Click(TObject *Sender);
        void __fastcall Label52Click(TObject *Sender);
        void __fastcall Label53Click(TObject *Sender);
        void __fastcall Label54Click(TObject *Sender);
        void __fastcall Label55Click(TObject *Sender);
        void __fastcall Label56Click(TObject *Sender);
        void __fastcall Label57Click(TObject *Sender);
        void __fastcall Label58Click(TObject *Sender);
        void __fastcall Label59Click(TObject *Sender);
        void __fastcall Label60Click(TObject *Sender);
        void __fastcall Label61Click(TObject *Sender);
        void __fastcall Label62Click(TObject *Sender);
        void __fastcall Label63Click(TObject *Sender);
        void __fastcall Label64Click(TObject *Sender);
        void __fastcall Label65Click(TObject *Sender);
        void __fastcall Label66Click(TObject *Sender);
        void __fastcall Label67Click(TObject *Sender);
        void __fastcall Label68Click(TObject *Sender);
        void __fastcall Label69Click(TObject *Sender);
        void __fastcall Label70Click(TObject *Sender);
        void __fastcall Label71Click(TObject *Sender);
        void __fastcall Label72Click(TObject *Sender);
        void __fastcall Label73Click(TObject *Sender);
        void __fastcall Label74Click(TObject *Sender);
        void __fastcall Label75Click(TObject *Sender);
        void __fastcall Label76Click(TObject *Sender);
        void __fastcall Label77Click(TObject *Sender);
        void __fastcall Label78Click(TObject *Sender);
        void __fastcall Label79Click(TObject *Sender);
        void __fastcall Label80Click(TObject *Sender);
        void __fastcall Label81Click(TObject *Sender);
        void __fastcall Trudne1Click(TObject *Sender);
        void __fastcall About1Click(TObject *Sender);
        void __fastcall Kolor1Click(TObject *Sender);
        void __fastcall Opcje1Click(TObject *Sender);
        void __fastcall Reset1Click(TObject *Sender);
        void __fastcall Timer1Timer(TObject *Sender);
private:	// User declarations
public:
           

        __fastcall TForm1(TComponent* Owner);

};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;

//---------------------------------------------------------------------------
#endif
