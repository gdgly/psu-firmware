/*
* EEZ PSU Firmware
* Copyright (C) 2017-present, Envox d.o.o.
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.

* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.

* You should have received a copy of the GNU General Public License
* along with this program.  If not, see http://www.gnu.org/licenses.
*/

#pragma once

namespace eez {
namespace psu {

enum ActionsEnum {
    ACTION_ID_NONE,
    ACTION_ID_CHANNEL_TOGGLE_OUTPUT,
    ACTION_ID_EDIT,
    ACTION_ID_EDIT_MODE_SLIDER,
    ACTION_ID_EDIT_MODE_STEP,
    ACTION_ID_EDIT_MODE_KEYPAD,
    ACTION_ID_EXIT_EDIT_MODE,
    ACTION_ID_TOGGLE_INTERACTIVE_MODE,
    ACTION_ID_NON_INTERACTIVE_ENTER,
    ACTION_ID_NON_INTERACTIVE_DISCARD,
    ACTION_ID_KEYPAD_KEY,
    ACTION_ID_KEYPAD_SPACE,
    ACTION_ID_KEYPAD_BACK,
    ACTION_ID_KEYPAD_CLEAR,
    ACTION_ID_KEYPAD_CAPS,
    ACTION_ID_KEYPAD_OK,
    ACTION_ID_KEYPAD_CANCEL,
    ACTION_ID_KEYPAD_SIGN,
    ACTION_ID_KEYPAD_UNIT,
    ACTION_ID_KEYPAD_OPTION1,
    ACTION_ID_KEYPAD_OPTION2,
    ACTION_ID_TOUCH_SCREEN_CALIBRATION,
    ACTION_ID_YES,
    ACTION_ID_NO,
    ACTION_ID_OK,
    ACTION_ID_CANCEL,
    ACTION_ID_LATER,
    ACTION_ID_STAND_BY,
    ACTION_ID_SHOW_PREVIOUS_PAGE,
    ACTION_ID_SHOW_MAIN_PAGE,
    ACTION_ID_SHOW_EVENT_QUEUE,
    ACTION_ID_SHOW_CHANNEL_SETTINGS,
    ACTION_ID_SHOW_SYS_SETTINGS,
    ACTION_ID_SHOW_SYS_SETTINGS2,
    ACTION_ID_SHOW_SYS_SETTINGS_TRIGGER,
    ACTION_ID_SHOW_SYS_SETTINGS_IO,
    ACTION_ID_SHOW_SYS_SETTINGS_DATE_TIME,
    ACTION_ID_SHOW_SYS_SETTINGS_CAL,
    ACTION_ID_SHOW_SYS_SETTINGS_CAL_CH,
    ACTION_ID_SHOW_SYS_SETTINGS_SCREEN_CALIBRATION,
    ACTION_ID_SHOW_SYS_SETTINGS_DISPLAY,
    ACTION_ID_SHOW_SYS_SETTINGS_SERIAL,
    ACTION_ID_SHOW_SYS_SETTINGS_ETHERNET,
    ACTION_ID_SHOW_SYS_SETTINGS_PROTECTIONS,
    ACTION_ID_SHOW_SYS_SETTINGS_AUX_OTP,
    ACTION_ID_SHOW_SYS_SETTINGS_SOUND,
    ACTION_ID_SHOW_SYS_SETTINGS_ENCODER,
    ACTION_ID_SHOW_SYS_INFO,
    ACTION_ID_SHOW_SYS_INFO2,
    ACTION_ID_SHOW_MAIN_HELP_PAGE,
    ACTION_ID_SHOW_EDIT_MODE_STEP_HELP,
    ACTION_ID_SHOW_EDIT_MODE_SLIDER_HELP,
    ACTION_ID_SHOW_CH_SETTINGS_PROT,
    ACTION_ID_SHOW_CH_SETTINGS_PROT_CLEAR,
    ACTION_ID_SHOW_CH_SETTINGS_PROT_OCP,
    ACTION_ID_SHOW_CH_SETTINGS_PROT_OVP,
    ACTION_ID_SHOW_CH_SETTINGS_PROT_OPP,
    ACTION_ID_SHOW_CH_SETTINGS_PROT_OTP,
    ACTION_ID_SHOW_CH_SETTINGS_TRIGGER,
    ACTION_ID_SHOW_CH_SETTINGS_LISTS,
    ACTION_ID_SHOW_CH_SETTINGS_ADV,
    ACTION_ID_SHOW_CH_SETTINGS_ADV_LRIPPLE,
    ACTION_ID_SHOW_CH_SETTINGS_ADV_REMOTE,
    ACTION_ID_SHOW_CH_SETTINGS_ADV_RANGES,
    ACTION_ID_SHOW_CH_SETTINGS_ADV_TRACKING,
    ACTION_ID_SHOW_CH_SETTINGS_ADV_COUPLING,
    ACTION_ID_SHOW_CH_SETTINGS_ADV_VIEW,
    ACTION_ID_SHOW_CH_SETTINGS_INFO,
    ACTION_ID_SHOW_CH_SETTINGS_INFO_CAL,
    ACTION_ID_SYS_SETTINGS_CAL_EDIT_PASSWORD,
    ACTION_ID_SYS_SETTINGS_CAL_CH_WIZ_START,
    ACTION_ID_SYS_SETTINGS_CAL_CH_WIZ_STEP_PREVIOUS,
    ACTION_ID_SYS_SETTINGS_CAL_CH_WIZ_STEP_NEXT,
    ACTION_ID_SYS_SETTINGS_CAL_CH_WIZ_STOP_AND_SHOW_PREVIOUS_PAGE,
    ACTION_ID_SYS_SETTINGS_CAL_CH_WIZ_STOP_AND_SHOW_MAIN_PAGE,
    ACTION_ID_SYS_SETTINGS_CAL_CH_WIZ_STEP_SET,
    ACTION_ID_SYS_SETTINGS_CAL_CH_WIZ_STEP_SET_LEVEL_VALUE,
    ACTION_ID_SYS_SETTINGS_CAL_CH_WIZ_SAVE,
    ACTION_ID_SYS_SETTINGS_CAL_TOGGLE_ENABLE,
    ACTION_ID_CH_SETTINGS_PROT_CLEAR,
    ACTION_ID_CH_SETTINGS_PROT_CLEAR_AND_DISABLE,
    ACTION_ID_CH_SETTINGS_PROT_TOGGLE_STATE,
    ACTION_ID_CH_SETTINGS_PROT_EDIT_LIMIT,
    ACTION_ID_CH_SETTINGS_PROT_EDIT_LEVEL,
    ACTION_ID_CH_SETTINGS_PROT_EDIT_DELAY,
    ACTION_ID_SET,
    ACTION_ID_DISCARD,
    ACTION_ID_EDIT_FIELD,
    ACTION_ID_EVENT_QUEUE_PREVIOUS_PAGE,
    ACTION_ID_EVENT_QUEUE_NEXT_PAGE,
    ACTION_ID_CH_SETTINGS_ADV_LRIPPLE_TOGGLE_STATUS,
    ACTION_ID_CH_SETTINGS_ADV_LRIPPLE_TOGGLE_AUTO_MODE,
    ACTION_ID_CH_SETTINGS_ADV_REMOTE_TOGGLE_SENSE,
    ACTION_ID_CH_SETTINGS_ADV_REMOTE_TOGGLE_PROGRAMMING,
    ACTION_ID_DATE_TIME_SELECT_DST_RULE,
    ACTION_ID_SHOW_USER_PROFILES,
    ACTION_ID_SHOW_USER_PROFILES2,
    ACTION_ID_SHOW_USER_PROFILE_SETTINGS,
    ACTION_ID_PROFILES_TOGGLE_AUTO_RECALL,
    ACTION_ID_PROFILE_TOGGLE_IS_AUTO_RECALL_LOCATION,
    ACTION_ID_PROFILE_RECALL,
    ACTION_ID_PROFILE_SAVE,
    ACTION_ID_PROFILE_DELETE,
    ACTION_ID_PROFILE_EDIT_REMARK,
    ACTION_ID_TOGGLE_CHANNELS_VIEW_MODE,
    ACTION_ID_ETHERNET_TOGGLE,
    ACTION_ID_ETHERNET_TOGGLE_DHCP,
    ACTION_ID_ETHERNET_EDIT_STATIC_ADDRESS,
    ACTION_ID_ETHERNET_EDIT_IP_ADDRESS,
    ACTION_ID_ETHERNET_EDIT_DNS,
    ACTION_ID_ETHERNET_EDIT_GATEWAY,
    ACTION_ID_ETHERNET_EDIT_SUBNET_MASK,
    ACTION_ID_ETHERNET_EDIT_SCPI_PORT,
    ACTION_ID_CH_SETTINGS_ADV_COUPLING_UNCOUPLE,
    ACTION_ID_CH_SETTINGS_ADV_COUPLING_SET_PARALLEL_INFO,
    ACTION_ID_CH_SETTINGS_ADV_COUPLING_SET_SERIES_INFO,
    ACTION_ID_CH_SETTINGS_ADV_COUPLING_SET_PARALLEL,
    ACTION_ID_CH_SETTINGS_ADV_COUPLING_SET_SERIES,
    ACTION_ID_CH_SETTINGS_ADV_TOGGLE_TRACKING_MODE,
    ACTION_ID_SYS_SETTINGS_PROTECTIONS_TOGGLE_OUTPUT_PROTECTION_COUPLE,
    ACTION_ID_SYS_SETTINGS_PROTECTIONS_TOGGLE_SHUTDOWN_WHEN_PROTECTION_TRIPPED,
    ACTION_ID_SYS_SETTINGS_PROTECTIONS_TOGGLE_FORCE_DISABLING_ALL_OUTPUTS_ON_POWER_UP,
    ACTION_ID_SYS_SETTINGS_PROTECTIONS_AUX_OTP_TOGGLE_STATE,
    ACTION_ID_SYS_SETTINGS_PROTECTIONS_AUX_OTP_EDIT_LEVEL,
    ACTION_ID_SYS_SETTINGS_PROTECTIONS_AUX_OTP_EDIT_DELAY,
    ACTION_ID_SYS_SETTINGS_PROTECTIONS_AUX_OTP_CLEAR,
    ACTION_ID_ON_LAST_ERROR_EVENT_ACTION,
    ACTION_ID_EDIT_SYSTEM_PASSWORD,
    ACTION_ID_SYS_FRONT_PANEL_LOCK,
    ACTION_ID_SYS_FRONT_PANEL_UNLOCK,
    ACTION_ID_SYS_SETTINGS_SOUND_TOGGLE,
    ACTION_ID_SYS_SETTINGS_SOUND_TOGGLE_CLICK,
    ACTION_ID_CH_SETTINGS_ADV_VIEW_EDIT_DISPLAY_VALUE1,
    ACTION_ID_CH_SETTINGS_ADV_VIEW_EDIT_DISPLAY_VALUE2,
    ACTION_ID_CH_SETTINGS_ADV_VIEW_SWAP_DISPLAY_VALUES,
    ACTION_ID_CH_SETTINGS_ADV_VIEW_EDIT_YT_VIEW_RATE,
    ACTION_ID_SELECT_ENUM_ITEM,
    ACTION_ID_ERROR_ALERT_ACTION,
    ACTION_ID_UP_DOWN,
    ACTION_ID_SYS_SETTINGS_ENCODER_TOGGLE_CONFIRMATION_MODE,
    ACTION_ID_TURN_DISPLAY_OFF,
    ACTION_ID_CH_SETTINGS_TRIGGER_EDIT_TRIGGER_MODE,
    ACTION_ID_CH_SETTINGS_TRIGGER_EDIT_VOLTAGE_TRIGGER_VALUE,
    ACTION_ID_CH_SETTINGS_TRIGGER_EDIT_CURRENT_TRIGGER_VALUE,
    ACTION_ID_CH_SETTINGS_TRIGGER_EDIT_LIST_COUNT,
    ACTION_ID_CH_SETTINGS_TRIGGER_TOGGLE_OUTPUT_STATE,
    ACTION_ID_CH_SETTINGS_TRIGGER_EDIT_ON_LIST_STOP,
    ACTION_ID_CHANNEL_LISTS_PREVIOUS_PAGE,
    ACTION_ID_CHANNEL_LISTS_NEXT_PAGE,
    ACTION_ID_CHANNEL_LISTS_EDIT,
    ACTION_ID_SHOW_CHANNEL_LISTS_INSERT_MENU,
    ACTION_ID_SHOW_CHANNEL_LISTS_DELETE_MENU,
    ACTION_ID_CHANNEL_LISTS_INSERT_ROW_ABOVE,
    ACTION_ID_CHANNEL_LISTS_INSERT_ROW_BELOW,
    ACTION_ID_CHANNEL_LISTS_DELETE_ROW,
    ACTION_ID_CHANNEL_LISTS_CLEAR_COLUMN,
    ACTION_ID_CHANNEL_LISTS_DELETE_ROWS,
    ACTION_ID_CHANNEL_LISTS_DELETE_ALL,
    ACTION_ID_CHANNEL_INITIATE_TRIGGER,
    ACTION_ID_CHANNEL_SET_TO_FIXED,
    ACTION_ID_CHANNEL_ENABLE_OUTPUT,
    ACTION_ID_TRIGGER_SELECT_SOURCE,
    ACTION_ID_TRIGGER_EDIT_DELAY,
    ACTION_ID_TRIGGER_TOGGLE_INITIATE_CONTINUOUSLY,
    ACTION_ID_TRIGGER_GENERATE_MANUAL,
    ACTION_ID_TRIGGER_SHOW_GENERAL_SETTINGS,
    ACTION_ID_SHOW_STAND_BY_MENU,
    ACTION_ID_RESET,
    ACTION_ID_CH_SETTINGS_ADV_RANGES_SELECT_MODE,
    ACTION_ID_CH_SETTINGS_ADV_RANGES_TOGGLE_AUTO_RANGING,
    ACTION_ID_IO_PIN_TOGGLE_POLARITY,
    ACTION_ID_IO_PIN_SELECT_FUNCTION,
    ACTION_ID_SERIAL_TOGGLE,
    ACTION_ID_SERIAL_SELECT_PARITY,
    ACTION_ID_NTP_TOGGLE,
    ACTION_ID_NTP_EDIT_SERVER
};

typedef void (*ACTION)();

extern ACTION actions[];

}
} // namespace eez::psu
