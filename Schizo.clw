; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CAboutDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "Schizo.h"
LastPage=0

ClassCount=9
Class1=CSchizoApp
Class2=CSchizoDoc
Class3=CSchizoView
Class4=CMainFrame
Class9=CAboutDlg

ResourceCount=4
Resource1=IDR_MAINFRAME
Resource2=IDR_CNTR_INPLACE
Resource4=IDD_ABOUTBOX

[CLS:CSchizoApp]
Type=0
HeaderFile=Schizo.h
ImplementationFile=Schizo.cpp
Filter=N

[CLS:CSchizoDoc]
Type=0
HeaderFile=SchizoDoc.h
ImplementationFile=SchizoDoc.cpp
Filter=N

[CLS:CSchizoView]
Type=0
HeaderFile=SchizoView.h
ImplementationFile=SchizoView.cpp
Filter=C


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T
BaseClass=CFrameWnd
VirtualFilter=fWC




[CLS:CAboutDlg]
Type=0
HeaderFile=Schizo.cpp
ImplementationFile=Schizo.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[MNU:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_SAVE_AS
Command5=ID_FILE_PRINT
Command6=ID_FILE_PRINT_PREVIEW
Command7=ID_FILE_PRINT_SETUP
Command8=ID_FILE_MRU_FILE1
Command9=ID_APP_EXIT
Command10=ID_EDIT_UNDO
Command11=ID_EDIT_CUT
Command12=ID_EDIT_COPY
Command13=ID_EDIT_PASTE
Command14=ID_EDIT_PASTE_SPECIAL
Command15=ID_EDIT_SELECT_ALL
Command16=ID_EDIT_FIND
Command17=ID_EDIT_REPEAT
Command18=ID_EDIT_REPLACE
Command19=ID_OLE_INSERT_NEW
Command20=ID_OLE_EDIT_LINKS
Command21=ID_OLE_EDIT_PROPERTIES
Command22=ID_OLE_VERB_FIRST
Command23=ID_VIEW_TOOLBAR
Command24=ID_VIEW_STATUS_BAR
Command25=ID_APP_ABOUT
CommandCount=25

[MNU:IDR_CNTR_INPLACE]
Type=1
Class=CSchizoView
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_SAVE_AS
Command5=ID_FILE_PRINT
Command6=ID_FILE_PRINT_PREVIEW
Command7=ID_FILE_PRINT_SETUP
Command8=ID_FILE_MRU_FILE1
Command9=ID_APP_EXIT
CommandCount=9

[ACL:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_PRINT
Command5=ID_EDIT_UNDO
Command6=ID_EDIT_CUT
Command7=ID_EDIT_COPY
Command8=ID_EDIT_PASTE
Command9=ID_EDIT_SELECT_ALL
Command10=ID_EDIT_FIND
Command11=ID_EDIT_REPEAT
Command12=ID_EDIT_REPLACE
Command13=ID_OLE_EDIT_PROPERTIES
Command14=ID_EDIT_UNDO
Command15=ID_EDIT_CUT
Command16=ID_EDIT_COPY
Command17=ID_EDIT_PASTE
Command18=ID_NEXT_PANE
Command19=ID_PREV_PANE
Command20=ID_CANCEL_EDIT_CNTR
CommandCount=20

[ACL:IDR_CNTR_INPLACE]
Type=1
Class=CSchizoView
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_PRINT
Command5=ID_NEXT_PANE
Command6=ID_PREV_PANE
Command7=ID_CANCEL_EDIT_CNTR
CommandCount=7

[TB:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_CUT
Command5=ID_EDIT_COPY
Command6=ID_EDIT_PASTE
Command7=ID_FILE_PRINT
Command8=ID_APP_ABOUT
CommandCount=8

