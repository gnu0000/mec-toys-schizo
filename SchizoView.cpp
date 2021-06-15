// SchizoView.cpp : implementation of the CSchizoView class
//

#include "stdafx.h"
#include "Schizo.h"

#include "SchizoDoc.h"
#include "CntrItem.h"
#include "SchizoView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSchizoView

IMPLEMENT_DYNCREATE(CSchizoView, CRichEditView)

BEGIN_MESSAGE_MAP(CSchizoView, CRichEditView)
	//{{AFX_MSG_MAP(CSchizoView)
	ON_WM_DESTROY()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CRichEditView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CRichEditView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CRichEditView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSchizoView construction/destruction

CSchizoView::CSchizoView()
{
}

CSchizoView::~CSchizoView()
{
}

BOOL CSchizoView::PreCreateWindow(CREATESTRUCT& cs)
{
	return CRichEditView::PreCreateWindow(cs);
}

void CSchizoView::OnInitialUpdate()
{
	CRichEditView::OnInitialUpdate();


	SetMargins(CRect(720, 720, 720, 720));
}

/////////////////////////////////////////////////////////////////////////////
// CSchizoView printing

BOOL CSchizoView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}


void CSchizoView::OnDestroy()
{
   CRichEditView::OnDestroy();
   COleClientItem* pActiveItem = GetDocument()->GetInPlaceActiveItem(this);
   if (pActiveItem != NULL && pActiveItem->GetActiveView() == this)
   {
      pActiveItem->Deactivate();
      ASSERT(GetDocument()->GetInPlaceActiveItem(this) == NULL);
   }
}


/////////////////////////////////////////////////////////////////////////////
// CSchizoView diagnostics

#ifdef _DEBUG
void CSchizoView::AssertValid() const
{
	CRichEditView::AssertValid();
}

void CSchizoView::Dump(CDumpContext& dc) const
{
	CRichEditView::Dump(dc);
}

CSchizoDoc* CSchizoView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CSchizoDoc)));
	return (CSchizoDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CSchizoView message handlers
