/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "M3AP-PDU-Contents"
 * 	found in "R14/m3ap-14.0.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D R14/m3ap-14.0.0.gen/`
 */

#ifndef	_M3AP_ResetType_H_
#define	_M3AP_ResetType_H_


#include <asn_application.h>

/* Including external dependencies */
#include "M3AP_ResetAll.h"
#include "M3AP_MBMS-Service-associatedLogicalM3-ConnectionListRes.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum M3AP_ResetType_PR {
	M3AP_ResetType_PR_NOTHING,	/* No components present */
	M3AP_ResetType_PR_m3_Interface,
	M3AP_ResetType_PR_partOfM3_Interface
	/* Extensions may appear below */
	
} M3AP_ResetType_PR;

/* M3AP_ResetType */
typedef struct M3AP_ResetType {
	M3AP_ResetType_PR present;
	union M3AP_ResetType_u {
		M3AP_ResetAll_t	 m3_Interface;
		M3AP_MBMS_Service_associatedLogicalM3_ConnectionListRes_t	 partOfM3_Interface;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M3AP_ResetType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_M3AP_ResetType;
extern asn_CHOICE_specifics_t asn_SPC_M3AP_ResetType_specs_1;
extern asn_TYPE_member_t asn_MBR_M3AP_ResetType_1[2];
extern asn_per_constraints_t asn_PER_type_M3AP_ResetType_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _M3AP_ResetType_H_ */
#include <asn_internal.h>
