/* ***********************************************************
 * This file was automatically generated on 2019-08-23.      *
 *                                                           *
 * C/C++ Bindings Version 2.1.26                             *
 *                                                           *
 * If you have a bugfix for this file and want to commit it, *
 * please fix the bug in the generator. You can find a link  *
 * to the generators git repository on tinkerforge.com       *
 *************************************************************/

#ifndef BRICKLET_MOTORIZED_LINEAR_POTI_H
#define BRICKLET_MOTORIZED_LINEAR_POTI_H

#include "ip_connection.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * \defgroup BrickletMotorizedLinearPoti Motorized Linear Poti Bricklet
 */

/**
 * \ingroup BrickletMotorizedLinearPoti
 *
 * Motorized Linear Potentiometer
 */
typedef Device MotorizedLinearPoti;

/**
 * \ingroup BrickletMotorizedLinearPoti
 */
#define MOTORIZED_LINEAR_POTI_FUNCTION_GET_POSITION 1

/**
 * \ingroup BrickletMotorizedLinearPoti
 */
#define MOTORIZED_LINEAR_POTI_FUNCTION_SET_POSITION_CALLBACK_CONFIGURATION 2

/**
 * \ingroup BrickletMotorizedLinearPoti
 */
#define MOTORIZED_LINEAR_POTI_FUNCTION_GET_POSITION_CALLBACK_CONFIGURATION 3

/**
 * \ingroup BrickletMotorizedLinearPoti
 */
#define MOTORIZED_LINEAR_POTI_FUNCTION_SET_MOTOR_POSITION 5

/**
 * \ingroup BrickletMotorizedLinearPoti
 */
#define MOTORIZED_LINEAR_POTI_FUNCTION_GET_MOTOR_POSITION 6

/**
 * \ingroup BrickletMotorizedLinearPoti
 */
#define MOTORIZED_LINEAR_POTI_FUNCTION_CALIBRATE 7

/**
 * \ingroup BrickletMotorizedLinearPoti
 */
#define MOTORIZED_LINEAR_POTI_FUNCTION_SET_POSITION_REACHED_CALLBACK_CONFIGURATION 8

/**
 * \ingroup BrickletMotorizedLinearPoti
 */
#define MOTORIZED_LINEAR_POTI_FUNCTION_GET_POSITION_REACHED_CALLBACK_CONFIGURATION 9

/**
 * \ingroup BrickletMotorizedLinearPoti
 */
#define MOTORIZED_LINEAR_POTI_FUNCTION_GET_SPITFP_ERROR_COUNT 234

/**
 * \ingroup BrickletMotorizedLinearPoti
 */
#define MOTORIZED_LINEAR_POTI_FUNCTION_SET_BOOTLOADER_MODE 235

/**
 * \ingroup BrickletMotorizedLinearPoti
 */
#define MOTORIZED_LINEAR_POTI_FUNCTION_GET_BOOTLOADER_MODE 236

/**
 * \ingroup BrickletMotorizedLinearPoti
 */
#define MOTORIZED_LINEAR_POTI_FUNCTION_SET_WRITE_FIRMWARE_POINTER 237

/**
 * \ingroup BrickletMotorizedLinearPoti
 */
#define MOTORIZED_LINEAR_POTI_FUNCTION_WRITE_FIRMWARE 238

/**
 * \ingroup BrickletMotorizedLinearPoti
 */
#define MOTORIZED_LINEAR_POTI_FUNCTION_SET_STATUS_LED_CONFIG 239

/**
 * \ingroup BrickletMotorizedLinearPoti
 */
#define MOTORIZED_LINEAR_POTI_FUNCTION_GET_STATUS_LED_CONFIG 240

/**
 * \ingroup BrickletMotorizedLinearPoti
 */
#define MOTORIZED_LINEAR_POTI_FUNCTION_GET_CHIP_TEMPERATURE 242

/**
 * \ingroup BrickletMotorizedLinearPoti
 */
#define MOTORIZED_LINEAR_POTI_FUNCTION_RESET 243

/**
 * \ingroup BrickletMotorizedLinearPoti
 */
#define MOTORIZED_LINEAR_POTI_FUNCTION_WRITE_UID 248

/**
 * \ingroup BrickletMotorizedLinearPoti
 */
#define MOTORIZED_LINEAR_POTI_FUNCTION_READ_UID 249

/**
 * \ingroup BrickletMotorizedLinearPoti
 */
#define MOTORIZED_LINEAR_POTI_FUNCTION_GET_IDENTITY 255

/**
 * \ingroup BrickletMotorizedLinearPoti
 *
 * Signature: \code void callback(uint16_t position, void *user_data) \endcode
 * 
 * This callback is triggered periodically according to the configuration set by
 * {@link motorized_linear_poti_set_position_callback_configuration}.
 * 
 * The parameter is the same as {@link motorized_linear_poti_get_position}.
 */
#define MOTORIZED_LINEAR_POTI_CALLBACK_POSITION 4

/**
 * \ingroup BrickletMotorizedLinearPoti
 *
 * Signature: \code void callback(uint16_t position, void *user_data) \endcode
 * 
 * This callback is triggered if a new position as set by
 * {@link motorized_linear_poti_set_motor_position} is reached.
 * 
 * The parameter is the current position.
 */
#define MOTORIZED_LINEAR_POTI_CALLBACK_POSITION_REACHED 10


/**
 * \ingroup BrickletMotorizedLinearPoti
 */
#define MOTORIZED_LINEAR_POTI_THRESHOLD_OPTION_OFF 'x'

/**
 * \ingroup BrickletMotorizedLinearPoti
 */
#define MOTORIZED_LINEAR_POTI_THRESHOLD_OPTION_OUTSIDE 'o'

/**
 * \ingroup BrickletMotorizedLinearPoti
 */
#define MOTORIZED_LINEAR_POTI_THRESHOLD_OPTION_INSIDE 'i'

/**
 * \ingroup BrickletMotorizedLinearPoti
 */
#define MOTORIZED_LINEAR_POTI_THRESHOLD_OPTION_SMALLER '<'

/**
 * \ingroup BrickletMotorizedLinearPoti
 */
#define MOTORIZED_LINEAR_POTI_THRESHOLD_OPTION_GREATER '>'

/**
 * \ingroup BrickletMotorizedLinearPoti
 */
#define MOTORIZED_LINEAR_POTI_DRIVE_MODE_FAST 0

/**
 * \ingroup BrickletMotorizedLinearPoti
 */
#define MOTORIZED_LINEAR_POTI_DRIVE_MODE_SMOOTH 1

/**
 * \ingroup BrickletMotorizedLinearPoti
 */
#define MOTORIZED_LINEAR_POTI_BOOTLOADER_MODE_BOOTLOADER 0

/**
 * \ingroup BrickletMotorizedLinearPoti
 */
#define MOTORIZED_LINEAR_POTI_BOOTLOADER_MODE_FIRMWARE 1

/**
 * \ingroup BrickletMotorizedLinearPoti
 */
#define MOTORIZED_LINEAR_POTI_BOOTLOADER_MODE_BOOTLOADER_WAIT_FOR_REBOOT 2

/**
 * \ingroup BrickletMotorizedLinearPoti
 */
#define MOTORIZED_LINEAR_POTI_BOOTLOADER_MODE_FIRMWARE_WAIT_FOR_REBOOT 3

/**
 * \ingroup BrickletMotorizedLinearPoti
 */
#define MOTORIZED_LINEAR_POTI_BOOTLOADER_MODE_FIRMWARE_WAIT_FOR_ERASE_AND_REBOOT 4

/**
 * \ingroup BrickletMotorizedLinearPoti
 */
#define MOTORIZED_LINEAR_POTI_BOOTLOADER_STATUS_OK 0

/**
 * \ingroup BrickletMotorizedLinearPoti
 */
#define MOTORIZED_LINEAR_POTI_BOOTLOADER_STATUS_INVALID_MODE 1

/**
 * \ingroup BrickletMotorizedLinearPoti
 */
#define MOTORIZED_LINEAR_POTI_BOOTLOADER_STATUS_NO_CHANGE 2

/**
 * \ingroup BrickletMotorizedLinearPoti
 */
#define MOTORIZED_LINEAR_POTI_BOOTLOADER_STATUS_ENTRY_FUNCTION_NOT_PRESENT 3

/**
 * \ingroup BrickletMotorizedLinearPoti
 */
#define MOTORIZED_LINEAR_POTI_BOOTLOADER_STATUS_DEVICE_IDENTIFIER_INCORRECT 4

/**
 * \ingroup BrickletMotorizedLinearPoti
 */
#define MOTORIZED_LINEAR_POTI_BOOTLOADER_STATUS_CRC_MISMATCH 5

/**
 * \ingroup BrickletMotorizedLinearPoti
 */
#define MOTORIZED_LINEAR_POTI_STATUS_LED_CONFIG_OFF 0

/**
 * \ingroup BrickletMotorizedLinearPoti
 */
#define MOTORIZED_LINEAR_POTI_STATUS_LED_CONFIG_ON 1

/**
 * \ingroup BrickletMotorizedLinearPoti
 */
#define MOTORIZED_LINEAR_POTI_STATUS_LED_CONFIG_SHOW_HEARTBEAT 2

/**
 * \ingroup BrickletMotorizedLinearPoti
 */
#define MOTORIZED_LINEAR_POTI_STATUS_LED_CONFIG_SHOW_STATUS 3

/**
 * \ingroup BrickletMotorizedLinearPoti
 *
 * This constant is used to identify a Motorized Linear Poti Bricklet.
 *
 * The {@link motorized_linear_poti_get_identity} function and the
 * {@link IPCON_CALLBACK_ENUMERATE} callback of the IP Connection have a
 * \c device_identifier parameter to specify the Brick's or Bricklet's type.
 */
#define MOTORIZED_LINEAR_POTI_DEVICE_IDENTIFIER 267

/**
 * \ingroup BrickletMotorizedLinearPoti
 *
 * This constant represents the display name of a Motorized Linear Poti Bricklet.
 */
#define MOTORIZED_LINEAR_POTI_DEVICE_DISPLAY_NAME "Motorized Linear Poti Bricklet"

/**
 * \ingroup BrickletMotorizedLinearPoti
 *
 * Creates the device object \c motorized_linear_poti with the unique device ID \c uid and adds
 * it to the IPConnection \c ipcon.
 */
void motorized_linear_poti_create(MotorizedLinearPoti *motorized_linear_poti, const char *uid, IPConnection *ipcon);

/**
 * \ingroup BrickletMotorizedLinearPoti
 *
 * Removes the device object \c motorized_linear_poti from its IPConnection and destroys it.
 * The device object cannot be used anymore afterwards.
 */
void motorized_linear_poti_destroy(MotorizedLinearPoti *motorized_linear_poti);

/**
 * \ingroup BrickletMotorizedLinearPoti
 *
 * Returns the response expected flag for the function specified by the
 * \c function_id parameter. It is *true* if the function is expected to
 * send a response, *false* otherwise.
 *
 * For getter functions this is enabled by default and cannot be disabled,
 * because those functions will always send a response. For callback
 * configuration functions it is enabled by default too, but can be disabled
 * via the motorized_linear_poti_set_response_expected function. For setter functions it is
 * disabled by default and can be enabled.
 *
 * Enabling the response expected flag for a setter function allows to
 * detect timeouts and other error conditions calls of this setter as well.
 * The device will then send a response for this purpose. If this flag is
 * disabled for a setter function then no response is send and errors are
 * silently ignored, because they cannot be detected.
 */
int motorized_linear_poti_get_response_expected(MotorizedLinearPoti *motorized_linear_poti, uint8_t function_id, bool *ret_response_expected);

/**
 * \ingroup BrickletMotorizedLinearPoti
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
int motorized_linear_poti_set_response_expected(MotorizedLinearPoti *motorized_linear_poti, uint8_t function_id, bool response_expected);

/**
 * \ingroup BrickletMotorizedLinearPoti
 *
 * Changes the response expected flag for all setter and callback configuration
 * functions of this device at once.
 */
int motorized_linear_poti_set_response_expected_all(MotorizedLinearPoti *motorized_linear_poti, bool response_expected);

/**
 * \ingroup BrickletMotorizedLinearPoti
 *
 * Registers the given \c function with the given \c callback_id. The
 * \c user_data will be passed as the last parameter to the \c function.
 */
void motorized_linear_poti_register_callback(MotorizedLinearPoti *motorized_linear_poti, int16_t callback_id, void (*function)(void), void *user_data);

/**
 * \ingroup BrickletMotorizedLinearPoti
 *
 * Returns the API version (major, minor, release) of the bindings for this
 * device.
 */
int motorized_linear_poti_get_api_version(MotorizedLinearPoti *motorized_linear_poti, uint8_t ret_api_version[3]);

/**
 * \ingroup BrickletMotorizedLinearPoti
 *
 * Returns the position of the linear potentiometer. The value is
 * between 0 (slider down) and 100 (slider up).
 * 
 * 
 * If you want to get the value periodically, it is recommended to use the
 * {@link MOTORIZED_LINEAR_POTI_CALLBACK_POSITION} callback. You can set the callback configuration
 * with {@link motorized_linear_poti_set_position_callback_configuration}.
 */
int motorized_linear_poti_get_position(MotorizedLinearPoti *motorized_linear_poti, uint16_t *ret_position);

/**
 * \ingroup BrickletMotorizedLinearPoti
 *
 * The period in ms is the period with which the {@link MOTORIZED_LINEAR_POTI_CALLBACK_POSITION} callback is triggered
 * periodically. A value of 0 turns the callback off.
 * 
 * If the `value has to change`-parameter is set to true, the callback is only
 * triggered after the value has changed. If the value didn't change
 * within the period, the callback is triggered immediately on change.
 * 
 * If it is set to false, the callback is continuously triggered with the period,
 * independent of the value.
 * 
 * It is furthermore possible to constrain the callback with thresholds.
 * 
 * The `option`-parameter together with min/max sets a threshold for the {@link MOTORIZED_LINEAR_POTI_CALLBACK_POSITION} callback.
 * 
 * The following options are possible:
 * 
 * \verbatim
 *  "Option", "Description"
 * 
 *  "'x'",    "Threshold is turned off"
 *  "'o'",    "Threshold is triggered when the value is *outside* the min and max values"
 *  "'i'",    "Threshold is triggered when the value is *inside* or equal to the min and max values"
 *  "'<'",    "Threshold is triggered when the value is smaller than the min value (max is ignored)"
 *  "'>'",    "Threshold is triggered when the value is greater than the min value (max is ignored)"
 * \endverbatim
 * 
 * If the option is set to 'x' (threshold turned off) the callback is triggered with the fixed period.
 * 
 * The default value is (0, false, 'x', 0, 0).
 */
int motorized_linear_poti_set_position_callback_configuration(MotorizedLinearPoti *motorized_linear_poti, uint32_t period, bool value_has_to_change, char option, uint16_t min, uint16_t max);

/**
 * \ingroup BrickletMotorizedLinearPoti
 *
 * Returns the callback configuration as set by {@link motorized_linear_poti_set_position_callback_configuration}.
 */
int motorized_linear_poti_get_position_callback_configuration(MotorizedLinearPoti *motorized_linear_poti, uint32_t *ret_period, bool *ret_value_has_to_change, char *ret_option, uint16_t *ret_min, uint16_t *ret_max);

/**
 * \ingroup BrickletMotorizedLinearPoti
 *
 * Sets the position of the potentiometer. The motorized potentiometer will
 * immediately start to approach the position. Depending on the chosen drive mode,
 * the position will either be reached as fast as possible or in a slow but smooth
 * motion.
 * 
 * The position has to be between 0 (slider down) and 100 (slider up).
 * 
 * If you set the hold position parameter to true, the position will automatically
 * be retained. If a user changes the position of the potentiometer, it will
 * automatically drive back to the original set point.
 * 
 * If the hold position parameter is set to false, the potentiometer can be changed
 * again by the user as soon as the set point was reached once.
 */
int motorized_linear_poti_set_motor_position(MotorizedLinearPoti *motorized_linear_poti, uint16_t position, uint8_t drive_mode, bool hold_position);

/**
 * \ingroup BrickletMotorizedLinearPoti
 *
 * Returns the last motor position as set by {@link motorized_linear_poti_set_motor_position}. This is not
 * the current position (use {@link motorized_linear_poti_get_position} to get the current position). This
 * is the last used set point and configuration.
 * 
 * The position reached parameter is true if the position has been reached at one point.
 * The position may have been changed again in the meantime by the user.
 */
int motorized_linear_poti_get_motor_position(MotorizedLinearPoti *motorized_linear_poti, uint16_t *ret_position, uint8_t *ret_drive_mode, bool *ret_hold_position, bool *ret_position_reached);

/**
 * \ingroup BrickletMotorizedLinearPoti
 *
 * Starts a calibration procedure. The potentiometer will be driven to the extreme
 * points to calibrate the potentiometer.
 * 
 * The calibration is saved in flash, it does not have to be called on every start up.
 * 
 * The Motorized Linear Poti Bricklet is already factory-calibrated during
 * testing at Tinkerforge.
 */
int motorized_linear_poti_calibrate(MotorizedLinearPoti *motorized_linear_poti);

/**
 * \ingroup BrickletMotorizedLinearPoti
 *
 * Enables/Disables {@link MOTORIZED_LINEAR_POTI_CALLBACK_POSITION_REACHED} callback.
 * 
 * By default the callback is enabled.
 */
int motorized_linear_poti_set_position_reached_callback_configuration(MotorizedLinearPoti *motorized_linear_poti, bool enabled);

/**
 * \ingroup BrickletMotorizedLinearPoti
 *
 * Returns the {@link MOTORIZED_LINEAR_POTI_CALLBACK_POSITION_REACHED} callback configuration
 * as set by {@link motorized_linear_poti_set_position_reached_callback_configuration}.
 */
int motorized_linear_poti_get_position_reached_callback_configuration(MotorizedLinearPoti *motorized_linear_poti, bool *ret_enabled);

/**
 * \ingroup BrickletMotorizedLinearPoti
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
int motorized_linear_poti_get_spitfp_error_count(MotorizedLinearPoti *motorized_linear_poti, uint32_t *ret_error_count_ack_checksum, uint32_t *ret_error_count_message_checksum, uint32_t *ret_error_count_frame, uint32_t *ret_error_count_overflow);

/**
 * \ingroup BrickletMotorizedLinearPoti
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
int motorized_linear_poti_set_bootloader_mode(MotorizedLinearPoti *motorized_linear_poti, uint8_t mode, uint8_t *ret_status);

/**
 * \ingroup BrickletMotorizedLinearPoti
 *
 * Returns the current bootloader mode, see {@link motorized_linear_poti_set_bootloader_mode}.
 */
int motorized_linear_poti_get_bootloader_mode(MotorizedLinearPoti *motorized_linear_poti, uint8_t *ret_mode);

/**
 * \ingroup BrickletMotorizedLinearPoti
 *
 * Sets the firmware pointer for {@link motorized_linear_poti_write_firmware}. The pointer has
 * to be increased by chunks of size 64. The data is written to flash
 * every 4 chunks (which equals to one page of size 256).
 * 
 * This function is used by Brick Viewer during flashing. It should not be
 * necessary to call it in a normal user program.
 */
int motorized_linear_poti_set_write_firmware_pointer(MotorizedLinearPoti *motorized_linear_poti, uint32_t pointer);

/**
 * \ingroup BrickletMotorizedLinearPoti
 *
 * Writes 64 Bytes of firmware at the position as written by
 * {@link motorized_linear_poti_set_write_firmware_pointer} before. The firmware is written
 * to flash every 4 chunks.
 * 
 * You can only write firmware in bootloader mode.
 * 
 * This function is used by Brick Viewer during flashing. It should not be
 * necessary to call it in a normal user program.
 */
int motorized_linear_poti_write_firmware(MotorizedLinearPoti *motorized_linear_poti, uint8_t data[64], uint8_t *ret_status);

/**
 * \ingroup BrickletMotorizedLinearPoti
 *
 * Sets the status LED configuration. By default the LED shows
 * communication traffic between Brick and Bricklet, it flickers once
 * for every 10 received data packets.
 * 
 * You can also turn the LED permanently on/off or show a heartbeat.
 * 
 * If the Bricklet is in bootloader mode, the LED is will show heartbeat by default.
 */
int motorized_linear_poti_set_status_led_config(MotorizedLinearPoti *motorized_linear_poti, uint8_t config);

/**
 * \ingroup BrickletMotorizedLinearPoti
 *
 * Returns the configuration as set by {@link motorized_linear_poti_set_status_led_config}
 */
int motorized_linear_poti_get_status_led_config(MotorizedLinearPoti *motorized_linear_poti, uint8_t *ret_config);

/**
 * \ingroup BrickletMotorizedLinearPoti
 *
 * Returns the temperature in °C as measured inside the microcontroller. The
 * value returned is not the ambient temperature!
 * 
 * The temperature is only proportional to the real temperature and it has bad
 * accuracy. Practically it is only useful as an indicator for
 * temperature changes.
 */
int motorized_linear_poti_get_chip_temperature(MotorizedLinearPoti *motorized_linear_poti, int16_t *ret_temperature);

/**
 * \ingroup BrickletMotorizedLinearPoti
 *
 * Calling this function will reset the Bricklet. All configurations
 * will be lost.
 * 
 * After a reset you have to create new device objects,
 * calling functions on the existing ones will result in
 * undefined behavior!
 */
int motorized_linear_poti_reset(MotorizedLinearPoti *motorized_linear_poti);

/**
 * \ingroup BrickletMotorizedLinearPoti
 *
 * Writes a new UID into flash. If you want to set a new UID
 * you have to decode the Base58 encoded UID string into an
 * integer first.
 * 
 * We recommend that you use Brick Viewer to change the UID.
 */
int motorized_linear_poti_write_uid(MotorizedLinearPoti *motorized_linear_poti, uint32_t uid);

/**
 * \ingroup BrickletMotorizedLinearPoti
 *
 * Returns the current UID as an integer. Encode as
 * Base58 to get the usual string version.
 */
int motorized_linear_poti_read_uid(MotorizedLinearPoti *motorized_linear_poti, uint32_t *ret_uid);

/**
 * \ingroup BrickletMotorizedLinearPoti
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
int motorized_linear_poti_get_identity(MotorizedLinearPoti *motorized_linear_poti, char ret_uid[8], char ret_connected_uid[8], char *ret_position, uint8_t ret_hardware_version[3], uint8_t ret_firmware_version[3], uint16_t *ret_device_identifier);

#ifdef __cplusplus
}
#endif

#endif
