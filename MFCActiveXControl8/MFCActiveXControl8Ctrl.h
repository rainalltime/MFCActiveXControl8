#pragma once

// MFCActiveXControl8Ctrl.h : CMFCActiveXControl8Ctrl ActiveX �ؼ����������

#include"Cdig.h"
// CMFCActiveXControl8Ctrl : �й�ʵ�ֵ���Ϣ������� MFCActiveXControl8Ctrl.cpp��
#include <ATLBASE.H>
extern ATL::CComModule _Module;
#include <ATLCOM.h>

//�ص�����--ȫ�ֱ���
ATL::CComDispatchDriver m_Func1;
class CMFCActiveXControl8Ctrl : public COleControl
{
	DECLARE_DYNCREATE(CMFCActiveXControl8Ctrl)

// ���캯��
public:
	CMFCActiveXControl8Ctrl();
	Cdig m_dlg;
// ��д
public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();

// ʵ��
protected:
	~CMFCActiveXControl8Ctrl();

	DECLARE_OLECREATE_EX(CMFCActiveXControl8Ctrl)    // �๤���� guid
	DECLARE_OLETYPELIB(CMFCActiveXControl8Ctrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CMFCActiveXControl8Ctrl)     // ����ҳ ID
	DECLARE_OLECTLTYPE(CMFCActiveXControl8Ctrl)		// �������ƺ�����״̬

// ��Ϣӳ��
	DECLARE_MESSAGE_MAP()

// ����ӳ��
	DECLARE_DISPATCH_MAP()

	afx_msg void AboutBox();
	afx_msg BSTR regTest(IDispatch* hahaha);

// �¼�ӳ��
	DECLARE_EVENT_MAP()

// ���Ⱥ��¼� ID
public:
	enum {
		dispidregTest = 1L
	};
protected:
	
public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnSize(UINT nType, int cx, int cy);
};

