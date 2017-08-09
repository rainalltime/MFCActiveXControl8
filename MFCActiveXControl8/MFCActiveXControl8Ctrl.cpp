// MFCActiveXControl8Ctrl.cpp : CMFCActiveXControl8Ctrl ActiveX 控件类的实现。

#include "stdafx.h"
#include "MFCActiveXControl8.h"
#include "MFCActiveXControl8Ctrl.h"
#include "MFCActiveXControl8PropPage.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

IMPLEMENT_DYNCREATE(CMFCActiveXControl8Ctrl, COleControl)

// 消息映射

BEGIN_MESSAGE_MAP(CMFCActiveXControl8Ctrl, COleControl)
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
	ON_WM_CREATE()
	ON_WM_SIZE()
END_MESSAGE_MAP()

// 调度映射

BEGIN_DISPATCH_MAP(CMFCActiveXControl8Ctrl, COleControl)
	DISP_FUNCTION_ID(CMFCActiveXControl8Ctrl, "AboutBox", DISPID_ABOUTBOX, AboutBox, VT_EMPTY, VTS_NONE)
	DISP_FUNCTION_ID(CMFCActiveXControl8Ctrl, "regTest", dispidregTest, regTest, VT_BSTR, VTS_DISPATCH)
END_DISPATCH_MAP()

// 事件映射

BEGIN_EVENT_MAP(CMFCActiveXControl8Ctrl, COleControl)
END_EVENT_MAP()

// 属性页

// TODO: 根据需要添加更多属性页。请记住增加计数!
BEGIN_PROPPAGEIDS(CMFCActiveXControl8Ctrl, 1)
	PROPPAGEID(CMFCActiveXControl8PropPage::guid)
END_PROPPAGEIDS(CMFCActiveXControl8Ctrl)

// 初始化类工厂和 guid

IMPLEMENT_OLECREATE_EX(CMFCActiveXControl8Ctrl, "MFCACTIVEXCONTRO.MFCActiveXControCtrl.1",
	0xf9ee5891, 0x3efb, 0x470b, 0xb9, 0x49, 0xb8, 0x50, 0xf0, 0x7a, 0xdb, 0xca)

// 键入库 ID 和版本

IMPLEMENT_OLETYPELIB(CMFCActiveXControl8Ctrl, _tlid, _wVerMajor, _wVerMinor)

// 接口 ID

const IID IID_DMFCActiveXControl8 = { 0x2D08B71E, 0x85AE, 0x4FCC, { 0xA4, 0x6F, 0x51, 0xC8, 0x84, 0xC7, 0x11, 0x99 } };
const IID IID_DMFCActiveXControl8Events = { 0x8A3EF148, 0x1A37, 0x4CD0, { 0xAB, 0x8A, 0x13, 0xB0, 0x44, 0xEB, 0x1C, 0xE5 } };

// 控件类型信息

static const DWORD _dwMFCActiveXControl8OleMisc =
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CMFCActiveXControl8Ctrl, IDS_MFCACTIVEXCONTROL8, _dwMFCActiveXControl8OleMisc)

// CMFCActiveXControl8Ctrl::CMFCActiveXControl8CtrlFactory::UpdateRegistry -
// 添加或移除 CMFCActiveXControl8Ctrl 的系统注册表项

BOOL CMFCActiveXControl8Ctrl::CMFCActiveXControl8CtrlFactory::UpdateRegistry(BOOL bRegister)
{
	// TODO:  验证您的控件是否符合单元模型线程处理规则。
	// 有关更多信息，请参考 MFC 技术说明 64。
	// 如果您的控件不符合单元模型规则，则
	// 必须修改如下代码，将第六个参数从
	// afxRegApartmentThreading 改为 0。

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


// CMFCActiveXControl8Ctrl::CMFCActiveXControl8Ctrl - 构造函数

CMFCActiveXControl8Ctrl::CMFCActiveXControl8Ctrl()
{
	InitializeIIDs(&IID_DMFCActiveXControl8, &IID_DMFCActiveXControl8Events);
	// TODO:  在此初始化控件的实例数据。
}

// CMFCActiveXControl8Ctrl::~CMFCActiveXControl8Ctrl - 析构函数

CMFCActiveXControl8Ctrl::~CMFCActiveXControl8Ctrl()
{
	// TODO:  在此清理控件的实例数据。
}

// CMFCActiveXControl8Ctrl::OnDraw - 绘图函数

void CMFCActiveXControl8Ctrl::OnDraw(
			CDC* pdc, const CRect& rcBounds, const CRect& /* rcInvalid */)
{
	if (!pdc)
		return;

	// TODO:  用您自己的绘图代码替换下面的代码。

}

// CMFCActiveXControl8Ctrl::DoPropExchange - 持久性支持

void CMFCActiveXControl8Ctrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

	// TODO: 为每个持久的自定义属性调用 PX_ 函数。
}


// CMFCActiveXControl8Ctrl::OnResetState - 将控件重置为默认状态

void CMFCActiveXControl8Ctrl::OnResetState()
{
	COleControl::OnResetState();  // 重置 DoPropExchange 中找到的默认值

	// TODO:  在此重置任意其他控件状态。
}


// CMFCActiveXControl8Ctrl::AboutBox - 向用户显示“关于”框

void CMFCActiveXControl8Ctrl::AboutBox()
{
	CDialogEx dlgAbout(IDD_ABOUTBOX_MFCACTIVEXCONTROL8);
	dlgAbout.DoModal();
}


// CMFCActiveXControl8Ctrl 消息处理程序


BSTR CMFCActiveXControl8Ctrl::regTest(IDispatch* hahaha)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	CString strResult;

	// TODO: 在此添加调度处理程序代码
	m_Func1 = hahaha;
	return strResult.AllocSysString();
}


int CMFCActiveXControl8Ctrl::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (COleControl::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  在此添加您专用的创建代码
	m_dlg.Create(IDD_DIALOG1, this);
	return 0;
}


void CMFCActiveXControl8Ctrl::OnSize(UINT nType, int cx, int cy)
{
	COleControl::OnSize(nType, cx, cy);

	// TODO: 在此处添加消息处理程序代码
	RECT activeXRect;
	GetClientRect(&activeXRect);
	m_dlg.MoveWindow(&activeXRect);
}
