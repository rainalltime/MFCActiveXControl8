#pragma once


// Cdig 对话框
extern ATL::CComModule _Module;
extern ATL::CComDispatchDriver m_Func1;
class Cdig : public CDialogEx
{
	DECLARE_DYNAMIC(Cdig)

public:
	Cdig(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Cdig();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
};
