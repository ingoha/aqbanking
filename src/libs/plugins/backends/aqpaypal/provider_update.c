/***************************************************************************
    begin       : Sun Dec 02 2018
    copyright   : (C) 2018 by Martin Preuss
    email       : martin@libchipcard.de

 ***************************************************************************
 *          Please see toplevel file COPYING for license details           *
 ***************************************************************************/


/* included by provider.c */





int APY_Provider_UpdatePreInit(AB_PROVIDER *pro, uint32_t lastVersion, uint32_t currentVersion)
{
#if 0 /* no preinit for now */
  int rv;

  DBG_INFO(AQPAYPAL_LOGDOMAIN, "Update (pre init): Previous version %d.%d.%d.%d, new version %d.%d.%d.%d",
           (lastVersion>>24) & 0xff, (lastVersion>>16) & 0xff, (lastVersion>>8) & 0xff, lastVersion & 0xff,
           (currentVersion>>24) & 0xff, (currentVersion>>16) & 0xff, (currentVersion>>8) & 0xff, currentVersion & 0xff);

#endif
  return 0;
}



int APY_Provider_UpdatePostInit(AB_PROVIDER *pro, uint32_t lastVersion, uint32_t currentVersion)
{
#if 0 /* no postinit for now */
  int rv;

  DBG_INFO(AQPAYPAL_LOGDOMAIN, "Update (post init): Previous version %d.%d.%d.%d, new version %d.%d.%d.%d",
           (lastVersion>>24) & 0xff, (lastVersion>>16) & 0xff, (lastVersion>>8) & 0xff, lastVersion & 0xff,
           (currentVersion>>24) & 0xff, (currentVersion>>16) & 0xff, (currentVersion>>8) & 0xff, currentVersion & 0xff);

  if (lastVersion<((5<<24) | (99<<16) | (2<<8) | 0)) {
    /* change from previous versions:
     * - create account spec objects
     */
    DBG_NOTICE(AQPAYPAL_LOGDOMAIN, "Creating account specs for accounts");
    rv=AB_Provider_CreateInitialAccountSpecs(pro);
    if (rv<0) {
      DBG_INFO(AQPAYPAL_LOGDOMAIN, "here (%d)", rv);
      return rv;
    }
  }
#endif
  return 0;
}
