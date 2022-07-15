//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Menus.hpp>
#include <ImgList.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TMainMenu *MainMenu1;
        TMenuItem *Juego1;
        TMenuItem *IniciarPartida1;
        TMenuItem *PausaReiniciar1;
        TMenuItem *FinalizarPartida1;
        TMenuItem *Salir1;
        TMenuItem *Jugador1;
        TMenuItem *NuevoJugador1;
        TMenuItem *Records1;
        TMenuItem *Opciones1;
        TMenuItem *Opciones2;
        TImageList *IL1;
        TMenuItem *Ayuda1;
        TMenuItem *Ayuda2;
        TMenuItem *Creditos1;
        TPaintBox *PB1;
        TImageList *IL2;
        TEdit *E1;
        TButton *B1;
        TLabel *L1;
        TButton *B2;
        TLabel *L2;
        TLabel *L3;
        TEdit *E2;
        TButton *B3;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall PB1Paint(TObject *Sender);
        void __fastcall IniciarPartida1Click(TObject *Sender);
        void __fastcall B2Click(TObject *Sender);
        void __fastcall NuevoJugador1Click(TObject *Sender);
        void __fastcall B3Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
        int m[8][8];
        bool usuariosIguales(AnsiString),flecha;
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
