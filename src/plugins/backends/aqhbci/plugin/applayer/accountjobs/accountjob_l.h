/***************************************************************************
 $RCSfile$
                             -------------------
    cvs         : $Id$
    begin       : Mon Mar 01 2004
    copyright   : (C) 2004 by Martin Preuss
    email       : martin@libchipcard.de

 ***************************************************************************
 *          Please see toplevel file COPYING for license details           *
 ***************************************************************************/


#ifndef AH_ACCOUNTJOBS_L_H
#define AH_ACCOUNTJOBS_L_H


#include <aqhbci/accountjob.h>
#include <gwenhywfar/buffer.h>


AH_JOB *AH_AccountJob_new(const char *name,
                          AH_CUSTOMER *cu,
                          AH_ACCOUNT *account);


int AH_AccountJob_AddCurrentTime(GWEN_BUFFER *buf);
int AH_AccountJob_AddCurrentDate(GWEN_BUFFER *buf);


#endif /* AH_ACCOUNTJOBS_L_H */


