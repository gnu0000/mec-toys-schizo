// Schizo.h : main header file for the SCHIZO application
//

#if !defined(AFX_SCHIZO_H__85E62847_41A1_4038_AB13_6E6863BD6A2B__INCLUDED_)
#define AFX_SCHIZO_H__85E62847_41A1_4038_AB13_6E6863BD6A2B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CSchizoApp:
// See Schizo.cpp for the implementation of this class
//

class CSchizoApp : public CWinApp
{
public:
	CSchizoApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSchizoApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CSchizoApp)
	afx_msg void OnAppAbout();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SCHIZO_H__85E62847_41A1_4038_AB13_6E6863BD6A2B__INCLUDED_)
