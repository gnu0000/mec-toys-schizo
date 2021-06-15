// SchizoDoc.cpp : implementation of the CSchizoDoc class
//

#include "stdafx.h"
#include "Schizo.h"

#include "SchizoDoc.h"
#include "CntrItem.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSchizoDoc

IMPLEMENT_DYNCREATE(CSchizoDoc, CRichEditDoc)

BEGIN_MESSAGE_MAP(CSchizoDoc, CRichEditDoc)
	//{{AFX_MSG_MAP(CSchizoDoc)
	//}}AFX_MSG_MAP
	// Enable default OLE container implementation
	ON_UPDATE_COMMAND_UI(ID_OLE_EDIT_LINKS, CRichEditDoc::OnUpdateEditLinksMenu)
	ON_COMMAND(ID_OLE_EDIT_LINKS, CRichEditDoc::OnEditLinks)
	ON_UPDATE_COMMAND_UI_RANGE(ID_OLE_VERB_FIRST, ID_OLE_VERB_LAST, CRichEditDoc::OnUpdateObjectVerbMenu)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSchizoDoc construction/destruction

CSchizoDoc::CSchizoDoc()
{
	EnableCompoundFile();

}

CSchizoDoc::~CSchizoDoc()
{
}

BOOL CSchizoDoc::OnNewDocument()
{
	if (!CRichEditDoc::OnNewDocument())
		return FALSE;

	return TRUE;
}

CRichEditCntrItem* CSchizoDoc::CreateClientItem(REOBJECT* preo) const
{
	// cast away constness of this
	return new CSchizoCntrItem(preo, (CSchizoDoc*) this);
}



/////////////////////////////////////////////////////////////////////////////
// CSchizoDoc serialization

void CSchizoDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
	}
	else
	{
	}
	// TODO: set CRichEditDoc::m_bRTF = FALSE if you are serializing as text
	CRichEditDoc::Serialize(ar);
}

/////////////////////////////////////////////////////////////////////////////
// CSchizoDoc diagnostics

#ifdef _DEBUG
void CSchizoDoc::AssertValid() const
{
	CRichEditDoc::AssertValid();
}

void CSchizoDoc::Dump(CDumpContext& dc) const
{
	CRichEditDoc::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CSchizoDoc commands
