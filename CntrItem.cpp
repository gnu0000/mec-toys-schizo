// CntrItem.cpp : implementation of the CSchizoCntrItem class
//

#include "stdafx.h"
#include "Schizo.h"

#include "SchizoDoc.h"
#include "SchizoView.h"
#include "CntrItem.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSchizoCntrItem implementation

IMPLEMENT_SERIAL(CSchizoCntrItem, CRichEditCntrItem, 0)

CSchizoCntrItem::CSchizoCntrItem(REOBJECT* preo, CSchizoDoc* pContainer)
	: CRichEditCntrItem(preo, pContainer)
{
}

CSchizoCntrItem::~CSchizoCntrItem()
{
}

/////////////////////////////////////////////////////////////////////////////
// CSchizoCntrItem diagnostics

#ifdef _DEBUG
void CSchizoCntrItem::AssertValid() const
{
	CRichEditCntrItem::AssertValid();
}

void CSchizoCntrItem::Dump(CDumpContext& dc) const
{
	CRichEditCntrItem::Dump(dc);
}
#endif

/////////////////////////////////////////////////////////////////////////////
