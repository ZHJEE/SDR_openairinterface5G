/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "R15/s1ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D R15/s1ap-15.6.0.gen`
 */

#ifndef	_S1AP_WLANMeasConfigNameList_H_
#define	_S1AP_WLANMeasConfigNameList_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1AP_WLANName.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* S1AP_WLANMeasConfigNameList */
typedef struct S1AP_WLANMeasConfigNameList {
	A_SEQUENCE_OF(S1AP_WLANName_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_WLANMeasConfigNameList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_WLANMeasConfigNameList;
extern asn_SET_OF_specifics_t asn_SPC_S1AP_WLANMeasConfigNameList_specs_1;
extern asn_TYPE_member_t asn_MBR_S1AP_WLANMeasConfigNameList_1[1];
extern asn_per_constraints_t asn_PER_type_S1AP_WLANMeasConfigNameList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_WLANMeasConfigNameList_H_ */
#include <asn_internal.h>
