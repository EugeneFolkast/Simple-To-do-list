//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
#pragma resource ("*.LgXhdpiPh.fmx", _PLAT_ANDROID)
#pragma resource ("*.Windows.fmx", _PLAT_MSWINDOWS)
#pragma resource ("*.NmXhdpiPh.fmx", _PLAT_ANDROID)

TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{

}



void __fastcall TForm1::AddButtonClick(TObject *Sender)
{
      String insert_string = InsertText->Text;
      String default_string = "Add some note...";

      if ((insert_string != default_string) && (insert_string != ""))
      {
          ItemsList->Items->Add(insert_string);

          InsertText->Text = "";
      }

      InsertText->KillFocusByReturn = True;

      InsertText->SetFocus();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ItemsListItemClick(TCustomListBox * const Sender, TListBoxItem * const Item)

{
        int index = Item->Index;

        ItemsList->Items->Delete(index);
}
//---------------------------------------------------------------------------------------------------------------------------------------------------

