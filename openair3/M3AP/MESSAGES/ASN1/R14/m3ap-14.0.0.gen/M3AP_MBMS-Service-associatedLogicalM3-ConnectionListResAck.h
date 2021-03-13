/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "M3AP-PDU-Contents"
 * 	found in "R14/m3ap-14.0.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D R14/m3ap-14.0.0.gen/`
 */

#ifndef	_M3AP_MBMS_Service_associatedLogicalM3_ConnectionListResAck_H_
#define	_M3AP_MBMS_Service_associatedLogicalM3_ConnectionListResAck_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct M3AP_ProtocolIE_Single_Container;

/* M3AP_MBMS-Service-associatedLogicalM3-ConnectionListResAck */
typedef struct M3AP_MBMS_Service_associatedLogicalM3_ConnectionListResAck {
	A_SEQUENCE_OF(struct M3AP_ProtocolIE_Single_Container) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M3AP_MBMS_Service_associatedLogicalM3_ConnectionListResAck_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_M3AP_MBMS_Service_associatedLogicalM3_ConnectionListResAck;
extern asn_SET_OF_specifics_t asn_SPC_M3AP_MBMS_Service_associatedLogicalM3_ConnectionListResAck_specs_1;
extern asn_TYPE_member_t asn_MBR_M3AP_MBMS_Service_associatedLogicalM3_ConnectionListResAck_1[1];
extern asn_per_constraints_t asn_PER_type_M3AP_MBMS_Service_associatedLogicalM3_ConnectionListResAck_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _M3AP_MBMS_Service_associatedLogicalM3_ConnectionListResAck_H_ */
#include <asn_internal.h>
