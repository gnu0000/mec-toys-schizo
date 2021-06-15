// SchizoView.h : interface of the CSchizoView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_SCHIZOVIEW_H__BAAA7392_8B81_4279_BA55_B72BE862897E__INCLUDED_)
#define AFX_SCHIZOVIEW_H__BAAA7392_8B81_4279_BA55_B72BE862897E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CSchizoCntrItem;

class CSchizoView : public CRichEditView
{
protected: // create from serialization only
	CSchizoView();
	DECLARE_DYNCREATE(CSchizoView)

// Attributes
public:
	CSchizoDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSchizoView)
	public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual void OnInitialUpdate(); // called first time after construct
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CSchizoView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CSchizoView)
	afx_msg void OnDestroy();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in SchizoView.cpp
inline CSchizoDoc* CSchizoView::GetDocument()
   { return (CSchizoDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SCHIZOVIEW_H__BAAA7392_8B81_4279_BA55_B72BE862897E__INCLUDED_)
