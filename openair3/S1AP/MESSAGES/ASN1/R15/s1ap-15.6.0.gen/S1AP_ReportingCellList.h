/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SonTransfer-IEs"
 * 	found in "R15/s1ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D R15/s1ap-15.6.0.gen`
 */

#ifndef	_S1AP_ReportingCellList_H_
#define	_S1AP_ReportingCellList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct S1AP_ReportingCellList_Item;

/* S1AP_ReportingCellList */
typedef struct S1AP_ReportingCellList {
	A_SEQUENCE_OF(struct S1AP_ReportingCellList_Item) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_ReportingCellList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ReportingCellList;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_ReportingCellList_H_ */
#include <asn_internal.h>
