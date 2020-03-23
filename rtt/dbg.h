#ifndef DBG_H_
#define DBG_H_

#include"SEGGER_RTT.h"
int RTT_dbg_msg(const char * sFormat, ...);
int RTT_dbg_error(const char * sFormat, ...);
int RTT_dbg_none(const char * sFormat, ...);

#define dbg_msg_none   RTT_dbg_none

#if 1
		#define dbg_msg   RTT_dbg_msg
		#define dbg_error RTT_dbg_error
#else
	#define dbg_msg   RTT_dbg_none
	#define dbg_error RTT_dbg_none
#endif

#endif /* DBG_H_ */
