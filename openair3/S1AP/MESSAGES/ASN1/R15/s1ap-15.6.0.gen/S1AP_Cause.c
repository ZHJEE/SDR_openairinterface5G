/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "R15/s1ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D R15/s1ap-15.6.0.gen`
 */

#include "S1AP_Cause.h"

asn_per_constraints_t asn_PER_type_S1AP_Cause_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  4 }	/* (0..4,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_S1AP_Cause_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_Cause, choice.radioNetwork),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_CauseRadioNetwork,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"radioNetwork"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_Cause, choice.transport),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_CauseTransport,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"transport"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_Cause, choice.nas),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_CauseNas,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nas"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_Cause, choice.protocol),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_CauseProtocol,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"protocol"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_Cause, choice.misc),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_CauseMisc,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"misc"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_S1AP_Cause_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* radioNetwork */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* transport */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* nas */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* protocol */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* misc */
};
asn_CHOICE_specifics_t asn_SPC_S1AP_Cause_specs_1 = {
	sizeof(struct S1AP_Cause),
	offsetof(struct S1AP_Cause, _asn_ctx),
	offsetof(struct S1AP_Cause, present),
	sizeof(((struct S1AP_Cause *)0)->present),
	asn_MAP_S1AP_Cause_tag2el_1,
	5,	/* Count of tags in the map */
	0, 0,
	5	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_S1AP_Cause = {
	"Cause",
	"Cause",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_S1AP_Cause_constr_1, CHOICE_constraint },
	asn_MBR_S1AP_Cause_1,
	5,	/* Elements count */
	&asn_SPC_S1AP_Cause_specs_1	/* Additional specs */
};

