/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "R15/s1ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D R15/s1ap-15.6.0.gen`
 */

#include "S1AP_UE-S1AP-IDs.h"

asn_per_constraints_t asn_PER_type_S1AP_UE_S1AP_IDs_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_S1AP_UE_S1AP_IDs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_UE_S1AP_IDs, choice.uE_S1AP_ID_pair),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_UE_S1AP_ID_pair,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uE-S1AP-ID-pair"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_UE_S1AP_IDs, choice.mME_UE_S1AP_ID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_MME_UE_S1AP_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mME-UE-S1AP-ID"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_S1AP_UE_S1AP_IDs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* uE-S1AP-ID-pair */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* mME-UE-S1AP-ID */
};
asn_CHOICE_specifics_t asn_SPC_S1AP_UE_S1AP_IDs_specs_1 = {
	sizeof(struct S1AP_UE_S1AP_IDs),
	offsetof(struct S1AP_UE_S1AP_IDs, _asn_ctx),
	offsetof(struct S1AP_UE_S1AP_IDs, present),
	sizeof(((struct S1AP_UE_S1AP_IDs *)0)->present),
	asn_MAP_S1AP_UE_S1AP_IDs_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_S1AP_UE_S1AP_IDs = {
	"UE-S1AP-IDs",
	"UE-S1AP-IDs",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_S1AP_UE_S1AP_IDs_constr_1, CHOICE_constraint },
	asn_MBR_S1AP_UE_S1AP_IDs_1,
	2,	/* Elements count */
	&asn_SPC_S1AP_UE_S1AP_IDs_specs_1	/* Additional specs */
};

