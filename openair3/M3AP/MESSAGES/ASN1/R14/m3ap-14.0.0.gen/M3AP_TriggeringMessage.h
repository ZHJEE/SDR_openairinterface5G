/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "M3AP-CommonDataTypes"
 * 	found in "R14/m3ap-14.0.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D R14/m3ap-14.0.0.gen/`
 */

#ifndef	_M3AP_TriggeringMessage_H_
#define	_M3AP_TriggeringMessage_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum M3AP_TriggeringMessage {
	M3AP_TriggeringMessage_initiating_message	= 0,
	M3AP_TriggeringMessage_successful_outcome	= 1,
	M3AP_TriggeringMessage_unsuccessful_outcome	= 2
} e_M3AP_TriggeringMessage;

/* M3AP_TriggeringMessage */
typedef long	 M3AP_TriggeringMessage_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_M3AP_TriggeringMessage_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_M3AP_TriggeringMessage;
extern const asn_INTEGER_specifics_t asn_SPC_M3AP_TriggeringMessage_specs_1;
asn_struct_free_f M3AP_TriggeringMessage_free;
asn_struct_print_f M3AP_TriggeringMessage_print;
asn_constr_check_f M3AP_TriggeringMessage_constraint;
ber_type_decoder_f M3AP_TriggeringMessage_decode_ber;
der_type_encoder_f M3AP_TriggeringMessage_encode_der;
xer_type_decoder_f M3AP_TriggeringMessage_decode_xer;
xer_type_encoder_f M3AP_TriggeringMessage_encode_xer;
per_type_decoder_f M3AP_TriggeringMessage_decode_uper;
per_type_encoder_f M3AP_TriggeringMessage_encode_uper;
per_type_decoder_f M3AP_TriggeringMessage_decode_aper;
per_type_encoder_f M3AP_TriggeringMessage_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _M3AP_TriggeringMessage_H_ */
#include <asn_internal.h>
