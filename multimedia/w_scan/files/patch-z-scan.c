--- a/scan.c
+++ b/scan.c
@@ -1816,7 +1816,11 @@ static int set_frontend(int frontend_fd,
                                 case SCAN_TERRESTRIAL:
                                         set_cmd_sequence(DTV_DELIVERY_SYSTEM,   t->param.u.terr.delivery_system);
                                         if (t->param.u.terr.delivery_system == SYS_DVBT2) {
+#ifndef DTV_DVBT2_PLP_ID
+                                           set_cmd_sequence(DTV_DVBT2_PLP_ID_LEGACY, t->pids.plp_id);
+#else
                                            set_cmd_sequence(DTV_DVBT2_PLP_ID, t->pids.plp_id);
+#endif
                                            }
                                         set_cmd_sequence(DTV_FREQUENCY,         t->param.frequency);
                                         set_cmd_sequence(DTV_INVERSION,         t->param.inversion);
