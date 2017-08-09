#pragma once

// MFCActiveXControl8Ctrl.h : CMFCActiveXControl8Ctrl ActiveX 控件类的声明。

#include"Cdig.h"
// CMFCActiveXControl8Ctrl : 有关实现的信息，请参阅 MFCActiveXControl8Ctrl.cpp。
#include <ATLBASE.H>
extern ATL::CComModule _Module;
#include <ATLCOM.h>

//回调函数--全局变量
ATL::CComDispatchDriver m_Func1;
class CMFCActiveXControl8Ctrl : public COleControl
{
	DECLARE_DYNCREATE(CMFCActiveXControl8Ctrl)

// 构造函数
public:
	CMFCActiveXControl8Ctrl();
	Cdig m_dlg;
// 重写
public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();

// 实现
protected:
	~CMFCActiveXControl8Ctrl();

	DECLARE_OLECREATE_EX(CMFCActiveXControl8Ctrl)    // 类工厂和 guid
	DECLARE_OLETYPELIB(CMFCActiveXControl8Ctrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CMFCActiveXControl8Ctrl)     // 属性页 ID
	DECLARE_OLECTLTYPE(CMFCActiveXControl8Ctrl)		// 类型名称和杂项状态

// 消息映射
	DECLARE_MESSAGE_MAP()

// 调度映射
	DECLARE_DISPATCH_MAP()

	afx_msg void AboutBox();
	afx_msg BSTR regTest(IDispatch* hahaha);

// 事件映射
	DECLARE_EVENT_MAP()

// 调度和事件 ID
public:
	enum {
		dispidregTest = 1L
	};
protected:
	
public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnSize(UINT nType, int cx, int cy);
};

