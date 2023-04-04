/***************************************************************
 * Name:      CalculadoraApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Adolfo Cortez ()
 * Created:   2022-06-05
 * Copyright: Adolfo Cortez ()
 * License:
 **************************************************************/

#include "CalculadoraApp.h"

//(*AppHeaders
#include "CalculadoraMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(CalculadoraApp);

bool CalculadoraApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	CalculadoraFrame* Frame = new CalculadoraFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
