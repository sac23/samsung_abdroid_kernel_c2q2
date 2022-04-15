/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2020, The Linux Foundation. All rights reserved.
 */

#include <soc/qcom/qseecomi.h>

#ifndef _CRYPTO_QTI_TZ_H
#define _CRYPTO_QTI_TZ_H

#define TZ_ES_CONFIG_SET_ICE_KEY_CE_TYPE 0x5
#define TZ_ES_INVALIDATE_ICE_KEY_CE_TYPE 0x6
#define TZ_ES_RETRIEVE_RAW_SECRET_CE_TYPE 0x7

#define TZ_ES_CONFIG_SET_ICE_KEY_CE_TYPE_ID \
	TZ_SYSCALL_CREATE_SMC_ID(TZ_OWNER_SIP, TZ_SVC_ES, \
	TZ_ES_CONFIG_SET_ICE_KEY_CE_TYPE)

#define TZ_ES_INVALIDATE_ICE_KEY_CE_TYPE_ID \
	TZ_SYSCALL_CREATE_SMC_ID(TZ_OWNER_SIP, \
	TZ_SVC_ES, TZ_ES_INVALIDATE_ICE_KEY_CE_TYPE)

#define TZ_ES_RETRIEVE_RAW_SECRET_CE_TYPE_ID \
	TZ_SYSCALL_CREATE_SMC_ID(TZ_OWNER_SIP, \
	TZ_SVC_ES, TZ_ES_RETRIEVE_RAW_SECRET_CE_TYPE)

#define TZ_ES_INVALIDATE_ICE_KEY_CE_TYPE_PARAM_ID \
	TZ_SYSCALL_CREATE_PARAM_ID_2( \
	TZ_SYSCALL_PARAM_TYPE_VAL, TZ_SYSCALL_PARAM_TYPE_VAL)

#define TZ_ES_CONFIG_SET_ICE_KEY_CE_TYPE_PARAM_ID \
	TZ_SYSCALL_CREATE_PARAM_ID_6( \
	TZ_SYSCALL_PARAM_TYPE_VAL, \
	TZ_SYSCALL_PARAM_TYPE_BUF_RW, TZ_SYSCALL_PARAM_TYPE_VAL, \
	TZ_SYSCALL_PARAM_TYPE_VAL, TZ_SYSCALL_PARAM_TYPE_VAL, \
	TZ_SYSCALL_PARAM_TYPE_VAL)

#define TZ_ES_RETRIEVE_RAW_SECRET_CE_TYPE_PARAM_ID \
	TZ_SYSCALL_CREATE_PARAM_ID_4( \
	TZ_SYSCALL_PARAM_TYPE_BUF_RW, TZ_SYSCALL_PARAM_TYPE_VAL, \
	TZ_SYSCALL_PARAM_TYPE_BUF_RW, TZ_SYSCALL_PARAM_TYPE_VAL)

enum {
	ICE_CIPHER_MODE_XTS_128 = 0,
	ICE_CIPHER_MODE_CBC_128 = 1,
	ICE_CIPHER_MODE_XTS_256 = 3,
	ICE_CIPHER_MODE_CBC_256 = 4
};

#define UFS_CE 10
#define SDCC_CE 20
#define UFS_CARD_CE 30

#endif /* _CRYPTO_QTI_TZ_H */