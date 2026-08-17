# generated from rosidl_generator_py/resource/_idl.py.em
# with input from base_interfaces:srv/FaceDetector.idl
# generated code does not contain a copyright notice

from __future__ import annotations

import collections.abc
import os
import typing

import rosidl_pycommon.interface_base_classes

if typing.TYPE_CHECKING:
    from ctypes import Structure

    class PyCapsule(Structure):
        pass  # don't need to define the full structure


# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
ros_python_check_fields = os.getenv('ROS_PYTHON_CHECK_FIELDS', default='')


if typing.TYPE_CHECKING:
    import sensor_msgs.msg  # noqa: E402, I100, I201, I300


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FaceDetector_Request(rosidl_pycommon.interface_base_classes.MessageTypeSupportMeta):
    """Metaclass of message 'FaceDetector_Request'."""

    _CREATE_ROS_MESSAGE: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _CONVERT_FROM_PY: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _CONVERT_TO_PY: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _DESTROY_ROS_MESSAGE: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _TYPE_SUPPORT: typing.ClassVar[typing.Optional[PyCapsule]] = None

    class FaceDetector_RequestConstants(typing.TypedDict):
        pass

    __constants: FaceDetector_RequestConstants = {
    }

    @classmethod
    def __import_type_support__(cls) -> None:
        try:
            from rosidl_generator_py import import_type_support  # type: ignore[attr-defined]
            module = import_type_support('base_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'base_interfaces.srv.FaceDetector_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__face_detector__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__face_detector__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__face_detector__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__face_detector__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__face_detector__request

            from sensor_msgs.msg import Image
            if Image._TYPE_SUPPORT is None:
                Image.__import_type_support__()

    @classmethod
    def __prepare__(metacls, name: str, bases: tuple[type[typing.Any], ...], /, **kwds: typing.Any) -> collections.abc.MutableMapping[str, object]:
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FaceDetector_Request(rosidl_pycommon.interface_base_classes.BaseMessage, metaclass=Metaclass_FaceDetector_Request):
    """Message class 'FaceDetector_Request'."""

    __slots__ = [
        '_image',
        '_check_fields',
    ]

    _fields_and_field_types: dict[str, str] = {
        'image': 'sensor_msgs/Image',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES: tuple[rosidl_parser.definition.AbstractType, ...] = (
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Image'),  # noqa: E501
    )

    def __init__(self, *,
                 image: typing.Optional[sensor_msgs.msg.Image] = None,  # noqa: E501
                 check_fields: typing.Optional[bool] = None) -> None:
        if check_fields is not None:
            self._check_fields = check_fields
        else:
            self._check_fields = ros_python_check_fields == '1'
        from sensor_msgs.msg import Image
        self.image = image if image is not None else Image()

    def __repr__(self) -> str:
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args: list[str] = []
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
                    from rosidl_buffer import Buffer as _RosidlBuffer
                    if not isinstance(field, _RosidlBuffer):
                        if self._check_fields:
                            assert fieldstr.startswith('array(')
                        prefix = "array('X', "
                        suffix = ')'
                        fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other: object) -> bool:
        if not isinstance(other, FaceDetector_Request):
            return False
        if self.image != other.image:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls) -> dict[str, str]:
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def image(self) -> sensor_msgs.msg.Image:
        """Message field 'image'."""
        return self._image

    @image.setter
    def image(self, value: sensor_msgs.msg.Image) -> None:
        from sensor_msgs.msg import Image

        if self._check_fields:
            if False:  # Done for templating alignment
                pass
            else:
                assert \
                    isinstance(value, Image), \
                    "The 'image' field must be a sub message of type 'Image'"

        self._image = value


# Import statements for member types

# Member 'top'
# Member 'right'
# Member 'bottom'
# Member 'left'
import array  # noqa: E402, I100

# already imported above
# import builtins

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_FaceDetector_Response(rosidl_pycommon.interface_base_classes.MessageTypeSupportMeta):
    """Metaclass of message 'FaceDetector_Response'."""

    _CREATE_ROS_MESSAGE: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _CONVERT_FROM_PY: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _CONVERT_TO_PY: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _DESTROY_ROS_MESSAGE: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _TYPE_SUPPORT: typing.ClassVar[typing.Optional[PyCapsule]] = None

    class FaceDetector_ResponseConstants(typing.TypedDict):
        pass

    __constants: FaceDetector_ResponseConstants = {
    }

    @classmethod
    def __import_type_support__(cls) -> None:
        try:
            from rosidl_generator_py import import_type_support  # type: ignore[attr-defined]
            module = import_type_support('base_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'base_interfaces.srv.FaceDetector_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__face_detector__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__face_detector__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__face_detector__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__face_detector__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__face_detector__response

    @classmethod
    def __prepare__(metacls, name: str, bases: tuple[type[typing.Any], ...], /, **kwds: typing.Any) -> collections.abc.MutableMapping[str, object]:
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FaceDetector_Response(rosidl_pycommon.interface_base_classes.BaseMessage, metaclass=Metaclass_FaceDetector_Response):
    """Message class 'FaceDetector_Response'."""

    __slots__ = [
        '_number',
        '_use_time',
        '_top',
        '_right',
        '_bottom',
        '_left',
        '_check_fields',
    ]

    _fields_and_field_types: dict[str, str] = {
        'number': 'int16',
        'use_time': 'float',
        'top': 'sequence<int32>',
        'right': 'sequence<int32>',
        'bottom': 'sequence<int32>',
        'left': 'sequence<int32>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES: tuple[rosidl_parser.definition.AbstractType, ...] = (
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
    )

    def __init__(self, *,
                 number: typing.Optional[int] = None,  # noqa: E501
                 use_time: typing.Optional[float] = None,  # noqa: E501
                 top: typing.Optional[collections.abc.Sequence[int]] = None,  # noqa: E501
                 right: typing.Optional[collections.abc.Sequence[int]] = None,  # noqa: E501
                 bottom: typing.Optional[collections.abc.Sequence[int]] = None,  # noqa: E501
                 left: typing.Optional[collections.abc.Sequence[int]] = None,  # noqa: E501
                 check_fields: typing.Optional[bool] = None) -> None:
        if check_fields is not None:
            self._check_fields = check_fields
        else:
            self._check_fields = ros_python_check_fields == '1'
        self.number = number if number is not None else int()
        self.use_time = use_time if use_time is not None else float()
        self.top = top if top is not None else array.array('i', [])
        self.right = right if right is not None else array.array('i', [])
        self.bottom = bottom if bottom is not None else array.array('i', [])
        self.left = left if left is not None else array.array('i', [])

    def __repr__(self) -> str:
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args: list[str] = []
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
                    from rosidl_buffer import Buffer as _RosidlBuffer
                    if not isinstance(field, _RosidlBuffer):
                        if self._check_fields:
                            assert fieldstr.startswith('array(')
                        prefix = "array('X', "
                        suffix = ')'
                        fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other: object) -> bool:
        if not isinstance(other, FaceDetector_Response):
            return False
        if self.number != other.number:
            return False
        if self.use_time != other.use_time:
            return False
        if self.top != other.top:
            return False
        if self.right != other.right:
            return False
        if self.bottom != other.bottom:
            return False
        if self.left != other.left:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls) -> dict[str, str]:
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def number(self) -> int:
        """Message field 'number'."""
        return self._number

    @number.setter
    def number(self, value: int) -> None:

        if self._check_fields:
            if False:  # Done for templating alignment
                pass
            else:
                assert \
                    isinstance(value, int), \
                    "The 'number' field must be of type 'int'"
                assert value >= -32768 and value < 32768, \
                    "The 'number' field must be an integer in [-32768, 32767]"

        self._number = value

    @builtins.property
    def use_time(self) -> float:
        """Message field 'use_time'."""
        return self._use_time

    @use_time.setter
    def use_time(self, value: float) -> None:

        if self._check_fields:
            if False:  # Done for templating alignment
                pass
            else:
                assert \
                    isinstance(value, float), \
                    "The 'use_time' field must be of type 'float'"
                assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                    "The 'use_time' field must be a float in [-3.402823466e+38, 3.402823466e+38]"

        self._use_time = value

    @builtins.property
    def top(self) -> typing.Annotated[typing.Any, array.array[int]]:   # typing.Annotated can be remove after mypy 1.16+ see mypy#3004
        """Message field 'top'."""
        return self._top

    @top.setter
    def top(self, value: collections.abc.Sequence[int]) -> None:
        if isinstance(value, collections.abc.Set):
            import warnings
            warnings.warn(
                'Using set or subclass of set is deprecated,'
                ' please use a subclass of collections.abc.Sequence like list',
                DeprecationWarning)

        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'i', \
                    "The 'top' array.array() must have the type code of 'i'"
            else:
                assert \
                    ((isinstance(value, collections.abc.Sequence) or
                     isinstance(value, collections.abc.Set)) and
                     not isinstance(value, str) and
                     not isinstance(value, collections.UserString) and
                     all(isinstance(v, int) for v in value) and
                     all(val >= -2147483648 and val < 2147483648 for val in value)), \
                    "The 'top' field must be sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"

        if isinstance(value, array.array):
            self._top = value
            return
        # type ignore below fixed in mypy 1.17+ see mypy#19421
        self._top = array.array('i', value)  # type: ignore[assignment]

    @builtins.property
    def right(self) -> typing.Annotated[typing.Any, array.array[int]]:   # typing.Annotated can be remove after mypy 1.16+ see mypy#3004
        """Message field 'right'."""
        return self._right

    @right.setter
    def right(self, value: collections.abc.Sequence[int]) -> None:
        if isinstance(value, collections.abc.Set):
            import warnings
            warnings.warn(
                'Using set or subclass of set is deprecated,'
                ' please use a subclass of collections.abc.Sequence like list',
                DeprecationWarning)

        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'i', \
                    "The 'right' array.array() must have the type code of 'i'"
            else:
                assert \
                    ((isinstance(value, collections.abc.Sequence) or
                     isinstance(value, collections.abc.Set)) and
                     not isinstance(value, str) and
                     not isinstance(value, collections.UserString) and
                     all(isinstance(v, int) for v in value) and
                     all(val >= -2147483648 and val < 2147483648 for val in value)), \
                    "The 'right' field must be sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"

        if isinstance(value, array.array):
            self._right = value
            return
        # type ignore below fixed in mypy 1.17+ see mypy#19421
        self._right = array.array('i', value)  # type: ignore[assignment]

    @builtins.property
    def bottom(self) -> typing.Annotated[typing.Any, array.array[int]]:   # typing.Annotated can be remove after mypy 1.16+ see mypy#3004
        """Message field 'bottom'."""
        return self._bottom

    @bottom.setter
    def bottom(self, value: collections.abc.Sequence[int]) -> None:
        if isinstance(value, collections.abc.Set):
            import warnings
            warnings.warn(
                'Using set or subclass of set is deprecated,'
                ' please use a subclass of collections.abc.Sequence like list',
                DeprecationWarning)

        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'i', \
                    "The 'bottom' array.array() must have the type code of 'i'"
            else:
                assert \
                    ((isinstance(value, collections.abc.Sequence) or
                     isinstance(value, collections.abc.Set)) and
                     not isinstance(value, str) and
                     not isinstance(value, collections.UserString) and
                     all(isinstance(v, int) for v in value) and
                     all(val >= -2147483648 and val < 2147483648 for val in value)), \
                    "The 'bottom' field must be sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"

        if isinstance(value, array.array):
            self._bottom = value
            return
        # type ignore below fixed in mypy 1.17+ see mypy#19421
        self._bottom = array.array('i', value)  # type: ignore[assignment]

    @builtins.property
    def left(self) -> typing.Annotated[typing.Any, array.array[int]]:   # typing.Annotated can be remove after mypy 1.16+ see mypy#3004
        """Message field 'left'."""
        return self._left

    @left.setter
    def left(self, value: collections.abc.Sequence[int]) -> None:
        if isinstance(value, collections.abc.Set):
            import warnings
            warnings.warn(
                'Using set or subclass of set is deprecated,'
                ' please use a subclass of collections.abc.Sequence like list',
                DeprecationWarning)

        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'i', \
                    "The 'left' array.array() must have the type code of 'i'"
            else:
                assert \
                    ((isinstance(value, collections.abc.Sequence) or
                     isinstance(value, collections.abc.Set)) and
                     not isinstance(value, str) and
                     not isinstance(value, collections.UserString) and
                     all(isinstance(v, int) for v in value) and
                     all(val >= -2147483648 and val < 2147483648 for val in value)), \
                    "The 'left' field must be sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"

        if isinstance(value, array.array):
            self._left = value
            return
        # type ignore below fixed in mypy 1.17+ see mypy#19421
        self._left = array.array('i', value)  # type: ignore[assignment]


if typing.TYPE_CHECKING:
    import base_interfaces.srv  # noqa: E402, I100, I201, I300
    import service_msgs.msg  # noqa: E402, I100, I201, I300


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_FaceDetector_Event(rosidl_pycommon.interface_base_classes.MessageTypeSupportMeta):
    """Metaclass of message 'FaceDetector_Event'."""

    _CREATE_ROS_MESSAGE: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _CONVERT_FROM_PY: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _CONVERT_TO_PY: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _DESTROY_ROS_MESSAGE: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _TYPE_SUPPORT: typing.ClassVar[typing.Optional[PyCapsule]] = None

    class FaceDetector_EventConstants(typing.TypedDict):
        pass

    __constants: FaceDetector_EventConstants = {
    }

    @classmethod
    def __import_type_support__(cls) -> None:
        try:
            from rosidl_generator_py import import_type_support  # type: ignore[attr-defined]
            module = import_type_support('base_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'base_interfaces.srv.FaceDetector_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__face_detector__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__face_detector__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__face_detector__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__face_detector__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__face_detector__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo._TYPE_SUPPORT is None:
                ServiceEventInfo.__import_type_support__()

    @classmethod
    def __prepare__(metacls, name: str, bases: tuple[type[typing.Any], ...], /, **kwds: typing.Any) -> collections.abc.MutableMapping[str, object]:
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FaceDetector_Event(rosidl_pycommon.interface_base_classes.BaseMessage, metaclass=Metaclass_FaceDetector_Event):
    """Message class 'FaceDetector_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types: dict[str, str] = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<base_interfaces/FaceDetector_Request, 1>',
        'response': 'sequence<base_interfaces/FaceDetector_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES: tuple[rosidl_parser.definition.AbstractType, ...] = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['base_interfaces', 'srv'], 'FaceDetector_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['base_interfaces', 'srv'], 'FaceDetector_Response'), 1),  # noqa: E501
    )

    def __init__(self, *,
                 info: typing.Optional[service_msgs.msg.ServiceEventInfo] = None,  # noqa: E501
                 request: typing.Optional[collections.abc.Sequence[base_interfaces.srv.FaceDetector_Request]] = None,  # noqa: E501
                 response: typing.Optional[collections.abc.Sequence[base_interfaces.srv.FaceDetector_Response]] = None,  # noqa: E501
                 check_fields: typing.Optional[bool] = None) -> None:
        if check_fields is not None:
            self._check_fields = check_fields
        else:
            self._check_fields = ros_python_check_fields == '1'
        from service_msgs.msg import ServiceEventInfo
        self.info = info if info is not None else ServiceEventInfo()
        self.request = request if request is not None else []
        self.response = response if response is not None else []

    def __repr__(self) -> str:
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args: list[str] = []
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
                    from rosidl_buffer import Buffer as _RosidlBuffer
                    if not isinstance(field, _RosidlBuffer):
                        if self._check_fields:
                            assert fieldstr.startswith('array(')
                        prefix = "array('X', "
                        suffix = ')'
                        fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other: object) -> bool:
        if not isinstance(other, FaceDetector_Event):
            return False
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls) -> dict[str, str]:
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self) -> service_msgs.msg.ServiceEventInfo:
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value: service_msgs.msg.ServiceEventInfo) -> None:
        from service_msgs.msg import ServiceEventInfo

        if self._check_fields:
            if False:  # Done for templating alignment
                pass
            else:
                assert \
                    isinstance(value, ServiceEventInfo), \
                    "The 'info' field must be a sub message of type 'ServiceEventInfo'"

        self._info = value

    @builtins.property
    def request(self) -> typing.Annotated[typing.Any, list[base_interfaces.srv.FaceDetector_Request]]:   # typing.Annotated can be remove after mypy 1.16+ see mypy#3004
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value: collections.abc.Sequence[base_interfaces.srv.FaceDetector_Request]) -> None:
        if isinstance(value, collections.abc.Set):
            import warnings
            warnings.warn(
                'Using set or subclass of set is deprecated,'
                ' please use a subclass of collections.abc.Sequence like list',
                DeprecationWarning)
        from base_interfaces.srv import FaceDetector_Request

        if self._check_fields:
            if False:  # Done for templating alignment
                pass
            else:
                assert \
                    ((isinstance(value, collections.abc.Sequence) or
                     isinstance(value, collections.abc.Set)) and
                     not isinstance(value, str) and
                     not isinstance(value, collections.UserString) and
                     len(value) <= 1 and
                     all(isinstance(v, FaceDetector_Request) for v in value) and
                     True), \
                    "The 'request' field must be sequence with length <= 1 and each value of type 'FaceDetector_Request'"

        if isinstance(value, list):
            self._request = value
            return
        self._request = list(value)

    @builtins.property
    def response(self) -> typing.Annotated[typing.Any, list[base_interfaces.srv.FaceDetector_Response]]:   # typing.Annotated can be remove after mypy 1.16+ see mypy#3004
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value: collections.abc.Sequence[base_interfaces.srv.FaceDetector_Response]) -> None:
        if isinstance(value, collections.abc.Set):
            import warnings
            warnings.warn(
                'Using set or subclass of set is deprecated,'
                ' please use a subclass of collections.abc.Sequence like list',
                DeprecationWarning)
        from base_interfaces.srv import FaceDetector_Response

        if self._check_fields:
            if False:  # Done for templating alignment
                pass
            else:
                assert \
                    ((isinstance(value, collections.abc.Sequence) or
                     isinstance(value, collections.abc.Set)) and
                     not isinstance(value, str) and
                     not isinstance(value, collections.UserString) and
                     len(value) <= 1 and
                     all(isinstance(v, FaceDetector_Response) for v in value) and
                     True), \
                    "The 'response' field must be sequence with length <= 1 and each value of type 'FaceDetector_Response'"

        if isinstance(value, list):
            self._response = value
            return
        self._response = list(value)


if typing.TYPE_CHECKING:
    from typing_extensions import TypeAlias  # noqa: I100, I300


class Metaclass_FaceDetector(rosidl_pycommon.interface_base_classes.ServiceTypeSupportMeta):
    """Metaclass of service 'FaceDetector'."""

    _TYPE_SUPPORT: typing.ClassVar[typing.Optional[PyCapsule]] = None

    @classmethod
    def __import_type_support__(cls) -> None:
        try:
            from rosidl_generator_py import import_type_support  # type: ignore[attr-defined]
            module = import_type_support('base_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'base_interfaces.srv.FaceDetector')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__face_detector

            from base_interfaces.srv import _face_detector
            if _face_detector.Metaclass_FaceDetector_Request._TYPE_SUPPORT is None:
                _face_detector.Metaclass_FaceDetector_Request.__import_type_support__()
            if _face_detector.Metaclass_FaceDetector_Response._TYPE_SUPPORT is None:
                _face_detector.Metaclass_FaceDetector_Response.__import_type_support__()
            if _face_detector.Metaclass_FaceDetector_Event._TYPE_SUPPORT is None:
                _face_detector.Metaclass_FaceDetector_Event.__import_type_support__()


class FaceDetector(rosidl_pycommon.interface_base_classes.BaseService[
    FaceDetector_Request,
    FaceDetector_Response
], metaclass=Metaclass_FaceDetector):
    Request: TypeAlias = FaceDetector_Request
    Response: TypeAlias = FaceDetector_Response
    Event: TypeAlias = FaceDetector_Event

    # Should eventually be typing.NoReturn. See mypy#14044
    def __init__(self) -> None:
        raise NotImplementedError('Service classes can not be instantiated')
