/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "R15/s1ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D R15/s1ap-15.6.0.gen`
 */

#ifndef	_S1AP_CompletedCellinEAI_H_
#define	_S1AP_CompletedCellinEAI_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct S1AP_CompletedCellinEAI_Item;

/* S1AP_CompletedCellinEAI */
typedef struct S1AP_CompletedCellinEAI {
	A_SEQUENCE_OF(struct S1AP_CompletedCellinEAI_Item) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_CompletedCellinEAI_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_CompletedCellinEAI;
extern asn_SET_OF_specifics_t asn_SPC_S1AP_CompletedCellinEAI_specs_1;
extern asn_TYPE_member_t asn_MBR_S1AP_CompletedCellinEAI_1[1];
extern asn_per_constraints_t asn_PER_type_S1AP_CompletedCellinEAI_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_CompletedCellinEAI_H_ */
#include <asn_internal.h>
