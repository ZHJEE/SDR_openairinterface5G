/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "R15/s1ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D R15/s1ap-15.6.0.gen`
 */

#ifndef	_S1AP_M1ThresholdEventA2_H_
#define	_S1AP_M1ThresholdEventA2_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1AP_MeasurementThresholdA2.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct S1AP_ProtocolExtensionContainer;

/* S1AP_M1ThresholdEventA2 */
typedef struct S1AP_M1ThresholdEventA2 {
	S1AP_MeasurementThresholdA2_t	 measurementThreshold;
	struct S1AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_M1ThresholdEventA2_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_M1ThresholdEventA2;
extern asn_SEQUENCE_specifics_t asn_SPC_S1AP_M1ThresholdEventA2_specs_1;
extern asn_TYPE_member_t asn_MBR_S1AP_M1ThresholdEventA2_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_M1ThresholdEventA2_H_ */
#include <asn_internal.h>
