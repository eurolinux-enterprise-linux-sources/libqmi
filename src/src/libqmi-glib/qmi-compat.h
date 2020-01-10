
/* -*- Mode: C; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */
/*
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301 USA.
 *
 * Copyright (C) 2016-2017 Aleksander Morgado <aleksander@aleksander.es>
 */

#ifndef _LIBQMI_GLIB_QMI_COMPAT_H_
#define _LIBQMI_GLIB_QMI_COMPAT_H_

#if !defined (__LIBQMI_GLIB_H_INSIDE__) && !defined (LIBQMI_GLIB_COMPILATION)
#error "Only <libqmi-glib.h> can be included directly."
#endif

#include "qmi-dms.h"
#include "qmi-enums-nas.h"
#include "qmi-enums-wms.h"

/**
 * SECTION:qmi-compat
 * @title: API break replacements
 *
 * These compatibility types and methods are flagged as deprecated and therefore
 * shouldn't be used in newly written code. They are provided to avoid
 * innecessary API/ABI breaks.
 */

/**
 * qmi_message_dms_set_service_programming_code_input_get_new:
 * @self: a #QmiMessageDmsSetServiceProgrammingCodeInput.
 * @arg_new: a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'New Code' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 * Deprecated: 1.14.0: Use qmi_message_dms_set_service_programming_code_input_get_new_code() instead.
 */
G_DEPRECATED_FOR (qmi_message_dms_set_service_programming_code_input_get_new_code)
gboolean qmi_message_dms_set_service_programming_code_input_get_new (
    QmiMessageDmsSetServiceProgrammingCodeInput *self,
    const gchar **arg_new,
    GError **error);

/**
 * qmi_message_dms_set_service_programming_code_input_set_new:
 * @self: a #QmiMessageDmsSetServiceProgrammingCodeInput.
 * @arg_new: a constant string of exactly 6 characters.
 * @error: Return location for error or %NULL.
 *
 * Set the 'New Code' field in the message.
 *
 * Returns: %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 * Deprecated: 1.14.0: Use qmi_message_dms_set_service_programming_code_input_set_new_code() instead.
 */
G_DEPRECATED_FOR (qmi_message_dms_set_service_programming_code_input_set_new_code)
gboolean qmi_message_dms_set_service_programming_code_input_set_new (
    QmiMessageDmsSetServiceProgrammingCodeInput *self,
    const gchar *arg_new,
    GError **error);

/**
 * qmi_message_dms_set_service_programming_code_input_get_current:
 * @self: a #QmiMessageDmsSetServiceProgrammingCodeInput.
 * @arg_current: a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Current Code' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 * Deprecated: 1.14.0: Use qmi_message_dms_set_service_programming_code_input_get_current_code() instead.
 */
G_DEPRECATED_FOR (qmi_message_dms_set_service_programming_code_input_get_current_code)
gboolean qmi_message_dms_set_service_programming_code_input_get_current (
    QmiMessageDmsSetServiceProgrammingCodeInput *self,
    const gchar **arg_current,
    GError **error);

/**
 * qmi_message_dms_set_service_programming_code_input_set_current:
 * @self: a #QmiMessageDmsSetServiceProgrammingCodeInput.
 * @arg_current: a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Current Code' field from @self.
 *
 * Returns: %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 * Deprecated: 1.14.0: Use qmi_message_dms_set_service_programming_code_input_set_current_code() instead.
 */
G_DEPRECATED_FOR (qmi_message_dms_set_service_programming_code_input_set_current_code)
gboolean qmi_message_dms_set_service_programming_code_input_set_current (
    QmiMessageDmsSetServiceProgrammingCodeInput *self,
    const gchar *arg_current,
    GError **error);

/**
 * QMI_NAS_SIM_REJECT_STATE_SIM_VAILABLE:
 *
 * SIM available.
 *
 * Since: 1.0
 * Deprecated: 1.14.0: Use the correct #QMI_NAS_SIM_REJECT_STATE_SIM_AVAILABLE name instead.
 */
G_DEPRECATED_FOR (QMI_NAS_SIM_REJECT_STATE_SIM_AVAILABLE)
#define QMI_NAS_SIM_REJECT_STATE_SIM_VAILABLE QMI_NAS_SIM_REJECT_STATE_SIM_AVAILABLE

/**
 * QMI_WDS_CDMA_CAUSE_CODE_NETWORK_ADDRESS_VACANT:
 *
 * Address is valid but not yet allocated.
 *
 * Since: 1.0
 * Deprecated: 1.18.0: Use the correct #QMI_WMS_CDMA_CAUSE_CODE_NETWORK_ADDRESS_VACANT name instead.
 */
G_DEPRECATED_FOR (QMI_WMS_CDMA_CAUSE_CODE_NETWORK_ADDRESS_VACANT)
#define QMI_WDS_CDMA_CAUSE_CODE_NETWORK_ADDRESS_VACANT QMI_WMS_CDMA_CAUSE_CODE_NETWORK_ADDRESS_VACANT

/**
 * QMI_WDS_CDMA_CAUSE_CODE_NETWORK_ADDRESS_TRANSLATION_FAILURE:
 *
 * Address is invalid.
 *
 * Since: 1.0
 * Deprecated: 1.18.0: Use the correct #QMI_WMS_CDMA_CAUSE_CODE_NETWORK_ADDRESS_TRANSLATION_FAILURE name instead.
 */
G_DEPRECATED_FOR (QMI_WMS_CDMA_CAUSE_CODE_NETWORK_ADDRESS_TRANSLATION_FAILURE)
#define QMI_WDS_CDMA_CAUSE_CODE_NETWORK_ADDRESS_TRANSLATION_FAILURE QMI_WMS_CDMA_CAUSE_CODE_NETWORK_ADDRESS_TRANSLATION_FAILURE

/**
 * QMI_WDS_CDMA_CAUSE_CODE_NETWORK_RESOURCE_SHORTAGE:
 *
 * Network resource shortage.
 *
 * Since: 1.0
 * Deprecated: 1.18.0: Use the correct #QMI_WMS_CDMA_CAUSE_CODE_NETWORK_RESOURCE_SHORTAGE name instead.
 */
G_DEPRECATED_FOR (QMI_WMS_CDMA_CAUSE_CODE_NETWORK_RESOURCE_SHORTAGE)
#define QMI_WDS_CDMA_CAUSE_CODE_NETWORK_RESOURCE_SHORTAGE QMI_WMS_CDMA_CAUSE_CODE_NETWORK_RESOURCE_SHORTAGE

/**
 * QMI_WDS_CDMA_CAUSE_CODE_NETWORK_FAILURE:
 *
 * Network failed.
 *
 * Since: 1.0
 * Deprecated: 1.18.0: Use the correct #QMI_WMS_CDMA_CAUSE_CODE_NETWORK_FAILURE name instead.
 */
G_DEPRECATED_FOR (QMI_WMS_CDMA_CAUSE_CODE_NETWORK_FAILURE)
#define QMI_WDS_CDMA_CAUSE_CODE_NETWORK_FAILURE QMI_WMS_CDMA_CAUSE_CODE_NETWORK_FAILURE

/**
 * QMI_WDS_CDMA_CAUSE_CODE_NETWORK_INVALID_TELESERVICE_ID:
 *
 * SMS teleservice ID is invalid.
 *
 * Since: 1.0
 * Deprecated: 1.18.0: Use the correct #QMI_WMS_CDMA_CAUSE_CODE_NETWORK_INVALID_TELESERVICE_ID name instead.
 */
G_DEPRECATED_FOR (QMI_WMS_CDMA_CAUSE_CODE_NETWORK_INVALID_TELESERVICE_ID)
#define QMI_WDS_CDMA_CAUSE_CODE_NETWORK_INVALID_TELESERVICE_ID QMI_WMS_CDMA_CAUSE_CODE_NETWORK_INVALID_TELESERVICE_ID

/**
 * QMI_WDS_CDMA_CAUSE_CODE_NETWORK_OTHER:
 *
 * Other network error.
 *
 * Since: 1.0
 * Deprecated: 1.18.0: Use the correct #QMI_WMS_CDMA_CAUSE_CODE_NETWORK_OTHER name instead.
 */
G_DEPRECATED_FOR (QMI_WMS_CDMA_CAUSE_CODE_NETWORK_OTHER)
#define QMI_WDS_CDMA_CAUSE_CODE_NETWORK_OTHER QMI_WMS_CDMA_CAUSE_CODE_NETWORK_OTHER

/**
 * QMI_WDS_CDMA_CAUSE_CODE_DESTINATION_NO_PAGE_RESPONSE:
 *
 * No page response from destination.
 *
 * Since: 1.0
 * Deprecated: 1.18.0: Use the correct #QMI_WMS_CDMA_CAUSE_CODE_DESTINATION_NO_PAGE_RESPONSE name instead.
 */
G_DEPRECATED_FOR (QMI_WMS_CDMA_CAUSE_CODE_DESTINATION_NO_PAGE_RESPONSE)
#define QMI_WDS_CDMA_CAUSE_CODE_DESTINATION_NO_PAGE_RESPONSE QMI_WMS_CDMA_CAUSE_CODE_DESTINATION_NO_PAGE_RESPONSE

/**
 * QMI_WDS_CDMA_CAUSE_CODE_DESTINATION_BUSY:
 *
 * Destination is busy.
 *
 * Since: 1.0
 * Deprecated: 1.18.0: Use the correct #QMI_WMS_CDMA_CAUSE_CODE_DESTINATION_BUSY name instead.
 */
G_DEPRECATED_FOR (QMI_WMS_CDMA_CAUSE_CODE_DESTINATION_BUSY)
#define QMI_WDS_CDMA_CAUSE_CODE_DESTINATION_BUSY QMI_WMS_CDMA_CAUSE_CODE_DESTINATION_BUSY

/**
 * QMI_WDS_CDMA_CAUSE_CODE_DESTINATION_NO_ACK:
 *
 * No acknowledge from destination.
 *
 * Since: 1.0
 * Deprecated: 1.18.0: Use the correct #QMI_WMS_CDMA_CAUSE_CODE_DESTINATION_NO_ACK name instead.
 */
G_DEPRECATED_FOR (QMI_WMS_CDMA_CAUSE_CODE_DESTINATION_NO_ACK)
#define QMI_WDS_CDMA_CAUSE_CODE_DESTINATION_NO_ACK QMI_WMS_CDMA_CAUSE_CODE_DESTINATION_NO_ACK


/**
 * QMI_WDS_CDMA_CAUSE_CODE_DESTINATION_RESOURCE_SHORTAGE:
 *
 * Destination resource shortage.
 *
 * Since: 1.0
 * Deprecated: 1.18.0: Use the correct #QMI_WMS_CDMA_CAUSE_CODE_DESTINATION_RESOURCE_SHORTAGE name instead.
 */
G_DEPRECATED_FOR (QMI_WMS_CDMA_CAUSE_CODE_DESTINATION_RESOURCE_SHORTAGE)
#define QMI_WDS_CDMA_CAUSE_CODE_DESTINATION_RESOURCE_SHORTAGE QMI_WMS_CDMA_CAUSE_CODE_DESTINATION_RESOURCE_SHORTAGE

/**
 * QMI_WDS_CDMA_CAUSE_CODE_DESTINATION_SMS_DELIVERY_POSTPONED:
 *
 * SMS delivery postponed.
 *
 * Since: 1.0
 * Deprecated: 1.18.0: Use the correct #QMI_WMS_CDMA_CAUSE_CODE_DESTINATION_SMS_DELIVERY_POSTPONED name instead.
 */
G_DEPRECATED_FOR (QMI_WMS_CDMA_CAUSE_CODE_DESTINATION_SMS_DELIVERY_POSTPONED)
#define QMI_WDS_CDMA_CAUSE_CODE_DESTINATION_SMS_DELIVERY_POSTPONED QMI_WMS_CDMA_CAUSE_CODE_DESTINATION_SMS_DELIVERY_POSTPONED

/**
 * QMI_WDS_CDMA_CAUSE_CODE_DESTINATION_OUT_OF_SERVICE:
 *
 * Destination out of service.
 *
 * Since: 1.0
 * Deprecated: 1.18.0: Use the correct #QMI_WMS_CDMA_CAUSE_CODE_DESTINATION_OUT_OF_SERVICE name instead.
 */
G_DEPRECATED_FOR (QMI_WMS_CDMA_CAUSE_CODE_DESTINATION_OUT_OF_SERVICE)
#define QMI_WDS_CDMA_CAUSE_CODE_DESTINATION_OUT_OF_SERVICE QMI_WMS_CDMA_CAUSE_CODE_DESTINATION_OUT_OF_SERVICE

/**
 * QMI_WDS_CDMA_CAUSE_CODE_DESTINATION_NOT_AT_ADDRESS:
 *
 * Destination not at address.
 *
 * Since: 1.0
 * Deprecated: 1.18.0: Use the correct #QMI_WMS_CDMA_CAUSE_CODE_DESTINATION_NOT_AT_ADDRESS name instead.
 */
G_DEPRECATED_FOR (QMI_WMS_CDMA_CAUSE_CODE_DESTINATION_NOT_AT_ADDRESS)
#define QMI_WDS_CDMA_CAUSE_CODE_DESTINATION_NOT_AT_ADDRESS QMI_WMS_CDMA_CAUSE_CODE_DESTINATION_NOT_AT_ADDRESS

/**
 * QMI_WDS_CDMA_CAUSE_CODE_DESTINATION_OTHER:
 *
 * Other destination error.
 *
 * Since: 1.0
 * Deprecated: 1.18.0: Use the correct #QMI_WMS_CDMA_CAUSE_CODE_DESTINATION_OTHER name instead.
 */
G_DEPRECATED_FOR (QMI_WMS_CDMA_CAUSE_CODE_DESTINATION_OTHER)
#define QMI_WDS_CDMA_CAUSE_CODE_DESTINATION_OTHER QMI_WMS_CDMA_CAUSE_CODE_DESTINATION_OTHER

/**
 * QMI_WDS_CDMA_CAUSE_CODE_RADIO_INTERFACE_RESOURCE_SHORTAGE:
 *
 * Radio interface resource shortage.
 *
 * Since: 1.0
 * Deprecated: 1.18.0: Use the correct #QMI_WMS_CDMA_CAUSE_CODE_RADIO_INTERFACE_RESOURCE_SHORTAGE name instead.
 */
G_DEPRECATED_FOR (QMI_WMS_CDMA_CAUSE_CODE_RADIO_INTERFACE_RESOURCE_SHORTAGE)
#define QMI_WDS_CDMA_CAUSE_CODE_RADIO_INTERFACE_RESOURCE_SHORTAGE QMI_WMS_CDMA_CAUSE_CODE_RADIO_INTERFACE_RESOURCE_SHORTAGE

/**
 * QMI_WDS_CDMA_CAUSE_CODE_RADIO_INTERFACE_INCOMPATIBILITY:
 *
 * Radio interface incompatibility.
 *
 * Since: 1.0
 * Deprecated: 1.18.0: Use the correct #QMI_WMS_CDMA_CAUSE_CODE_RADIO_INTERFACE_INCOMPATIBILITY name instead.
 */
G_DEPRECATED_FOR (QMI_WMS_CDMA_CAUSE_CODE_RADIO_INTERFACE_INCOMPATIBILITY)
#define QMI_WDS_CDMA_CAUSE_CODE_RADIO_INTERFACE_INCOMPATIBILITY QMI_WMS_CDMA_CAUSE_CODE_RADIO_INTERFACE_INCOMPATIBILITY

/**
 * QMI_WDS_CDMA_CAUSE_CODE_RADIO_INTERFACE_OTHER:
 *
 * Other radio interface error
 *
 * Since: 1.0
 * Deprecated: 1.18.0: Use the correct #QMI_WMS_CDMA_CAUSE_CODE_RADIO_INTERFACE_OTHER name instead.
 */
G_DEPRECATED_FOR (QMI_WMS_CDMA_CAUSE_CODE_RADIO_INTERFACE_OTHER)
#define QMI_WDS_CDMA_CAUSE_CODE_RADIO_INTERFACE_OTHER QMI_WMS_CDMA_CAUSE_CODE_RADIO_INTERFACE_OTHER

/**
 * QMI_WDS_CDMA_CAUSE_CODE_GENERAL_ENCODING:
 *
 * Encoding error.
 *
 * Since: 1.0
 * Deprecated: 1.18.0: Use the correct #QMI_WMS_CDMA_CAUSE_CODE_GENERAL_ENCODING name instead.
 */
G_DEPRECATED_FOR (QMI_WMS_CDMA_CAUSE_CODE_GENERAL_ENCODING)
#define QMI_WDS_CDMA_CAUSE_CODE_GENERAL_ENCODING QMI_WMS_CDMA_CAUSE_CODE_GENERAL_ENCODING

/**
 * QMI_WDS_CDMA_CAUSE_CODE_GENERAL_SMS_ORIGIN_DENIED:
 *
 * SMS origin denied.
 *
 * Since: 1.0
 * Deprecated: 1.18.0: Use the correct #QMI_WMS_CDMA_CAUSE_CODE_GENERAL_SMS_ORIGIN_DENIED name instead.
 */
G_DEPRECATED_FOR (QMI_WMS_CDMA_CAUSE_CODE_GENERAL_SMS_ORIGIN_DENIED)
#define QMI_WDS_CDMA_CAUSE_CODE_GENERAL_SMS_ORIGIN_DENIED QMI_WMS_CDMA_CAUSE_CODE_GENERAL_SMS_ORIGIN_DENIED

/**
 * QMI_WDS_CDMA_CAUSE_CODE_GENERAL_SMS_DESTINATION_DENIED:
 *
 * SMS destination denied.
 *
 * Since: 1.0
 * Deprecated: 1.18.0: Use the correct #QMI_WMS_CDMA_CAUSE_CODE_GENERAL_SMS_DESTINATION_DENIED name instead.
 */
G_DEPRECATED_FOR (QMI_WMS_CDMA_CAUSE_CODE_GENERAL_SMS_DESTINATION_DENIED)
#define QMI_WDS_CDMA_CAUSE_CODE_GENERAL_SMS_DESTINATION_DENIED QMI_WMS_CDMA_CAUSE_CODE_GENERAL_SMS_DESTINATION_DENIED

/**
 * QMI_WDS_CDMA_CAUSE_CODE_GENERAL_SUPPLEMENTARY_SERVICE_NOT_SUPPORTED:
 *
 * Supplementary service not supported.
 *
 * Since: 1.0
 * Deprecated: 1.18.0: Use the correct #QMI_WMS_CDMA_CAUSE_CODE_GENERAL_SUPPLEMENTARY_SERVICE_NOT_SUPPORTED name instead.
 */
G_DEPRECATED_FOR (QMI_WMS_CDMA_CAUSE_CODE_GENERAL_SUPPLEMENTARY_SERVICE_NOT_SUPPORTED)
#define QMI_WDS_CDMA_CAUSE_CODE_GENERAL_SUPPLEMENTARY_SERVICE_NOT_SUPPORTED QMI_WMS_CDMA_CAUSE_CODE_GENERAL_SUPPLEMENTARY_SERVICE_NOT_SUPPORTED

/**
 * QMI_WDS_CDMA_CAUSE_CODE_GENERAL_SMS_NOT_SUPPORTED:
 *
 * SMS not supported.
 *
 * Since: 1.0
 * Deprecated: 1.18.0: Use the correct #QMI_WMS_CDMA_CAUSE_CODE_GENERAL_SMS_NOT_SUPPORTED name instead.
 */
G_DEPRECATED_FOR (QMI_WMS_CDMA_CAUSE_CODE_GENERAL_SMS_SMS_NOT_SUPPORTED)
#define QMI_WDS_CDMA_CAUSE_CODE_GENERAL_SMS_NOT_SUPPORTED QMI_WMS_CDMA_CAUSE_CODE_GENERAL_SMS_NOT_SUPPORTED

/**
 * QMI_WDS_CDMA_CAUSE_CODE_GENERAL_MISSING_EXPECTED_PARAMETER:
 *
 * Missing optional expected parameter.
 *
 * Since: 1.0
 * Deprecated: 1.18.0: Use the correct #QMI_WMS_CDMA_CAUSE_CODE_GENERAL_MISSING_EXPECTED_PARAMETER name instead.
 */
G_DEPRECATED_FOR (QMI_WMS_CDMA_CAUSE_CODE_GENERAL_MISSING_EXPECTED_PARAMETER)
#define QMI_WDS_CDMA_CAUSE_CODE_GENERAL_MISSING_EXPECTED_PARAMETER QMI_WMS_CDMA_CAUSE_CODE_GENERAL_MISSING_EXPECTED_PARAMETER

/**
 * QMI_WDS_CDMA_CAUSE_CODE_GENERAL_MISSING_MANDATORY_PARAMETER:
 *
 * Missing mandatory parameter.
 *
 * Since: 1.0
 * Deprecated: 1.18.0: Use the correct #QMI_WMS_CDMA_CAUSE_CODE_GENERAL_MISSING_MANDATORY_PARAMETER name instead.
 */
G_DEPRECATED_FOR (QMI_WMS_CDMA_CAUSE_CODE_GENERAL_MISSING_MANDATORY_PARAMETER)
#define QMI_WDS_CDMA_CAUSE_CODE_GENERAL_MISSING_MANDATORY_PARAMETER QMI_WMS_CDMA_CAUSE_CODE_GENERAL_MISSING_MANDATORY_PARAMETER

/**
 * QMI_WDS_CDMA_CAUSE_CODE_GENERAL_UNRECOGNIZED_PARAMETER_VALUE:
 *
 * Unrecognized parameter value.
 *
 * Since: 1.0
 * Deprecated: 1.18.0: Use the correct #QMI_WMS_CDMA_CAUSE_CODE_GENERAL_UNRECOGNIZED_PARAMETER_VALUE name instead.
 */
G_DEPRECATED_FOR (QMI_WMS_CDMA_CAUSE_CODE_GENERAL_UNRECOGNIZED_PARAMETER_VALUE)
#define QMI_WDS_CDMA_CAUSE_CODE_GENERAL_UNRECOGNIZED_PARAMETER_VALUE QMI_WMS_CDMA_CAUSE_CODE_GENERAL_UNRECOGNIZED_PARAMETER_VALUE

/**
 * QMI_WDS_CDMA_CAUSE_CODE_GENERAL_UNEXPECTED_PARAMETER_VALUE:
 *
 * Unexpected parameter value.
 *
 * Since: 1.0
 * Deprecated: 1.18.0: Use the correct #QMI_WMS_CDMA_CAUSE_CODE_GENERAL_UNEXPECTED_PARAMETER_VALUE name instead.
 */
G_DEPRECATED_FOR (QMI_WMS_CDMA_CAUSE_CODE_GENERAL_UNEXPECTED_PARAMETER_VALUE)
#define QMI_WDS_CDMA_CAUSE_CODE_GENERAL_UNEXPECTED_PARAMETER_VALUE QMI_WMS_CDMA_CAUSE_CODE_GENERAL_UNEXPECTED_PARAMETER_VALUE

/**
 * QMI_WDS_CDMA_CAUSE_CODE_GENERAL_USER_DATA_SIZE_ERROR:
 *
 * User data size error.
 *
 * Since: 1.0
 * Deprecated: 1.18.0: Use the correct #QMI_WMS_CDMA_CAUSE_CODE_GENERAL_USER_DATA_SIZE_ERROR name instead.
 */
G_DEPRECATED_FOR (QMI_WMS_CDMA_CAUSE_CODE_GENERAL_USER_DATA_SIZE_ERROR)
#define QMI_WDS_CDMA_CAUSE_CODE_GENERAL_USER_DATA_SIZE_ERROR QMI_WMS_CDMA_CAUSE_CODE_GENERAL_USER_DATA_SIZE_ERROR

/**
 * QMI_WDS_CDMA_CAUSE_CODE_GENERAL_OTHER:
 *
 * Other general error.
 *
 * Since: 1.0
 * Deprecated: 1.18.0: Use the correct #QMI_WMS_CDMA_CAUSE_CODE_GENERAL_OTHER name instead.
 */
G_DEPRECATED_FOR (QMI_WMS_CDMA_CAUSE_CODE_GENERAL_OTHER)
#define QMI_WDS_CDMA_CAUSE_CODE_GENERAL_OTHER QMI_WMS_CDMA_CAUSE_CODE_GENERAL_OTHER

#endif /* _LIBQMI_GLIB_QMI_COMPAT_H_ */
