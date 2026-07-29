# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mir_msgs:msg/BMSData.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

# Member 'cell_voltage'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BMSData(type):
    """Metaclass of message 'BMSData'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'DISCHARGING': 1,
        'CHARGING': 2,
        'OV': 4,
        'UV': 8,
        'COC': 16,
        'DOC': 32,
        'DOT': 64,
        'DUT': 128,
        'SC': 512,
        'COT': 1024,
        'CUT': 2048,
        'FW_STATUS_MSK': 2031616,
        'FW_STATUS_SHIFT': 16,
        'FW_UPD_OK': 0,
        'FW_UPD_RUNNING': 1,
        'FW_UPD_FAILED_BOOT': 2,
        'FW_UPD_FAILED_APP': 3,
        'FW_UPD_FAILED_PARAM': 4,
        'FW_STATUS_LOW_BATT': 5,
        'FW_STATUS_FILE_CORRUPTED': 6,
        'FW_STATUS_CURRENT_TO_HIGH': 7,
        'FW_STATUS_NO_CAN': 8,
        'FW_BATTERY_IMBALANCE_HIGH': 9,
        'BATT_TYPE_UNKNOWN': 0,
        'BATT_TYPE_BMZ': 1,
        'BATT_TYPE_WST': 2,
        'BATT_TYPE_SBS': 3,
        'BATT_TYPE_SBS_SLIDE': 4,
        'BATT_TYPE_NO_BMS': 255,
        'SBS_INIT_STATE1': 1,
        'SBS_INIT_STATE2': 2,
        'SBS_INIT_STATE3': 3,
        'SBS_INIT_STATE4': 4,
        'SBS_IDLE': 5,
        'SBS_DISCHARGE': 6,
        'SBS_CHARGE': 7,
        'SBS_FAULT': 10,
        'SBS_CRITICAL_ERROR': 11,
        'SBS_PREPARE_DEEPSLEEP': 99,
        'SBS_DEEPSLEEP': 100,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mir_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mir_msgs.msg.BMSData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__bms_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__bms_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__bms_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__bms_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__bms_data

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'DISCHARGING': cls.__constants['DISCHARGING'],
            'CHARGING': cls.__constants['CHARGING'],
            'OV': cls.__constants['OV'],
            'UV': cls.__constants['UV'],
            'COC': cls.__constants['COC'],
            'DOC': cls.__constants['DOC'],
            'DOT': cls.__constants['DOT'],
            'DUT': cls.__constants['DUT'],
            'SC': cls.__constants['SC'],
            'COT': cls.__constants['COT'],
            'CUT': cls.__constants['CUT'],
            'FW_STATUS_MSK': cls.__constants['FW_STATUS_MSK'],
            'FW_STATUS_SHIFT': cls.__constants['FW_STATUS_SHIFT'],
            'FW_UPD_OK': cls.__constants['FW_UPD_OK'],
            'FW_UPD_RUNNING': cls.__constants['FW_UPD_RUNNING'],
            'FW_UPD_FAILED_BOOT': cls.__constants['FW_UPD_FAILED_BOOT'],
            'FW_UPD_FAILED_APP': cls.__constants['FW_UPD_FAILED_APP'],
            'FW_UPD_FAILED_PARAM': cls.__constants['FW_UPD_FAILED_PARAM'],
            'FW_STATUS_LOW_BATT': cls.__constants['FW_STATUS_LOW_BATT'],
            'FW_STATUS_FILE_CORRUPTED': cls.__constants['FW_STATUS_FILE_CORRUPTED'],
            'FW_STATUS_CURRENT_TO_HIGH': cls.__constants['FW_STATUS_CURRENT_TO_HIGH'],
            'FW_STATUS_NO_CAN': cls.__constants['FW_STATUS_NO_CAN'],
            'FW_BATTERY_IMBALANCE_HIGH': cls.__constants['FW_BATTERY_IMBALANCE_HIGH'],
            'BATT_TYPE_UNKNOWN': cls.__constants['BATT_TYPE_UNKNOWN'],
            'BATT_TYPE_BMZ': cls.__constants['BATT_TYPE_BMZ'],
            'BATT_TYPE_WST': cls.__constants['BATT_TYPE_WST'],
            'BATT_TYPE_SBS': cls.__constants['BATT_TYPE_SBS'],
            'BATT_TYPE_SBS_SLIDE': cls.__constants['BATT_TYPE_SBS_SLIDE'],
            'BATT_TYPE_NO_BMS': cls.__constants['BATT_TYPE_NO_BMS'],
            'SBS_INIT_STATE1': cls.__constants['SBS_INIT_STATE1'],
            'SBS_INIT_STATE2': cls.__constants['SBS_INIT_STATE2'],
            'SBS_INIT_STATE3': cls.__constants['SBS_INIT_STATE3'],
            'SBS_INIT_STATE4': cls.__constants['SBS_INIT_STATE4'],
            'SBS_IDLE': cls.__constants['SBS_IDLE'],
            'SBS_DISCHARGE': cls.__constants['SBS_DISCHARGE'],
            'SBS_CHARGE': cls.__constants['SBS_CHARGE'],
            'SBS_FAULT': cls.__constants['SBS_FAULT'],
            'SBS_CRITICAL_ERROR': cls.__constants['SBS_CRITICAL_ERROR'],
            'SBS_PREPARE_DEEPSLEEP': cls.__constants['SBS_PREPARE_DEEPSLEEP'],
            'SBS_DEEPSLEEP': cls.__constants['SBS_DEEPSLEEP'],
        }

    @property
    def DISCHARGING(self):
        """Message constant 'DISCHARGING'."""
        return Metaclass_BMSData.__constants['DISCHARGING']

    @property
    def CHARGING(self):
        """Message constant 'CHARGING'."""
        return Metaclass_BMSData.__constants['CHARGING']

    @property
    def OV(self):
        """Message constant 'OV'."""
        return Metaclass_BMSData.__constants['OV']

    @property
    def UV(self):
        """Message constant 'UV'."""
        return Metaclass_BMSData.__constants['UV']

    @property
    def COC(self):
        """Message constant 'COC'."""
        return Metaclass_BMSData.__constants['COC']

    @property
    def DOC(self):
        """Message constant 'DOC'."""
        return Metaclass_BMSData.__constants['DOC']

    @property
    def DOT(self):
        """Message constant 'DOT'."""
        return Metaclass_BMSData.__constants['DOT']

    @property
    def DUT(self):
        """Message constant 'DUT'."""
        return Metaclass_BMSData.__constants['DUT']

    @property
    def SC(self):
        """Message constant 'SC'."""
        return Metaclass_BMSData.__constants['SC']

    @property
    def COT(self):
        """Message constant 'COT'."""
        return Metaclass_BMSData.__constants['COT']

    @property
    def CUT(self):
        """Message constant 'CUT'."""
        return Metaclass_BMSData.__constants['CUT']

    @property
    def FW_STATUS_MSK(self):
        """Message constant 'FW_STATUS_MSK'."""
        return Metaclass_BMSData.__constants['FW_STATUS_MSK']

    @property
    def FW_STATUS_SHIFT(self):
        """Message constant 'FW_STATUS_SHIFT'."""
        return Metaclass_BMSData.__constants['FW_STATUS_SHIFT']

    @property
    def FW_UPD_OK(self):
        """Message constant 'FW_UPD_OK'."""
        return Metaclass_BMSData.__constants['FW_UPD_OK']

    @property
    def FW_UPD_RUNNING(self):
        """Message constant 'FW_UPD_RUNNING'."""
        return Metaclass_BMSData.__constants['FW_UPD_RUNNING']

    @property
    def FW_UPD_FAILED_BOOT(self):
        """Message constant 'FW_UPD_FAILED_BOOT'."""
        return Metaclass_BMSData.__constants['FW_UPD_FAILED_BOOT']

    @property
    def FW_UPD_FAILED_APP(self):
        """Message constant 'FW_UPD_FAILED_APP'."""
        return Metaclass_BMSData.__constants['FW_UPD_FAILED_APP']

    @property
    def FW_UPD_FAILED_PARAM(self):
        """Message constant 'FW_UPD_FAILED_PARAM'."""
        return Metaclass_BMSData.__constants['FW_UPD_FAILED_PARAM']

    @property
    def FW_STATUS_LOW_BATT(self):
        """Message constant 'FW_STATUS_LOW_BATT'."""
        return Metaclass_BMSData.__constants['FW_STATUS_LOW_BATT']

    @property
    def FW_STATUS_FILE_CORRUPTED(self):
        """Message constant 'FW_STATUS_FILE_CORRUPTED'."""
        return Metaclass_BMSData.__constants['FW_STATUS_FILE_CORRUPTED']

    @property
    def FW_STATUS_CURRENT_TO_HIGH(self):
        """Message constant 'FW_STATUS_CURRENT_TO_HIGH'."""
        return Metaclass_BMSData.__constants['FW_STATUS_CURRENT_TO_HIGH']

    @property
    def FW_STATUS_NO_CAN(self):
        """Message constant 'FW_STATUS_NO_CAN'."""
        return Metaclass_BMSData.__constants['FW_STATUS_NO_CAN']

    @property
    def FW_BATTERY_IMBALANCE_HIGH(self):
        """Message constant 'FW_BATTERY_IMBALANCE_HIGH'."""
        return Metaclass_BMSData.__constants['FW_BATTERY_IMBALANCE_HIGH']

    @property
    def BATT_TYPE_UNKNOWN(self):
        """Message constant 'BATT_TYPE_UNKNOWN'."""
        return Metaclass_BMSData.__constants['BATT_TYPE_UNKNOWN']

    @property
    def BATT_TYPE_BMZ(self):
        """Message constant 'BATT_TYPE_BMZ'."""
        return Metaclass_BMSData.__constants['BATT_TYPE_BMZ']

    @property
    def BATT_TYPE_WST(self):
        """Message constant 'BATT_TYPE_WST'."""
        return Metaclass_BMSData.__constants['BATT_TYPE_WST']

    @property
    def BATT_TYPE_SBS(self):
        """Message constant 'BATT_TYPE_SBS'."""
        return Metaclass_BMSData.__constants['BATT_TYPE_SBS']

    @property
    def BATT_TYPE_SBS_SLIDE(self):
        """Message constant 'BATT_TYPE_SBS_SLIDE'."""
        return Metaclass_BMSData.__constants['BATT_TYPE_SBS_SLIDE']

    @property
    def BATT_TYPE_NO_BMS(self):
        """Message constant 'BATT_TYPE_NO_BMS'."""
        return Metaclass_BMSData.__constants['BATT_TYPE_NO_BMS']

    @property
    def SBS_INIT_STATE1(self):
        """Message constant 'SBS_INIT_STATE1'."""
        return Metaclass_BMSData.__constants['SBS_INIT_STATE1']

    @property
    def SBS_INIT_STATE2(self):
        """Message constant 'SBS_INIT_STATE2'."""
        return Metaclass_BMSData.__constants['SBS_INIT_STATE2']

    @property
    def SBS_INIT_STATE3(self):
        """Message constant 'SBS_INIT_STATE3'."""
        return Metaclass_BMSData.__constants['SBS_INIT_STATE3']

    @property
    def SBS_INIT_STATE4(self):
        """Message constant 'SBS_INIT_STATE4'."""
        return Metaclass_BMSData.__constants['SBS_INIT_STATE4']

    @property
    def SBS_IDLE(self):
        """Message constant 'SBS_IDLE'."""
        return Metaclass_BMSData.__constants['SBS_IDLE']

    @property
    def SBS_DISCHARGE(self):
        """Message constant 'SBS_DISCHARGE'."""
        return Metaclass_BMSData.__constants['SBS_DISCHARGE']

    @property
    def SBS_CHARGE(self):
        """Message constant 'SBS_CHARGE'."""
        return Metaclass_BMSData.__constants['SBS_CHARGE']

    @property
    def SBS_FAULT(self):
        """Message constant 'SBS_FAULT'."""
        return Metaclass_BMSData.__constants['SBS_FAULT']

    @property
    def SBS_CRITICAL_ERROR(self):
        """Message constant 'SBS_CRITICAL_ERROR'."""
        return Metaclass_BMSData.__constants['SBS_CRITICAL_ERROR']

    @property
    def SBS_PREPARE_DEEPSLEEP(self):
        """Message constant 'SBS_PREPARE_DEEPSLEEP'."""
        return Metaclass_BMSData.__constants['SBS_PREPARE_DEEPSLEEP']

    @property
    def SBS_DEEPSLEEP(self):
        """Message constant 'SBS_DEEPSLEEP'."""
        return Metaclass_BMSData.__constants['SBS_DEEPSLEEP']


class BMSData(metaclass=Metaclass_BMSData):
    """
    Message class 'BMSData'.

    Constants:
      DISCHARGING
      CHARGING
      OV
      UV
      COC
      DOC
      DOT
      DUT
      SC
      COT
      CUT
      FW_STATUS_MSK
      FW_STATUS_SHIFT
      FW_UPD_OK
      FW_UPD_RUNNING
      FW_UPD_FAILED_BOOT
      FW_UPD_FAILED_APP
      FW_UPD_FAILED_PARAM
      FW_STATUS_LOW_BATT
      FW_STATUS_FILE_CORRUPTED
      FW_STATUS_CURRENT_TO_HIGH
      FW_STATUS_NO_CAN
      FW_BATTERY_IMBALANCE_HIGH
      BATT_TYPE_UNKNOWN
      BATT_TYPE_BMZ
      BATT_TYPE_WST
      BATT_TYPE_SBS
      BATT_TYPE_SBS_SLIDE
      BATT_TYPE_NO_BMS
      SBS_INIT_STATE1
      SBS_INIT_STATE2
      SBS_INIT_STATE3
      SBS_INIT_STATE4
      SBS_IDLE
      SBS_DISCHARGE
      SBS_CHARGE
      SBS_FAULT
      SBS_CRITICAL_ERROR
      SBS_PREPARE_DEEPSLEEP
      SBS_DEEPSLEEP
    """

    __slots__ = [
        '_pack_voltage',
        '_charge_current',
        '_discharge_current',
        '_state_of_charge',
        '_remaining_time_to_full_charge',
        '_remaining_capacity',
        '_state_of_health',
        '_status_flags',
        '_temperature',
        '_cell_voltage',
        '_cell_voltage_diff',
        '_wst_serial',
        '_bmz_flag',
        '_battery_type',
        '_full_voltage',
        '_full_capacity',
        '_temperature2',
        '_temperature_pcb',
        '_cycle_count',
        '_dsg_overcurrent_counter',
        '_chg_overcurrent_counter',
        '_hw_major',
        '_hw_minor',
        '_fw_major',
        '_fw_minor',
        '_fw_patch',
        '_fw_parameters_ok',
        '_rec_fw_major',
        '_rec_fw_minor',
        '_rec_fw_patch',
        '_bl_major',
        '_bl_minor',
        '_status_enabled',
        '_status_current_limitation',
        '_status_switch_off_warn1',
        '_status_switch_off_warn2',
        '_status_fully_discharged',
        '_status_nearly_discharged',
        '_status_chargefet_on',
        '_status_dischargefet_on',
        '_status_discharging',
        '_status_fully_charged',
        '_status_charging',
        '_status_temp_charging_err',
        '_status_cell_over_voltage',
        '_status_cell_under_voltage',
        '_status_charge_over_current',
        '_status_shortcircuit',
        '_status_discharge_over_current',
        '_status_chargefet_voltage',
        '_status_dischargefet_voltage',
        '_status_temp_discharging_err',
        '_status_charger_detected',
        '_mnfct_bms_revision',
        '_mnfct_asn_revision',
        '_mnfct_year',
        '_mnfct_week',
        '_mnfct_model',
        '_mnfct_serial',
        '_afe_i2c_error_count',
        '_app_error_count',
        '_fet_disable_state',
        '_last_battery_msg_time',
        '_sbs_battery_status',
        '_sbs_battery_status_raw',
        '_sbs_serial_1',
        '_sbs_serial_2',
        '_sbs_arti_nr_1',
        '_sbs_arti_nr_2',
        '_sbs_arti_nr_3',
        '_sbs_curr_flow_passive_state',
        '_chg_oc1_count',
        '_chg_oc2_count',
        '_dsg_oc1_count',
        '_dsg_oc2_count',
        '_dsg_oc3_count',
        '_afe_oc1_count',
        '_afe_oc2_count',
        '_chg_latch_clear_count',
        '_dsg_latch_clear_count',
        '_chg_oc_warning',
        '_dsg_oc_warning',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'pack_voltage': 'double',
        'charge_current': 'double',
        'discharge_current': 'double',
        'state_of_charge': 'double',
        'remaining_time_to_full_charge': 'double',
        'remaining_capacity': 'int32',
        'state_of_health': 'int32',
        'status_flags': 'int32',
        'temperature': 'int32',
        'cell_voltage': 'sequence<uint32>',
        'cell_voltage_diff': 'uint32',
        'wst_serial': 'string',
        'bmz_flag': 'uint32',
        'battery_type': 'uint32',
        'full_voltage': 'double',
        'full_capacity': 'int32',
        'temperature2': 'int32',
        'temperature_pcb': 'int32',
        'cycle_count': 'int32',
        'dsg_overcurrent_counter': 'int32',
        'chg_overcurrent_counter': 'int32',
        'hw_major': 'int32',
        'hw_minor': 'int32',
        'fw_major': 'int32',
        'fw_minor': 'int32',
        'fw_patch': 'int32',
        'fw_parameters_ok': 'int32',
        'rec_fw_major': 'int32',
        'rec_fw_minor': 'int32',
        'rec_fw_patch': 'int32',
        'bl_major': 'int32',
        'bl_minor': 'int32',
        'status_enabled': 'uint32',
        'status_current_limitation': 'uint32',
        'status_switch_off_warn1': 'uint32',
        'status_switch_off_warn2': 'uint32',
        'status_fully_discharged': 'uint32',
        'status_nearly_discharged': 'uint32',
        'status_chargefet_on': 'uint32',
        'status_dischargefet_on': 'uint32',
        'status_discharging': 'uint32',
        'status_fully_charged': 'uint32',
        'status_charging': 'uint32',
        'status_temp_charging_err': 'uint32',
        'status_cell_over_voltage': 'uint32',
        'status_cell_under_voltage': 'uint32',
        'status_charge_over_current': 'uint32',
        'status_shortcircuit': 'uint32',
        'status_discharge_over_current': 'uint32',
        'status_chargefet_voltage': 'double',
        'status_dischargefet_voltage': 'double',
        'status_temp_discharging_err': 'uint32',
        'status_charger_detected': 'uint32',
        'mnfct_bms_revision': 'uint32',
        'mnfct_asn_revision': 'uint32',
        'mnfct_year': 'uint32',
        'mnfct_week': 'uint32',
        'mnfct_model': 'uint32',
        'mnfct_serial': 'uint32',
        'afe_i2c_error_count': 'uint32',
        'app_error_count': 'uint32',
        'fet_disable_state': 'uint32',
        'last_battery_msg_time': 'double',
        'sbs_battery_status': 'uint32',
        'sbs_battery_status_raw': 'uint32',
        'sbs_serial_1': 'string',
        'sbs_serial_2': 'string',
        'sbs_arti_nr_1': 'uint32',
        'sbs_arti_nr_2': 'uint32',
        'sbs_arti_nr_3': 'uint32',
        'sbs_curr_flow_passive_state': 'uint32',
        'chg_oc1_count': 'uint8',
        'chg_oc2_count': 'uint8',
        'dsg_oc1_count': 'uint8',
        'dsg_oc2_count': 'uint8',
        'dsg_oc3_count': 'uint8',
        'afe_oc1_count': 'uint8',
        'afe_oc2_count': 'uint8',
        'chg_latch_clear_count': 'uint8',
        'dsg_latch_clear_count': 'uint8',
        'chg_oc_warning': 'uint8',
        'dsg_oc_warning': 'uint8',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.pack_voltage = kwargs.get('pack_voltage', float())
        self.charge_current = kwargs.get('charge_current', float())
        self.discharge_current = kwargs.get('discharge_current', float())
        self.state_of_charge = kwargs.get('state_of_charge', float())
        self.remaining_time_to_full_charge = kwargs.get('remaining_time_to_full_charge', float())
        self.remaining_capacity = kwargs.get('remaining_capacity', int())
        self.state_of_health = kwargs.get('state_of_health', int())
        self.status_flags = kwargs.get('status_flags', int())
        self.temperature = kwargs.get('temperature', int())
        self.cell_voltage = array.array('I', kwargs.get('cell_voltage', []))
        self.cell_voltage_diff = kwargs.get('cell_voltage_diff', int())
        self.wst_serial = kwargs.get('wst_serial', str())
        self.bmz_flag = kwargs.get('bmz_flag', int())
        self.battery_type = kwargs.get('battery_type', int())
        self.full_voltage = kwargs.get('full_voltage', float())
        self.full_capacity = kwargs.get('full_capacity', int())
        self.temperature2 = kwargs.get('temperature2', int())
        self.temperature_pcb = kwargs.get('temperature_pcb', int())
        self.cycle_count = kwargs.get('cycle_count', int())
        self.dsg_overcurrent_counter = kwargs.get('dsg_overcurrent_counter', int())
        self.chg_overcurrent_counter = kwargs.get('chg_overcurrent_counter', int())
        self.hw_major = kwargs.get('hw_major', int())
        self.hw_minor = kwargs.get('hw_minor', int())
        self.fw_major = kwargs.get('fw_major', int())
        self.fw_minor = kwargs.get('fw_minor', int())
        self.fw_patch = kwargs.get('fw_patch', int())
        self.fw_parameters_ok = kwargs.get('fw_parameters_ok', int())
        self.rec_fw_major = kwargs.get('rec_fw_major', int())
        self.rec_fw_minor = kwargs.get('rec_fw_minor', int())
        self.rec_fw_patch = kwargs.get('rec_fw_patch', int())
        self.bl_major = kwargs.get('bl_major', int())
        self.bl_minor = kwargs.get('bl_minor', int())
        self.status_enabled = kwargs.get('status_enabled', int())
        self.status_current_limitation = kwargs.get('status_current_limitation', int())
        self.status_switch_off_warn1 = kwargs.get('status_switch_off_warn1', int())
        self.status_switch_off_warn2 = kwargs.get('status_switch_off_warn2', int())
        self.status_fully_discharged = kwargs.get('status_fully_discharged', int())
        self.status_nearly_discharged = kwargs.get('status_nearly_discharged', int())
        self.status_chargefet_on = kwargs.get('status_chargefet_on', int())
        self.status_dischargefet_on = kwargs.get('status_dischargefet_on', int())
        self.status_discharging = kwargs.get('status_discharging', int())
        self.status_fully_charged = kwargs.get('status_fully_charged', int())
        self.status_charging = kwargs.get('status_charging', int())
        self.status_temp_charging_err = kwargs.get('status_temp_charging_err', int())
        self.status_cell_over_voltage = kwargs.get('status_cell_over_voltage', int())
        self.status_cell_under_voltage = kwargs.get('status_cell_under_voltage', int())
        self.status_charge_over_current = kwargs.get('status_charge_over_current', int())
        self.status_shortcircuit = kwargs.get('status_shortcircuit', int())
        self.status_discharge_over_current = kwargs.get('status_discharge_over_current', int())
        self.status_chargefet_voltage = kwargs.get('status_chargefet_voltage', float())
        self.status_dischargefet_voltage = kwargs.get('status_dischargefet_voltage', float())
        self.status_temp_discharging_err = kwargs.get('status_temp_discharging_err', int())
        self.status_charger_detected = kwargs.get('status_charger_detected', int())
        self.mnfct_bms_revision = kwargs.get('mnfct_bms_revision', int())
        self.mnfct_asn_revision = kwargs.get('mnfct_asn_revision', int())
        self.mnfct_year = kwargs.get('mnfct_year', int())
        self.mnfct_week = kwargs.get('mnfct_week', int())
        self.mnfct_model = kwargs.get('mnfct_model', int())
        self.mnfct_serial = kwargs.get('mnfct_serial', int())
        self.afe_i2c_error_count = kwargs.get('afe_i2c_error_count', int())
        self.app_error_count = kwargs.get('app_error_count', int())
        self.fet_disable_state = kwargs.get('fet_disable_state', int())
        self.last_battery_msg_time = kwargs.get('last_battery_msg_time', float())
        self.sbs_battery_status = kwargs.get('sbs_battery_status', int())
        self.sbs_battery_status_raw = kwargs.get('sbs_battery_status_raw', int())
        self.sbs_serial_1 = kwargs.get('sbs_serial_1', str())
        self.sbs_serial_2 = kwargs.get('sbs_serial_2', str())
        self.sbs_arti_nr_1 = kwargs.get('sbs_arti_nr_1', int())
        self.sbs_arti_nr_2 = kwargs.get('sbs_arti_nr_2', int())
        self.sbs_arti_nr_3 = kwargs.get('sbs_arti_nr_3', int())
        self.sbs_curr_flow_passive_state = kwargs.get('sbs_curr_flow_passive_state', int())
        self.chg_oc1_count = kwargs.get('chg_oc1_count', int())
        self.chg_oc2_count = kwargs.get('chg_oc2_count', int())
        self.dsg_oc1_count = kwargs.get('dsg_oc1_count', int())
        self.dsg_oc2_count = kwargs.get('dsg_oc2_count', int())
        self.dsg_oc3_count = kwargs.get('dsg_oc3_count', int())
        self.afe_oc1_count = kwargs.get('afe_oc1_count', int())
        self.afe_oc2_count = kwargs.get('afe_oc2_count', int())
        self.chg_latch_clear_count = kwargs.get('chg_latch_clear_count', int())
        self.dsg_latch_clear_count = kwargs.get('dsg_latch_clear_count', int())
        self.chg_oc_warning = kwargs.get('chg_oc_warning', int())
        self.dsg_oc_warning = kwargs.get('dsg_oc_warning', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.pack_voltage != other.pack_voltage:
            return False
        if self.charge_current != other.charge_current:
            return False
        if self.discharge_current != other.discharge_current:
            return False
        if self.state_of_charge != other.state_of_charge:
            return False
        if self.remaining_time_to_full_charge != other.remaining_time_to_full_charge:
            return False
        if self.remaining_capacity != other.remaining_capacity:
            return False
        if self.state_of_health != other.state_of_health:
            return False
        if self.status_flags != other.status_flags:
            return False
        if self.temperature != other.temperature:
            return False
        if self.cell_voltage != other.cell_voltage:
            return False
        if self.cell_voltage_diff != other.cell_voltage_diff:
            return False
        if self.wst_serial != other.wst_serial:
            return False
        if self.bmz_flag != other.bmz_flag:
            return False
        if self.battery_type != other.battery_type:
            return False
        if self.full_voltage != other.full_voltage:
            return False
        if self.full_capacity != other.full_capacity:
            return False
        if self.temperature2 != other.temperature2:
            return False
        if self.temperature_pcb != other.temperature_pcb:
            return False
        if self.cycle_count != other.cycle_count:
            return False
        if self.dsg_overcurrent_counter != other.dsg_overcurrent_counter:
            return False
        if self.chg_overcurrent_counter != other.chg_overcurrent_counter:
            return False
        if self.hw_major != other.hw_major:
            return False
        if self.hw_minor != other.hw_minor:
            return False
        if self.fw_major != other.fw_major:
            return False
        if self.fw_minor != other.fw_minor:
            return False
        if self.fw_patch != other.fw_patch:
            return False
        if self.fw_parameters_ok != other.fw_parameters_ok:
            return False
        if self.rec_fw_major != other.rec_fw_major:
            return False
        if self.rec_fw_minor != other.rec_fw_minor:
            return False
        if self.rec_fw_patch != other.rec_fw_patch:
            return False
        if self.bl_major != other.bl_major:
            return False
        if self.bl_minor != other.bl_minor:
            return False
        if self.status_enabled != other.status_enabled:
            return False
        if self.status_current_limitation != other.status_current_limitation:
            return False
        if self.status_switch_off_warn1 != other.status_switch_off_warn1:
            return False
        if self.status_switch_off_warn2 != other.status_switch_off_warn2:
            return False
        if self.status_fully_discharged != other.status_fully_discharged:
            return False
        if self.status_nearly_discharged != other.status_nearly_discharged:
            return False
        if self.status_chargefet_on != other.status_chargefet_on:
            return False
        if self.status_dischargefet_on != other.status_dischargefet_on:
            return False
        if self.status_discharging != other.status_discharging:
            return False
        if self.status_fully_charged != other.status_fully_charged:
            return False
        if self.status_charging != other.status_charging:
            return False
        if self.status_temp_charging_err != other.status_temp_charging_err:
            return False
        if self.status_cell_over_voltage != other.status_cell_over_voltage:
            return False
        if self.status_cell_under_voltage != other.status_cell_under_voltage:
            return False
        if self.status_charge_over_current != other.status_charge_over_current:
            return False
        if self.status_shortcircuit != other.status_shortcircuit:
            return False
        if self.status_discharge_over_current != other.status_discharge_over_current:
            return False
        if self.status_chargefet_voltage != other.status_chargefet_voltage:
            return False
        if self.status_dischargefet_voltage != other.status_dischargefet_voltage:
            return False
        if self.status_temp_discharging_err != other.status_temp_discharging_err:
            return False
        if self.status_charger_detected != other.status_charger_detected:
            return False
        if self.mnfct_bms_revision != other.mnfct_bms_revision:
            return False
        if self.mnfct_asn_revision != other.mnfct_asn_revision:
            return False
        if self.mnfct_year != other.mnfct_year:
            return False
        if self.mnfct_week != other.mnfct_week:
            return False
        if self.mnfct_model != other.mnfct_model:
            return False
        if self.mnfct_serial != other.mnfct_serial:
            return False
        if self.afe_i2c_error_count != other.afe_i2c_error_count:
            return False
        if self.app_error_count != other.app_error_count:
            return False
        if self.fet_disable_state != other.fet_disable_state:
            return False
        if self.last_battery_msg_time != other.last_battery_msg_time:
            return False
        if self.sbs_battery_status != other.sbs_battery_status:
            return False
        if self.sbs_battery_status_raw != other.sbs_battery_status_raw:
            return False
        if self.sbs_serial_1 != other.sbs_serial_1:
            return False
        if self.sbs_serial_2 != other.sbs_serial_2:
            return False
        if self.sbs_arti_nr_1 != other.sbs_arti_nr_1:
            return False
        if self.sbs_arti_nr_2 != other.sbs_arti_nr_2:
            return False
        if self.sbs_arti_nr_3 != other.sbs_arti_nr_3:
            return False
        if self.sbs_curr_flow_passive_state != other.sbs_curr_flow_passive_state:
            return False
        if self.chg_oc1_count != other.chg_oc1_count:
            return False
        if self.chg_oc2_count != other.chg_oc2_count:
            return False
        if self.dsg_oc1_count != other.dsg_oc1_count:
            return False
        if self.dsg_oc2_count != other.dsg_oc2_count:
            return False
        if self.dsg_oc3_count != other.dsg_oc3_count:
            return False
        if self.afe_oc1_count != other.afe_oc1_count:
            return False
        if self.afe_oc2_count != other.afe_oc2_count:
            return False
        if self.chg_latch_clear_count != other.chg_latch_clear_count:
            return False
        if self.dsg_latch_clear_count != other.dsg_latch_clear_count:
            return False
        if self.chg_oc_warning != other.chg_oc_warning:
            return False
        if self.dsg_oc_warning != other.dsg_oc_warning:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def pack_voltage(self):
        """Message field 'pack_voltage'."""
        return self._pack_voltage

    @pack_voltage.setter
    def pack_voltage(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'pack_voltage' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pack_voltage' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pack_voltage = value

    @builtins.property
    def charge_current(self):
        """Message field 'charge_current'."""
        return self._charge_current

    @charge_current.setter
    def charge_current(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'charge_current' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'charge_current' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._charge_current = value

    @builtins.property
    def discharge_current(self):
        """Message field 'discharge_current'."""
        return self._discharge_current

    @discharge_current.setter
    def discharge_current(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'discharge_current' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'discharge_current' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._discharge_current = value

    @builtins.property
    def state_of_charge(self):
        """Message field 'state_of_charge'."""
        return self._state_of_charge

    @state_of_charge.setter
    def state_of_charge(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'state_of_charge' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'state_of_charge' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._state_of_charge = value

    @builtins.property
    def remaining_time_to_full_charge(self):
        """Message field 'remaining_time_to_full_charge'."""
        return self._remaining_time_to_full_charge

    @remaining_time_to_full_charge.setter
    def remaining_time_to_full_charge(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'remaining_time_to_full_charge' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'remaining_time_to_full_charge' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._remaining_time_to_full_charge = value

    @builtins.property
    def remaining_capacity(self):
        """Message field 'remaining_capacity'."""
        return self._remaining_capacity

    @remaining_capacity.setter
    def remaining_capacity(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'remaining_capacity' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'remaining_capacity' field must be an integer in [-2147483648, 2147483647]"
        self._remaining_capacity = value

    @builtins.property
    def state_of_health(self):
        """Message field 'state_of_health'."""
        return self._state_of_health

    @state_of_health.setter
    def state_of_health(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'state_of_health' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'state_of_health' field must be an integer in [-2147483648, 2147483647]"
        self._state_of_health = value

    @builtins.property
    def status_flags(self):
        """Message field 'status_flags'."""
        return self._status_flags

    @status_flags.setter
    def status_flags(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'status_flags' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'status_flags' field must be an integer in [-2147483648, 2147483647]"
        self._status_flags = value

    @builtins.property
    def temperature(self):
        """Message field 'temperature'."""
        return self._temperature

    @temperature.setter
    def temperature(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'temperature' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'temperature' field must be an integer in [-2147483648, 2147483647]"
        self._temperature = value

    @builtins.property
    def cell_voltage(self):
        """Message field 'cell_voltage'."""
        return self._cell_voltage

    @cell_voltage.setter
    def cell_voltage(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'I', \
                    "The 'cell_voltage' array.array() must have the type code of 'I'"
                self._cell_voltage = value
                return
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'cell_voltage' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._cell_voltage = array.array('I', value)

    @builtins.property
    def cell_voltage_diff(self):
        """Message field 'cell_voltage_diff'."""
        return self._cell_voltage_diff

    @cell_voltage_diff.setter
    def cell_voltage_diff(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'cell_voltage_diff' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'cell_voltage_diff' field must be an unsigned integer in [0, 4294967295]"
        self._cell_voltage_diff = value

    @builtins.property
    def wst_serial(self):
        """Message field 'wst_serial'."""
        return self._wst_serial

    @wst_serial.setter
    def wst_serial(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'wst_serial' field must be of type 'str'"
        self._wst_serial = value

    @builtins.property
    def bmz_flag(self):
        """Message field 'bmz_flag'."""
        return self._bmz_flag

    @bmz_flag.setter
    def bmz_flag(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'bmz_flag' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'bmz_flag' field must be an unsigned integer in [0, 4294967295]"
        self._bmz_flag = value

    @builtins.property
    def battery_type(self):
        """Message field 'battery_type'."""
        return self._battery_type

    @battery_type.setter
    def battery_type(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'battery_type' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'battery_type' field must be an unsigned integer in [0, 4294967295]"
        self._battery_type = value

    @builtins.property
    def full_voltage(self):
        """Message field 'full_voltage'."""
        return self._full_voltage

    @full_voltage.setter
    def full_voltage(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'full_voltage' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'full_voltage' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._full_voltage = value

    @builtins.property
    def full_capacity(self):
        """Message field 'full_capacity'."""
        return self._full_capacity

    @full_capacity.setter
    def full_capacity(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'full_capacity' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'full_capacity' field must be an integer in [-2147483648, 2147483647]"
        self._full_capacity = value

    @builtins.property
    def temperature2(self):
        """Message field 'temperature2'."""
        return self._temperature2

    @temperature2.setter
    def temperature2(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'temperature2' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'temperature2' field must be an integer in [-2147483648, 2147483647]"
        self._temperature2 = value

    @builtins.property
    def temperature_pcb(self):
        """Message field 'temperature_pcb'."""
        return self._temperature_pcb

    @temperature_pcb.setter
    def temperature_pcb(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'temperature_pcb' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'temperature_pcb' field must be an integer in [-2147483648, 2147483647]"
        self._temperature_pcb = value

    @builtins.property
    def cycle_count(self):
        """Message field 'cycle_count'."""
        return self._cycle_count

    @cycle_count.setter
    def cycle_count(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'cycle_count' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'cycle_count' field must be an integer in [-2147483648, 2147483647]"
        self._cycle_count = value

    @builtins.property
    def dsg_overcurrent_counter(self):
        """Message field 'dsg_overcurrent_counter'."""
        return self._dsg_overcurrent_counter

    @dsg_overcurrent_counter.setter
    def dsg_overcurrent_counter(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'dsg_overcurrent_counter' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'dsg_overcurrent_counter' field must be an integer in [-2147483648, 2147483647]"
        self._dsg_overcurrent_counter = value

    @builtins.property
    def chg_overcurrent_counter(self):
        """Message field 'chg_overcurrent_counter'."""
        return self._chg_overcurrent_counter

    @chg_overcurrent_counter.setter
    def chg_overcurrent_counter(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'chg_overcurrent_counter' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'chg_overcurrent_counter' field must be an integer in [-2147483648, 2147483647]"
        self._chg_overcurrent_counter = value

    @builtins.property
    def hw_major(self):
        """Message field 'hw_major'."""
        return self._hw_major

    @hw_major.setter
    def hw_major(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'hw_major' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'hw_major' field must be an integer in [-2147483648, 2147483647]"
        self._hw_major = value

    @builtins.property
    def hw_minor(self):
        """Message field 'hw_minor'."""
        return self._hw_minor

    @hw_minor.setter
    def hw_minor(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'hw_minor' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'hw_minor' field must be an integer in [-2147483648, 2147483647]"
        self._hw_minor = value

    @builtins.property
    def fw_major(self):
        """Message field 'fw_major'."""
        return self._fw_major

    @fw_major.setter
    def fw_major(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'fw_major' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'fw_major' field must be an integer in [-2147483648, 2147483647]"
        self._fw_major = value

    @builtins.property
    def fw_minor(self):
        """Message field 'fw_minor'."""
        return self._fw_minor

    @fw_minor.setter
    def fw_minor(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'fw_minor' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'fw_minor' field must be an integer in [-2147483648, 2147483647]"
        self._fw_minor = value

    @builtins.property
    def fw_patch(self):
        """Message field 'fw_patch'."""
        return self._fw_patch

    @fw_patch.setter
    def fw_patch(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'fw_patch' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'fw_patch' field must be an integer in [-2147483648, 2147483647]"
        self._fw_patch = value

    @builtins.property
    def fw_parameters_ok(self):
        """Message field 'fw_parameters_ok'."""
        return self._fw_parameters_ok

    @fw_parameters_ok.setter
    def fw_parameters_ok(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'fw_parameters_ok' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'fw_parameters_ok' field must be an integer in [-2147483648, 2147483647]"
        self._fw_parameters_ok = value

    @builtins.property
    def rec_fw_major(self):
        """Message field 'rec_fw_major'."""
        return self._rec_fw_major

    @rec_fw_major.setter
    def rec_fw_major(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'rec_fw_major' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'rec_fw_major' field must be an integer in [-2147483648, 2147483647]"
        self._rec_fw_major = value

    @builtins.property
    def rec_fw_minor(self):
        """Message field 'rec_fw_minor'."""
        return self._rec_fw_minor

    @rec_fw_minor.setter
    def rec_fw_minor(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'rec_fw_minor' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'rec_fw_minor' field must be an integer in [-2147483648, 2147483647]"
        self._rec_fw_minor = value

    @builtins.property
    def rec_fw_patch(self):
        """Message field 'rec_fw_patch'."""
        return self._rec_fw_patch

    @rec_fw_patch.setter
    def rec_fw_patch(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'rec_fw_patch' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'rec_fw_patch' field must be an integer in [-2147483648, 2147483647]"
        self._rec_fw_patch = value

    @builtins.property
    def bl_major(self):
        """Message field 'bl_major'."""
        return self._bl_major

    @bl_major.setter
    def bl_major(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'bl_major' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'bl_major' field must be an integer in [-2147483648, 2147483647]"
        self._bl_major = value

    @builtins.property
    def bl_minor(self):
        """Message field 'bl_minor'."""
        return self._bl_minor

    @bl_minor.setter
    def bl_minor(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'bl_minor' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'bl_minor' field must be an integer in [-2147483648, 2147483647]"
        self._bl_minor = value

    @builtins.property
    def status_enabled(self):
        """Message field 'status_enabled'."""
        return self._status_enabled

    @status_enabled.setter
    def status_enabled(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'status_enabled' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'status_enabled' field must be an unsigned integer in [0, 4294967295]"
        self._status_enabled = value

    @builtins.property
    def status_current_limitation(self):
        """Message field 'status_current_limitation'."""
        return self._status_current_limitation

    @status_current_limitation.setter
    def status_current_limitation(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'status_current_limitation' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'status_current_limitation' field must be an unsigned integer in [0, 4294967295]"
        self._status_current_limitation = value

    @builtins.property
    def status_switch_off_warn1(self):
        """Message field 'status_switch_off_warn1'."""
        return self._status_switch_off_warn1

    @status_switch_off_warn1.setter
    def status_switch_off_warn1(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'status_switch_off_warn1' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'status_switch_off_warn1' field must be an unsigned integer in [0, 4294967295]"
        self._status_switch_off_warn1 = value

    @builtins.property
    def status_switch_off_warn2(self):
        """Message field 'status_switch_off_warn2'."""
        return self._status_switch_off_warn2

    @status_switch_off_warn2.setter
    def status_switch_off_warn2(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'status_switch_off_warn2' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'status_switch_off_warn2' field must be an unsigned integer in [0, 4294967295]"
        self._status_switch_off_warn2 = value

    @builtins.property
    def status_fully_discharged(self):
        """Message field 'status_fully_discharged'."""
        return self._status_fully_discharged

    @status_fully_discharged.setter
    def status_fully_discharged(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'status_fully_discharged' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'status_fully_discharged' field must be an unsigned integer in [0, 4294967295]"
        self._status_fully_discharged = value

    @builtins.property
    def status_nearly_discharged(self):
        """Message field 'status_nearly_discharged'."""
        return self._status_nearly_discharged

    @status_nearly_discharged.setter
    def status_nearly_discharged(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'status_nearly_discharged' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'status_nearly_discharged' field must be an unsigned integer in [0, 4294967295]"
        self._status_nearly_discharged = value

    @builtins.property
    def status_chargefet_on(self):
        """Message field 'status_chargefet_on'."""
        return self._status_chargefet_on

    @status_chargefet_on.setter
    def status_chargefet_on(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'status_chargefet_on' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'status_chargefet_on' field must be an unsigned integer in [0, 4294967295]"
        self._status_chargefet_on = value

    @builtins.property
    def status_dischargefet_on(self):
        """Message field 'status_dischargefet_on'."""
        return self._status_dischargefet_on

    @status_dischargefet_on.setter
    def status_dischargefet_on(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'status_dischargefet_on' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'status_dischargefet_on' field must be an unsigned integer in [0, 4294967295]"
        self._status_dischargefet_on = value

    @builtins.property
    def status_discharging(self):
        """Message field 'status_discharging'."""
        return self._status_discharging

    @status_discharging.setter
    def status_discharging(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'status_discharging' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'status_discharging' field must be an unsigned integer in [0, 4294967295]"
        self._status_discharging = value

    @builtins.property
    def status_fully_charged(self):
        """Message field 'status_fully_charged'."""
        return self._status_fully_charged

    @status_fully_charged.setter
    def status_fully_charged(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'status_fully_charged' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'status_fully_charged' field must be an unsigned integer in [0, 4294967295]"
        self._status_fully_charged = value

    @builtins.property
    def status_charging(self):
        """Message field 'status_charging'."""
        return self._status_charging

    @status_charging.setter
    def status_charging(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'status_charging' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'status_charging' field must be an unsigned integer in [0, 4294967295]"
        self._status_charging = value

    @builtins.property
    def status_temp_charging_err(self):
        """Message field 'status_temp_charging_err'."""
        return self._status_temp_charging_err

    @status_temp_charging_err.setter
    def status_temp_charging_err(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'status_temp_charging_err' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'status_temp_charging_err' field must be an unsigned integer in [0, 4294967295]"
        self._status_temp_charging_err = value

    @builtins.property
    def status_cell_over_voltage(self):
        """Message field 'status_cell_over_voltage'."""
        return self._status_cell_over_voltage

    @status_cell_over_voltage.setter
    def status_cell_over_voltage(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'status_cell_over_voltage' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'status_cell_over_voltage' field must be an unsigned integer in [0, 4294967295]"
        self._status_cell_over_voltage = value

    @builtins.property
    def status_cell_under_voltage(self):
        """Message field 'status_cell_under_voltage'."""
        return self._status_cell_under_voltage

    @status_cell_under_voltage.setter
    def status_cell_under_voltage(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'status_cell_under_voltage' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'status_cell_under_voltage' field must be an unsigned integer in [0, 4294967295]"
        self._status_cell_under_voltage = value

    @builtins.property
    def status_charge_over_current(self):
        """Message field 'status_charge_over_current'."""
        return self._status_charge_over_current

    @status_charge_over_current.setter
    def status_charge_over_current(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'status_charge_over_current' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'status_charge_over_current' field must be an unsigned integer in [0, 4294967295]"
        self._status_charge_over_current = value

    @builtins.property
    def status_shortcircuit(self):
        """Message field 'status_shortcircuit'."""
        return self._status_shortcircuit

    @status_shortcircuit.setter
    def status_shortcircuit(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'status_shortcircuit' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'status_shortcircuit' field must be an unsigned integer in [0, 4294967295]"
        self._status_shortcircuit = value

    @builtins.property
    def status_discharge_over_current(self):
        """Message field 'status_discharge_over_current'."""
        return self._status_discharge_over_current

    @status_discharge_over_current.setter
    def status_discharge_over_current(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'status_discharge_over_current' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'status_discharge_over_current' field must be an unsigned integer in [0, 4294967295]"
        self._status_discharge_over_current = value

    @builtins.property
    def status_chargefet_voltage(self):
        """Message field 'status_chargefet_voltage'."""
        return self._status_chargefet_voltage

    @status_chargefet_voltage.setter
    def status_chargefet_voltage(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'status_chargefet_voltage' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'status_chargefet_voltage' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._status_chargefet_voltage = value

    @builtins.property
    def status_dischargefet_voltage(self):
        """Message field 'status_dischargefet_voltage'."""
        return self._status_dischargefet_voltage

    @status_dischargefet_voltage.setter
    def status_dischargefet_voltage(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'status_dischargefet_voltage' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'status_dischargefet_voltage' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._status_dischargefet_voltage = value

    @builtins.property
    def status_temp_discharging_err(self):
        """Message field 'status_temp_discharging_err'."""
        return self._status_temp_discharging_err

    @status_temp_discharging_err.setter
    def status_temp_discharging_err(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'status_temp_discharging_err' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'status_temp_discharging_err' field must be an unsigned integer in [0, 4294967295]"
        self._status_temp_discharging_err = value

    @builtins.property
    def status_charger_detected(self):
        """Message field 'status_charger_detected'."""
        return self._status_charger_detected

    @status_charger_detected.setter
    def status_charger_detected(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'status_charger_detected' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'status_charger_detected' field must be an unsigned integer in [0, 4294967295]"
        self._status_charger_detected = value

    @builtins.property
    def mnfct_bms_revision(self):
        """Message field 'mnfct_bms_revision'."""
        return self._mnfct_bms_revision

    @mnfct_bms_revision.setter
    def mnfct_bms_revision(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'mnfct_bms_revision' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'mnfct_bms_revision' field must be an unsigned integer in [0, 4294967295]"
        self._mnfct_bms_revision = value

    @builtins.property
    def mnfct_asn_revision(self):
        """Message field 'mnfct_asn_revision'."""
        return self._mnfct_asn_revision

    @mnfct_asn_revision.setter
    def mnfct_asn_revision(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'mnfct_asn_revision' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'mnfct_asn_revision' field must be an unsigned integer in [0, 4294967295]"
        self._mnfct_asn_revision = value

    @builtins.property
    def mnfct_year(self):
        """Message field 'mnfct_year'."""
        return self._mnfct_year

    @mnfct_year.setter
    def mnfct_year(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'mnfct_year' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'mnfct_year' field must be an unsigned integer in [0, 4294967295]"
        self._mnfct_year = value

    @builtins.property
    def mnfct_week(self):
        """Message field 'mnfct_week'."""
        return self._mnfct_week

    @mnfct_week.setter
    def mnfct_week(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'mnfct_week' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'mnfct_week' field must be an unsigned integer in [0, 4294967295]"
        self._mnfct_week = value

    @builtins.property
    def mnfct_model(self):
        """Message field 'mnfct_model'."""
        return self._mnfct_model

    @mnfct_model.setter
    def mnfct_model(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'mnfct_model' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'mnfct_model' field must be an unsigned integer in [0, 4294967295]"
        self._mnfct_model = value

    @builtins.property
    def mnfct_serial(self):
        """Message field 'mnfct_serial'."""
        return self._mnfct_serial

    @mnfct_serial.setter
    def mnfct_serial(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'mnfct_serial' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'mnfct_serial' field must be an unsigned integer in [0, 4294967295]"
        self._mnfct_serial = value

    @builtins.property
    def afe_i2c_error_count(self):
        """Message field 'afe_i2c_error_count'."""
        return self._afe_i2c_error_count

    @afe_i2c_error_count.setter
    def afe_i2c_error_count(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'afe_i2c_error_count' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'afe_i2c_error_count' field must be an unsigned integer in [0, 4294967295]"
        self._afe_i2c_error_count = value

    @builtins.property
    def app_error_count(self):
        """Message field 'app_error_count'."""
        return self._app_error_count

    @app_error_count.setter
    def app_error_count(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'app_error_count' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'app_error_count' field must be an unsigned integer in [0, 4294967295]"
        self._app_error_count = value

    @builtins.property
    def fet_disable_state(self):
        """Message field 'fet_disable_state'."""
        return self._fet_disable_state

    @fet_disable_state.setter
    def fet_disable_state(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'fet_disable_state' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'fet_disable_state' field must be an unsigned integer in [0, 4294967295]"
        self._fet_disable_state = value

    @builtins.property
    def last_battery_msg_time(self):
        """Message field 'last_battery_msg_time'."""
        return self._last_battery_msg_time

    @last_battery_msg_time.setter
    def last_battery_msg_time(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'last_battery_msg_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'last_battery_msg_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._last_battery_msg_time = value

    @builtins.property
    def sbs_battery_status(self):
        """Message field 'sbs_battery_status'."""
        return self._sbs_battery_status

    @sbs_battery_status.setter
    def sbs_battery_status(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'sbs_battery_status' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'sbs_battery_status' field must be an unsigned integer in [0, 4294967295]"
        self._sbs_battery_status = value

    @builtins.property
    def sbs_battery_status_raw(self):
        """Message field 'sbs_battery_status_raw'."""
        return self._sbs_battery_status_raw

    @sbs_battery_status_raw.setter
    def sbs_battery_status_raw(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'sbs_battery_status_raw' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'sbs_battery_status_raw' field must be an unsigned integer in [0, 4294967295]"
        self._sbs_battery_status_raw = value

    @builtins.property
    def sbs_serial_1(self):
        """Message field 'sbs_serial_1'."""
        return self._sbs_serial_1

    @sbs_serial_1.setter
    def sbs_serial_1(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'sbs_serial_1' field must be of type 'str'"
        self._sbs_serial_1 = value

    @builtins.property
    def sbs_serial_2(self):
        """Message field 'sbs_serial_2'."""
        return self._sbs_serial_2

    @sbs_serial_2.setter
    def sbs_serial_2(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'sbs_serial_2' field must be of type 'str'"
        self._sbs_serial_2 = value

    @builtins.property
    def sbs_arti_nr_1(self):
        """Message field 'sbs_arti_nr_1'."""
        return self._sbs_arti_nr_1

    @sbs_arti_nr_1.setter
    def sbs_arti_nr_1(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'sbs_arti_nr_1' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'sbs_arti_nr_1' field must be an unsigned integer in [0, 4294967295]"
        self._sbs_arti_nr_1 = value

    @builtins.property
    def sbs_arti_nr_2(self):
        """Message field 'sbs_arti_nr_2'."""
        return self._sbs_arti_nr_2

    @sbs_arti_nr_2.setter
    def sbs_arti_nr_2(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'sbs_arti_nr_2' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'sbs_arti_nr_2' field must be an unsigned integer in [0, 4294967295]"
        self._sbs_arti_nr_2 = value

    @builtins.property
    def sbs_arti_nr_3(self):
        """Message field 'sbs_arti_nr_3'."""
        return self._sbs_arti_nr_3

    @sbs_arti_nr_3.setter
    def sbs_arti_nr_3(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'sbs_arti_nr_3' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'sbs_arti_nr_3' field must be an unsigned integer in [0, 4294967295]"
        self._sbs_arti_nr_3 = value

    @builtins.property
    def sbs_curr_flow_passive_state(self):
        """Message field 'sbs_curr_flow_passive_state'."""
        return self._sbs_curr_flow_passive_state

    @sbs_curr_flow_passive_state.setter
    def sbs_curr_flow_passive_state(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'sbs_curr_flow_passive_state' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'sbs_curr_flow_passive_state' field must be an unsigned integer in [0, 4294967295]"
        self._sbs_curr_flow_passive_state = value

    @builtins.property
    def chg_oc1_count(self):
        """Message field 'chg_oc1_count'."""
        return self._chg_oc1_count

    @chg_oc1_count.setter
    def chg_oc1_count(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'chg_oc1_count' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'chg_oc1_count' field must be an unsigned integer in [0, 255]"
        self._chg_oc1_count = value

    @builtins.property
    def chg_oc2_count(self):
        """Message field 'chg_oc2_count'."""
        return self._chg_oc2_count

    @chg_oc2_count.setter
    def chg_oc2_count(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'chg_oc2_count' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'chg_oc2_count' field must be an unsigned integer in [0, 255]"
        self._chg_oc2_count = value

    @builtins.property
    def dsg_oc1_count(self):
        """Message field 'dsg_oc1_count'."""
        return self._dsg_oc1_count

    @dsg_oc1_count.setter
    def dsg_oc1_count(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'dsg_oc1_count' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'dsg_oc1_count' field must be an unsigned integer in [0, 255]"
        self._dsg_oc1_count = value

    @builtins.property
    def dsg_oc2_count(self):
        """Message field 'dsg_oc2_count'."""
        return self._dsg_oc2_count

    @dsg_oc2_count.setter
    def dsg_oc2_count(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'dsg_oc2_count' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'dsg_oc2_count' field must be an unsigned integer in [0, 255]"
        self._dsg_oc2_count = value

    @builtins.property
    def dsg_oc3_count(self):
        """Message field 'dsg_oc3_count'."""
        return self._dsg_oc3_count

    @dsg_oc3_count.setter
    def dsg_oc3_count(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'dsg_oc3_count' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'dsg_oc3_count' field must be an unsigned integer in [0, 255]"
        self._dsg_oc3_count = value

    @builtins.property
    def afe_oc1_count(self):
        """Message field 'afe_oc1_count'."""
        return self._afe_oc1_count

    @afe_oc1_count.setter
    def afe_oc1_count(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'afe_oc1_count' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'afe_oc1_count' field must be an unsigned integer in [0, 255]"
        self._afe_oc1_count = value

    @builtins.property
    def afe_oc2_count(self):
        """Message field 'afe_oc2_count'."""
        return self._afe_oc2_count

    @afe_oc2_count.setter
    def afe_oc2_count(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'afe_oc2_count' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'afe_oc2_count' field must be an unsigned integer in [0, 255]"
        self._afe_oc2_count = value

    @builtins.property
    def chg_latch_clear_count(self):
        """Message field 'chg_latch_clear_count'."""
        return self._chg_latch_clear_count

    @chg_latch_clear_count.setter
    def chg_latch_clear_count(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'chg_latch_clear_count' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'chg_latch_clear_count' field must be an unsigned integer in [0, 255]"
        self._chg_latch_clear_count = value

    @builtins.property
    def dsg_latch_clear_count(self):
        """Message field 'dsg_latch_clear_count'."""
        return self._dsg_latch_clear_count

    @dsg_latch_clear_count.setter
    def dsg_latch_clear_count(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'dsg_latch_clear_count' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'dsg_latch_clear_count' field must be an unsigned integer in [0, 255]"
        self._dsg_latch_clear_count = value

    @builtins.property
    def chg_oc_warning(self):
        """Message field 'chg_oc_warning'."""
        return self._chg_oc_warning

    @chg_oc_warning.setter
    def chg_oc_warning(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'chg_oc_warning' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'chg_oc_warning' field must be an unsigned integer in [0, 255]"
        self._chg_oc_warning = value

    @builtins.property
    def dsg_oc_warning(self):
        """Message field 'dsg_oc_warning'."""
        return self._dsg_oc_warning

    @dsg_oc_warning.setter
    def dsg_oc_warning(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'dsg_oc_warning' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'dsg_oc_warning' field must be an unsigned integer in [0, 255]"
        self._dsg_oc_warning = value
