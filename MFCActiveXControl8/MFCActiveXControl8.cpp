// MFCActiveXControl8.cpp : CMFCActiveXControl8App 和 DLL 注册的实现。

#include "stdafx.h"
#include "MFCActiveXControl8.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


CMFCActiveXControl8App theApp;

const GUID CDECL _tlid = { 0xD1C28972, 0xC6F6, 0x4FC1, { 0x81, 0xC7, 0xF1, 0xB7, 0x45, 0x1F, 0x2A, 0xF0 } };
const WORD _wVerMajor = 1;
const WORD _wVerMinor = 0;



// CMFCActiveXControl8App::InitInstance - DLL 初始化

BOOL CMFCActiveXControl8App::InitInstance()
{
	BOOL bInit = COleControlModule::InitInstance();

	if (bInit)
	{
		// TODO:  在此添加您自己的模块初始化代码。
	}

	return bInit;
}



// CMFCActiveXControl8App::ExitInstance - DLL 终止

int CMFCActiveXControl8App::ExitInstance()
{
	// TODO:  在此添加您自己的模块终止代码。

	return COleControlModule::ExitInstance();
}



// DllRegisterServer - 将项添加到系统注册表

STDAPI DllRegisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleRegisterTypeLib(AfxGetInstanceHandle(), _tlid))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(TRUE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}



// DllUnregisterServer - 将项从系统注册表中移除

STDAPI DllUnregisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleUnregisterTypeLib(_tlid, _wVerMajor, _wVerMinor))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(FALSE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}
