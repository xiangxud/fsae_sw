/*
Copyright 2014, 2015 Andrew Palardy
Kettering University CSC/FSAE Engine Software
Sensors Input (header)
*/

//ECT sensor
extern F32 SENS_ECT; //DegC
extern S16 SENS_ECT_V; //Volts (raw)
extern BOOL SENS_ECT_RAW_MIN_FLT;
extern BOOL SENS_ECT_RAW_MAX_FLT;
extern BOOL SENS_ECT_SLEW_RATE_FLT;
extern BOOL SENS_ECT_ENG_MIN_FLT;
extern BOOL SENS_ECT_ENG_MAX_FLT;
extern BOOL SENS_ECT_TRANSIENT_FLT;
extern BOOL SENS_ECT_LIMPIN; //OR of all faults
//ECT sensor CAL
extern F32 SENS_ECT_MIN_RAW_VAL;
extern F32 SENS_ECT_MAX_RAW_VAL ;
extern S32 SENS_ECT_ENG_LKP_SIZE;
extern F32 SENS_ECT_ENG_LKP_X;
extern F32 SENS_ECT_ENG_LKP_Y;
extern F32 SENS_ECT_ENG_MIN_VAL;
extern F32 SENS_ECT_ENG_MAX_VAL;
extern F32 SENS_ECT_ENG_DEFAULT_VAL;
extern F32 SENS_ECT_FLT_RISE_RATE;
extern F32 SENS_ECT_FLT_FALL_RATE;
extern F32 SENS_ECT_FLT_CLEAR_LEV;
extern F32 SENS_ECT_FLT_SLEW_RATE;
//ECT sensor const
extern PUT_ANALOGUE_CAL_DATA_T SENS_ECT_PROC_PAI_CAL;
extern PUT_ANALOGUE_WORKSPACE_T SENS_ECT_PROC_PAI_WORK;
//ACT sensor
extern F32 SENS_ACT; //DegC
extern S16 SENS_ACT_V; //Volts (raw)
extern BOOL SENS_ACT_RAW_MIN_FLT;
extern BOOL SENS_ACT_RAW_MAX_FLT;
extern BOOL SENS_ACT_SLEW_RATE_FLT;
extern BOOL SENS_ACT_ENG_MIN_FLT;
extern BOOL SENS_ACT_ENG_MAX_FLT;
extern BOOL SENS_ACT_TRANSIENT_FLT;
extern BOOL SENS_ACT_LIMPIN; //OR of all faults
//ACT sensor CAL
extern F32 SENS_ACT_MIN_RAW_VAL;
extern F32 SENS_ACT_MAX_RAW_VAL;
extern S32 SENS_ACT_ENG_LKP_SIZE = 17;
extern F32 SENS_ACT_ENG_LKP_X;
extern F32 SENS_ACT_ENG_LKP_Y;
extern F32 SENS_ACT_ENG_MIN_VAL;
extern F32 SENS_ACT_ENG_MAX_VAL;
extern F32 SENS_ACT_ENG_DEFAULT_VAL;
extern F32 SENS_ACT_FLT_RISE_RATE;
extern F32 SENS_ACT_FLT_FALL_RATE;
extern F32 SENS_ACT_FLT_CLEAR_LEV;
extern F32 SENS_ACT_FLT_SLEW_RATE;
//ACT sensor const
extern PUT_ANALOGUE_CAL_DATA_T SENS_ACT_PROC_PAI_CAL;
extern PUT_ANALOGUE_WORKSPACE_T SENS_ACT_PROC_PAI_WORK;
//MAP sensor (sampled 10ms for diagnostics, also at TDC undiagnosed
extern F32 SENS_MAP; //kPa
extern F32 SENS_MAP_TDC; //kPa, lower of last 2 samples
extern F32 SENS_MAP_TDC1;
extern F32 SENS_MAP_TDC2;
extern S16 SENS_MAP_V; //Volts (raw)
extern S16 SENS_MAP_TDC1_V; //Volts (raw)
extern S16 SENS_MAP_TDC2_V;
extern BOOL SENS_MAP_RAW_MIN_FLT;
extern BOOL SENS_MAP_RAW_MAX_FLT;
extern BOOL SENS_MAP_SLEW_RATE_FLT;
extern BOOL SENS_MAP_ENG_MIN_FLT;
extern BOOL SENS_MAP_ENG_MAX_FLT;
extern BOOL SENS_MAP_TRANSIENT_FLT;
extern BOOL SENS_MAP_LIMPIN; //OR of all faults
//MAP sensor CAL
extern F32 SENS_MAP_MIN_RAW_VAL;
extern F32 SENS_MAP_MAX_RAW_VAL;
extern S32 SENS_MAP_ENG_LKP_SIZE;
extern F32 SENS_MAP_ENG_LKP_X
extern F32 SENS_MAP_ENG_LKP_Y
extern F32 SENS_MAP_ENG_MIN_VAL;
extern F32 SENS_MAP_ENG_MAX_VAL;
extern F32 SENS_MAP_ENG_DEFAULT_VAL;
extern F32 SENS_MAP_FLT_RISE_RATE;
extern F32 SENS_MAP_FLT_FALL_RATE;
extern F32 SENS_MAP_FLT_CLEAR_LEV;
extern F32 SENS_MAP_FLT_SLEW_RATE;
//MAP sensor const
extern PUT_ANALOGUE_CAL_DATA_T SENS_MAP_PROC_PAI_CAL;
extern PUT_ANALOGUE_WORKSPACE_T SENS_MAP_PROC_PAI_WORK;
//TPS sensor
extern F32 SENS_TPS; //DegC
extern S16 SENS_TPS_V; //Volts (raw)
extern BOOL SENS_TPS_RAW_MIN_FLT;
extern BOOL SENS_TPS_RAW_MAX_FLT;
extern BOOL SENS_TPS_SLEW_RATE_FLT;
extern BOOL SENS_TPS_ENG_MIN_FLT;
extern BOOL SENS_TPS_ENG_MAX_FLT;
extern BOOL SENS_TPS_TRANSIENT_FLT;
extern BOOL SENS_TPS_LIMPIN; //OR of all faults
//TPS sensor CAL
extern F32 SENS_TPS_MIN_RAW_VAL;
extern F32 SENS_TPS_MAX_RAW_VAL;
extern S32 SENS_TPS_ENG_LKP_SIZE;
extern F32 SENS_TPS_ENG_LKP_X;
extern F32 SENS_TPS_ENG_LKP_Y;
extern F32 SENS_TPS_ENG_MIN_VAL;
extern F32 SENS_TPS_ENG_MAX_VAL;
extern F32 SENS_TPS_ENG_DEFAULT_VAL;
extern F32 SENS_TPS_FLT_RISE_RATE;
extern F32 SENS_TPS_FLT_FALL_RATE;
extern F32 SENS_TPS_FLT_CLEAR_LEV;
extern F32 SENS_TPS_FLT_SLEW_RATE;
//TPS sensor const
extern PUT_ANALOGUE_CAL_DATA_T SENS_TPS_PROC_PAI_CAL;
extern PUT_ANALOGUE_WORKSPACE_T SENS_TPS_PROC_PAI_WORK;
//Second sensor RAM
extern F32 SENS_TPS2;
extern S16 SENS_TPS2_V;
extern BOOL SENS_TPS_1_2_FLT;
//Second sensor cals
extern F32 SENS_TPS2_ENG_LKP_X;
extern F32 SENS_TPS2_ENG_LKP_Y;
//Second sensor faults
extern F32 SENS_TPS_1_2_FLT_DIFF;
extern F32 SENS_TPS_1_2_FLT_DIFF_RISE_RATE;
extern F32 SENS_TPS_1_2_FLT_DIFF_FALL_RATE;
extern F32 SENS_TPS_1_2_FLT_DIFF_CLEAR_LEV;
//PVS sensor
extern F32 SENS_PVS; //DegC
extern S16 SENS_PVS_V; //Volts (raw)
extern BOOL SENS_PVS_RAW_MIN_FLT;
extern BOOL SENS_PVS_RAW_MAX_FLT;
extern BOOL SENS_PVS_SLEW_RATE_FLT;
extern BOOL SENS_PVS_ENG_MIN_FLT;
extern BOOL SENS_PVS_ENG_MAX_FLT;
extern BOOL SENS_PVS_TRANSIENT_FLT;
extern BOOL SENS_PVS_LIMPIN; //OR of all faults
//PVS sensor CAL
extern F32 SENS_PVS_MIN_RAW_VAL;
extern F32 SENS_PVS_MAX_RAW_VAL;
extern S32 SENS_PVS_ENG_LKP_SIZE;
extern F32 SENS_PVS_ENG_LKP_X;
extern F32 SENS_PVS_ENG_LKP_Y;
extern F32 SENS_PVS_ENG_MIN_VAL;
extern F32 SENS_PVS_ENG_MAX_VAL;
extern F32 SENS_PVS_ENG_DEFAULT_VAL;
extern F32 SENS_PVS_FLT_RISE_RATE;
extern F32 SENS_PVS_FLT_FALL_RATE;
extern F32 SENS_PVS_FLT_CLEAR_LEV;
extern F32 SENS_PVS_FLT_SLEW_RATE;
//PVS sensor const
extern PUT_ANALOGUE_CAL_DATA_T SENS_PVS_PROC_PAI_CAL;
extern PUT_ANALOGUE_WORKSPACE_T SENS_PVS_PROC_PAI_WORK;