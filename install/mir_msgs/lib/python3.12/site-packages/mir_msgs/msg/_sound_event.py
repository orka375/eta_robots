# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mir_msgs:msg/SoundEvent.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SoundEvent(type):
    """Metaclass of message 'SoundEvent'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'START': 0,
        'STOP': 1,
        'MUTE': 2,
        'UNMUTE': 3,
        'PAUSE': 4,
        'UNPAUSE': 5,
        'FINISH': 6,
        'MUTEABLE': 7,
        'REQ_PLAY': 10,
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
                'mir_msgs.msg.SoundEvent')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sound_event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sound_event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sound_event
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sound_event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sound_event

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'START': cls.__constants['START'],
            'STOP': cls.__constants['STOP'],
            'MUTE': cls.__constants['MUTE'],
            'UNMUTE': cls.__constants['UNMUTE'],
            'PAUSE': cls.__constants['PAUSE'],
            'UNPAUSE': cls.__constants['UNPAUSE'],
            'FINISH': cls.__constants['FINISH'],
            'MUTEABLE': cls.__constants['MUTEABLE'],
            'REQ_PLAY': cls.__constants['REQ_PLAY'],
        }

    @property
    def START(self):
        """Message constant 'START'."""
        return Metaclass_SoundEvent.__constants['START']

    @property
    def STOP(self):
        """Message constant 'STOP'."""
        return Metaclass_SoundEvent.__constants['STOP']

    @property
    def MUTE(self):
        """Message constant 'MUTE'."""
        return Metaclass_SoundEvent.__constants['MUTE']

    @property
    def UNMUTE(self):
        """Message constant 'UNMUTE'."""
        return Metaclass_SoundEvent.__constants['UNMUTE']

    @property
    def PAUSE(self):
        """Message constant 'PAUSE'."""
        return Metaclass_SoundEvent.__constants['PAUSE']

    @property
    def UNPAUSE(self):
        """Message constant 'UNPAUSE'."""
        return Metaclass_SoundEvent.__constants['UNPAUSE']

    @property
    def FINISH(self):
        """Message constant 'FINISH'."""
        return Metaclass_SoundEvent.__constants['FINISH']

    @property
    def MUTEABLE(self):
        """Message constant 'MUTEABLE'."""
        return Metaclass_SoundEvent.__constants['MUTEABLE']

    @property
    def REQ_PLAY(self):
        """Message constant 'REQ_PLAY'."""
        return Metaclass_SoundEvent.__constants['REQ_PLAY']


class SoundEvent(metaclass=Metaclass_SoundEvent):
    """
    Message class 'SoundEvent'.

    Constants:
      START
      STOP
      MUTE
      UNMUTE
      PAUSE
      UNPAUSE
      FINISH
      MUTEABLE
      REQ_PLAY
    """

    __slots__ = [
        '_time_stamp',
        '_sound_guid',
        '_message',
        '_event',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'time_stamp': 'builtin_interfaces/Time',
        'sound_guid': 'string',
        'message': 'string',
        'event': 'uint8',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
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
        from builtin_interfaces.msg import Time
        self.time_stamp = kwargs.get('time_stamp', Time())
        self.sound_guid = kwargs.get('sound_guid', str())
        self.message = kwargs.get('message', str())
        self.event = kwargs.get('event', int())

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
        if self.sound_guid != other.sound_guid:
            return False
        if self.message != other.message:
            return False
        if self.event != other.event:
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
    def sound_guid(self):
        """Message field 'sound_guid'."""
        return self._sound_guid

    @sound_guid.setter
    def sound_guid(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'sound_guid' field must be of type 'str'"
        self._sound_guid = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value

    @builtins.property
    def event(self):
        """Message field 'event'."""
        return self._event

    @event.setter
    def event(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'event' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'event' field must be an unsigned integer in [0, 255]"
        self._event = value
