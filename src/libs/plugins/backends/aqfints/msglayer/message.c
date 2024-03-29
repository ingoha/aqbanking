/***************************************************************************
 begin       : Fri Jul 19 2019
 copyright   : (C) 2019 by Martin Preuss
 email       : martin@libchipcard.de

 ***************************************************************************
 * This file is part of the project "AqBanking".                           *
 * Please see toplevel file COPYING of that project for license details.   *
 ***************************************************************************/


#ifdef HAVE_CONFIG_H
# include <config.h>
#endif


#include "message_p.h"

#include "parser/parser_xml.h"
#include "parser/parser_hbci.h"
#include "parser/parser_normalize.h"
#include "parser/parser_dbwrite.h"

#include <gwenhywfar/debug.h>




AQFINTS_MESSAGE *AQFINTS_Message_new(void)
{
  AQFINTS_MESSAGE *msg;

  GWEN_NEW_OBJECT(AQFINTS_MESSAGE, msg);
  msg->signerList=AQFINTS_KeyName_List_new();
  msg->segmentList=AQFINTS_Segment_List_new();

  return msg;
}



void AQFINTS_Message_free(AQFINTS_MESSAGE *msg)
{
  if (msg) {
    AQFINTS_Segment_List_free(msg->segmentList);
    AQFINTS_KeyName_List_free(msg->signerList);
    AQFINTS_KeyName_free(msg->crypter);
    GWEN_FREE_OBJECT(msg);
  }
}



int AQFINTS_Message_GetMessageNumber(const AQFINTS_MESSAGE *msg)
{
  assert(msg);
  return msg->messageNumber;
}



void AQFINTS_Message_SetMessageNumber(AQFINTS_MESSAGE *msg, int v)
{
  assert(msg);
  msg->messageNumber=v;
}



int AQFINTS_Message_GetRefMessageNumber(const AQFINTS_MESSAGE *msg)
{
  assert(msg);
  return msg->refMessageNumber;
}



void AQFINTS_Message_SetRefMessageNumber(AQFINTS_MESSAGE *msg, int v)
{
  assert(msg);
  msg->refMessageNumber=v;
}




AQFINTS_KEYNAME_LIST *AQFINTS_Message_GetSignerList(const AQFINTS_MESSAGE *msg)
{
  assert(msg);
  return msg->signerList;
}



void AQFINTS_Message_AddSigner(AQFINTS_MESSAGE *msg, AQFINTS_KEYNAME *keyName)
{
  assert(msg);
  AQFINTS_KeyName_List_Add(keyName, msg->signerList);
}



AQFINTS_KEYNAME *AQFINTS_Message_GetCrypter(const AQFINTS_MESSAGE *msg)
{
  assert(msg);
  return msg->crypter;
}



void AQFINTS_Message_SetCrypter(AQFINTS_MESSAGE *msg, AQFINTS_KEYNAME *keyName)
{
  assert(msg);
  if (msg->crypter)
    AQFINTS_KeyName_free(msg->crypter);
  msg->crypter=keyName;
}



AQFINTS_SEGMENT_LIST *AQFINTS_Message_GetSegmentList(const AQFINTS_MESSAGE *msg)
{
  assert(msg);
  return msg->segmentList;
}



void AQFINTS_Message_AddSegment(AQFINTS_MESSAGE *msg, AQFINTS_SEGMENT *segment)
{
  assert(msg);
  assert(segment);
  AQFINTS_Segment_List_Add(segment, msg->segmentList);
}







#if 0
int AQFINTS_Message_AddSegment(AQFINTS_MESSAGE *msg,
                               AQFINTS_SEGMENT *defSegment)
{
  AQFINTS_SEGMENT *segmentOut;
  int rv;

  segmentOut=AQFINTS_Segment_new();
  rv=AQFINTS_Parser_Db_WriteSegment(defSegment, segmentOut, dbData);
  if (rv<0) {
    DBG_INFO(0, "here (%d)", rv);
    AQFINTS_Segment_free(segmentOut);
    return rv;
  }
  AQFINTS_Parser_Segment_RemoveTrailingEmptyElements(segmentOut);

  AQFINTS_Parser_Hbci_WriteSegment(segmentOut, msg->buffer);

  AQFINTS_Segment_free(segmentOut);
  return 0;
}
#endif








