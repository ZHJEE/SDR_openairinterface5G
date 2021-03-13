/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "R15/s1ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D R15/s1ap-15.6.0.gen`
 */

#include "S1AP_RecommendedCellsForPaging.h"

#include "S1AP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_S1AP_RecommendedCellsForPaging_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_RecommendedCellsForPaging, recommendedCellList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_RecommendedCellList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"recommendedCellList"
		},
	{ ATF_POINTER, 1, offsetof(struct S1AP_RecommendedCellsForPaging, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_ProtocolExtensionContainer_7327P96,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_S1AP_RecommendedCellsForPaging_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_S1AP_RecommendedCellsForPaging_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_S1AP_RecommendedCellsForPaging_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* recommendedCellList */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_S1AP_RecommendedCellsForPaging_specs_1 = {
	sizeof(struct S1AP_RecommendedCellsForPaging),
	offsetof(struct S1AP_RecommendedCellsForPaging, _asn_ctx),
	asn_MAP_S1AP_RecommendedCellsForPaging_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_S1AP_RecommendedCellsForPaging_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_S1AP_RecommendedCellsForPaging = {
	"RecommendedCellsForPaging",
	"RecommendedCellsForPaging",
	&asn_OP_SEQUENCE,
	asn_DEF_S1AP_RecommendedCellsForPaging_tags_1,
	sizeof(asn_DEF_S1AP_RecommendedCellsForPaging_tags_1)
		/sizeof(asn_DEF_S1AP_RecommendedCellsForPaging_tags_1[0]), /* 1 */
	asn_DEF_S1AP_RecommendedCellsForPaging_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1AP_RecommendedCellsForPaging_tags_1)
		/sizeof(asn_DEF_S1AP_RecommendedCellsForPaging_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_S1AP_RecommendedCellsForPaging_1,
	2,	/* Elements count */
	&asn_SPC_S1AP_RecommendedCellsForPaging_specs_1	/* Additional specs */
};

