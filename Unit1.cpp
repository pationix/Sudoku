//---------------------------------------------------------------------------
#include <string.h>
#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Abot.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
 bool Blok[81], Blad, licznik=true, noc;
 int Aktywne, Odp[9][9], czas;
 AnsiString godz, min, sek,nazwa[81]={"Label1","Label2","Label3","Label4","Label5","Label6","Label7","Label8","Label9","Label10","Label11","Label12","Label13","Label14","Label15","Label16","Label17","Label18","Label19","Label20","Label21","Label22","Label23","Label24","Label25","Label26","Label27","Label28","Label29","Label30","Label31","Label32","Label33","Label34","Label35","Label36","Label37","Label38","Label39","Label40","Label41","Label42","Label43","Label44","Label45","Label46","Label47","Label48","Label49","Label50","Label51","Label52","Label53","Label54","Label55","Label56","Label57","Label58","Label59","Label60","Label61","Label62","Label63","Label64","Label65","Label66","Label67","Label68","Label69","Label70","Label71","Label72","Label73","Label74","Label75","Label76","Label77","Label78","Label79","Label80","Label81"};

void Wpisz(AnsiString labelname, int x, int y)
        {

        TComponent *component = Form1->FindComponent(labelname);
        if(component)
    {
        TLabel *label = dynamic_cast<TLabel *>(component);
        if(label)
        {
                if(noc==false)
                        label->Color=clHighlightText;
                else
                        label->Color=clBackground;
                if(Blok[(9*y)+x]==false)
                {
                        label->Caption="  ";
                        if(Aktywne!=0)
                        {
                                label->Caption=label->Caption+Aktywne;
                                if(Blad==true)
                                {
                                        if(Aktywne!=Odp[x][y])
                                        {
                                                label->Color=clRed;
                                        }
                                }
                        }

                }
        }
    }
};

void Kolor(AnsiString labelname, bool tryb, bool lock)
{

        TComponent *component = Form1->FindComponent(labelname);
        if(component)
    {
        TLabel *label = dynamic_cast<TLabel *>(component);
        if(label)
        {
                if(tryb==false)
                {
                        if(label->Color!=clRed)
                                label->Color=clHighlightText;
                        if(lock==true)
                                label->Font->Color=clMenuText;
                        else
                                label->Font->Color=clInactiveCaption;
                }
                else
                {
                        if(label->Color!=clRed)
                                label->Color=clBackground;
                        if(lock==true)
                                label->Font->Color=clBtnHighlight;
                        else
                                label->Font->Color=clGradientActiveCaption;
                }
        }
    }
};
void Reset(AnsiString labelname, bool tryb)
{
         TComponent *component = Form1->FindComponent(labelname);
        if(component)
        {
                TLabel *label = dynamic_cast<TLabel *>(component);
                if(label)
                {
                        label->Caption="  ";
                        if(tryb==false)
                        {
                                label->Color=clHighlightText;

                        }
                        else
                        {
                                label->Color=clBackground;
                        }
                }
        }
};
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
        for(int i=0; i<81; i++)
        {
                Blok[i]=true;
        }


}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel5Click(TObject *Sender)
{

        Aktywne=5;
        Panel5->Color=clOlive;
        Panel1->Color=clSilver;
        Panel2->Color=clSilver;
        Panel3->Color=clSilver;
        Panel4->Color=clSilver;
        Panel6->Color=clSilver;
        Panel7->Color=clSilver;
        Panel8->Color=clSilver;
        Panel9->Color=clSilver;
        Panel10->Color=clSilver;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel1Click(TObject *Sender)
{
        Aktywne=1;
        Panel1->Color=clOlive;
        Panel5->Color=clSilver;
        Panel2->Color=clSilver;
        Panel3->Color=clSilver;
        Panel4->Color=clSilver;
        Panel6->Color=clSilver;
        Panel7->Color=clSilver;
        Panel8->Color=clSilver;
        Panel9->Color=clSilver;
        Panel10->Color=clSilver;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel2Click(TObject *Sender)
{
        Aktywne=2;
        Panel2->Color=clOlive;
        Panel1->Color=clSilver;
        Panel5->Color=clSilver;
        Panel3->Color=clSilver;
        Panel4->Color=clSilver;
        Panel6->Color=clSilver;
        Panel7->Color=clSilver;
        Panel8->Color=clSilver;
        Panel9->Color=clSilver;
        Panel10->Color=clSilver;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel3Click(TObject *Sender)
{
        Aktywne=3;
        Panel3->Color=clOlive;
        Panel1->Color=clSilver;
        Panel2->Color=clSilver;
        Panel5->Color=clSilver;
        Panel4->Color=clSilver;
        Panel6->Color=clSilver;
        Panel7->Color=clSilver;
        Panel8->Color=clSilver;
        Panel9->Color=clSilver;
        Panel10->Color=clSilver;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel4Click(TObject *Sender)
{
        Aktywne=4;
        Panel4->Color=clOlive;
        Panel1->Color=clSilver;
        Panel2->Color=clSilver;
        Panel3->Color=clSilver;
        Panel5->Color=clSilver;
        Panel6->Color=clSilver;
        Panel7->Color=clSilver;
        Panel8->Color=clSilver;
        Panel9->Color=clSilver;
        Panel10->Color=clSilver;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel6Click(TObject *Sender)
{
        Aktywne=6;
        Panel6->Color=clOlive;
        Panel1->Color=clSilver;
        Panel2->Color=clSilver;
        Panel3->Color=clSilver;
        Panel4->Color=clSilver;
        Panel5->Color=clSilver;
        Panel7->Color=clSilver;
        Panel8->Color=clSilver;
        Panel9->Color=clSilver;
        Panel10->Color=clSilver;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel7Click(TObject *Sender)
{
        Aktywne=7;
        Panel7->Color=clOlive;
        Panel1->Color=clSilver;
        Panel2->Color=clSilver;
        Panel3->Color=clSilver;
        Panel4->Color=clSilver;
        Panel6->Color=clSilver;
        Panel5->Color=clSilver;
        Panel8->Color=clSilver;
        Panel9->Color=clSilver;
        Panel10->Color=clSilver;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel8Click(TObject *Sender)
{
        Aktywne=8;
        Panel8->Color=clOlive;
        Panel1->Color=clSilver;
        Panel2->Color=clSilver;
        Panel3->Color=clSilver;
        Panel4->Color=clSilver;
        Panel6->Color=clSilver;
        Panel7->Color=clSilver;
        Panel5->Color=clSilver;
        Panel9->Color=clSilver;
        Panel10->Color=clSilver;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel9Click(TObject *Sender)
{
        Aktywne=9;
        Panel9->Color=clOlive;
        Panel1->Color=clSilver;
        Panel2->Color=clSilver;
        Panel3->Color=clSilver;
        Panel4->Color=clSilver;
        Panel6->Color=clSilver;
        Panel7->Color=clSilver;
        Panel8->Color=clSilver;
        Panel5->Color=clSilver;
        Panel10->Color=clSilver;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel10Click(TObject *Sender)
{
        Aktywne=0;
        Panel10->Color=clOlive;
        Panel1->Color=clSilver;
        Panel2->Color=clSilver;
        Panel3->Color=clSilver;
        Panel4->Color=clSilver;
        Panel6->Color=clSilver;
        Panel7->Color=clSilver;
        Panel8->Color=clSilver;
        Panel9->Color=clSilver;
        Panel5->Color=clSilver;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
        if(Key == VK_NUMPAD1 || Key == 0x31)
        {
                Panel1Click(Sender);
        }
        else
        {
        if(Key == VK_NUMPAD2 || Key == 0x32){
                Panel2Click(Sender);
                }
                else
                {
                if(Key == VK_NUMPAD3 || Key == 0x33){
                Panel3Click(Sender);
                }
                else
                {
                if(Key == VK_NUMPAD4 || Key == 0x34){
                Panel4Click(Sender);
                }
                 else
                {
                if(Key == VK_NUMPAD5 || Key == 0x35){
                Panel5Click(Sender);
                }
                else
                {
                if(Key == VK_NUMPAD6 || Key == 0x36){
                Panel6Click(Sender);
                }
                else
                {
                if(Key == VK_NUMPAD7 || Key == 0x37){
                Panel7Click(Sender);
                }
                else
                {
                if(Key == VK_NUMPAD8 || Key == 0x38){
                Panel8Click(Sender);
                }
                else
                {
                if(Key == VK_NUMPAD9 || Key == 0x39){
                Panel9Click(Sender);
                }
                else
                {
                if(Key == VK_NUMPAD0 || Key == 0x30){
                Panel10Click(Sender);
                }
        }
        }
        }
        }
        }
        }
        }
        }
        }

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label1Click(TObject *Sender)
{
        Wpisz("Label1", 0,0);
        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
           Blad=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Latwe1Click(TObject *Sender)
{
        for(int i=0; i<81; i++)
        {
                Reset(nazwa[i], noc);
        }

        for(int i=0; i<=3; i++){
                Blok[i]=true;
        }
        Label1->Caption="  7";
        Label2->Caption="  4";
        Label3->Caption="  9";

        for(int i=3; i<=4; i++){
                Blok[i]=false;
        }
        Label4->Caption="  ";
        Odp[3][0]=8;
        Label5->Caption="  ";
        Odp[4][0]=2;

        for(int i=5; i<=6; i++){
                Blok[i]=true;
        }
        Label6->Caption="  5";
        Label7->Caption="  1";

        Label8->Caption="  ";
        Blok[7]=false;
        Odp[7][0]=3;

        Label9->Caption="  6";
        Blok[8]=true;

        for(int i=9; i<=11; i++){
                Blok[i]=false;
        }
        Label10->Caption="  ";
        Odp[0][1]=8;
        Label11->Caption="  ";
        Odp[1][1]=2;
        Label12->Caption="  ";
        Odp[2][1]=3;

        Label13->Caption="  1";
        Blok[12]=true;

        for(int i=13; i<=15; i++){
                Blok[i]=false;
        }
        Label14->Caption="  ";
        Odp[4][1]=7;
        Label15->Caption="  ";
        Odp[5][1]=6;
        Label16->Caption="  ";
        Odp[6][1]=4;

        Label17->Caption="  5";
        Blok[16]=true;
        Label18->Caption="  9";
        Blok[17]=true;

        for(int i=18; i<=22; i++){
                Blok[i]=false;
        }
        Label19->Caption="  ";
        Odp[0][2]=5;
        Label20->Caption="  ";
        Odp[1][2]=1;
        Label21->Caption="  ";
        Odp[2][2]=6;
        Label22->Caption="  ";
        Odp[3][2]=9;
        Label23->Caption="  ";
        Odp[4][2]=4;

        Label24->Caption="  3";
        Blok[23]=true;

        for(int i=24; i<=25; i++){
                Blok[i]=false;
        }
        Label25->Caption="  ";
        Odp[6][2]=8;
        Label26->Caption="  ";
        Odp[7][2]=2;

        for(int i=26; i<=27; i++){
                Blok[i]=true;
        }
        Label27->Caption="  7";
        Label28->Caption="  6";

        for(int i=28; i<=29; i++){
                Blok[i]=false;
        }
        Label29->Caption="  ";
        Odp[1][3]=5;
        Label30->Caption="  ";
        Odp[2][3]=7;

        Label31->Caption="  3";
        Blok[30]=true;

        Label32->Caption="  ";
        Odp[4][3]=1;
        Blok[31]=false;

        Label33->Caption="  9";
        Blok[32]=true;

        Label34->Caption="  ";
        Odp[6][3]=2;
        Blok[33]=false;

        Label35->Caption="  4";
        Blok[34]=true;

        Label36->Caption="  ";
        Odp[8][3]=8;
        Blok[35]=false;

        Label37->Caption="  2";
        Blok[36]=true;
        Label38->Caption="  3";
        Blok[37]=true;

        for(int i=38; i<=42; i++){
                Blok[i]=false;
        }
        Label39->Caption="  ";
        Odp[2][4]=4;
        Label40->Caption="  ";
        Odp[3][4]=5;
        Label41->Caption="  ";
        Odp[4][4]=8;
        Label42->Caption="  ";
        Odp[5][4]=7;
        Label43->Caption="  ";
        Odp[6][4]=6;

        Label44->Caption="  9";
        Blok[43]=true;
        Label45->Caption="  1";
        Blok[44]=true;

        Label46->Caption="  ";
        Odp[0][5]=9;
        Blok[45]=false;

        Label47->Caption="  8";
        Blok[46]=true;

        Label48->Caption="  ";
        Odp[2][5]=1;
        Blok[47]=false;

        Label49->Caption="  4";
        Blok[48]=true;

        Label50->Caption="  ";
        Odp[4][5]=6;
        Blok[49]=false;

        Label51->Caption="  2";
        Blok[50]=true;

        for(int i=51; i<=52; i++){
                Blok[i]=false;
        }
        Label52->Caption="  ";
        Odp[6][5]=3;
        Label53->Caption="  ";
        Odp[7][5]=7;

        Label54->Caption="  5";
        Blok[53]=true;
        Label55->Caption="  4";
        Blok[54]=true;

        Label56->Caption="  ";
        Odp[1][6]=7;
        Blok[55]=false;
        Label57->Caption="  ";
        Odp[2][6]=2;
        Blok[56]=false;

        Label58->Caption="  6";
        Blok[57]=true;

        for(int i=58; i<=62; i++){
                Blok[i]=false;
        }
        Label59->Caption="  ";
        Odp[4][6]=5;
        Label60->Caption="  ";
        Odp[5][6]=8;
        Label61->Caption="  ";
        Odp[6][6]=9;
        Label62->Caption="  ";
        Odp[7][6]=1;
        Label63->Caption="  ";
        Odp[8][6]=3;

        Label64->Caption="  1";
        Blok[63]=true;
        Label65->Caption="  9";
        Blok[64]=true;

        for(int i=65; i<=67; i++){
                Blok[i]=false;
        }
        Label66->Caption="  ";
        Odp[2][7]=8;
        Label67->Caption="  ";
        Odp[3][7]=7;
        Label68->Caption="  ";
        Odp[4][7]=3;

        Label69->Caption="  4";
        Blok[68]=true;

        for(int i=69; i<=71; i++){
                Blok[i]=false;
        }
        Label70->Caption="  ";
        Odp[6][7]=5;
        Label71->Caption="  ";
        Odp[7][7]=6;
        Label72->Caption="  ";
        Odp[8][7]=2;

        Label73->Caption="  3";
        Blok[72]=true;

        Label74->Caption="  ";
        Odp[1][8]=6;
        Blok[73]=false;

        Label75->Caption="  5";
        Blok[74]=true;
        Label76->Caption="  2";
        Blok[75]=true;

        for(int i=76; i<=77; i++){
                Blok[i]=false;
        }
        Label77->Caption="  ";
        Odp[4][8]=9;
        Label78->Caption="  ";
        Odp[5][8]=1;

        Label79->Caption="  7";
        Blok[78]=true;
        Label80->Caption="  8";
        Blok[79]=true;
        Label81->Caption="  4";
        Blok[80]=true;
        czas=0;
        for(int j=0; j<81; j++)
        {
                Kolor(nazwa[j], noc, Blok[j]);
        }
        Timer1->Enabled=false;
        Timer1->Enabled=true;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Label2Click(TObject *Sender)
{
        Wpisz("Label2",1,0);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label3Click(TObject *Sender)
{
        Wpisz("Label3",2,0);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label4Click(TObject *Sender)
{
        Wpisz("Label4",3,0);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label5Click(TObject *Sender)
{
        Wpisz("Label5",4,0);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label6Click(TObject *Sender)
{
        Wpisz("Label6",5,0);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label7Click(TObject *Sender)
{
        Wpisz("Label7",6,0);         
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label8Click(TObject *Sender)
{
        Wpisz("Label8", 7,0);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label9Click(TObject *Sender)
{
        Wpisz("Label9", 8,0);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label10Click(TObject *Sender)
{
        Wpisz("Label10",0,1);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label11Click(TObject *Sender)
{
        Wpisz("Label11",1,1);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label12Click(TObject *Sender)
{
        Wpisz("Label12",2,1);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label13Click(TObject *Sender)
{
        Wpisz("Label13",3,1);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label14Click(TObject *Sender)
{
        Wpisz("Label14",4,1);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label15Click(TObject *Sender)
{
        Wpisz("Label15",5,1);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label16Click(TObject *Sender)
{
        Wpisz("Label16",6,1);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label17Click(TObject *Sender)
{
        Wpisz("Label17",7,1);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label18Click(TObject *Sender)
{
        Wpisz("Label18",8,1);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label19Click(TObject *Sender)
{
        Wpisz("Label19",0,2);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label20Click(TObject *Sender)
{
        Wpisz("Label20",1,2);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label21Click(TObject *Sender)
{
        Wpisz("Label21",2,2);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label22Click(TObject *Sender)
{
        Wpisz("Label22",3,2);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label23Click(TObject *Sender)
{
        Wpisz("Label23",4,2);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label24Click(TObject *Sender)
{
        Wpisz("Label24",5,2);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label25Click(TObject *Sender)
{
        Wpisz("Label25",6,2);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label26Click(TObject *Sender)
{
        Wpisz("Label26",7,2);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label27Click(TObject *Sender)
{
        Wpisz("Label27",8,2);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label28Click(TObject *Sender)
{
        Wpisz("Label28",0,3);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label29Click(TObject *Sender)
{
        Wpisz("Label29",1,3);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label30Click(TObject *Sender)
{
        Wpisz("Label30",2,3);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label31Click(TObject *Sender)
{
        Wpisz("Label31",3,3);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label32Click(TObject *Sender)
{
        Wpisz("Label32",4,3);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label33Click(TObject *Sender)
{
        Wpisz("Label33",5,3);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label34Click(TObject *Sender)
{
        Wpisz("Label34",6,3);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label35Click(TObject *Sender)
{
        Wpisz("Label35",7,3);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label36Click(TObject *Sender)
{
        Wpisz("Label36",8,3);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label37Click(TObject *Sender)
{
        Wpisz("Label37",0,4);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label38Click(TObject *Sender)
{
        Wpisz("Label38",1,4);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label39Click(TObject *Sender)
{
        Wpisz("Label39",2,4);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label40Click(TObject *Sender)
{
        Wpisz("Label40",3,4);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label41Click(TObject *Sender)
{
        Wpisz("Label41",4,4);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label42Click(TObject *Sender)
{
        Wpisz("Label42",5,4);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label43Click(TObject *Sender)
{
        Wpisz("Label43",6,4);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label44Click(TObject *Sender)
{
        Wpisz("Label44",7,4);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label45Click(TObject *Sender)
{
        Wpisz("Label45",8,4);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label46Click(TObject *Sender)
{
        Wpisz("Label46",0,5);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label47Click(TObject *Sender)
{
        Wpisz("Label47",1,5);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label48Click(TObject *Sender)
{
        Wpisz("Label48",2,5);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label49Click(TObject *Sender)
{
        Wpisz("Label49",3,5);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label50Click(TObject *Sender)
{
        Wpisz("Label50",4,5);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label51Click(TObject *Sender)
{
        Wpisz("Label51",5,5);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label52Click(TObject *Sender)
{
        Wpisz("Label52",6,5);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label53Click(TObject *Sender)
{
        Wpisz("Label53",7,5);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label54Click(TObject *Sender)
{
        Wpisz("Label54",8,5);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label55Click(TObject *Sender)
{
        Wpisz("Label55",0,6);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label56Click(TObject *Sender)
{
        Wpisz("Label56",1,6);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label57Click(TObject *Sender)
{
        Wpisz("Label57",2,6);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label58Click(TObject *Sender)
{
        Wpisz("Label58",3,6);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label59Click(TObject *Sender)
{
        Wpisz("Label59",4,6);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label60Click(TObject *Sender)
{
        Wpisz("Label60",5,6);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label61Click(TObject *Sender)
{
        Wpisz("Label61",6,6);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label62Click(TObject *Sender)
{
        Wpisz("Label62",7,6);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label63Click(TObject *Sender)
{
        Wpisz("Label63",8,6);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label64Click(TObject *Sender)
{
        Wpisz("Label64",0,7);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label65Click(TObject *Sender)
{
        Wpisz("Label65",1,7);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label66Click(TObject *Sender)
{
        Wpisz("Label66",2,7);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label67Click(TObject *Sender)
{
        Wpisz("Label67",3,7);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label68Click(TObject *Sender)
{
        Wpisz("Label68",4,7);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label69Click(TObject *Sender)
{
        Wpisz("Label69",5,7);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label70Click(TObject *Sender)
{
        Wpisz("Label70",6,7);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label71Click(TObject *Sender)
{
        Wpisz("Label71",7,7);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label72Click(TObject *Sender)
{
        Wpisz("Label72",8,7);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label73Click(TObject *Sender)
{
        Wpisz("Label73",0,8);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label74Click(TObject *Sender)
{
        Wpisz("Label74",1,8);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label75Click(TObject *Sender)
{
        Wpisz("Label75",2,8);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label76Click(TObject *Sender)
{
        Wpisz("Label76",3,8);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label77Click(TObject *Sender)
{
        Wpisz("Label77",4,8);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label78Click(TObject *Sender)
{
        Wpisz("Label78",5,8);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label79Click(TObject *Sender)
{
        Wpisz("Label79",6,8);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label80Click(TObject *Sender)
{
        Wpisz("Label80",7,8);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label81Click(TObject *Sender)
{
        Wpisz("Label81",8,8);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Trudne1Click(TObject *Sender)
{
        for(int i=0; i<81; i++)
        {
                Reset(nazwa[i], noc);
        }
        for(int i=0; i<=1; i++)
        {
                Blok[i]=true;
        };
        Label1->Caption="  2";
        Label2->Caption="  8";

        for(int i=2; i<=4; i++)
        {
                Blok[i]=false;
        };
        Blok[4]=false;
        Label3->Caption="  ";
        Odp[2][0]=9;
        Label4->Caption="  ";
        Odp[3][0]=3;
        Label5->Caption="  ";
        Odp[4][0]=5;

        Label6->Caption="  1";
        Blok[5]=true;

        for(int i=6; i<=8; i++){
                Blok[i]=false;
        };
        Label7->Caption="  ";
        Odp[6][0]=7;
        Label8->Caption="  ";
        Odp[7][0]=6;
        Label9->Caption="  ";
        Odp[8][0]=4;

        Label10->Caption="  4";
        Blok[9]=true;

        Label11->Caption="  ";
        Odp[1][1]=1;
        Blok[10]=false;

        Label12->Caption=" 7 ";
        Blok[11]=true;
        Label13->Caption="  9";
        Blok[12]=true;

        for(int i=13; i<=16; i++){
                Blok[i]=false;
        };
        Label14->Caption="  ";
        Odp[4][1]=2;
        Label15->Caption="  ";
        Odp[5][1]=6;
        Label16->Caption="  ";
        Odp[6][1]=3;
        Label17->Caption="  ";
        Odp[7][1]=8;

        Label18->Caption="  5";
        Blok[17]=true;

        for(int i=18; i<=23; i++){
                Blok[i]=false;
        };
        Label19->Caption="  ";
        Odp[0][2]=5;
        Label20->Caption="  ";
        Odp[1][2]=6;
        Label21->Caption="  ";
        Odp[2][2]=3;
        Label22->Caption="  ";
        Odp[3][2]=8;
        Label23->Caption="  ";
        Odp[4][2]=7;
        Label24->Caption="  ";
        Odp[5][2]=4;

        Label25->Caption="  9";
        Blok[24]=true;
        Label26->Caption="  1";
        Blok[25]=true;

        for(int i=26; i<=29; i++){
                Blok[i]=false;
        };
        Label27->Caption="  ";
        Odp[8][2]=2;
        Label28->Caption="  ";
        Odp[0][3]=3;
        Label29->Caption="  ";
        Odp[1][3]=7;
        Label30->Caption="  ";
        Odp[2][3]=1;

        Label31->Caption="  6";
        Blok[30]=true;

        for(int i=31; i<=32; i++){
                Blok[i]=false;
        };
        Label32->Caption="  ";
        Odp[4][3]=8;
        Label33->Caption="  ";
        Odp[5][3]=5;

        Label34->Caption="  2";
        Blok[33]=true;

        Label35->Caption="  ";
        Odp[7][3]=4;
        Blok[34]=false;

        Label36->Caption="  9";
        Blok[35]=true;

        Label37->Caption="  ";
        Odp[0][4]=6;
        Blok[36]=false;

        Label38->Caption="  5";
        Blok[37]=true;

        for(int i=38; i<=42; i++){
                Blok[i]=false;
        };
        Label39->Caption="  ";
        Odp[2][4]=2;
        Label40->Caption="  ";
        Odp[3][4]=4;
        Label41->Caption="  ";
        Odp[4][4]=9;
        Label42->Caption="  ";
        Odp[5][4]=3;
        Label43->Caption="  ";
        Odp[6][4]=1;

        Label44->Caption="  7";
        Blok[43]=true;

        Label45->Caption="  ";
        Odp[8][4]=8;
        Blok[44]=false;

        Label46->Caption=" 8";
        Blok[45]=true;

        Label47->Caption="  ";
        Odp[1][5]=9;
        Blok[46]=false;

        Label48->Caption=" 4";
        Blok[47]=true;

        Label49->Caption="  ";
        Odp[3][5]=7;
        Blok[48]=false;
        Label50->Caption="  ";
        Odp[4][5]=1;
        Blok[49]=false;

        Label51->Caption=" 2";
        Blok[50]=true;

        for(int i=51; i<=54; i++){
                Blok[i]=false ;
        };
        Label52->Caption="  ";
        Odp[6][5]=6;
        Label53->Caption="  ";
        Odp[7][5]=5;
        Label54->Caption="  ";
        Odp[8][5]=3;
        Label55->Caption="  ";
        Odp[0][6]=7;

        Label56->Caption="  4";
        Blok[55]=true;
        Label57->Caption="  8";
        Blok[56]=true;

        for(int i=57; i<=62; i++){
                Blok[i]=false;
        };
        Label58->Caption="  ";
        Odp[3][6]=2;
        Label59->Caption="  ";
        Odp[4][6]=6;
        Label60->Caption="  ";
        Odp[5][6]=9;
        Label61->Caption="  ";
        Odp[6][6]=5;
        Label62->Caption="  ";
        Odp[7][6]=3;
        Label63->Caption="  ";
        Odp[8][6]=1;

        Label64->Caption="  9";
        Blok[63]=true;

        for(int i=64; i<=67; i++){
                Blok[i]=false;
        };
        Label65->Caption="  ";
        Odp[1][7]=3;
        Label66->Caption="  ";
        Odp[2][7]=5;
        Label67->Caption="  ";
        Odp[3][7]=1;
        Label68->Caption="  ";
        Odp[4][7]=4;

        Label69->Caption="  7";
        Blok[68]=true;
        Label70->Caption="  8";
        Blok[69]=true;

        Label71->Caption="  ";
        Odp[7][7]=2;
        Blok[70]=false;

        Label72->Caption="  6";
        Blok[71]=true;

        for(int i=72; i<=74; i++){
                Blok[i]=false;
        };
        Label73->Caption="  ";
        Odp[0][8]=1;
        Label74->Caption="  ";
        Odp[1][8]=2;
        Label75->Caption="  ";
        Odp[2][8]=6;

        Label76->Caption="  5";
        Blok[75]=true;

        for(int i=76; i<=78; i++){
                Blok[i]=false;
        };
        Label77->Caption="  ";
        Odp[4][8]=3;
        Label78->Caption="  ";
        Odp[5][8]=8;
        Label79->Caption="  ";
        Odp[6][8]=4;

        Label80->Caption="  9";
        Blok[79]=true;
        Label81->Caption="  7";
        Blok[80]=true;
        for(int j=0; j<81; j++)
        {
                Kolor(nazwa[j], noc, Blok[j]);
        }
        czas=0;
        Timer1->Enabled=false;
        Timer1->Enabled=true;


}
//---------------------------------------------------------------------------

void __fastcall TForm1::About1Click(TObject *Sender)
{
        About->ShowModal();        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Kolor1Click(TObject *Sender)
{
        if (ColorDialog1->Execute())
                Form1->Color = ColorDialog1->Color;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Opcje1Click(TObject *Sender)
{
        Form2->ShowModal();
        noc=Form2->CheckBox2->Checked;
        for(int i=0; i<81; i++)
        {
                Kolor(nazwa[i],noc,Blok[i]);
        }

                if(noc==false)
                        Label82->Color=clBackground;
                else
                        Label82->Color=clBtnHighlight;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Reset1Click(TObject *Sender)
{
        for(int i=0; i<81; i++)
        {
                if(Blok[i]==false)
                {
                        Reset(nazwa[i], noc);
                }
        }
        czas=0;
        Timer1->Enabled=false;
        Timer1->Enabled=true;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
        czas++;

        godz=IntToStr(czas/3600);
        if(czas/3600<10)
                godz="0"+godz;
        min=IntToStr((czas%3600)/60);
        if((czas%3600)/60<10)
                min="0"+min;
        sek=IntToStr(czas%60);
        if(czas%60<10)
                sek="0"+sek;
        Timer->Caption= " "+godz+":"+min+":"+sek+" ";
}
//---------------------------------------------------------------------------


