#ifndef __platform_state_object_h
#define __platform_state_object_h

#define PROP_STATE (*(struct state_object **)0x5d74)
#define SRM_STATE (*(struct state_object **)0x61cc)
#define SDCS_STATE (*(struct state_object **)0x6800)
#define SES_STATE (*(struct state_object **)0x68a0)
#define EVF_STATE (*(struct state_object **)0x6cec)
#define FFS_STATE (*(struct state_object **)0x7e18)
#define TIME_CODE_MASTER_STATE (*(struct state_object **)0x82e8)
#define EM_STATE (*(struct state_object **)0x8324)
#define ALGS_MGR_DEC_STATE (*(struct state_object **)0xa258)
#define ALGS_MGR_STATE (*(struct state_object **)0xa25c)
#define EVF_DEV_STATE (*(struct state_object **)0xd1c4)
#define MOVR_STATE (*(struct state_object **)0xebd8)
#define MOV_TRANS_STATE (*(struct state_object **)0xebe0)
#define MOV_PLAY_STATE (*(struct state_object **)0xeb38)
#define MOV_EDIT_STATE (*(struct state_object **)0xebdc)
#define MRK_STATE (*(struct state_object **)0xf814)
#define GPS_STATE (*(struct state_object **)0xf839)
#define COP_DEV_STATE (*(struct state_object **)0x124d0)
#define PTP_TRANS_STATE (*(struct state_object **)0x15fd4)
#define SOUND_STATE (*(struct state_object **)0x161e8)

#endif // __platform_state_object_h
