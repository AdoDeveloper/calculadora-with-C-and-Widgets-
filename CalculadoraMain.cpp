/***************************************************************
 * Name:      CalculadoraMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Adolfo Cortez ()
 * Created:   2022-06-05
 * Copyright: Adolfo Cortez ()
 * License:
 **************************************************************/

#include "CalculadoraMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(CalculadoraFrame)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/settings.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build\n");
         wxbuild <<_T("Operaciones Matematicas Basicas\n");
          wxbuild <<_T("Suma: num1 + num2\n");
           wxbuild <<_T("Resta: num1 - num2\n");
            wxbuild <<_T("Multiplicacion: num1 x num2\n");
             wxbuild <<_T("Division: num1 / num2\n");
              wxbuild <<_T("Porcentaje: num1 % numero de porcentaje deseado\n");
                 wxbuild <<_T("Potencia: num1 X^ numero de potencia\n");
                    wxbuild <<_T("PI: num1 x PI\n");
                       wxbuild <<_T("x10^X: num1 x10^ numero de exponente\n");
                          wxbuild <<_T("Ans: guarda el dato usado anteriormente");
          
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(CalculadoraFrame)
const long CalculadoraFrame::ID_BUTTON1 = wxNewId();
const long CalculadoraFrame::ID_BUTTON2 = wxNewId();
const long CalculadoraFrame::ID_BUTTON3 = wxNewId();
const long CalculadoraFrame::ID_BUTTON4 = wxNewId();
const long CalculadoraFrame::ID_BUTTON5 = wxNewId();
const long CalculadoraFrame::ID_BUTTON6 = wxNewId();
const long CalculadoraFrame::ID_BUTTON7 = wxNewId();
const long CalculadoraFrame::ID_BUTTON8 = wxNewId();
const long CalculadoraFrame::ID_BUTTON9 = wxNewId();
const long CalculadoraFrame::ID_BUTTON10 = wxNewId();
const long CalculadoraFrame::ID_BUTTON11 = wxNewId();
const long CalculadoraFrame::ID_BUTTON12 = wxNewId();
const long CalculadoraFrame::ID_BUTTON13 = wxNewId();
const long CalculadoraFrame::ID_BUTTON14 = wxNewId();
const long CalculadoraFrame::ID_BUTTON15 = wxNewId();
const long CalculadoraFrame::ID_BUTTON17 = wxNewId();
const long CalculadoraFrame::ID_BUTTON18 = wxNewId();
const long CalculadoraFrame::ID_TEXTCTRL1 = wxNewId();
const long CalculadoraFrame::ID_STATICTEXT1 = wxNewId();
const long CalculadoraFrame::ID_STATICTEXT2 = wxNewId();
const long CalculadoraFrame::ID_BUTTON16 = wxNewId();
const long CalculadoraFrame::ID_BUTTON19 = wxNewId();
const long CalculadoraFrame::ID_BUTTON20 = wxNewId();
const long CalculadoraFrame::ID_BUTTON21 = wxNewId();
const long CalculadoraFrame::ID_TEXTCTRL2 = wxNewId();
const long CalculadoraFrame::ID_BUTTON22 = wxNewId();
const long CalculadoraFrame::ID_PANEL1 = wxNewId();
const long CalculadoraFrame::idMenuQuit = wxNewId();
const long CalculadoraFrame::idMenuAbout = wxNewId();
const long CalculadoraFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(CalculadoraFrame,wxFrame)
    //(*EventTable(CalculadoraFrame)
    //*)
END_EVENT_TABLE()

CalculadoraFrame::CalculadoraFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(CalculadoraFrame)
    wxMenu* Menu1;
    wxMenu* Menu2;
    wxMenuBar* MenuBar1;
    wxMenuItem* MenuItem1;
    wxMenuItem* MenuItem2;

    Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
    SetClientSize(wxSize(432,471));
    Panel1 = new wxPanel(this, ID_PANEL1, wxPoint(256,240), wxSize(416,440), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    Panel1->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_MENUTEXT));
    Panel1->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_MENUHILIGHT));
    Button1 = new wxButton(Panel1, ID_BUTTON1, _("1"), wxPoint(32,128), wxSize(72,40), 0, wxDefaultValidator, _T("ID_BUTTON1"));
    wxFont Button1Font(11,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    Button1->SetFont(Button1Font);
    Button2 = new wxButton(Panel1, ID_BUTTON2, _("2"), wxPoint(120,128), wxSize(72,40), 0, wxDefaultValidator, _T("ID_BUTTON2"));
    wxFont Button2Font(11,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    Button2->SetFont(Button2Font);
    Button3 = new wxButton(Panel1, ID_BUTTON3, _("3"), wxPoint(208,128), wxSize(72,40), 0, wxDefaultValidator, _T("ID_BUTTON3"));
    wxFont Button3Font(11,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    Button3->SetFont(Button3Font);
    Button4 = new wxButton(Panel1, ID_BUTTON4, _("4"), wxPoint(32,176), wxSize(72,40), 0, wxDefaultValidator, _T("ID_BUTTON4"));
    wxFont Button4Font(11,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    Button4->SetFont(Button4Font);
    Button5 = new wxButton(Panel1, ID_BUTTON5, _("5"), wxPoint(120,176), wxSize(72,40), 0, wxDefaultValidator, _T("ID_BUTTON5"));
    wxFont Button5Font(11,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    Button5->SetFont(Button5Font);
    Button6 = new wxButton(Panel1, ID_BUTTON6, _("6"), wxPoint(208,176), wxSize(72,40), 0, wxDefaultValidator, _T("ID_BUTTON6"));
    wxFont Button6Font(11,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    Button6->SetFont(Button6Font);
    Button7 = new wxButton(Panel1, ID_BUTTON7, _("7"), wxPoint(32,224), wxSize(72,40), 0, wxDefaultValidator, _T("ID_BUTTON7"));
    wxFont Button7Font(11,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    Button7->SetFont(Button7Font);
    Button8 = new wxButton(Panel1, ID_BUTTON8, _("8"), wxPoint(120,224), wxSize(72,40), 0, wxDefaultValidator, _T("ID_BUTTON8"));
    wxFont Button8Font(11,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    Button8->SetFont(Button8Font);
    Button9 = new wxButton(Panel1, ID_BUTTON9, _("9"), wxPoint(208,224), wxSize(72,40), 0, wxDefaultValidator, _T("ID_BUTTON9"));
    wxFont Button9Font(11,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    Button9->SetFont(Button9Font);
    Button0 = new wxButton(Panel1, ID_BUTTON10, _("0"), wxPoint(120,272), wxSize(72,40), 0, wxDefaultValidator, _T("ID_BUTTON10"));
    wxFont Button0Font(10,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    Button0->SetFont(Button0Font);
    Button = new wxButton(Panel1, ID_BUTTON11, _("%"), wxPoint(32,272), wxSize(72,40), 0, wxDefaultValidator, _T("ID_BUTTON11"));
    wxFont ButtonFont(11,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    Button->SetFont(ButtonFont);
    Borrar = new wxButton(Panel1, ID_BUTTON12, _("Borrar"), wxPoint(296,128), wxSize(72,40), 0, wxDefaultValidator, _T("ID_BUTTON12"));
    wxFont BorrarFont(10,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    Borrar->SetFont(BorrarFont);
    ButtonMas = new wxButton(Panel1, ID_BUTTON13, _("+"), wxPoint(296,176), wxSize(72,40), 0, wxDefaultValidator, _T("ID_BUTTON13"));
    wxFont ButtonMasFont(11,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    ButtonMas->SetFont(ButtonMasFont);
    ButtonMenos = new wxButton(Panel1, ID_BUTTON14, _("-"), wxPoint(296,224), wxSize(72,40), 0, wxDefaultValidator, _T("ID_BUTTON14"));
    wxFont ButtonMenosFont(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    ButtonMenos->SetFont(ButtonMenosFont);
    ButtonX = new wxButton(Panel1, ID_BUTTON15, _("x"), wxPoint(296,272), wxSize(72,40), 0, wxDefaultValidator, _T("ID_BUTTON15"));
    wxFont ButtonXFont(11,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    ButtonX->SetFont(ButtonXFont);
    Button_ab = new wxButton(Panel1, ID_BUTTON17, _("/"), wxPoint(208,272), wxSize(72,40), 0, wxDefaultValidator, _T("ID_BUTTON17"));
    wxFont Button_abFont(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    Button_ab->SetFont(Button_abFont);
    Igual = new wxButton(Panel1, ID_BUTTON18, _("="), wxPoint(296,320), wxSize(72,40), 0, wxDefaultValidator, _T("ID_BUTTON18"));
    wxFont IgualFont(11,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    Igual->SetFont(IgualFont);
    TextCtrl1 = new wxTextCtrl(Panel1, ID_TEXTCTRL1, _("0"), wxPoint(32,72), wxSize(336,40), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    wxFont TextCtrl1Font(18,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("@Arial Unicode MS"),wxFONTENCODING_DEFAULT);
    TextCtrl1->SetFont(TextCtrl1Font);
    StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("CALCULADORA BÁSICA"), wxPoint(80,24), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    wxFont StaticText1Font(12,wxFONTFAMILY_DECORATIVE,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,true,_T("Jokerman"),wxFONTENCODING_DEFAULT);
    StaticText1->SetFont(StaticText1Font);
    StaticText2 = new wxStaticText(Panel1, ID_STATICTEXT2, _("Copyright ©2022 Adolfo Cortéz"), wxPoint(32,424), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    wxFont StaticText2Font(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("@Arial Unicode MS"),wxFONTENCODING_DEFAULT);
    StaticText2->SetFont(StaticText2Font);
    ButtonPunto = new wxButton(Panel1, ID_BUTTON16, _("."), wxPoint(208,320), wxSize(72,40), 0, wxDefaultValidator, _T("ID_BUTTON16"));
    wxFont ButtonPuntoFont(18,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    ButtonPunto->SetFont(ButtonPuntoFont);
    Button10 = new wxButton(Panel1, ID_BUTTON19, _("X^"), wxPoint(32,320), wxSize(72,40), 0, wxDefaultValidator, _T("ID_BUTTON19"));
    wxFont Button10Font(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    Button10->SetFont(Button10Font);
    Button11 = new wxButton(Panel1, ID_BUTTON20, _("PI"), wxPoint(120,320), wxSize(72,40), 0, wxDefaultValidator, _T("ID_BUTTON20"));
    wxFont Button11Font(10,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    Button11->SetFont(Button11Font);
    Button12 = new wxButton(Panel1, ID_BUTTON21, _("x10^X"), wxPoint(32,368), wxSize(72,40), 0, wxDefaultValidator, _T("ID_BUTTON21"));
    wxFont Button12Font(11,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    Button12->SetFont(Button12Font);
    TextCtrl2 = new wxTextCtrl(Panel1, ID_TEXTCTRL2, wxEmptyString, wxPoint(208,368), wxSize(160,40), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
    wxFont TextCtrl2Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("@Arial Unicode MS"),wxFONTENCODING_DEFAULT);
    TextCtrl2->SetFont(TextCtrl2Font);
    Button13 = new wxButton(Panel1, ID_BUTTON22, _("Ans"), wxPoint(120,368), wxSize(75,40), 0, wxDefaultValidator, _T("ID_BUTTON22"));
    wxFont Button13Font(11,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    Button13->SetFont(Button13Font);
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Salir\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);

    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CalculadoraFrame::OnButton1Click);
    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CalculadoraFrame::OnButton2Click);
    Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CalculadoraFrame::OnButton3Click);
    Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CalculadoraFrame::OnButton4Click);
    Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CalculadoraFrame::OnButton5Click);
    Connect(ID_BUTTON6,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CalculadoraFrame::OnButton6Click);
    Connect(ID_BUTTON7,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CalculadoraFrame::OnButton7Click);
    Connect(ID_BUTTON8,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CalculadoraFrame::OnButton8Click);
    Connect(ID_BUTTON9,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CalculadoraFrame::OnButton9Click);
    Connect(ID_BUTTON10,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CalculadoraFrame::OnButton0Click);
    Connect(ID_BUTTON11,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CalculadoraFrame::OnButtonClick);
    Connect(ID_BUTTON12,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CalculadoraFrame::OnBorrarClick);
    Connect(ID_BUTTON13,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CalculadoraFrame::OnButtonMasClick);
    Connect(ID_BUTTON14,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CalculadoraFrame::OnButtonMenosClick);
    Connect(ID_BUTTON15,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CalculadoraFrame::OnButtonXClick);
    Connect(ID_BUTTON17,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CalculadoraFrame::OnButton_abClick);
    Connect(ID_BUTTON18,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CalculadoraFrame::OnButton18Click);
    Connect(ID_TEXTCTRL1,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&CalculadoraFrame::OnTextCtrl1Text);
    Connect(ID_BUTTON16,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CalculadoraFrame::OnButtonPuntoClick);
    Connect(ID_BUTTON19,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CalculadoraFrame::OnButton10Click);
    Connect(ID_BUTTON20,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CalculadoraFrame::OnButton11Click);
    Connect(ID_BUTTON21,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CalculadoraFrame::OnButton12Click);
    Connect(ID_TEXTCTRL2,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&CalculadoraFrame::OnTextCtrl2Text);
    Connect(ID_BUTTON22,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CalculadoraFrame::OnButton13Click);
    Panel1->Connect(wxEVT_PAINT,(wxObjectEventFunction)&CalculadoraFrame::OnPanel1Paint,0,this);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&CalculadoraFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&CalculadoraFrame::OnAbout);
    //*)
}

CalculadoraFrame::~CalculadoraFrame()
{
    //(*Destroy(CalculadoraFrame)
    //*)
}

void CalculadoraFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void CalculadoraFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void CalculadoraFrame::OnButton16Click(wxCommandEvent& event)
{
}


wxString fast, last, Res, potencia;
double operator1, operator2;
int operators, num1, num2, ptn;
float Answer;
void CalculadoraFrame::OnButton1Click(wxCommandEvent& event)
{
    if(TextCtrl1->GetValue()=="0")
    {
        TextCtrl1->SetValue(Button1->GetLabel());
    }
    else
    {
        TextCtrl1->AppendText(Button1->GetLabel());
    }
}

void CalculadoraFrame::OnButton2Click(wxCommandEvent& event)
{
        if(TextCtrl1->GetValue()=="0")
    {
        TextCtrl1->SetValue(Button2->GetLabel());
    }
    else
    {
        TextCtrl1->AppendText(Button2->GetLabel());
    }
}

void CalculadoraFrame::OnButton3Click(wxCommandEvent& event)
{
            if(TextCtrl1->GetValue()=="0")
    {
        TextCtrl1->SetValue(Button3->GetLabel());
    }
    else
    {
        TextCtrl1->AppendText(Button3->GetLabel());
    }
}



void CalculadoraFrame::OnButton4Click(wxCommandEvent& event)
{
            if(TextCtrl1->GetValue()=="0")
    {
        TextCtrl1->SetValue(Button4->GetLabel());
    }
    else
    {
        TextCtrl1->AppendText(Button4->GetLabel());
    }
}

void CalculadoraFrame::OnButton5Click(wxCommandEvent& event)
{
            if(TextCtrl1->GetValue()=="0")
    {
        TextCtrl1->SetValue(Button5->GetLabel());
    }
    else
    {
        TextCtrl1->AppendText(Button5->GetLabel());
    }
}

void CalculadoraFrame::OnButton6Click(wxCommandEvent& event)
{
            if(TextCtrl1->GetValue()=="0")
    {
        TextCtrl1->SetValue(Button6->GetLabel());
    }
    else
    {
        TextCtrl1->AppendText(Button6->GetLabel());
    }
}

void CalculadoraFrame::OnButton7Click(wxCommandEvent& event)
{
            if(TextCtrl1->GetValue()=="0")
    {
        TextCtrl1->SetValue(Button7->GetLabel());
    }
    else
    {
        TextCtrl1->AppendText(Button7->GetLabel());
    }
}

void CalculadoraFrame::OnButton8Click(wxCommandEvent& event)
{
            if(TextCtrl1->GetValue()=="0")
    {
        TextCtrl1->SetValue(Button8->GetLabel());
    }
    else
    {
        TextCtrl1->AppendText(Button8->GetLabel());
    }
}

void CalculadoraFrame::OnButton9Click(wxCommandEvent& event)
{
            if(TextCtrl1->GetValue()=="0")
    {
        TextCtrl1->SetValue(Button9->GetLabel());
    }
    else
    {
        TextCtrl1->AppendText(Button9->GetLabel());
    }
}

void CalculadoraFrame::OnButton0Click(wxCommandEvent& event)
{
            if(TextCtrl1->GetValue()=="0")
    {
        TextCtrl1->SetValue(Button0->GetLabel());
    }
    else
    {
        TextCtrl1->AppendText(Button0->GetLabel());
    }
}

void CalculadoraFrame::OnBorrarClick(wxCommandEvent& event)
{
    TextCtrl1->SetValue("0");
}

void CalculadoraFrame::OnButtonMasClick(wxCommandEvent& event)
{
    fast = TextCtrl1->GetValue();
    TextCtrl2->SetValue(TextCtrl1->GetValue());
      if(!fast.ToDouble(&operator1)){ /*salida de error! */ }
    operators=1; //+
    TextCtrl1->SetValue("0");
}

void CalculadoraFrame::OnButtonMenosClick(wxCommandEvent& event)
{
      fast = TextCtrl1->GetValue();
      TextCtrl2->SetValue(TextCtrl1->GetValue());
   if(!fast.ToDouble(&operator1)){ /*salida de error! */ }
    operators=2; //-
    TextCtrl1->SetValue("0");
}

void CalculadoraFrame::OnButtonXClick(wxCommandEvent& event)
{
      fast = TextCtrl1->GetValue();
      TextCtrl2->SetValue(TextCtrl1->GetValue());
     if(!fast.ToDouble(&operator1)){ /*salida de error! */ }
    operators=3; //*
    TextCtrl1->SetValue("0");
}

void CalculadoraFrame::OnButton_abClick(wxCommandEvent& event)
{
      fast = TextCtrl1->GetValue();
      TextCtrl2->SetValue(TextCtrl1->GetValue());
     if(!fast.ToDouble(&operator1)){ /*salida de error! */ }
    operators=4; // /
    TextCtrl1->SetValue("0");
}

void CalculadoraFrame::OnButtonClick(wxCommandEvent& event)
{
      fast = TextCtrl1->GetValue();
    if(!fast.ToDouble(&operator1)){ /*salida de error! */ }
    TextCtrl2->SetValue(TextCtrl1->GetValue());
    operators=5; // %
    TextCtrl1->SetValue("0");
}

void CalculadoraFrame::OnButton10Click(wxCommandEvent& event)
{
    fast = TextCtrl1->GetValue();
    TextCtrl2->SetValue(TextCtrl1->GetValue());
     num1=wxAtoi(fast);
    operators=6; // X^
    TextCtrl1->SetValue("0");
}

void CalculadoraFrame::OnButton12Click(wxCommandEvent& event)
{
   fast = TextCtrl1->GetValue();
     TextCtrl2->SetValue(TextCtrl1->GetValue());
      if(!fast.ToDouble(&operator1)){ /*salida de error! */ }
    operators=7; //x10
    TextCtrl1->SetValue("0");
}

void CalculadoraFrame::OnButton13Click(wxCommandEvent& event)
{
          if(TextCtrl1->GetValue()>="0")
    {
        TextCtrl2->SetValue(TextCtrl1->GetValue());
        fast = TextCtrl2->GetValue();
        if(!fast.ToDouble(&operator1)){ /*salida de error! */ }
        
    }
    else
    {
        TextCtrl2->AppendText(TextCtrl1->GetValue());
          fast = TextCtrl2->GetValue();
         if(!fast.ToDouble(&operator1)){ /*salida de error! */ }
         
    }
}

void CalculadoraFrame::OnButton18Click(wxCommandEvent& event)
{
    last = TextCtrl1->GetValue();
    TextCtrl2->SetValue(TextCtrl1->GetValue());
    potencia = TextCtrl1->GetValue();
    num2 = wxAtoi(potencia);
   if(!last.ToDouble(&operator2)){ /*salida de error! */ }
    switch (operators)
    {
    case 1:
         Answer = float (operator1) + float(operator2);
         Res = wxString::Format(wxT("%g"),Answer);
         TextCtrl1->SetValue(Res);
     break;
       case 2:
         Answer = float (operator1) - float(operator2);
         Res = wxString::Format(wxT("%g"),Answer);
           TextCtrl1->SetValue(Res);
     break;
       case 3:
         Answer = float (operator1) * float(operator2);
         Res = wxString::Format(wxT("%g"),Answer);
           TextCtrl1->SetValue(Res);
     break;
       case 4:
         Answer = float (operator1) / float(operator2);
         Res = wxString::Format(wxT("%g"),Answer);
           TextCtrl1->SetValue(Res);
     break;
       case 5:
         Answer = ((float (operator1) * float(operator2))/100);
         Res = wxString::Format(wxT("%g"),Answer);
           TextCtrl1->SetValue(Res);
     break;
       case 6:
         ptn = pow(num1,num2);
              Res = wxString::Format(wxT("%i"),ptn);
           TextCtrl1->SetValue(Res);
        break;
       case 7:
            Answer = (float (operator1) * (pow(10,operator2)));
         Res = wxString::Format(wxT("%f"),Answer);
           TextCtrl1->SetValue(Res);
        break;
    }
}



void CalculadoraFrame::OnPanel1Paint(wxPaintEvent& event)
{
}

void CalculadoraFrame::OnButtonPuntoClick(wxCommandEvent& event)
{
             if(TextCtrl1->GetValue()=="0")
    {
        if(CalculadoraFrame::Button0)
        {
              TextCtrl1->SetValue(Button0->GetLabel()+ButtonPunto->GetLabel());
        }
        else
        {
             TextCtrl1->SetValue(ButtonPunto->GetLabel());
        }
       
    }
    else
    {
        TextCtrl1->AppendText(ButtonPunto->GetLabel());
    }
}
void CalculadoraFrame::OnTextCtrl1Text(wxCommandEvent& event)
{
}

void CalculadoraFrame::OnButton11Click(wxCommandEvent& event)
{
              if(TextCtrl1->GetValue()=="0")
    {
        TextCtrl1->SetValue("3.1416");
    }
    else
    {
        TextCtrl1->AppendText("3.1416");
    }
}

void CalculadoraFrame::OnTextCtrl2Text(wxCommandEvent& event)
{
}


