// generated by Fast Light User Interface Designer (fluid) version 1.0109

#ifndef lgbook_h
#define lgbook_h
#include <FL/Fl.H>
#include "flinput2.h"
#include <FL/Fl_Double_Window.H>
extern Fl_Double_Window *wExport;
#include <FL/Fl_Check_Browser.H>
extern Fl_Check_Browser *chkExportBrowser;
#include <FL/Fl_Button.H>
extern Fl_Button *btnClearAll;
extern Fl_Button *btnCheckAll;
#include <FL/Fl_Return_Button.H>
extern Fl_Return_Button *btnOK;
extern Fl_Button *btnCancel;
extern Fl_Double_Window *dlgLogbook;
#include <FL/Fl_Group.H>
extern Fl_Group *editGroup;
#include "calendar.h"
extern Fl_DateInput *inpDate_log;
extern Fl_Input2 *inpTime_log;
extern Fl_Input2 *inpCall_log;
extern Fl_Input2 *inpName_log;
extern Fl_Input2 *inpFreq_log;
extern Fl_Input2 *inpMode_log;
extern Fl_Input2 *inpRstR_log;
extern Fl_Input2 *inpRstS_log;
extern Fl_Input2 *inpQth_log;
extern Fl_Input2 *inpState_log;
extern Fl_Input2 *inpVE_Prov_log;
extern Fl_Input2 *inpCountry_log;
extern Fl_Input2 *inpLoc_log;
extern Fl_Input2 *inpComment_log;
extern Fl_DateInput *inpQSLrcvddate_log;
extern Fl_DateInput *inpQSLsentdate_log;
extern void cb_btnNewSave(Fl_Button*, void*);
extern Fl_Button *bNewSave;
extern void cb_btnUpdateCancel(Fl_Button*, void*);
extern Fl_Button *bUpdateCancel;
extern void cb_btnDelete(Fl_Button*, void*);
extern Fl_Button *bDelete;
extern Fl_Input2 *txtNbrRecs_log;
extern Fl_Input2 *inpSerNoOut_log;
extern Fl_Input2 *inpSerNoIn_log;
extern Fl_Input2 *inpXchg1_log;
extern Fl_Input2 *inpXchg2_log;
extern Fl_Input2 *inpXchg3_log;
extern Fl_Input2 *inpSearchString;
extern void cb_search(Fl_Button*, void*);
extern Fl_Button *bSearchPrev;
extern Fl_Button *bSearchNext;
#include "table.h"
extern Table *wBrowser;
void create_logbook_dialogs();
#endif
