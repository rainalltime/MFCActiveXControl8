// MFCActiveXControl8Ctrl.cpp : CMFCActiveXControl8Ctrl ActiveX �ؼ����ʵ�֡�

#include "stdafx.h"
#include "MFCActiveXControl8.h"
#include "MFCActiveXControl8Ctrl.h"
#include "MFCActiveXControl8PropPage.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

IMPLEMENT_DYNCREATE(CMFCActiveXControl8Ctrl, COleControl)

// ��Ϣӳ��

BEGIN_MESSAGE_MAP(CMFCActiveXControl8Ctrl, COleControl)
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
	ON_WM_CREATE()
	ON_WM_SIZE()
END_MESSAGE_MAP()

// ����ӳ��

BEGIN_DISPATCH_MAP(CMFCActiveXControl8Ctrl, COleControl)
	DISP_FUNCTION_ID(CMFCActiveXControl8Ctrl, "AboutBox", DISPID_ABOUTBOX, AboutBox, VT_EMPTY, VTS_NONE)
	DISP_FUNCTION_ID(CMFCActiveXControl8Ctrl, "regTest", dispidregTest, regTest, VT_BSTR, VTS_DISPATCH)
END_DISPATCH_MAP()

// �¼�ӳ��

BEGIN_EVENT_MAP(CMFCActiveXControl8Ctrl, COleControl)
END_EVENT_MAP()

// ����ҳ

// TODO: ������Ҫ��Ӹ�������ҳ�����ס���Ӽ���!
BEGIN_PROPPAGEIDS(CMFCActiveXControl8Ctrl, 1)
	PROPPAGEID(CMFCActiveXControl8PropPage::guid)
END_PROPPAGEIDS(CMFCActiveXControl8Ctrl)

// ��ʼ���๤���� guid

IMPLEMENT_OLECREATE_EX(CMFCActiveXControl8Ctrl, "MFCACTIVEXCONTRO.MFCActiveXControCtrl.1",
	0xf9ee5891, 0x3efb, 0x470b, 0xb9, 0x49, 0xb8, 0x50, 0xf0, 0x7a, 0xdb, 0xca)

// ����� ID �Ͱ汾

IMPLEMENT_OLETYPELIB(CMFCActiveXControl8Ctrl, _tlid, _wVerMajor, _wVerMinor)

// �ӿ� ID

const IID IID_DMFCActiveXControl8 = { 0x2D08B71E, 0x85AE, 0x4FCC, { 0xA4, 0x6F, 0x51, 0xC8, 0x84, 0xC7, 0x11, 0x99 } };
const IID IID_DMFCActiveXControl8Events = { 0x8A3EF148, 0x1A37, 0x4CD0, { 0xAB, 0x8A, 0x13, 0xB0, 0x44, 0xEB, 0x1C, 0xE5 } };

// �ؼ�������Ϣ

static const DWORD _dwMFCActiveXControl8OleMisc =
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CMFCActiveXControl8Ctrl, IDS_MFCACTIVEXCONTROL8, _dwMFCActiveXControl8OleMisc)

// CMFCActiveXControl8Ctrl::CMFCActiveXControl8CtrlFactory::UpdateRegistry -
// ��ӻ��Ƴ� CMFCActiveXControl8Ctrl ��ϵͳע�����

BOOL CMFCActiveXControl8Ctrl::CMFCActiveXControl8CtrlFactory::UpdateRegistry(BOOL bRegister)
{
	// TODO:  ��֤���Ŀؼ��Ƿ���ϵ�Ԫģ���̴߳������
	// �йظ�����Ϣ����ο� MFC ����˵�� 64��
	// ������Ŀؼ������ϵ�Ԫģ�͹�����
	// �����޸����´��룬��������������
	// afxRegApartmentThreading ��Ϊ 0��

	if (bRegister)
		return AfxOleRegisterControlClass(
			AfxGetInstanceHandle(),
			m_clsid,
			m_lpszProgID,
			IDS_MFCACTIVEXCONTROL8,
			IDB_MFCACTIVEXCONTROL8,
			afxRegApartmentThreading,
			_dwMFCActiveXControl8OleMisc,
			_tlid,
			_wVerMajor,
			_wVerMinor);
	else
		return AfxOleUnregisterClass(m_clsid, m_lpszProgID);
}


// CMFCActiveXControl8Ctrl::CMFCActiveXControl8Ctrl - ���캯��

CMFCActiveXControl8Ctrl::CMFCActiveXControl8Ctrl()
{
	InitializeIIDs(&IID_DMFCActiveXControl8, &IID_DMFCActiveXControl8Events);
	// TODO:  �ڴ˳�ʼ���ؼ���ʵ�����ݡ�
}

// CMFCActiveXControl8Ctrl::~CMFCActiveXControl8Ctrl - ��������

CMFCActiveXControl8Ctrl::~CMFCActiveXControl8Ctrl()
{
	// TODO:  �ڴ�����ؼ���ʵ�����ݡ�
}

// CMFCActiveXControl8Ctrl::OnDraw - ��ͼ����

void CMFCActiveXControl8Ctrl::OnDraw(
			CDC* pdc, const CRect& rcBounds, const CRect& /* rcInvalid */)
{
	if (!pdc)
		return;

	// TODO:  �����Լ��Ļ�ͼ�����滻����Ĵ��롣

}

// CMFCActiveXControl8Ctrl::DoPropExchange - �־���֧��

void CMFCActiveXControl8Ctrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

	// TODO: Ϊÿ���־õ��Զ������Ե��� PX_ ������
}


// CMFCActiveXControl8Ctrl::OnResetState - ���ؼ�����ΪĬ��״̬

void CMFCActiveXControl8Ctrl::OnResetState()
{
	COleControl::OnResetState();  // ���� DoPropExchange ���ҵ���Ĭ��ֵ

	// TODO:  �ڴ��������������ؼ�״̬��
}


// CMFCActiveXControl8Ctrl::AboutBox - ���û���ʾ�����ڡ���

void CMFCActiveXControl8Ctrl::AboutBox()
{
	CDialogEx dlgAbout(IDD_ABOUTBOX_MFCACTIVEXCONTROL8);
	dlgAbout.DoModal();
}


// CMFCActiveXControl8Ctrl ��Ϣ�������


BSTR CMFCActiveXControl8Ctrl::regTest(IDispatch* hahaha)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	CString strResult;

	// TODO: �ڴ���ӵ��ȴ���������
	m_Func1 = hahaha;
	return strResult.AllocSysString();
}


int CMFCActiveXControl8Ctrl::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (COleControl::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  �ڴ������ר�õĴ�������
	m_dlg.Create(IDD_DIALOG1, this);
	return 0;
}


void CMFCActiveXControl8Ctrl::OnSize(UINT nType, int cx, int cy)
{
	COleControl::OnSize(nType, cx, cy);

	// TODO: �ڴ˴������Ϣ����������
	RECT activeXRect;
	GetClientRect(&activeXRect);
	m_dlg.MoveWindow(&activeXRect);
}
