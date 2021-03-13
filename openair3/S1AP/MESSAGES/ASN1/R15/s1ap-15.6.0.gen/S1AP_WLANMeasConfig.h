/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "R15/s1ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D R15/s1ap-15.6.0.gen`
 */

#ifndef	_S1AP_WLANMeasConfig_H_
#define	_S1AP_WLANMeasConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_WLANMeasConfig {
	S1AP_WLANMeasConfig_setup	= 0
	/*
	 * Enumeration is extensible
	 */
} e_S1AP_WLANMeasConfig;

/* S1AP_WLANMeasConfig */
typedef long	 S1AP_WLANMeasConfig_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_S1AP_WLANMeasConfig_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_WLANMeasConfig;
extern const asn_INTEGER_specifics_t asn_SPC_S1AP_WLANMeasConfig_specs_1;
asn_struct_free_f S1AP_WLANMeasConfig_free;
asn_struct_print_f S1AP_WLANMeasConfig_print;
asn_constr_check_f S1AP_WLANMeasConfig_constraint;
ber_type_decoder_f S1AP_WLANMeasConfig_decode_ber;
der_type_encoder_f S1AP_WLANMeasConfig_encode_der;
xer_type_decoder_f S1AP_WLANMeasConfig_decode_xer;
xer_type_encoder_f S1AP_WLANMeasConfig_encode_xer;
per_type_decoder_f S1AP_WLANMeasConfig_decode_uper;
per_type_encoder_f S1AP_WLANMeasConfig_encode_uper;
per_type_decoder_f S1AP_WLANMeasConfig_decode_aper;
per_type_encoder_f S1AP_WLANMeasConfig_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_WLANMeasConfig_H_ */
#include <asn_internal.h>
