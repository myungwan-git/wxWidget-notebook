#include "app.h"

bool App::OnInit() {
	wxBoxSizer* sizer = new wxBoxSizer(wxHORIZONTAL);
	frame = new wxFrame((wxFrame *)NULL, -1, wxT("Scrolling Widgets"));
	frame->SetClientSize(1000, 600);
	frame->Center();

	ScrolledWidgets *scroll = new ScrolledWidgets(frame, wxID_ANY);
	sizer->Add(scroll, 1, wxEXPAND);
	frame->SetSizer(sizer);

	frame->Show();
	return true;
}