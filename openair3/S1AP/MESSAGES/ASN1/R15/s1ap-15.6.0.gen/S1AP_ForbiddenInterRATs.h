/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "R15/s1ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D R15/s1ap-15.6.0.gen`
 */

#ifndef	_S1AP_ForbiddenInterRATs_H_
#define	_S1AP_ForbiddenInterRATs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_ForbiddenInterRATs {
	S1AP_ForbiddenInterRATs_all	= 0,
	S1AP_ForbiddenInterRATs_geran	= 1,
	S1AP_ForbiddenInterRATs_utran	= 2,
	S1AP_ForbiddenInterRATs_cdma2000	= 3,
	/*
	 * Enumeration is extensible
	 */
	S1AP_ForbiddenInterRATs_geranandutran	= 4,
	S1AP_ForbiddenInterRATs_cdma2000andutran	= 5
} e_S1AP_ForbiddenInterRATs;

/* S1AP_ForbiddenInterRATs */
typedef long	 S1AP_ForbiddenInterRATs_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_S1AP_ForbiddenInterRATs_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ForbiddenInterRATs;
extern const asn_INTEGER_specifics_t asn_SPC_S1AP_ForbiddenInterRATs_specs_1;
asn_struct_free_f S1AP_ForbiddenInterRATs_free;
asn_struct_print_f S1AP_ForbiddenInterRATs_print;
asn_constr_check_f S1AP_ForbiddenInterRATs_constraint;
ber_type_decoder_f S1AP_ForbiddenInterRATs_decode_ber;
der_type_encoder_f S1AP_ForbiddenInterRATs_encode_der;
xer_type_decoder_f S1AP_ForbiddenInterRATs_decode_xer;
xer_type_encoder_f S1AP_ForbiddenInterRATs_encode_xer;
per_type_decoder_f S1AP_ForbiddenInterRATs_decode_uper;
per_type_encoder_f S1AP_ForbiddenInterRATs_encode_uper;
per_type_decoder_f S1AP_ForbiddenInterRATs_decode_aper;
per_type_encoder_f S1AP_ForbiddenInterRATs_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_ForbiddenInterRATs_H_ */
#include <asn_internal.h>
