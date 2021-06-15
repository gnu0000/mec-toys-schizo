// CntrItem.h : interface of the CSchizoCntrItem class
//

#if !defined(AFX_CNTRITEM_H__B136CF08_0987_48B2_98A9_1134B392A9BF__INCLUDED_)
#define AFX_CNTRITEM_H__B136CF08_0987_48B2_98A9_1134B392A9BF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CSchizoDoc;
class CSchizoView;

class CSchizoCntrItem : public CRichEditCntrItem
{
	DECLARE_SERIAL(CSchizoCntrItem)

// Constructors
public:
	CSchizoCntrItem(REOBJECT* preo = NULL, CSchizoDoc* pContainer = NULL);

// Attributes
public:
	CSchizoDoc* GetDocument()
		{ return (CSchizoDoc*)CRichEditCntrItem::GetDocument(); }
	CSchizoView* GetActiveView()
		{ return (CSchizoView*)CRichEditCntrItem::GetActiveView(); }

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSchizoCntrItem)
	public:
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	~CSchizoCntrItem();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CNTRITEM_H__B136CF08_0987_48B2_98A9_1134B392A9BF__INCLUDED_)
