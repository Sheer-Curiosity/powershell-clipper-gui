#ifndef __BASE_H // Make sure to only declare these classes once
	#define __BASE_H
		class MainApp: public wxApp // MainApp is the class for our application
    { 
    // MainApp just acts as a container for the window,
    public: // or frame in MainFrame
      virtual bool OnInit();
    };
    
    class MainFrame: public wxFrame // MainFrame is the class for our window,
    {
    // It contains the window and all objects in it
    public:
      MainFrame( const wxString &title, const wxPoint &pos, const wxSize &size );
			wxPanel *HelloPanel;
      wxButton *HelloButton_1;
			wxButton *HelloButton_2;
      void OnExit( wxCommandEvent& event );
			void RunCommand( wxCommandEvent& event );
  
      DECLARE_EVENT_TABLE()
    };
  
    enum
    {
			PANEL_Hello = wxID_HIGHEST + 1,
      BUTTON_Hello_1 = wxID_HIGHEST + 2,
			BUTTON_Hello_2 = wxID_HIGHEST + 3
		};
 
#endif