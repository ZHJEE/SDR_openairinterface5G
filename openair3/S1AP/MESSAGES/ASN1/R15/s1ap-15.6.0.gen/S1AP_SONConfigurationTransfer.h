/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "R15/s1ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D R15/s1ap-15.6.0.gen`
 */

#ifndef	_S1AP_SONConfigurationTransfer_H_
#define	_S1AP_SONConfigurationTransfer_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1AP_TargeteNB-ID.h"
#include "S1AP_SourceeNB-ID.h"
#include "S1AP_SONInformation.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct S1AP_ProtocolExtensionContainer;

/* S1AP_SONConfigurationTransfer */
typedef struct S1AP_SONConfigurationTransfer {
	S1AP_TargeteNB_ID_t	 targeteNB_ID;
	S1AP_SourceeNB_ID_t	 sourceeNB_ID;
	S1AP_SONInformation_t	 sONInformation;
	struct S1AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_SONConfigurationTransfer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_SONConfigurationTransfer;
extern asn_SEQUENCE_specifics_t asn_SPC_S1AP_SONConfigurationTransfer_specs_1;
extern asn_TYPE_member_t asn_MBR_S1AP_SONConfigurationTransfer_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_SONConfigurationTransfer_H_ */
#include <asn_internal.h>
