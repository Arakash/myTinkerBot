/* ***********************************************************
 * This file was automatically generated on 2019-08-23.      *
 *                                                           *
 * C/C++ Bindings Version 2.1.26                             *
 *                                                           *
 * If you have a bugfix for this file and want to commit it, *
 * please fix the bug in the generator. You can find a link  *
 * to the generators git repository on tinkerforge.com       *
 *************************************************************/

#ifndef BRICK_HAT_ZERO_H
#define BRICK_HAT_ZERO_H

#include "ip_connection.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * \defgroup BrickHATZero HAT Zero Brick
 */

/**
 * \ingroup BrickHATZero
 *
 * HAT for Raspberry Pi Zero with 4 Bricklets ports
 */
typedef Device HATZero;

/**
 * \ingroup BrickHATZero
 */
#define HAT_ZERO_FUNCTION_GET_USB_VOLTAGE 1

/**
 * \ingroup BrickHATZero
 */
#define HAT_ZERO_FUNCTION_GET_SPITFP_ERROR_COUNT 234

/**
 * \ingroup BrickHATZero
 */
#define HAT_ZERO_FUNCTION_SET_BOOTLOADER_MODE 235

/**
 * \ingroup BrickHATZero
 */
#define HAT_ZERO_FUNCTION_GET_BOOTLOADER_MODE 236

/**
 * \ingroup BrickHATZero
 */
#define HAT_ZERO_FUNCTION_SET_WRITE_FIRMWARE_POINTER 237

/**
 * \ingroup BrickHATZero
 */
#define HAT_ZERO_FUNCTION_WRITE_FIRMWARE 238

/**
 * \ingroup BrickHATZero
 */
#define HAT_ZERO_FUNCTION_SET_STATUS_LED_CONFIG 239

/**
 * \ingroup BrickHATZero
 */
#define HAT_ZERO_FUNCTION_GET_STATUS_LED_CONFIG 240

/**
 * \ingroup BrickHATZero
 */
#define HAT_ZERO_FUNCTION_GET_CHIP_TEMPERATURE 242

/**
 * \ingroup BrickHATZero
 */
#define HAT_ZERO_FUNCTION_RESET 243

/**
 * \ingroup BrickHATZero
 */
#define HAT_ZERO_FUNCTION_WRITE_UID 248

/**
 * \ingroup BrickHATZero
 */
#define HAT_ZERO_FUNCTION_READ_UID 249

/**
 * \ingroup BrickHATZero
 */
#define HAT_ZERO_FUNCTION_GET_IDENTITY 255


/**
 * \ingroup BrickHATZero
 */
#define HAT_ZERO_BOOTLOADER_MODE_BOOTLOADER 0

/**
 * \ingroup BrickHATZero
 */
#define HAT_ZERO_BOOTLOADER_MODE_FIRMWARE 1

/**
 * \ingroup BrickHATZero
 */
#define HAT_ZERO_BOOTLOADER_MODE_BOOTLOADER_WAIT_FOR_REBOOT 2

/**
 * \ingroup BrickHATZero
 */
#define HAT_ZERO_BOOTLOADER_MODE_FIRMWARE_WAIT_FOR_REBOOT 3

/**
 * \ingroup BrickHATZero
 */
#define HAT_ZERO_BOOTLOADER_MODE_FIRMWARE_WAIT_FOR_ERASE_AND_REBOOT 4

/**
 * \ingroup BrickHATZero
 */
#define HAT_ZERO_BOOTLOADER_STATUS_OK 0

/**
 * \ingroup BrickHATZero
 */
#define HAT_ZERO_BOOTLOADER_STATUS_INVALID_MODE 1

/**
 * \ingroup BrickHATZero
 */
#define HAT_ZERO_BOOTLOADER_STATUS_NO_CHANGE 2

/**
 * \ingroup BrickHATZero
 */
#define HAT_ZERO_BOOTLOADER_STATUS_ENTRY_FUNCTION_NOT_PRESENT 3

/**
 * \ingroup BrickHATZero
 */
#define HAT_ZERO_BOOTLOADER_STATUS_DEVICE_IDENTIFIER_INCORRECT 4

/**
 * \ingroup BrickHATZero
 */
#define HAT_ZERO_BOOTLOADER_STATUS_CRC_MISMATCH 5

/**
 * \ingroup BrickHATZero
 */
#define HAT_ZERO_STATUS_LED_CONFIG_OFF 0

/**
 * \ingroup BrickHATZero
 */
#define HAT_ZERO_STATUS_LED_CONFIG_ON 1

/**
 * \ingroup BrickHATZero
 */
#define HAT_ZERO_STATUS_LED_CONFIG_SHOW_HEARTBEAT 2

/**
 * \ingroup BrickHATZero
 */
#define HAT_ZERO_STATUS_LED_CONFIG_SHOW_STATUS 3

/**
 * \ingroup BrickHATZero
 *
 * This constant is used to identify a HAT Zero Brick.
 *
 * The {@link hat_zero_get_identity} function and the
 * {@link IPCON_CALLBACK_ENUMERATE} callback of the IP Connection have a
 * \c device_identifier parameter to specify the Brick's or Bricklet's type.
 */
#define HAT_ZERO_DEVICE_IDENTIFIER 112

/**
 * \ingroup BrickHATZero
 *
 * This constant represents the display name of a HAT Zero Brick.
 */
#define HAT_ZERO_DEVICE_DISPLAY_NAME "HAT Zero Brick"

/**
 * \ingroup BrickHATZero
 *
 * Creates the device object \c hat_zero with the unique device ID \c uid and adds
 * it to the IPConnection \c ipcon.
 */
void hat_zero_create(HATZero *hat_zero, const char *uid, IPConnection *ipcon);

/**
 * \ingroup BrickHATZero
 *
 * Removes the device object \c hat_zero from its IPConnection and destroys it.
 * The device object cannot be used anymore afterwards.
 */
void hat_zero_destroy(HATZero *hat_zero);

/**
 * \ingroup BrickHATZero
 *
 * Returns the response expected flag for the function specified by the
 * \c function_id parameter. It is *true* if the function is expected to
 * send a response, *false* otherwise.
 *
 * For getter functions this is enabled by default and cannot be disabled,
 * because those functions will always send a response. For callback
 * configuration functions it is enabled by default too, but can be disabled
 * via the hat_zero_set_response_expected function. For setter functions it is
 * disabled by default and can be enabled.
 *
 * Enabling the response expected flag for a setter function allows to
 * detect timeouts and other error conditions calls of this setter as well.
 * The device will then send a response for this purpose. If this flag is
 * disabled for a setter function then no response is send and errors are
 * silently ignored, because they cannot be detected.
 */
int hat_zero_get_response_expected(HATZero *hat_zero, uint8_t function_id, bool *ret_response_expected);

/**
 * \ingroup BrickHATZero
 *
 * Changes the response expected flag of the function specified by the
 * \c function_id parameter. This flag can only be changed for setter
 * (default value: *false*) and callback configuration functions
 * (default value: *true*). For getter functions it is always enabled.
 *
 * Enabling the response expected flag for a setter function allows to detect
 * timeouts and other error conditions calls of this setter as well. The device
 * will then send a response for this purpose. If this flag is disabled for a
 * setter function then no response is send and errors are silently ignored,
 * because they cannot be detected.
 */
int hat_zero_set_response_expected(HATZero *hat_zero, uint8_t function_id, bool response_expected);

/**
 * \ingroup BrickHATZero
 *
 * Changes the response expected flag for all setter and callback configuration
 * functions of this device at once.
 */
int hat_zero_set_response_expected_all(HATZero *hat_zero, bool response_expected);


/**
 * \ingroup BrickHATZero
 *
 * Returns the API version (major, minor, release) of the bindings for this
 * device.
 */
int hat_zero_get_api_version(HATZero *hat_zero, uint8_t ret_api_version[3]);

/**
 * \ingroup BrickHATZero
 *
 * Returns the USB supply voltage of the Raspberry Pi in mV.
 */
int hat_zero_get_usb_voltage(HATZero *hat_zero, uint16_t *ret_voltage);

/**
 * \ingroup BrickHATZero
 *
 * Returns the error count for the communication between Brick and Bricklet.
 * 
 * The errors are divided into
 * 
 * * ACK checksum errors,
 * * message checksum errors,
 * * framing errors and
 * * overflow errors.
 * 
 * The errors counts are for errors that occur on the Bricklet side. All
 * Bricks have a similar function that returns the errors on the Brick side.
 */
int hat_zero_get_spitfp_error_count(HATZero *hat_zero, uint32_t *ret_error_count_ack_checksum, uint32_t *ret_error_count_message_checksum, uint32_t *ret_error_count_frame, uint32_t *ret_error_count_overflow);

/**
 * \ingroup BrickHATZero
 *
 * Sets the bootloader mode and returns the status after the requested
 * mode change was instigated.
 * 
 * You can change from bootloader mode to firmware mode and vice versa. A change
 * from bootloader mode to firmware mode will only take place if the entry function,
 * device identifier and CRC are present and correct.
 * 
 * This function is used by Brick Viewer during flashing. It should not be
 * necessary to call it in a normal user program.
 */
int hat_zero_set_bootloader_mode(HATZero *hat_zero, uint8_t mode, uint8_t *ret_status);

/**
 * \ingroup BrickHATZero
 *
 * Returns the current bootloader mode, see {@link hat_zero_set_bootloader_mode}.
 */
int hat_zero_get_bootloader_mode(HATZero *hat_zero, uint8_t *ret_mode);

/**
 * \ingroup BrickHATZero
 *
 * Sets the firmware pointer for {@link hat_zero_write_firmware}. The pointer has
 * to be increased by chunks of size 64. The data is written to flash
 * every 4 chunks (which equals to one page of size 256).
 * 
 * This function is used by Brick Viewer during flashing. It should not be
 * necessary to call it in a normal user program.
 */
int hat_zero_set_write_firmware_pointer(HATZero *hat_zero, uint32_t pointer);

/**
 * \ingroup BrickHATZero
 *
 * Writes 64 Bytes of firmware at the position as written by
 * {@link hat_zero_set_write_firmware_pointer} before. The firmware is written
 * to flash every 4 chunks.
 * 
 * You can only write firmware in bootloader mode.
 * 
 * This function is used by Brick Viewer during flashing. It should not be
 * necessary to call it in a normal user program.
 */
int hat_zero_write_firmware(HATZero *hat_zero, uint8_t data[64], uint8_t *ret_status);

/**
 * \ingroup BrickHATZero
 *
 * Sets the status LED configuration. By default the LED shows
 * communication traffic between Brick and Bricklet, it flickers once
 * for every 10 received data packets.
 * 
 * You can also turn the LED permanently on/off or show a heartbeat.
 * 
 * If the Bricklet is in bootloader mode, the LED is will show heartbeat by default.
 */
int hat_zero_set_status_led_config(HATZero *hat_zero, uint8_t config);

/**
 * \ingroup BrickHATZero
 *
 * Returns the configuration as set by {@link hat_zero_set_status_led_config}
 */
int hat_zero_get_status_led_config(HATZero *hat_zero, uint8_t *ret_config);

/**
 * \ingroup BrickHATZero
 *
 * Returns the temperature in °C as measured inside the microcontroller. The
 * value returned is not the ambient temperature!
 * 
 * The temperature is only proportional to the real temperature and it has bad
 * accuracy. Practically it is only useful as an indicator for
 * temperature changes.
 */
int hat_zero_get_chip_temperature(HATZero *hat_zero, int16_t *ret_temperature);

/**
 * \ingroup BrickHATZero
 *
 * Calling this function will reset the Bricklet. All configurations
 * will be lost.
 * 
 * After a reset you have to create new device objects,
 * calling functions on the existing ones will result in
 * undefined behavior!
 */
int hat_zero_reset(HATZero *hat_zero);

/**
 * \ingroup BrickHATZero
 *
 * Writes a new UID into flash. If you want to set a new UID
 * you have to decode the Base58 encoded UID string into an
 * integer first.
 * 
 * We recommend that you use Brick Viewer to change the UID.
 */
int hat_zero_write_uid(HATZero *hat_zero, uint32_t uid);

/**
 * \ingroup BrickHATZero
 *
 * Returns the current UID as an integer. Encode as
 * Base58 to get the usual string version.
 */
int hat_zero_read_uid(HATZero *hat_zero, uint32_t *ret_uid);

/**
 * \ingroup BrickHATZero
 *
 * Returns the UID, the UID where the Bricklet is connected to,
 * the position, the hardware and firmware version as well as the
 * device identifier.
 * 
 * The position can be 'a', 'b', 'c' or 'd'.
 * 
 * The device identifier numbers can be found :ref:`here <device_identifier>`.
 * |device_identifier_constant|
 */
int hat_zero_get_identity(HATZero *hat_zero, char ret_uid[8], char ret_connected_uid[8], char *ret_position, uint8_t ret_hardware_version[3], uint8_t ret_firmware_version[3], uint16_t *ret_device_identifier);

#ifdef __cplusplus
}
#endif

#endif
