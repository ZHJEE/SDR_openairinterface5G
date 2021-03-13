/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "M3AP-PDU-Descriptions"
 * 	found in "R14/m3ap-14.0.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D R14/m3ap-14.0.0.gen/`
 */

#ifndef	_M3AP_SuccessfulOutcome_H_
#define	_M3AP_SuccessfulOutcome_H_


#include <asn_application.h>

/* Including external dependencies */
#include "M3AP_ProcedureCode.h"
#include "M3AP_Criticality.h"
#include <ANY.h>
#include <asn_ioc.h>
#include "M3AP_MBMSSessionStartRequest.h"
#include "M3AP_MBMSSessionStartResponse.h"
#include "M3AP_MBMSSessionStartFailure.h"
#include "M3AP_MBMSSessionStopRequest.h"
#include "M3AP_MBMSSessionStopResponse.h"
#include "M3AP_MBMSSessionUpdateRequest.h"
#include "M3AP_MBMSSessionUpdateResponse.h"
#include "M3AP_MBMSSessionUpdateFailure.h"
#include "M3AP_Reset.h"
#include "M3AP_ResetAcknowledge.h"
#include "M3AP_M3SetupRequest.h"
#include "M3AP_M3SetupResponse.h"
#include "M3AP_M3SetupFailure.h"
#include "M3AP_MCEConfigurationUpdate.h"
#include "M3AP_MCEConfigurationUpdateAcknowledge.h"
#include "M3AP_MCEConfigurationUpdateFailure.h"
#include "M3AP_ErrorIndication.h"
#include "M3AP_PrivateMessage.h"
#include <OPEN_TYPE.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum M3AP_SuccessfulOutcome__value_PR {
	M3AP_SuccessfulOutcome__value_PR_NOTHING,	/* No components present */
	M3AP_SuccessfulOutcome__value_PR_MBMSSessionStartResponse,
	M3AP_SuccessfulOutcome__value_PR_MBMSSessionStopResponse,
	M3AP_SuccessfulOutcome__value_PR_MBMSSessionUpdateResponse,
	M3AP_SuccessfulOutcome__value_PR_ResetAcknowledge,
	M3AP_SuccessfulOutcome__value_PR_M3SetupResponse,
	M3AP_SuccessfulOutcome__value_PR_MCEConfigurationUpdateAcknowledge
} M3AP_SuccessfulOutcome__value_PR;

/* M3AP_SuccessfulOutcome */
typedef struct M3AP_SuccessfulOutcome {
	M3AP_ProcedureCode_t	 procedureCode;
	M3AP_Criticality_t	 criticality;
	struct M3AP_SuccessfulOutcome__value {
		M3AP_SuccessfulOutcome__value_PR present;
		union M3AP_SuccessfulOutcome__M3AP_value_u {
			M3AP_MBMSSessionStartResponse_t	 MBMSSessionStartResponse;
			M3AP_MBMSSessionStopResponse_t	 MBMSSessionStopResponse;
			M3AP_MBMSSessionUpdateResponse_t	 MBMSSessionUpdateResponse;
			M3AP_ResetAcknowledge_t	 ResetAcknowledge;
			M3AP_M3SetupResponse_t	 M3SetupResponse;
			M3AP_MCEConfigurationUpdateAcknowledge_t	 MCEConfigurationUpdateAcknowledge;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M3AP_SuccessfulOutcome_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_M3AP_SuccessfulOutcome;
extern asn_SEQUENCE_specifics_t asn_SPC_M3AP_SuccessfulOutcome_specs_1;
extern asn_TYPE_member_t asn_MBR_M3AP_SuccessfulOutcome_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _M3AP_SuccessfulOutcome_H_ */
#include <asn_internal.h>
