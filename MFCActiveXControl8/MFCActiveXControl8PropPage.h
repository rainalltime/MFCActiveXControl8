#pragma once

// MFCActiveXControl8PropPage.h : CMFCActiveXControl8PropPage ����ҳ���������


// CMFCActiveXControl8PropPage : �й�ʵ�ֵ���Ϣ������� MFCActiveXControl8PropPage.cpp��

class CMFCActiveXControl8PropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CMFCActiveXControl8PropPage)
	DECLARE_OLECREATE_EX(CMFCActiveXControl8PropPage)

// ���캯��
public:
	CMFCActiveXControl8PropPage();

// �Ի�������
	enum { IDD = IDD_PROPPAGE_MFCACTIVEXCONTROL8 };

// ʵ��
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ��Ϣӳ��
protected:
	DECLARE_MESSAGE_MAP()
};

