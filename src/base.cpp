#include <wx/wxprec.h>
  #ifndef WX_PRECOMP
    #include <wx/wx.h>
  #endif
  #include "clipper/base.h"
 
  IMPLEMENT_APP(MainApp) // Initializes the MainApp class and tells our program
  // to run it
  bool MainApp::OnInit()
  {
    // Create an instance of our frame, or window
    MainFrame *MainWin = new MainFrame(_T("Hello World!"), wxPoint(1, 1), wxSize(300,200));
    MainWin->Show(TRUE); // show the window
    SetTopWindow(MainWin); // and finally, set it as the main window
 
   return TRUE;
  } 
 
  BEGIN_EVENT_TABLE ( MainFrame, wxFrame )
    EVT_BUTTON ( BUTTON_Hello_1, MainFrame::OnExit ) // Tell the OS to run MainFrame::OnExit when
    EVT_BUTTON ( BUTTON_Hello_2, MainFrame::RunCommand ) // Tell the OS to run MainFrame::OnExit when
  END_EVENT_TABLE() // The button is pressed

  MainFrame::MainFrame(const wxString &title, const wxPoint &pos, const wxSize &size): wxFrame((wxFrame*)NULL,  - 1, title, pos, size)
  {
    HelloPanel = new wxPanel(this, PANEL_Hello);
    HelloButton_1 = new wxButton(HelloPanel, BUTTON_Hello_1, _T("Hello World"), wxPoint(0, 0), wxDefaultSize, 0);
    HelloButton_2 = new wxButton(HelloPanel, BUTTON_Hello_2, _T("Goodby World"), wxPoint(100, 0), wxDefaultSize, 0);
  }
 
  void MainFrame::OnExit( wxCommandEvent& event )
  {
    Close(TRUE); // Tells the OS to quit running this process
  }

  void MainFrame::RunCommand( wxCommandEvent& event )
  {
    HelloButton_2 -> SetLabel(_T("TEST"));
  }