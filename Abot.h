//---------------------------------------------------------------------------

#ifndef AbotH
#define AbotH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
//---------------------------------------------------------------------------
class TAbout : public TForm
{
__published:	// IDE-managed Components
        TBitBtn *BitBtn1;
        TImage *Image1;
        TLabel *Label1;
private:	// User declarations
public:		// User declarations
        __fastcall TAbout(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAbout *About;
//---------------------------------------------------------------------------
#endif
