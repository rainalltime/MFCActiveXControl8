

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for MFCActiveXControl8.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __MFCActiveXControl8idl_h__
#define __MFCActiveXControl8idl_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ___DMFCActiveXControl8_FWD_DEFINED__
#define ___DMFCActiveXControl8_FWD_DEFINED__
typedef interface _DMFCActiveXControl8 _DMFCActiveXControl8;

#endif 	/* ___DMFCActiveXControl8_FWD_DEFINED__ */


#ifndef ___DMFCActiveXControl8Events_FWD_DEFINED__
#define ___DMFCActiveXControl8Events_FWD_DEFINED__
typedef interface _DMFCActiveXControl8Events _DMFCActiveXControl8Events;

#endif 	/* ___DMFCActiveXControl8Events_FWD_DEFINED__ */


#ifndef __MFCActiveXControl8_FWD_DEFINED__
#define __MFCActiveXControl8_FWD_DEFINED__

#ifdef __cplusplus
typedef class MFCActiveXControl8 MFCActiveXControl8;
#else
typedef struct MFCActiveXControl8 MFCActiveXControl8;
#endif /* __cplusplus */

#endif 	/* __MFCActiveXControl8_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_MFCActiveXControl8_0000_0000 */
/* [local] */ 

#pragma warning(push)
#pragma warning(disable:4001) 
#pragma once
#pragma warning(push)
#pragma warning(disable:4001) 
#pragma once
#pragma warning(pop)
#pragma warning(pop)
#pragma region Desktop Family
#pragma endregion


extern RPC_IF_HANDLE __MIDL_itf_MFCActiveXControl8_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MFCActiveXControl8_0000_0000_v0_0_s_ifspec;


#ifndef __MFCActiveXControl8Lib_LIBRARY_DEFINED__
#define __MFCActiveXControl8Lib_LIBRARY_DEFINED__

/* library MFCActiveXControl8Lib */
/* [control][version][uuid] */ 


EXTERN_C const IID LIBID_MFCActiveXControl8Lib;

#ifndef ___DMFCActiveXControl8_DISPINTERFACE_DEFINED__
#define ___DMFCActiveXControl8_DISPINTERFACE_DEFINED__

/* dispinterface _DMFCActiveXControl8 */
/* [uuid] */ 


EXTERN_C const IID DIID__DMFCActiveXControl8;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("2D08B71E-85AE-4FCC-A46F-51C884C71199")
    _DMFCActiveXControl8 : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DMFCActiveXControl8Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DMFCActiveXControl8 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DMFCActiveXControl8 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DMFCActiveXControl8 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DMFCActiveXControl8 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DMFCActiveXControl8 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DMFCActiveXControl8 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DMFCActiveXControl8 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } _DMFCActiveXControl8Vtbl;

    interface _DMFCActiveXControl8
    {
        CONST_VTBL struct _DMFCActiveXControl8Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DMFCActiveXControl8_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DMFCActiveXControl8_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DMFCActiveXControl8_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DMFCActiveXControl8_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DMFCActiveXControl8_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DMFCActiveXControl8_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DMFCActiveXControl8_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DMFCActiveXControl8_DISPINTERFACE_DEFINED__ */


#ifndef ___DMFCActiveXControl8Events_DISPINTERFACE_DEFINED__
#define ___DMFCActiveXControl8Events_DISPINTERFACE_DEFINED__

/* dispinterface _DMFCActiveXControl8Events */
/* [uuid] */ 


EXTERN_C const IID DIID__DMFCActiveXControl8Events;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("8A3EF148-1A37-4CD0-AB8A-13B044EB1CE5")
    _DMFCActiveXControl8Events : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DMFCActiveXControl8EventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DMFCActiveXControl8Events * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DMFCActiveXControl8Events * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DMFCActiveXControl8Events * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DMFCActiveXControl8Events * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DMFCActiveXControl8Events * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DMFCActiveXControl8Events * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DMFCActiveXControl8Events * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } _DMFCActiveXControl8EventsVtbl;

    interface _DMFCActiveXControl8Events
    {
        CONST_VTBL struct _DMFCActiveXControl8EventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DMFCActiveXControl8Events_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DMFCActiveXControl8Events_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DMFCActiveXControl8Events_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DMFCActiveXControl8Events_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DMFCActiveXControl8Events_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DMFCActiveXControl8Events_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DMFCActiveXControl8Events_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DMFCActiveXControl8Events_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_MFCActiveXControl8;

#ifdef __cplusplus

class DECLSPEC_UUID("F9EE5891-3EFB-470B-B949-B850F07ADBCA")
MFCActiveXControl8;
#endif
#endif /* __MFCActiveXControl8Lib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


