/* This file is auto-generated from "mediumctx.xml" by the typemaker
   tool of Gwenhywfar. 
   Do not edit this file -- all changes will be lost! */
#ifndef MEDIUMCTX_H
#define MEDIUMCTX_H

/** @page P_AH_MEDIUM_CTX_PUBLIC AH_MediumCtx (public)
This page describes the properties of AH_MEDIUM_CTX
@anchor AH_MEDIUM_CTX_User
<h3>User</h3>
<p>
</p>
<p>
Set this property with @ref AH_MediumCtx_SetUser, 
get it with @ref AH_MediumCtx_GetUser
</p>

@anchor AH_MEDIUM_CTX_TokenContext
<h3>TokenContext</h3>
<p>
</p>
<p>
Set this property with @ref AH_MediumCtx_SetTokenContext, 
get it with @ref AH_MediumCtx_GetTokenContext
</p>

@anchor AH_MEDIUM_CTX_LocalSignKeySpec
<h3>LocalSignKeySpec</h3>
<p>
</p>
<p>
Set this property with @ref AH_MediumCtx_SetLocalSignKeySpec, 
get it with @ref AH_MediumCtx_GetLocalSignKeySpec
</p>

@anchor AH_MEDIUM_CTX_LocalCryptKeySpec
<h3>LocalCryptKeySpec</h3>
<p>
</p>
<p>
Set this property with @ref AH_MediumCtx_SetLocalCryptKeySpec, 
get it with @ref AH_MediumCtx_GetLocalCryptKeySpec
</p>

@anchor AH_MEDIUM_CTX_RemoteSignKeySpec
<h3>RemoteSignKeySpec</h3>
<p>
</p>
<p>
Set this property with @ref AH_MediumCtx_SetRemoteSignKeySpec, 
get it with @ref AH_MediumCtx_GetRemoteSignKeySpec
</p>

@anchor AH_MEDIUM_CTX_RemoteCryptKeySpec
<h3>RemoteCryptKeySpec</h3>
<p>
</p>
<p>
Set this property with @ref AH_MediumCtx_SetRemoteCryptKeySpec, 
get it with @ref AH_MediumCtx_GetRemoteCryptKeySpec
</p>

*/
#ifdef __cplusplus
extern "C" {
#endif

typedef struct AH_MEDIUM_CTX AH_MEDIUM_CTX;

#ifdef __cplusplus
} /* __cplusplus */
#endif

#include <gwenhywfar/db.h>
#include <gwenhywfar/crypttoken.h>
#include <aqhbci/hbci.h>
#include <aqhbci/medium.h>

#ifdef __cplusplus
extern "C" {
#endif

/** Creates a new object.
*/
AQHBCI_API AH_MEDIUM_CTX *AH_MediumCtx_new();
/** Destroys the given object.
*/
AQHBCI_API void AH_MediumCtx_free(AH_MEDIUM_CTX *st);
/** Increments the usage counter of the given object, so an additional free() is needed to destroy the object.
*/
AQHBCI_API void AH_MediumCtx_Attach(AH_MEDIUM_CTX *st);
/** Creates and returns a deep copy of thegiven object.
*/
AQHBCI_API AH_MEDIUM_CTX *AH_MediumCtx_dup(const AH_MEDIUM_CTX*st);
/** Creates an object from the data in the given GWEN_DB_NODE
*/
AQHBCI_API AH_MEDIUM_CTX *AH_MediumCtx_fromDb(GWEN_DB_NODE *db);
/** Stores an object in the given GWEN_DB_NODE
*/
AQHBCI_API int AH_MediumCtx_toDb(const AH_MEDIUM_CTX*st, GWEN_DB_NODE *db);
/** Returns 0 if this object has not been modified, !=0 otherwise
*/
AQHBCI_API int AH_MediumCtx_IsModified(const AH_MEDIUM_CTX *st);
/** Sets the modified state of the given object
*/
AQHBCI_API void AH_MediumCtx_SetModified(AH_MEDIUM_CTX *st, int i);

/**
* Returns the property @ref AH_MEDIUM_CTX_User
*/
AQHBCI_API GWEN_CRYPTTOKEN_USER *AH_MediumCtx_GetUser(const AH_MEDIUM_CTX *el);
/**
* Set the property @ref AH_MEDIUM_CTX_User
*/
AQHBCI_API void AH_MediumCtx_SetUser(AH_MEDIUM_CTX *el, GWEN_CRYPTTOKEN_USER *d);

/**
* Returns the property @ref AH_MEDIUM_CTX_TokenContext
*/
AQHBCI_API GWEN_CRYPTTOKEN_CONTEXT *AH_MediumCtx_GetTokenContext(const AH_MEDIUM_CTX *el);
/**
* Set the property @ref AH_MEDIUM_CTX_TokenContext
*/
AQHBCI_API void AH_MediumCtx_SetTokenContext(AH_MEDIUM_CTX *el, GWEN_CRYPTTOKEN_CONTEXT *d);

/**
* Returns the property @ref AH_MEDIUM_CTX_LocalSignKeySpec
*/
AQHBCI_API const GWEN_KEYSPEC *AH_MediumCtx_GetLocalSignKeySpec(const AH_MEDIUM_CTX *el);
/**
* Set the property @ref AH_MEDIUM_CTX_LocalSignKeySpec
*/
AQHBCI_API void AH_MediumCtx_SetLocalSignKeySpec(AH_MEDIUM_CTX *el, const GWEN_KEYSPEC *d);

/**
* Returns the property @ref AH_MEDIUM_CTX_LocalCryptKeySpec
*/
AQHBCI_API const GWEN_KEYSPEC *AH_MediumCtx_GetLocalCryptKeySpec(const AH_MEDIUM_CTX *el);
/**
* Set the property @ref AH_MEDIUM_CTX_LocalCryptKeySpec
*/
AQHBCI_API void AH_MediumCtx_SetLocalCryptKeySpec(AH_MEDIUM_CTX *el, const GWEN_KEYSPEC *d);

/**
* Returns the property @ref AH_MEDIUM_CTX_RemoteSignKeySpec
*/
AQHBCI_API const GWEN_KEYSPEC *AH_MediumCtx_GetRemoteSignKeySpec(const AH_MEDIUM_CTX *el);
/**
* Set the property @ref AH_MEDIUM_CTX_RemoteSignKeySpec
*/
AQHBCI_API void AH_MediumCtx_SetRemoteSignKeySpec(AH_MEDIUM_CTX *el, const GWEN_KEYSPEC *d);

/**
* Returns the property @ref AH_MEDIUM_CTX_RemoteCryptKeySpec
*/
AQHBCI_API const GWEN_KEYSPEC *AH_MediumCtx_GetRemoteCryptKeySpec(const AH_MEDIUM_CTX *el);
/**
* Set the property @ref AH_MEDIUM_CTX_RemoteCryptKeySpec
*/
AQHBCI_API void AH_MediumCtx_SetRemoteCryptKeySpec(AH_MEDIUM_CTX *el, const GWEN_KEYSPEC *d);


#ifdef __cplusplus
} /* __cplusplus */
#endif


#endif /* MEDIUMCTX_H */
