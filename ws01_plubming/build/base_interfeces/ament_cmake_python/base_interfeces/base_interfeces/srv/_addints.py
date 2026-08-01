# generated from rosidl_generator_py/resource/_idl.py.em
# with input from base_interfeces:srv/Addints.idl
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


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Addints_Request(rosidl_pycommon.interface_base_classes.MessageTypeSupportMeta):
    """Metaclass of message 'Addints_Request'."""

    _CREATE_ROS_MESSAGE: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _CONVERT_FROM_PY: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _CONVERT_TO_PY: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _DESTROY_ROS_MESSAGE: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _TYPE_SUPPORT: typing.ClassVar[typing.Optional[PyCapsule]] = None

    class Addints_RequestConstants(typing.TypedDict):
        pass

    __constants: Addints_RequestConstants = {
    }

    @classmethod
    def __import_type_support__(cls) -> None:
        try:
            from rosidl_generator_py import import_type_support  # type: ignore[attr-defined]
            module = import_type_support('base_interfeces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'base_interfeces.srv.Addints_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__addints__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__addints__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__addints__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__addints__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__addints__request

    @classmethod
    def __prepare__(metacls, name: str, bases: tuple[type[typing.Any], ...], /, **kwds: typing.Any) -> collections.abc.MutableMapping[str, object]:
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Addints_Request(rosidl_pycommon.interface_base_classes.BaseMessage, metaclass=Metaclass_Addints_Request):
    """Message class 'Addints_Request'."""

    __slots__ = [
        '_num1',
        '_num2',
        '_check_fields',
    ]

    _fields_and_field_types: dict[str, str] = {
        'num1': 'int32',
        'num2': 'int32',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES: tuple[rosidl_parser.definition.AbstractType, ...] = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, *,
                 num1: typing.Optional[int] = None,  # noqa: E501
                 num2: typing.Optional[int] = None,  # noqa: E501
                 check_fields: typing.Optional[bool] = None) -> None:
        if check_fields is not None:
            self._check_fields = check_fields
        else:
            self._check_fields = ros_python_check_fields == '1'
        self.num1 = num1 if num1 is not None else int()
        self.num2 = num2 if num2 is not None else int()

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
        if not isinstance(other, Addints_Request):
            return False
        if self.num1 != other.num1:
            return False
        if self.num2 != other.num2:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls) -> dict[str, str]:
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def num1(self) -> int:
        """Message field 'num1'."""
        return self._num1

    @num1.setter
    def num1(self, value: int) -> None:

        if self._check_fields:
            if False:  # Done for templating alignment
                pass
            else:
                assert \
                    isinstance(value, int), \
                    "The 'num1' field must be of type 'int'"
                assert value >= -2147483648 and value < 2147483648, \
                    "The 'num1' field must be an integer in [-2147483648, 2147483647]"

        self._num1 = value

    @builtins.property
    def num2(self) -> int:
        """Message field 'num2'."""
        return self._num2

    @num2.setter
    def num2(self, value: int) -> None:

        if self._check_fields:
            if False:  # Done for templating alignment
                pass
            else:
                assert \
                    isinstance(value, int), \
                    "The 'num2' field must be of type 'int'"
                assert value >= -2147483648 and value < 2147483648, \
                    "The 'num2' field must be an integer in [-2147483648, 2147483647]"

        self._num2 = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Addints_Response(rosidl_pycommon.interface_base_classes.MessageTypeSupportMeta):
    """Metaclass of message 'Addints_Response'."""

    _CREATE_ROS_MESSAGE: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _CONVERT_FROM_PY: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _CONVERT_TO_PY: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _DESTROY_ROS_MESSAGE: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _TYPE_SUPPORT: typing.ClassVar[typing.Optional[PyCapsule]] = None

    class Addints_ResponseConstants(typing.TypedDict):
        pass

    __constants: Addints_ResponseConstants = {
    }

    @classmethod
    def __import_type_support__(cls) -> None:
        try:
            from rosidl_generator_py import import_type_support  # type: ignore[attr-defined]
            module = import_type_support('base_interfeces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'base_interfeces.srv.Addints_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__addints__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__addints__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__addints__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__addints__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__addints__response

    @classmethod
    def __prepare__(metacls, name: str, bases: tuple[type[typing.Any], ...], /, **kwds: typing.Any) -> collections.abc.MutableMapping[str, object]:
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Addints_Response(rosidl_pycommon.interface_base_classes.BaseMessage, metaclass=Metaclass_Addints_Response):
    """Message class 'Addints_Response'."""

    __slots__ = [
        '_sum',
        '_check_fields',
    ]

    _fields_and_field_types: dict[str, str] = {
        'sum': 'int32',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES: tuple[rosidl_parser.definition.AbstractType, ...] = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, *,
                 sum: typing.Optional[int] = None,  # noqa: E501, A002
                 check_fields: typing.Optional[bool] = None) -> None:
        if check_fields is not None:
            self._check_fields = check_fields
        else:
            self._check_fields = ros_python_check_fields == '1'
        self.sum = sum if sum is not None else int()

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
        if not isinstance(other, Addints_Response):
            return False
        if self.sum != other.sum:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls) -> dict[str, str]:
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def sum(self) -> int:  # noqa: A003
        """Message field 'sum'."""
        return self._sum

    @sum.setter  # noqa: A003
    def sum(self, value: int) -> None:  # noqa: A003

        if self._check_fields:
            if False:  # Done for templating alignment
                pass
            else:
                assert \
                    isinstance(value, int), \
                    "The 'sum' field must be of type 'int'"
                assert value >= -2147483648 and value < 2147483648, \
                    "The 'sum' field must be an integer in [-2147483648, 2147483647]"

        self._sum = value


if typing.TYPE_CHECKING:
    import base_interfeces.srv  # noqa: E402, I100, I201, I300
    import service_msgs.msg  # noqa: E402, I100, I201, I300


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Addints_Event(rosidl_pycommon.interface_base_classes.MessageTypeSupportMeta):
    """Metaclass of message 'Addints_Event'."""

    _CREATE_ROS_MESSAGE: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _CONVERT_FROM_PY: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _CONVERT_TO_PY: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _DESTROY_ROS_MESSAGE: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _TYPE_SUPPORT: typing.ClassVar[typing.Optional[PyCapsule]] = None

    class Addints_EventConstants(typing.TypedDict):
        pass

    __constants: Addints_EventConstants = {
    }

    @classmethod
    def __import_type_support__(cls) -> None:
        try:
            from rosidl_generator_py import import_type_support  # type: ignore[attr-defined]
            module = import_type_support('base_interfeces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'base_interfeces.srv.Addints_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__addints__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__addints__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__addints__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__addints__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__addints__event

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


class Addints_Event(rosidl_pycommon.interface_base_classes.BaseMessage, metaclass=Metaclass_Addints_Event):
    """Message class 'Addints_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types: dict[str, str] = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<base_interfeces/Addints_Request, 1>',
        'response': 'sequence<base_interfeces/Addints_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES: tuple[rosidl_parser.definition.AbstractType, ...] = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['base_interfeces', 'srv'], 'Addints_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['base_interfeces', 'srv'], 'Addints_Response'), 1),  # noqa: E501
    )

    def __init__(self, *,
                 info: typing.Optional[service_msgs.msg.ServiceEventInfo] = None,  # noqa: E501
                 request: typing.Optional[collections.abc.Sequence[base_interfeces.srv.Addints_Request]] = None,  # noqa: E501
                 response: typing.Optional[collections.abc.Sequence[base_interfeces.srv.Addints_Response]] = None,  # noqa: E501
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
        if not isinstance(other, Addints_Event):
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
    def request(self) -> typing.Annotated[typing.Any, list[base_interfeces.srv.Addints_Request]]:   # typing.Annotated can be remove after mypy 1.16+ see mypy#3004
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value: collections.abc.Sequence[base_interfeces.srv.Addints_Request]) -> None:
        if isinstance(value, collections.abc.Set):
            import warnings
            warnings.warn(
                'Using set or subclass of set is deprecated,'
                ' please use a subclass of collections.abc.Sequence like list',
                DeprecationWarning)
        from base_interfeces.srv import Addints_Request

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
                     all(isinstance(v, Addints_Request) for v in value) and
                     True), \
                    "The 'request' field must be sequence with length <= 1 and each value of type 'Addints_Request'"

        if isinstance(value, list):
            self._request = value
            return
        self._request = list(value)

    @builtins.property
    def response(self) -> typing.Annotated[typing.Any, list[base_interfeces.srv.Addints_Response]]:   # typing.Annotated can be remove after mypy 1.16+ see mypy#3004
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value: collections.abc.Sequence[base_interfeces.srv.Addints_Response]) -> None:
        if isinstance(value, collections.abc.Set):
            import warnings
            warnings.warn(
                'Using set or subclass of set is deprecated,'
                ' please use a subclass of collections.abc.Sequence like list',
                DeprecationWarning)
        from base_interfeces.srv import Addints_Response

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
                     all(isinstance(v, Addints_Response) for v in value) and
                     True), \
                    "The 'response' field must be sequence with length <= 1 and each value of type 'Addints_Response'"

        if isinstance(value, list):
            self._response = value
            return
        self._response = list(value)


if typing.TYPE_CHECKING:
    from typing_extensions import TypeAlias  # noqa: I100, I300


class Metaclass_Addints(rosidl_pycommon.interface_base_classes.ServiceTypeSupportMeta):
    """Metaclass of service 'Addints'."""

    _TYPE_SUPPORT: typing.ClassVar[typing.Optional[PyCapsule]] = None

    @classmethod
    def __import_type_support__(cls) -> None:
        try:
            from rosidl_generator_py import import_type_support  # type: ignore[attr-defined]
            module = import_type_support('base_interfeces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'base_interfeces.srv.Addints')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__addints

            from base_interfeces.srv import _addints
            if _addints.Metaclass_Addints_Request._TYPE_SUPPORT is None:
                _addints.Metaclass_Addints_Request.__import_type_support__()
            if _addints.Metaclass_Addints_Response._TYPE_SUPPORT is None:
                _addints.Metaclass_Addints_Response.__import_type_support__()
            if _addints.Metaclass_Addints_Event._TYPE_SUPPORT is None:
                _addints.Metaclass_Addints_Event.__import_type_support__()


class Addints(rosidl_pycommon.interface_base_classes.BaseService[
    Addints_Request,
    Addints_Response
], metaclass=Metaclass_Addints):
    Request: TypeAlias = Addints_Request
    Response: TypeAlias = Addints_Response
    Event: TypeAlias = Addints_Event

    # Should eventually be typing.NoReturn. See mypy#14044
    def __init__(self) -> None:
        raise NotImplementedError('Service classes can not be instantiated')
