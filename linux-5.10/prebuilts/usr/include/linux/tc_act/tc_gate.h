/*
 * This header was generated from the Linux kernel headers by update_headers.py,
 * to provide necessary information from kernel to userspace, such as constants,
 * structures, and macros, and thus, contains no copyrightable information.
 */
#ifndef __LINUX_TC_GATE_H
#define __LINUX_TC_GATE_H
#include <linux/pkt_cls.h>
struct tc_gate {
	tc_gen;
};
enum {
	TCA_GATE_ENTRY_UNSPEC,
	TCA_GATE_ENTRY_INDEX,
	TCA_GATE_ENTRY_GATE,
	TCA_GATE_ENTRY_INTERVAL,
	TCA_GATE_ENTRY_IPV,
	TCA_GATE_ENTRY_MAX_OCTETS,
	__TCA_GATE_ENTRY_MAX,
};
#define TCA_GATE_ENTRY_MAX (__TCA_GATE_ENTRY_MAX - 1)
enum {
	TCA_GATE_ONE_ENTRY_UNSPEC,
	TCA_GATE_ONE_ENTRY,
	__TCA_GATE_ONE_ENTRY_MAX,
};
#define TCA_GATE_ONE_ENTRY_MAX (__TCA_GATE_ONE_ENTRY_MAX - 1)
enum {
	TCA_GATE_UNSPEC,
	TCA_GATE_TM,
	TCA_GATE_PARMS,
	TCA_GATE_PAD,
	TCA_GATE_PRIORITY,
	TCA_GATE_ENTRY_LIST,
	TCA_GATE_BASE_TIME,
	TCA_GATE_CYCLE_TIME,
	TCA_GATE_CYCLE_TIME_EXT,
	TCA_GATE_FLAGS,
	TCA_GATE_CLOCKID,
	__TCA_GATE_MAX,
};
#define TCA_GATE_MAX (__TCA_GATE_MAX - 1)
#endif
