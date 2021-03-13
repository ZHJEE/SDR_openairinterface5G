/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "R15/s1ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D R15/s1ap-15.6.0.gen`
 */

#include "S1AP_PagingDRX.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_S1AP_PagingDRX_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  3 }	/* (0..3,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_S1AP_PagingDRX_value2enum_1[] = {
	{ 0,	3,	"v32" },
	{ 1,	3,	"v64" },
	{ 2,	4,	"v128" },
	{ 3,	4,	"v256" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_S1AP_PagingDRX_enum2value_1[] = {
	2,	/* v128(2) */
	3,	/* v256(3) */
	0,	/* v32(0) */
	1	/* v64(1) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_S1AP_PagingDRX_specs_1 = {
	asn_MAP_S1AP_PagingDRX_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_S1AP_PagingDRX_enum2value_1,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	5,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_S1AP_PagingDRX_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_S1AP_PagingDRX = {
	"PagingDRX",
	"PagingDRX",
	&asn_OP_NativeEnumerated,
	asn_DEF_S1AP_PagingDRX_tags_1,
	sizeof(asn_DEF_S1AP_PagingDRX_tags_1)
		/sizeof(asn_DEF_S1AP_PagingDRX_tags_1[0]), /* 1 */
	asn_DEF_S1AP_PagingDRX_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1AP_PagingDRX_tags_1)
		/sizeof(asn_DEF_S1AP_PagingDRX_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_S1AP_PagingDRX_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_S1AP_PagingDRX_specs_1	/* Additional specs */
};

