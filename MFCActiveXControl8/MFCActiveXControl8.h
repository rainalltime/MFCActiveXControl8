#pragma once

// MFCActiveXControl8.h : MFCActiveXControl8.DLL ����ͷ�ļ�

#if !defined( __AFXCTL_H__ )
#error "�ڰ������ļ�֮ǰ������afxctl.h��"
#endif

#include "resource.h"       // ������


// CMFCActiveXControl8App : �й�ʵ�ֵ���Ϣ������� MFCActiveXControl8.cpp��

class CMFCActiveXControl8App : public COleControlModule
{
public:
	BOOL InitInstance();
	int ExitInstance();
};

extern const GUID CDECL _tlid;
extern const WORD _wVerMajor;
extern const WORD _wVerMinor;

