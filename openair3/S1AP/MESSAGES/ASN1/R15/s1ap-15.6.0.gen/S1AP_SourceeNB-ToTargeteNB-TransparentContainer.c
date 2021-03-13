/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "R15/s1ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D R15/s1ap-15.6.0.gen`
 */

#include "S1AP_SourceeNB-ToTargeteNB-TransparentContainer.h"

#include "S1AP_E-RABInformationList.h"
#include "S1AP_ProtocolExtensionContainer.h"
static asn_TYPE_member_t asn_MBR_S1AP_SourceeNB_ToTargeteNB_TransparentContainer_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_SourceeNB_ToTargeteNB_TransparentContainer, rRC_Container),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_RRC_Container,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rRC-Container"
		},
	{ ATF_POINTER, 1, offsetof(struct S1AP_SourceeNB_ToTargeteNB_TransparentContainer, e_RABInformationList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_E_RABInformationList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e-RABInformationList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_SourceeNB_ToTargeteNB_TransparentContainer, targetCell_ID),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_EUTRAN_CGI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"targetCell-ID"
		},
	{ ATF_POINTER, 1, offsetof(struct S1AP_SourceeNB_ToTargeteNB_TransparentContainer, subscriberProfileIDforRFP),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_SubscriberProfileIDforRFP,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"subscriberProfileIDforRFP"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_SourceeNB_ToTargeteNB_TransparentContainer, uE_HistoryInformation),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_UE_HistoryInformation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uE-HistoryInformation"
		},
	{ ATF_POINTER, 1, offsetof(struct S1AP_SourceeNB_ToTargeteNB_TransparentContainer, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_ProtocolExtensionContainer_7327P109,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_S1AP_SourceeNB_ToTargeteNB_TransparentContainer_oms_1[] = { 1, 3, 5 };
static const ber_tlv_tag_t asn_DEF_S1AP_SourceeNB_ToTargeteNB_TransparentContainer_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_S1AP_SourceeNB_ToTargeteNB_TransparentContainer_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rRC-Container */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* e-RABInformationList */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* targetCell-ID */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* subscriberProfileIDforRFP */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* uE-HistoryInformation */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_S1AP_SourceeNB_ToTargeteNB_TransparentContainer_specs_1 = {
	sizeof(struct S1AP_SourceeNB_ToTargeteNB_TransparentContainer),
	offsetof(struct S1AP_SourceeNB_ToTargeteNB_TransparentContainer, _asn_ctx),
	asn_MAP_S1AP_SourceeNB_ToTargeteNB_TransparentContainer_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_S1AP_SourceeNB_ToTargeteNB_TransparentContainer_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_S1AP_SourceeNB_ToTargeteNB_TransparentContainer = {
	"SourceeNB-ToTargeteNB-TransparentContainer",
	"SourceeNB-ToTargeteNB-TransparentContainer",
	&asn_OP_SEQUENCE,
	asn_DEF_S1AP_SourceeNB_ToTargeteNB_TransparentContainer_tags_1,
	sizeof(asn_DEF_S1AP_SourceeNB_ToTargeteNB_TransparentContainer_tags_1)
		/sizeof(asn_DEF_S1AP_SourceeNB_ToTargeteNB_TransparentContainer_tags_1[0]), /* 1 */
	asn_DEF_S1AP_SourceeNB_ToTargeteNB_TransparentContainer_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1AP_SourceeNB_ToTargeteNB_TransparentContainer_tags_1)
		/sizeof(asn_DEF_S1AP_SourceeNB_ToTargeteNB_TransparentContainer_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_S1AP_SourceeNB_ToTargeteNB_TransparentContainer_1,
	6,	/* Elements count */
	&asn_SPC_S1AP_SourceeNB_ToTargeteNB_TransparentContainer_specs_1	/* Additional specs */
};

