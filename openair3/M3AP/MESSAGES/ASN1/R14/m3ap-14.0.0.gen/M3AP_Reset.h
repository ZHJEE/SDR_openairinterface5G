/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "M3AP-PDU-Contents"
 * 	found in "R14/m3ap-14.0.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D R14/m3ap-14.0.0.gen/`
 */

#ifndef	_M3AP_Reset_H_
#define	_M3AP_Reset_H_


#include <asn_application.h>

/* Including external dependencies */
#include "M3AP_ProtocolIE-Container.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* M3AP_Reset */
typedef struct M3AP_Reset {
	M3AP_ProtocolIE_Container_1004P9_t	 protocolIEs;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M3AP_Reset_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_M3AP_Reset;
extern asn_SEQUENCE_specifics_t asn_SPC_M3AP_Reset_specs_1;
extern asn_TYPE_member_t asn_MBR_M3AP_Reset_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _M3AP_Reset_H_ */
#include <asn_internal.h>
