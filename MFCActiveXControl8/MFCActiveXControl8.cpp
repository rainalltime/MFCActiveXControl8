// MFCActiveXControl8.cpp : CMFCActiveXControl8App �� DLL ע���ʵ�֡�

#include "stdafx.h"
#include "MFCActiveXControl8.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


CMFCActiveXControl8App theApp;

const GUID CDECL _tlid = { 0xD1C28972, 0xC6F6, 0x4FC1, { 0x81, 0xC7, 0xF1, 0xB7, 0x45, 0x1F, 0x2A, 0xF0 } };
const WORD _wVerMajor = 1;
const WORD _wVerMinor = 0;



// CMFCActiveXControl8App::InitInstance - DLL ��ʼ��

BOOL CMFCActiveXControl8App::InitInstance()
{
	BOOL bInit = COleControlModule::InitInstance();

	if (bInit)
	{
		// TODO:  �ڴ�������Լ���ģ���ʼ�����롣
	}

	return bInit;
}



// CMFCActiveXControl8App::ExitInstance - DLL ��ֹ

int CMFCActiveXControl8App::ExitInstance()
{
	// TODO:  �ڴ�������Լ���ģ����ֹ���롣

	return COleControlModule::ExitInstance();
}



// DllRegisterServer - ������ӵ�ϵͳע���

STDAPI DllRegisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleRegisterTypeLib(AfxGetInstanceHandle(), _tlid))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(TRUE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}



// DllUnregisterServer - �����ϵͳע������Ƴ�

STDAPI DllUnregisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleUnregisterTypeLib(_tlid, _wVerMajor, _wVerMinor))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(FALSE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}
