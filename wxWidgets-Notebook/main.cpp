#include "main.h"

#include <wx/notebook.h>
ScrolledWidgets::ScrolledWidgets(wxWindow* parent, wxWindowID id)
	: wxScrolledWindow(parent, id) {
	
	wxPanel *panelTop = new wxPanel(this);
	panelTop->SetBackgroundColour(*wxRED);

	wxNotebook *tab = new wxNotebook(panelTop, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxNB_LEFT);
	
	wxPanel *panelMiddle = new wxPanel(tab);
	wxPanel *panelBottom = new wxPanel(tab);
	panelMiddle->SetBackgroundColour(*wxGREEN);
	panelBottom->SetBackgroundColour(*wxBLACK);

	tab->AddPage(panelMiddle, L"Tab 1");
	tab->AddPage(panelBottom, L"Tab 2");

	// Setting the tab sizer.
	wxBoxSizer* panelSizer = new wxBoxSizer(wxHORIZONTAL);
	panelSizer->Add(tab, 1, wxEXPAND | wxALL);
	panelTop->SetSizer(panelSizer);

	// Setting the basic panel(panelTop) sizer.
	wxBoxSizer* topSizer = new wxBoxSizer(wxHORIZONTAL);
	topSizer->SetMinSize(250, 100);
	topSizer->Add(panelTop, 1, wxEXPAND);
	SetSizerAndFit(topSizer);

	/*
	***************************
	** 좌측의 tab크기 조절하기
	** 일단 PenteractApp에 합치기
	** 
	***************************
	*/

	/*
	wxBoxSizer *mainSizer = new wxBoxSizer(wxHORIZONTAL);
	mainSizer->Add(panelSizer, 1, wxEXPAND | wxALL);
	mainSizer->Add(topSizer, 4, wxEXPAND | wxALL);
	this->SetSizer(mainSizer);
	*/

	/*
	wxPanel* panel = new wxPanel(this, wxID_ANY);
	panel->SetBackgroundColour(*wxRED);

	// Create the wxNotebook widget
	wxNotebook* notebook = new wxNotebook(panel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxNB_LEFT);
	notebook->SetBackgroundColour(*wxGREEN);

	// Add 2 pages to the wxNotebook widget
	wxTextCtrl* textCtrl1 = new wxTextCtrl(notebook, wxID_ANY, L"Tab 1 Contents", wxDefaultPosition, wxSize(100,50));
	notebook->AddPage(textCtrl1, L"Tab 1");
	wxTextCtrl* textCtrl2 = new wxTextCtrl(notebook, wxID_ANY, L"Tab 2 Contents");
	notebook->AddPage(textCtrl2, L"Tab 2");


	// Set up the sizer for the panel
	wxBoxSizer* panelSizer = new wxBoxSizer(wxHORIZONTAL);
	panelSizer->Add(notebook, 1, wxEXPAND);
	panel->SetSizer(panelSizer);

	// Set up the sizer for the frame and resize the frame
	// according to its contents
	wxBoxSizer* topSizer = new wxBoxSizer(wxHORIZONTAL);
	topSizer->SetMinSize(250, 100);
	topSizer->Add(panel, 1, wxEXPAND);
	SetSizerAndFit(topSizer);
	*/
}




/*
#include "WxNotebook1Frame.h"
#include <wx/panel.h>
#include <wx/notebook.h>
#include <wx/textctrl.h>
#include <wx/sizer.h>

WxNotebook1Frame::WxNotebook1Frame(const wxString& title)
	: wxFrame(NULL, wxID_ANY, title) {
	// Create a top-level panel to hold all the contents of the frame
	wxPanel* panel = new wxPanel(this, wxID_ANY);

	// Create the wxNotebook widget
	wxNotebook* notebook = new wxNotebook(panel, wxID_ANY);

	// Add 2 pages to the wxNotebook widget
	wxTextCtrl* textCtrl1 = new wxTextCtrl(notebook, wxID_ANY, L"Tab 1 Contents");
	notebook->AddPage(textCtrl1, L"Tab 1");
	wxTextCtrl* textCtrl2 = new wxTextCtrl(notebook, wxID_ANY, L"Tab 2 Contents");
	notebook->AddPage(textCtrl2, L"Tab 2");

	// Set up the sizer for the panel
	wxBoxSizer* panelSizer = new wxBoxSizer(wxHORIZONTAL);
	panelSizer->Add(notebook, 1, wxEXPAND);
	panel->SetSizer(panelSizer);

	// Set up the sizer for the frame and resize the frame
	// according to its contents
	wxBoxSizer* topSizer = new wxBoxSizer(wxHORIZONTAL);
	topSizer->SetMinSize(250, 100);
	topSizer->Add(panel, 1, wxEXPAND);
	SetSizerAndFit(topSizer);
}
*/