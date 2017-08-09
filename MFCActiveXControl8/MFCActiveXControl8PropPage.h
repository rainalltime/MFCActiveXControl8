#pragma once

// MFCActiveXControl8PropPage.h : CMFCActiveXControl8PropPage 属性页类的声明。


// CMFCActiveXControl8PropPage : 有关实现的信息，请参阅 MFCActiveXControl8PropPage.cpp。

class CMFCActiveXControl8PropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CMFCActiveXControl8PropPage)
	DECLARE_OLECREATE_EX(CMFCActiveXControl8PropPage)

// 构造函数
public:
	CMFCActiveXControl8PropPage();

// 对话框数据
	enum { IDD = IDD_PROPPAGE_MFCACTIVEXCONTROL8 };

// 实现
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 消息映射
protected:
	DECLARE_MESSAGE_MAP()
};

