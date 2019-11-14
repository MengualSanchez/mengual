//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Process.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TVprincipal *Vprincipal;
//---------------------------------------------------------------------------
__fastcall TVprincipal::TVprincipal(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TVprincipal::BIniciarClick(TObject *Sender)
{
        process_init(NULL);
        BIniciar->Enabled=false;
        BEstado->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TVprincipal::BLeerEstadoClick(TObject *Sender)
{
        int port1= process_read_port1();
        if(port1 & 0x01==1){
                Vprincipal->Panel2->Caption=1;
                Vprincipal->Panel2->Color=clRed;
        }else{
                Vprincipal->Panel2->Caption=0;
                Vprincipal->Panel2->Color=clBlue;
        }
         if(port1 & 0x02==2){
                Vprincipal->Panel3->Caption=1;
                Vprincipal->Panel3->Color=clRed;
        }else{
                Vprincipal->Panel3->Caption=0;
                Vprincipal->Panel3->Color=clBlue;
        }
        if(port1 & 0x04==4){
                Vprincipal->Panel4->Caption=1;
                Vprincipal->Panel4->Color=clRed;
        }else{
                Vprincipal->Panel4->Caption=0;
                Vprincipal->Panel4->Color=clBlue;
        }
        if(port1 & 0x08==8){
                Vprincipal->Panel5->Caption=1;
                Vprincipal->Panel5->Color=clRed;
        }else{
                Vprincipal->Panel5->Caption=0;
                Vprincipal->Panel5->Color=clBlue;
        }
}
//---------------------------------------------------------------------------
void __fastcall TVprincipal::BLeerTimerClick(TObject *Sender)
{
        if(Vprincipal->Panel1->Color==clYellow){
           Vprincipal->Panel1->Color=clGreen;
        }else{
           Vprincipal->Panel1->Color=clYellow;
        }
        int port1= process_read_port1();
         if(port1 & 0x01==1){
                Vprincipal->Panel2->Caption=1;
                Vprincipal->Panel2->Color=clRed;
        }else{
                Vprincipal->Panel2->Caption=0;
                Vprincipal->Panel2->Color=clBlue;
        }
         if(port1 & 0x02==2){
                Vprincipal->Panel3->Caption=1;
                Vprincipal->Panel3->Color=clRed;
        }else{
                Vprincipal->Panel3->Caption=0;
                Vprincipal->Panel3->Color=clBlue;
        }
        if(port1 & 0x04==4){
                Vprincipal->Panel4->Caption=1;
                Vprincipal->Panel4->Color=clRed;
        }else{
                Vprincipal->Panel4->Caption=0;
                Vprincipal->Panel4->Color=clBlue;
        }
        if(port1 & 0x08==8){
                Vprincipal->Panel5->Caption=1;
                Vprincipal->Panel5->Color=clRed;
        }else{
                Vprincipal->Panel5->Caption=0;
                Vprincipal->Panel5->Color=clBlue;
        }
}
//---------------------------------------------------------------------------
void __fastcall TVprincipal::Panel1Click(TObject *Sender)
{
        if(Vprincipal->Timer1->Enabled==false){
                Vprincipal->Timer1->Enabled=true;
                Vprincipal->Panel1->Color=clYellow;
                Vprincipal->Panel1->Caption="Timer Off";
        }else{
                Vprincipal->Timer1->Enabled=false;
                Vprincipal->Panel1->Color=clGreen;
                Vprincipal->Panel1->Caption="Timer ON";
        }
}
//---------------------------------------------------------------------------
void __fastcall TVprincipal::BCheekBoxP0_0Click(TObject *Sender)
{
        if(Vprincipal->CheckBoxP0_0->Checked==false){
                process_write_port0(0x01, PIN_OFF);
                Vprincipal->CheckBoxP0_0->Color=clBlue;
        }else{
                process_write_port0(0x01, PIN_ON);
                Vprincipal->CheckBoxP0_0->Color=clRed;
        }

}
//---------------------------------------------------------------------------
void __fastcall TVprincipal::BCheekBoxP0_1Click(TObject *Sender)
{
        if(Vprincipal->CheckBoxP0_1->Checked==false){
                process_write_port0(0x02, PIN_OFF);
                Vprincipal->CheckBoxP0_1->Color=clBlue;
        }else{
                process_write_port0(0x02, PIN_ON);
                Vprincipal->CheckBoxP0_1->Color=clRed;
        }

}
//---------------------------------------------------------------------------
void __fastcall TVprincipal::BCheekBoxP0_2Click(TObject *Sender)
{
        if(Vprincipal->CheckBoxP0_2->Checked==false){
                process_write_port0(0x04, PIN_OFF);
                Vprincipal->CheckBoxP0_2->Color=clBlue;
        }else{
                process_write_port0(0x04, PIN_ON);
                Vprincipal->CheckBoxP0_2->Color=clRed;
        }

}
//---------------------------------------------------------------------------
void __fastcall TVprincipal::BCheekBoxP0_3Click(TObject *Sender)
{
        if(Vprincipal->CheckBoxP0_3->Checked==false){
                process_write_port0(0x08, PIN_OFF);
                Vprincipal->CheckBoxP0_3->Color=clBlue;
        }else{
                process_write_port0(0x08, PIN_ON);
                Vprincipal->CheckBoxP0_3->Color=clRed;
        }

}
//---------------------------------------------------------------------------
void __fastcall TVprincipal::BCheekBoxP0_4Click(TObject *Sender)
{
         if(Vprincipal->CheckBoxP0_4->Checked==false){
                process_write_port0(0x10, PIN_OFF);
                Vprincipal->CheckBoxP0_4->Color=clBlue;
        }else{
                process_write_port0(0x10, PIN_ON);
                Vprincipal->CheckBoxP0_4->Color=clRed;
        }

}
//---------------------------------------------------------------------------
void __fastcall TVprincipal::BCheekBoxP0_5Click(TObject *Sender)
{
          if(Vprincipal->CheckBoxP0_5->Checked==false){
                process_write_port0(0x20, PIN_OFF);
                Vprincipal->CheckBoxP0_5->Color=clBlue;
        }else{
                process_write_port0(0x20, PIN_ON);
                Vprincipal->CheckBoxP0_5->Color=clRed;
        }

}
//---------------------------------------------------------------------------
void __fastcall TVprincipal::BCheekBoxP0_6Click(TObject *Sender)
{
         if(Vprincipal->CheckBoxP0_6->Checked==false){
                process_write_port0(0x40, PIN_OFF);
                Vprincipal->CheckBoxP0_6->Color=clBlue;
        }else{
                process_write_port0(0x40, PIN_ON);
                Vprincipal->CheckBoxP0_6->Color=clRed;
        }

}
//---------------------------------------------------------------------------
void __fastcall TVprincipal::BCheekBoxP0_7Click(TObject *Sender)
{
       if(Vprincipal->CheckBoxP0_7->Checked==false){
                process_write_port0(0x80, PIN_OFF);
                Vprincipal->CheckBoxP0_7->Color=clBlue;
        }else{
                process_write_port0(0x80, PIN_ON);
                Vprincipal->CheckBoxP0_7->Color=clRed;
        }

}
//---------------------------------------------------------------------------
