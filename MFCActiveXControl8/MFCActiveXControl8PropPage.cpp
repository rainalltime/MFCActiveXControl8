// MFCActiveXControl8PropPage.cpp : CMFCActiveXControl8PropPage ����ҳ���ʵ�֡�

#include "stdafx.h"
#include "MFCActiveXControl8.h"
#include "MFCActiveXControl8PropPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

IMPLEMENT_DYNCREATE(CMFCActiveXControl8PropPage, COlePropertyPage)

// ��Ϣӳ��

BEGIN_MESSAGE_MAP(CMFCActiveXControl8PropPage, COlePropertyPage)
END_MESSAGE_MAP()

// ��ʼ���๤���� guid

IMPLEMENT_OLECREATE_EX(CMFCActiveXControl8PropPage, "MFCACTIVEXCONT.MFCActiveXContPropPage.1",
	0x8468ea74, 0x24fc, 0x44b1, 0xb1, 0x27, 0x1c, 0x18, 0x39, 0x71, 0xa0, 0x25)

// CMFCActiveXControl8PropPage::CMFCActiveXControl8PropPageFactory::UpdateRegistry -
// ��ӻ��Ƴ� CMFCActiveXControl8PropPage ��ϵͳע�����

BOOL CMFCActiveXControl8PropPage::CMFCActiveXControl8PropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_MFCACTIVEXCONTROL8_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, NULL);
}

// CMFCActiveXControl8PropPage::CMFCActiveXControl8PropPage - ���캯��

CMFCActiveXControl8PropPage::CMFCActiveXControl8PropPage() :
	COlePropertyPage(IDD, IDS_MFCACTIVEXCONTROL8_PPG_CAPTION)
{
}

// CMFCActiveXControl8PropPage::DoDataExchange - ��ҳ�����Լ��ƶ�����

void CMFCActiveXControl8PropPage::DoDataExchange(CDataExchange* pDX)
{
	DDP_PostProcessing(pDX);
}

// CMFCActiveXControl8PropPage ��Ϣ�������
