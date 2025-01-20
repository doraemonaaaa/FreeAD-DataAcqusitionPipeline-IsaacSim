# generated from rosidl_generator_py/resource/_idl.py.em
# with input from robot_hardware:msg/IssacHardwareData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_IssacHardwareData(type):
    """Metaclass of message 'IssacHardwareData'."""

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
            module = import_type_support('robot_hardware')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robot_hardware.msg.IssacHardwareData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__issac_hardware_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__issac_hardware_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__issac_hardware_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__issac_hardware_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__issac_hardware_data

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class IssacHardwareData(metaclass=Metaclass_IssacHardwareData):
    """Message class 'IssacHardwareData'."""

    __slots__ = [
        '_real_speed_l',
        '_real_speed_r',
        '_expect_speed_l',
        '_expect_speed_r',
    ]

    _fields_and_field_types = {
        'real_speed_l': 'double',
        'real_speed_r': 'double',
        'expect_speed_l': 'double',
        'expect_speed_r': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.real_speed_l = kwargs.get('real_speed_l', float())
        self.real_speed_r = kwargs.get('real_speed_r', float())
        self.expect_speed_l = kwargs.get('expect_speed_l', float())
        self.expect_speed_r = kwargs.get('expect_speed_r', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
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
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.real_speed_l != other.real_speed_l:
            return False
        if self.real_speed_r != other.real_speed_r:
            return False
        if self.expect_speed_l != other.expect_speed_l:
            return False
        if self.expect_speed_r != other.expect_speed_r:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def real_speed_l(self):
        """Message field 'real_speed_l'."""
        return self._real_speed_l

    @real_speed_l.setter
    def real_speed_l(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'real_speed_l' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'real_speed_l' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._real_speed_l = value

    @builtins.property
    def real_speed_r(self):
        """Message field 'real_speed_r'."""
        return self._real_speed_r

    @real_speed_r.setter
    def real_speed_r(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'real_speed_r' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'real_speed_r' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._real_speed_r = value

    @builtins.property
    def expect_speed_l(self):
        """Message field 'expect_speed_l'."""
        return self._expect_speed_l

    @expect_speed_l.setter
    def expect_speed_l(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'expect_speed_l' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'expect_speed_l' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._expect_speed_l = value

    @builtins.property
    def expect_speed_r(self):
        """Message field 'expect_speed_r'."""
        return self._expect_speed_r

    @expect_speed_r.setter
    def expect_speed_r(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'expect_speed_r' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'expect_speed_r' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._expect_speed_r = value
