// Cdig.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFCActiveXControl8.h"
#include "Cdig.h"
#include "afxdialogex.h"


// Cdig �Ի���

IMPLEMENT_DYNAMIC(Cdig, CDialogEx)

Cdig::Cdig(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

Cdig::~Cdig()
{
}

void Cdig::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Cdig, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &Cdig::OnBnClickedButton1)
END_MESSAGE_MAP()


// Cdig ��Ϣ�������


void Cdig::OnBnClickedButton1()
{
	VARIANT varArg[1];
	varArg[0].vt = VT_UINT;
	varArg[0].uintVal = 10;
	m_Func1.InvokeN((DISPID)DISPID_VALUE, varArg, 1);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}
