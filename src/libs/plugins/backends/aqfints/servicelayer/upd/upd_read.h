/***************************************************************************
 begin       : Sun Jul 28 2019
 copyright   : (C) 2019 by Martin Preuss
 email       : martin@libchipcard.de

 ***************************************************************************
 * This file is part of the project "AqBanking".                           *
 * Please see toplevel file COPYING of that project for license details.   *
 ***************************************************************************/

#ifndef UPD_READ_H
#define UPD_READ_H


#include "servicelayer/upd/accountdata.h"
#include "servicelayer/upd/userdata.h"

#include "msglayer/parser/segment.h"

#include <gwenhywfar/db.h>



/**
 * Sample user ("HIUPA") and account ("HIUPD") data from a given segment list.
 *
 * @return list of userData objects (NULL if there were no matching segments in the list)
 * @param segmentList list of segments from which to extract UPD data
 * @param removeFromSegList if nonzero transformed segments are removed from the list
 */
AQFINTS_USERDATA_LIST *AQFINTS_Upd_SampleUpdFromSegmentList(AQFINTS_SEGMENT_LIST *segmentList,
                                                            int removeFromSegList);



/**
 * Read all userData ("HIUPA") segments from the given list and transform them into AQFINTS_USERDATA objects.
 *
 * @return list of userData objects (NULL if there were no matching segments in the list)
 * @param segmentList list of segments from which to extract userData objects
 * @param removeFromSegList if nonzero transformed segments are removed from the list
 */
AQFINTS_USERDATA_LIST *AQFINTS_Upd_SampleUserDataFromSegmentList(AQFINTS_SEGMENT_LIST *segmentList,
                                                                 int removeFromSegList);


/**
 * Read all accountData ("HIUPD") segments from the given list and transform them into AQFINTS_ACCOUNTDATA objects.
 *
 * @return list of accountData objects (NULL if there were no matching segments in the list)
 * @param segmentList list of segments from which to extract accountData objects
 * @param removeFromSegList if nonzero transformed segments are removed from the list
 */
AQFINTS_ACCOUNTDATA_LIST *AQFINTS_Upd_SampleAccountDataFromSegmentList(AQFINTS_SEGMENT_LIST *segmentList,
                                                                       int removeFromSegList);


/**
 * Read a AQFINTS_USERDATA from a DB created by @ref AQFINTS_Parser_ReadSegmentListToDb().
 *
 * @return AQFINTS_USERDATA object (asserts on error)
 * @param db db node with a "UserData" group
 */
AQFINTS_USERDATA *AQFINTS_Upd_ReadUserData(GWEN_DB_NODE *db);


/**
 * Read a AQFINTS_ACCOUNTDATA from a DB created by @ref AQFINTS_Parser_ReadSegmentListToDb().
 *
 * @return AQFINTS_ACCOUNTDATA object (asserts on error)
 * @param db db node with a "AccountData" group
 */
AQFINTS_ACCOUNTDATA *AQFINTS_Upd_ReadAccountData(GWEN_DB_NODE *db);



#endif

