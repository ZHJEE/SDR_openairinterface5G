/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "M3AP-Containers"
 * 	found in "R14/m3ap-14.0.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D R14/m3ap-14.0.0.gen/`
 */

#ifndef	_M3AP_ProtocolExtensionField_H_
#define	_M3AP_ProtocolExtensionField_H_


#include <asn_application.h>

/* Including external dependencies */
#include "M3AP_ProtocolIE-ID.h"
#include "M3AP_Criticality.h"
#include <ANY.h>
#include <asn_ioc.h>
#include <OPEN_TYPE.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>
#include "M3AP_AllocationAndRetentionPriority.h"
#include "M3AP_Presence.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum M3AP_AllocationAndRetentionPriority_ExtIEs__extensionValue_PR {
	M3AP_AllocationAndRetentionPriority_ExtIEs__extensionValue_PR_NOTHING	/* No components present */
	
} M3AP_AllocationAndRetentionPriority_ExtIEs__extensionValue_PR;
typedef enum M3AP_CriticalityDiagnostics_ExtIEs__extensionValue_PR {
	M3AP_CriticalityDiagnostics_ExtIEs__extensionValue_PR_NOTHING	/* No components present */
	
} M3AP_CriticalityDiagnostics_ExtIEs__extensionValue_PR;
typedef enum M3AP_CriticalityDiagnostics_IE_List_ExtIEs__extensionValue_PR {
	M3AP_CriticalityDiagnostics_IE_List_ExtIEs__extensionValue_PR_NOTHING	/* No components present */
	
} M3AP_CriticalityDiagnostics_IE_List_ExtIEs__extensionValue_PR;
typedef enum M3AP_ECGI_ExtIEs__extensionValue_PR {
	M3AP_ECGI_ExtIEs__extensionValue_PR_NOTHING	/* No components present */
	
} M3AP_ECGI_ExtIEs__extensionValue_PR;
typedef enum M3AP_GlobalMCE_ID_ExtIEs__extensionValue_PR {
	M3AP_GlobalMCE_ID_ExtIEs__extensionValue_PR_NOTHING	/* No components present */
	
} M3AP_GlobalMCE_ID_ExtIEs__extensionValue_PR;
typedef enum M3AP_GBR_QosInformation_ExtIEs__extensionValue_PR {
	M3AP_GBR_QosInformation_ExtIEs__extensionValue_PR_NOTHING	/* No components present */
	
} M3AP_GBR_QosInformation_ExtIEs__extensionValue_PR;
typedef enum M3AP_MBMS_E_RAB_QoS_Parameters_ExtIEs__extensionValue_PR {
	M3AP_MBMS_E_RAB_QoS_Parameters_ExtIEs__extensionValue_PR_NOTHING,	/* No components present */
	M3AP_MBMS_E_RAB_QoS_Parameters_ExtIEs__extensionValue_PR_AllocationAndRetentionPriority
} M3AP_MBMS_E_RAB_QoS_Parameters_ExtIEs__extensionValue_PR;
typedef enum M3AP_MBMS_Service_associatedLogicalM3_ConnectionItemExtIEs__extensionValue_PR {
	M3AP_MBMS_Service_associatedLogicalM3_ConnectionItemExtIEs__extensionValue_PR_NOTHING	/* No components present */
	
} M3AP_MBMS_Service_associatedLogicalM3_ConnectionItemExtIEs__extensionValue_PR;
typedef enum M3AP_TMGI_ExtIEs__extensionValue_PR {
	M3AP_TMGI_ExtIEs__extensionValue_PR_NOTHING	/* No components present */
	
} M3AP_TMGI_ExtIEs__extensionValue_PR;
typedef enum M3AP_TNL_Information_ExtIEs__extensionValue_PR {
	M3AP_TNL_Information_ExtIEs__extensionValue_PR_NOTHING	/* No components present */
	
} M3AP_TNL_Information_ExtIEs__extensionValue_PR;

/* M3AP_ProtocolExtensionField */
typedef struct M3AP_AllocationAndRetentionPriority_ExtIEs {
	M3AP_ProtocolIE_ID_t	 id;
	M3AP_Criticality_t	 criticality;
	struct M3AP_AllocationAndRetentionPriority_ExtIEs__extensionValue {
		M3AP_AllocationAndRetentionPriority_ExtIEs__extensionValue_PR present;
		union M3AP_AllocationAndRetentionPriority_ExtIEs__M3AP_extensionValue_u {
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} extensionValue;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M3AP_AllocationAndRetentionPriority_ExtIEs_t;
typedef struct M3AP_CriticalityDiagnostics_ExtIEs {
	M3AP_ProtocolIE_ID_t	 id;
	M3AP_Criticality_t	 criticality;
	struct M3AP_CriticalityDiagnostics_ExtIEs__extensionValue {
		M3AP_CriticalityDiagnostics_ExtIEs__extensionValue_PR present;
		union M3AP_CriticalityDiagnostics_ExtIEs__M3AP_extensionValue_u {
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} extensionValue;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M3AP_CriticalityDiagnostics_ExtIEs_t;
typedef struct M3AP_CriticalityDiagnostics_IE_List_ExtIEs {
	M3AP_ProtocolIE_ID_t	 id;
	M3AP_Criticality_t	 criticality;
	struct M3AP_CriticalityDiagnostics_IE_List_ExtIEs__extensionValue {
		M3AP_CriticalityDiagnostics_IE_List_ExtIEs__extensionValue_PR present;
		union M3AP_CriticalityDiagnostics_IE_List_ExtIEs__M3AP_extensionValue_u {
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} extensionValue;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M3AP_CriticalityDiagnostics_IE_List_ExtIEs_t;
typedef struct M3AP_ECGI_ExtIEs {
	M3AP_ProtocolIE_ID_t	 id;
	M3AP_Criticality_t	 criticality;
	struct M3AP_ECGI_ExtIEs__extensionValue {
		M3AP_ECGI_ExtIEs__extensionValue_PR present;
		union M3AP_ECGI_ExtIEs__M3AP_extensionValue_u {
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} extensionValue;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M3AP_ECGI_ExtIEs_t;
typedef struct M3AP_GlobalMCE_ID_ExtIEs {
	M3AP_ProtocolIE_ID_t	 id;
	M3AP_Criticality_t	 criticality;
	struct M3AP_GlobalMCE_ID_ExtIEs__extensionValue {
		M3AP_GlobalMCE_ID_ExtIEs__extensionValue_PR present;
		union M3AP_GlobalMCE_ID_ExtIEs__M3AP_extensionValue_u {
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} extensionValue;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M3AP_GlobalMCE_ID_ExtIEs_t;
typedef struct M3AP_GBR_QosInformation_ExtIEs {
	M3AP_ProtocolIE_ID_t	 id;
	M3AP_Criticality_t	 criticality;
	struct M3AP_GBR_QosInformation_ExtIEs__extensionValue {
		M3AP_GBR_QosInformation_ExtIEs__extensionValue_PR present;
		union M3AP_GBR_QosInformation_ExtIEs__M3AP_extensionValue_u {
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} extensionValue;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M3AP_GBR_QosInformation_ExtIEs_t;
typedef struct M3AP_MBMS_E_RAB_QoS_Parameters_ExtIEs {
	M3AP_ProtocolIE_ID_t	 id;
	M3AP_Criticality_t	 criticality;
	struct M3AP_MBMS_E_RAB_QoS_Parameters_ExtIEs__extensionValue {
		M3AP_MBMS_E_RAB_QoS_Parameters_ExtIEs__extensionValue_PR present;
		union M3AP_MBMS_E_RAB_QoS_Parameters_ExtIEs__M3AP_extensionValue_u {
			M3AP_AllocationAndRetentionPriority_t	 AllocationAndRetentionPriority;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} extensionValue;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M3AP_MBMS_E_RAB_QoS_Parameters_ExtIEs_t;
typedef struct M3AP_MBMS_Service_associatedLogicalM3_ConnectionItemExtIEs {
	M3AP_ProtocolIE_ID_t	 id;
	M3AP_Criticality_t	 criticality;
	struct M3AP_MBMS_Service_associatedLogicalM3_ConnectionItemExtIEs__extensionValue {
		M3AP_MBMS_Service_associatedLogicalM3_ConnectionItemExtIEs__extensionValue_PR present;
		union M3AP_MBMS_Service_associatedLogicalM3_ConnectionItemExtIEs__M3AP_extensionValue_u {
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} extensionValue;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M3AP_MBMS_Service_associatedLogicalM3_ConnectionItemExtIEs_t;
typedef struct M3AP_TMGI_ExtIEs {
	M3AP_ProtocolIE_ID_t	 id;
	M3AP_Criticality_t	 criticality;
	struct M3AP_TMGI_ExtIEs__extensionValue {
		M3AP_TMGI_ExtIEs__extensionValue_PR present;
		union M3AP_TMGI_ExtIEs__M3AP_extensionValue_u {
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} extensionValue;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M3AP_TMGI_ExtIEs_t;
typedef struct M3AP_TNL_Information_ExtIEs {
	M3AP_ProtocolIE_ID_t	 id;
	M3AP_Criticality_t	 criticality;
	struct M3AP_TNL_Information_ExtIEs__extensionValue {
		M3AP_TNL_Information_ExtIEs__extensionValue_PR present;
		union M3AP_TNL_Information_ExtIEs__M3AP_extensionValue_u {
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} extensionValue;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M3AP_TNL_Information_ExtIEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_M3AP_AllocationAndRetentionPriority_ExtIEs;
extern asn_SEQUENCE_specifics_t asn_SPC_M3AP_AllocationAndRetentionPriority_ExtIEs_specs_1;
extern asn_TYPE_member_t asn_MBR_M3AP_AllocationAndRetentionPriority_ExtIEs_1[3];
extern asn_TYPE_descriptor_t asn_DEF_M3AP_CriticalityDiagnostics_ExtIEs;
extern asn_SEQUENCE_specifics_t asn_SPC_M3AP_CriticalityDiagnostics_ExtIEs_specs_5;
extern asn_TYPE_member_t asn_MBR_M3AP_CriticalityDiagnostics_ExtIEs_5[3];
extern asn_TYPE_descriptor_t asn_DEF_M3AP_CriticalityDiagnostics_IE_List_ExtIEs;
extern asn_SEQUENCE_specifics_t asn_SPC_M3AP_CriticalityDiagnostics_IE_List_ExtIEs_specs_9;
extern asn_TYPE_member_t asn_MBR_M3AP_CriticalityDiagnostics_IE_List_ExtIEs_9[3];
extern asn_TYPE_descriptor_t asn_DEF_M3AP_ECGI_ExtIEs;
extern asn_SEQUENCE_specifics_t asn_SPC_M3AP_ECGI_ExtIEs_specs_13;
extern asn_TYPE_member_t asn_MBR_M3AP_ECGI_ExtIEs_13[3];
extern asn_TYPE_descriptor_t asn_DEF_M3AP_GlobalMCE_ID_ExtIEs;
extern asn_SEQUENCE_specifics_t asn_SPC_M3AP_GlobalMCE_ID_ExtIEs_specs_17;
extern asn_TYPE_member_t asn_MBR_M3AP_GlobalMCE_ID_ExtIEs_17[3];
extern asn_TYPE_descriptor_t asn_DEF_M3AP_GBR_QosInformation_ExtIEs;
extern asn_SEQUENCE_specifics_t asn_SPC_M3AP_GBR_QosInformation_ExtIEs_specs_21;
extern asn_TYPE_member_t asn_MBR_M3AP_GBR_QosInformation_ExtIEs_21[3];
extern asn_TYPE_descriptor_t asn_DEF_M3AP_MBMS_E_RAB_QoS_Parameters_ExtIEs;
extern asn_SEQUENCE_specifics_t asn_SPC_M3AP_MBMS_E_RAB_QoS_Parameters_ExtIEs_specs_25;
extern asn_TYPE_member_t asn_MBR_M3AP_MBMS_E_RAB_QoS_Parameters_ExtIEs_25[3];
extern asn_TYPE_descriptor_t asn_DEF_M3AP_MBMS_Service_associatedLogicalM3_ConnectionItemExtIEs;
extern asn_SEQUENCE_specifics_t asn_SPC_M3AP_MBMS_Service_associatedLogicalM3_ConnectionItemExtIEs_specs_29;
extern asn_TYPE_member_t asn_MBR_M3AP_MBMS_Service_associatedLogicalM3_ConnectionItemExtIEs_29[3];
extern asn_TYPE_descriptor_t asn_DEF_M3AP_TMGI_ExtIEs;
extern asn_SEQUENCE_specifics_t asn_SPC_M3AP_TMGI_ExtIEs_specs_33;
extern asn_TYPE_member_t asn_MBR_M3AP_TMGI_ExtIEs_33[3];
extern asn_TYPE_descriptor_t asn_DEF_M3AP_TNL_Information_ExtIEs;
extern asn_SEQUENCE_specifics_t asn_SPC_M3AP_TNL_Information_ExtIEs_specs_37;
extern asn_TYPE_member_t asn_MBR_M3AP_TNL_Information_ExtIEs_37[3];

#ifdef __cplusplus
}
#endif

#endif	/* _M3AP_ProtocolExtensionField_H_ */
#include <asn_internal.h>
