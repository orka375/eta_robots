# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mir_msgs:msg/PrecisionDockingStatus.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PrecisionDockingStatus(type):
    """Metaclass of message 'PrecisionDockingStatus'."""

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
                'mir_msgs.msg.PrecisionDockingStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__precision_docking_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__precision_docking_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__precision_docking_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__precision_docking_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__precision_docking_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PrecisionDockingStatus(metaclass=Metaclass_PrecisionDockingStatus):
    """Message class 'PrecisionDockingStatus'."""

    __slots__ = [
        '_connected',
        '_motor_forward',
        '_motor_back',
        '_left_docking',
        '_right_docking',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'connected': 'boolean',
        'motor_forward': 'boolean',
        'motor_back': 'boolean',
        'left_docking': 'boolean',
        'right_docking': 'boolean',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        self.connected = kwargs.get('connected', bool())
        self.motor_forward = kwargs.get('motor_forward', bool())
        self.motor_back = kwargs.get('motor_back', bool())
        self.left_docking = kwargs.get('left_docking', bool())
        self.right_docking = kwargs.get('right_docking', bool())

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
        if self.connected != other.connected:
            return False
        if self.motor_forward != other.motor_forward:
            return False
        if self.motor_back != other.motor_back:
            return False
        if self.left_docking != other.left_docking:
            return False
        if self.right_docking != other.right_docking:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def connected(self):
        """Message field 'connected'."""
        return self._connected

    @connected.setter
    def connected(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'connected' field must be of type 'bool'"
        self._connected = value

    @builtins.property
    def motor_forward(self):
        """Message field 'motor_forward'."""
        return self._motor_forward

    @motor_forward.setter
    def motor_forward(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'motor_forward' field must be of type 'bool'"
        self._motor_forward = value

    @builtins.property
    def motor_back(self):
        """Message field 'motor_back'."""
        return self._motor_back

    @motor_back.setter
    def motor_back(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'motor_back' field must be of type 'bool'"
        self._motor_back = value

    @builtins.property
    def left_docking(self):
        """Message field 'left_docking'."""
        return self._left_docking

    @left_docking.setter
    def left_docking(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'left_docking' field must be of type 'bool'"
        self._left_docking = value

    @builtins.property
    def right_docking(self):
        """Message field 'right_docking'."""
        return self._right_docking

    @right_docking.setter
    def right_docking(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'right_docking' field must be of type 'bool'"
        self._right_docking = value
