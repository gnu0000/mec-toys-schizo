// SchizoDoc.h : interface of the CSchizoDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_SCHIZODOC_H__1CEF2142_78BB_4E64_AC23_0B35BE940F58__INCLUDED_)
#define AFX_SCHIZODOC_H__1CEF2142_78BB_4E64_AC23_0B35BE940F58__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CSchizoDoc : public CRichEditDoc
{
protected: // create from serialization only
	CSchizoDoc();
	DECLARE_DYNCREATE(CSchizoDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSchizoDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL
	virtual CRichEditCntrItem* CreateClientItem(REOBJECT* preo) const;

// Implementation
public:
	virtual ~CSchizoDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CSchizoDoc)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SCHIZODOC_H__1CEF2142_78BB_4E64_AC23_0B35BE940F58__INCLUDED_)
