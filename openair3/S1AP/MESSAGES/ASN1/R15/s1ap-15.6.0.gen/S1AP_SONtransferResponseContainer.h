/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SonTransfer-IEs"
 * 	found in "R15/s1ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D R15/s1ap-15.6.0.gen`
 */

#ifndef	_S1AP_SONtransferResponseContainer_H_
#define	_S1AP_SONtransferResponseContainer_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1AP_CellLoadReportingResponse.h"
#include "S1AP_MultiCellLoadReportingResponse.h"
#include "S1AP_EventTriggeredCellLoadReportingResponse.h"
#include <NULL.h>
#include "S1AP_CellActivationResponse.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_SONtransferResponseContainer_PR {
	S1AP_SONtransferResponseContainer_PR_NOTHING,	/* No components present */
	S1AP_SONtransferResponseContainer_PR_cellLoadReporting,
	/* Extensions may appear below */
	S1AP_SONtransferResponseContainer_PR_multiCellLoadReporting,
	S1AP_SONtransferResponseContainer_PR_eventTriggeredCellLoadReporting,
	S1AP_SONtransferResponseContainer_PR_hOReporting,
	S1AP_SONtransferResponseContainer_PR_eutranCellActivation,
	S1AP_SONtransferResponseContainer_PR_energySavingsIndication,
	S1AP_SONtransferResponseContainer_PR_failureEventReporting
} S1AP_SONtransferResponseContainer_PR;

/* S1AP_SONtransferResponseContainer */
typedef struct S1AP_SONtransferResponseContainer {
	S1AP_SONtransferResponseContainer_PR present;
	union S1AP_SONtransferResponseContainer_u {
		S1AP_CellLoadReportingResponse_t	 cellLoadReporting;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		S1AP_MultiCellLoadReportingResponse_t	 multiCellLoadReporting;
		S1AP_EventTriggeredCellLoadReportingResponse_t	 eventTriggeredCellLoadReporting;
		NULL_t	 hOReporting;
		S1AP_CellActivationResponse_t	 eutranCellActivation;
		NULL_t	 energySavingsIndication;
		NULL_t	 failureEventReporting;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_SONtransferResponseContainer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_SONtransferResponseContainer;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_SONtransferResponseContainer_H_ */
#include <asn_internal.h>
