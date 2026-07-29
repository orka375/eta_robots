# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mir_msgs:msg/SkidDetectionDiff.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SkidDetectionDiff(type):
    """Metaclass of message 'SkidDetectionDiff'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
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
                'mir_msgs.msg.SkidDetectionDiff')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__skid_detection_diff
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__skid_detection_diff
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__skid_detection_diff
            cls._TYPE_SUPPORT = module.type_support_msg__msg__skid_detection_diff
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__skid_detection_diff

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SkidDetectionDiff(metaclass=Metaclass_SkidDetectionDiff):
    """Message class 'SkidDetectionDiff'."""

    __slots__ = [
        '_time_stamp',
        '_enc_acc_x',
        '_enc_acc_y',
        '_enc_rot_th',
        '_imu_acc_x',
        '_imu_acc_y',
        '_imu_rot_th',
        '_diff_acc_x',
        '_diff_acc_y',
        '_diff_rot_th',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'time_stamp': 'builtin_interfaces/Time',
        'enc_acc_x': 'double',
        'enc_acc_y': 'double',
        'enc_rot_th': 'double',
        'imu_acc_x': 'double',
        'imu_acc_y': 'double',
        'imu_rot_th': 'double',
        'diff_acc_x': 'double',
        'diff_acc_y': 'double',
        'diff_rot_th': 'double',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
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
        from builtin_interfaces.msg import Time
        self.time_stamp = kwargs.get('time_stamp', Time())
        self.enc_acc_x = kwargs.get('enc_acc_x', float())
        self.enc_acc_y = kwargs.get('enc_acc_y', float())
        self.enc_rot_th = kwargs.get('enc_rot_th', float())
        self.imu_acc_x = kwargs.get('imu_acc_x', float())
        self.imu_acc_y = kwargs.get('imu_acc_y', float())
        self.imu_rot_th = kwargs.get('imu_rot_th', float())
        self.diff_acc_x = kwargs.get('diff_acc_x', float())
        self.diff_acc_y = kwargs.get('diff_acc_y', float())
        self.diff_rot_th = kwargs.get('diff_rot_th', float())

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
        if self.time_stamp != other.time_stamp:
            return False
        if self.enc_acc_x != other.enc_acc_x:
            return False
        if self.enc_acc_y != other.enc_acc_y:
            return False
        if self.enc_rot_th != other.enc_rot_th:
            return False
        if self.imu_acc_x != other.imu_acc_x:
            return False
        if self.imu_acc_y != other.imu_acc_y:
            return False
        if self.imu_rot_th != other.imu_rot_th:
            return False
        if self.diff_acc_x != other.diff_acc_x:
            return False
        if self.diff_acc_y != other.diff_acc_y:
            return False
        if self.diff_rot_th != other.diff_rot_th:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def time_stamp(self):
        """Message field 'time_stamp'."""
        return self._time_stamp

    @time_stamp.setter
    def time_stamp(self, value):
        if self._check_fields:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'time_stamp' field must be a sub message of type 'Time'"
        self._time_stamp = value

    @builtins.property
    def enc_acc_x(self):
        """Message field 'enc_acc_x'."""
        return self._enc_acc_x

    @enc_acc_x.setter
    def enc_acc_x(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'enc_acc_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'enc_acc_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._enc_acc_x = value

    @builtins.property
    def enc_acc_y(self):
        """Message field 'enc_acc_y'."""
        return self._enc_acc_y

    @enc_acc_y.setter
    def enc_acc_y(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'enc_acc_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'enc_acc_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._enc_acc_y = value

    @builtins.property
    def enc_rot_th(self):
        """Message field 'enc_rot_th'."""
        return self._enc_rot_th

    @enc_rot_th.setter
    def enc_rot_th(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'enc_rot_th' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'enc_rot_th' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._enc_rot_th = value

    @builtins.property
    def imu_acc_x(self):
        """Message field 'imu_acc_x'."""
        return self._imu_acc_x

    @imu_acc_x.setter
    def imu_acc_x(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'imu_acc_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'imu_acc_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._imu_acc_x = value

    @builtins.property
    def imu_acc_y(self):
        """Message field 'imu_acc_y'."""
        return self._imu_acc_y

    @imu_acc_y.setter
    def imu_acc_y(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'imu_acc_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'imu_acc_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._imu_acc_y = value

    @builtins.property
    def imu_rot_th(self):
        """Message field 'imu_rot_th'."""
        return self._imu_rot_th

    @imu_rot_th.setter
    def imu_rot_th(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'imu_rot_th' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'imu_rot_th' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._imu_rot_th = value

    @builtins.property
    def diff_acc_x(self):
        """Message field 'diff_acc_x'."""
        return self._diff_acc_x

    @diff_acc_x.setter
    def diff_acc_x(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'diff_acc_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'diff_acc_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._diff_acc_x = value

    @builtins.property
    def diff_acc_y(self):
        """Message field 'diff_acc_y'."""
        return self._diff_acc_y

    @diff_acc_y.setter
    def diff_acc_y(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'diff_acc_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'diff_acc_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._diff_acc_y = value

    @builtins.property
    def diff_rot_th(self):
        """Message field 'diff_rot_th'."""
        return self._diff_rot_th

    @diff_rot_th.setter
    def diff_rot_th(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'diff_rot_th' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'diff_rot_th' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._diff_rot_th = value
