#pragma once


// Cdig �Ի���
extern ATL::CComModule _Module;
extern ATL::CComDispatchDriver m_Func1;
class Cdig : public CDialogEx
{
	DECLARE_DYNAMIC(Cdig)

public:
	Cdig(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Cdig();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
};
