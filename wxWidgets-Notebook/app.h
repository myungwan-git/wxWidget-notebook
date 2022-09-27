#ifndef app_h
#define app_h

#include "main.h"

class App : public wxApp {
	private:
	wxFrame *frame;
	public:
	bool OnInit();
};
IMPLEMENT_APP(App)

#endif