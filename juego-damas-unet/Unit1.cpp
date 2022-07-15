//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "fstream.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm1::FormCreate(TObject *Sender)
{
flecha=false;
int t[8][8]={0,2,0,2,0,2,0,2,2,0,2,0,2,0,2,0,
             0,2,0,2,0,2,0,2,1,0,1,0,1,0,1,0,
             0,1,0,1,0,1,0,1,3,0,3,0,3,0,3,0,
             0,3,0,3,0,3,0,3,3,0,3,0,3,0,3,0,
  };//orden de imagenes
 for(int i=0;i<8;i++)
  for(int j=0;j<8;j++)
   m[i][j]=t[i][j];
}
//---------------------------------------------------------------------------

void __fastcall TForm1::PB1Paint(TObject *Sender)
{
  for(int i=0;i<80;i++)//Filas
   for(int j=0;j<8;j++)//Columnas
    IL2->Draw(PB1->Canvas,j*50,i*50,m[i][j],1);

}
//---------------------------------------------------------------------------
void __fastcall TForm1::IniciarPartida1Click(TObject *Sender)
{
  B1->Visible=false;
  L1->Visible=true;
  E1->Visible=true;
  B2->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::B2Click(TObject *Sender)
{
  if(E1->Text.Length()!=0){
  char u[20],i[20];
   ifstream lectura("recursos/archivos/usuariosRegistro.txt");
   if(FileExists("recursos/archivos/usuariosRegistro.txt")){
    while(!lectura.eof()){
      lectura>>u;
      lectura>>i;
      if(AnsiString(u)==E1->Text){
       //si el nombre de usuario es valido

      }

    }}else
    ShowMessage("Usuario no encontrado");
    lectura.close();

  }else
  ShowMessage("Introduzca un nombre de usuario");        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::NuevoJugador1Click(TObject *Sender)
{
  E1->Visible=false;
  L1->Visible=false;
  B1->Visible=false;
  B2->Visible=false;
  B3->Visible=true;
  L2->Visible=true;
  L3->Visible=true;
  E2->Visible=true;
 
}
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
bool TForm1::usuariosIguales(AnsiString usuario){
bool resp=false;
char u[20],i[20];
   ifstream lectura("recursos/archivos/usuariosRegistro.txt");
   if(FileExists("recursos/archivos/usuariosRegistro.txt")){
    while(!lectura.eof()){
      lectura>>u;
      lectura>>i;
      if(AnsiString(u)==usuario)
       resp=true;
    }
    lectura.close();
   }
  return resp;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::B3Click(TObject *Sender)
{
   ofstream escritura("recursos/archivos/usuariosRegistro.txt",ios::app);
  AnsiString cadena;
  if(E2->Text.Length()!=0&&usuariosIguales(E2->Text)==false&&flecha){
   cadena=E1->Text+"\t"+E2->Text+"\n";
   escritura<<cadena.c_str();
   ShowMessage("Usuario Registrado");
   E1->Clear();

  }else if(usuariosIguales(E2->Text)==true)
   ShowMessage("nombre de usuario tomado eliga otro");
   else
   ShowMessage("Debe Rellenar todos los campos de texto");
}
//---------------------------------------------------------------------------

