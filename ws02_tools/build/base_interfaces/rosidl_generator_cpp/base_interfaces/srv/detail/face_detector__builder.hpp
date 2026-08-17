// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_interfaces:srv/FaceDetector.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "base_interfaces/srv/face_detector.hpp"


#ifndef BASE_INTERFACES__SRV__DETAIL__FACE_DETECTOR__BUILDER_HPP_
#define BASE_INTERFACES__SRV__DETAIL__FACE_DETECTOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "base_interfaces/srv/detail/face_detector__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace base_interfaces
{

namespace srv
{

namespace builder
{

class Init_FaceDetector_Request_image
{
public:
  Init_FaceDetector_Request_image()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::base_interfaces::srv::FaceDetector_Request image(::base_interfaces::srv::FaceDetector_Request::_image_type arg)
  {
    msg_.image = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces::srv::FaceDetector_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces::srv::FaceDetector_Request>()
{
  return base_interfaces::srv::builder::Init_FaceDetector_Request_image();
}

}  // namespace base_interfaces


namespace base_interfaces
{

namespace srv
{

namespace builder
{

class Init_FaceDetector_Response_left
{
public:
  explicit Init_FaceDetector_Response_left(::base_interfaces::srv::FaceDetector_Response & msg)
  : msg_(msg)
  {}
  ::base_interfaces::srv::FaceDetector_Response left(::base_interfaces::srv::FaceDetector_Response::_left_type arg)
  {
    msg_.left = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces::srv::FaceDetector_Response msg_;
};

class Init_FaceDetector_Response_bottom
{
public:
  explicit Init_FaceDetector_Response_bottom(::base_interfaces::srv::FaceDetector_Response & msg)
  : msg_(msg)
  {}
  Init_FaceDetector_Response_left bottom(::base_interfaces::srv::FaceDetector_Response::_bottom_type arg)
  {
    msg_.bottom = std::move(arg);
    return Init_FaceDetector_Response_left(msg_);
  }

private:
  ::base_interfaces::srv::FaceDetector_Response msg_;
};

class Init_FaceDetector_Response_right
{
public:
  explicit Init_FaceDetector_Response_right(::base_interfaces::srv::FaceDetector_Response & msg)
  : msg_(msg)
  {}
  Init_FaceDetector_Response_bottom right(::base_interfaces::srv::FaceDetector_Response::_right_type arg)
  {
    msg_.right = std::move(arg);
    return Init_FaceDetector_Response_bottom(msg_);
  }

private:
  ::base_interfaces::srv::FaceDetector_Response msg_;
};

class Init_FaceDetector_Response_top
{
public:
  explicit Init_FaceDetector_Response_top(::base_interfaces::srv::FaceDetector_Response & msg)
  : msg_(msg)
  {}
  Init_FaceDetector_Response_right top(::base_interfaces::srv::FaceDetector_Response::_top_type arg)
  {
    msg_.top = std::move(arg);
    return Init_FaceDetector_Response_right(msg_);
  }

private:
  ::base_interfaces::srv::FaceDetector_Response msg_;
};

class Init_FaceDetector_Response_use_time
{
public:
  explicit Init_FaceDetector_Response_use_time(::base_interfaces::srv::FaceDetector_Response & msg)
  : msg_(msg)
  {}
  Init_FaceDetector_Response_top use_time(::base_interfaces::srv::FaceDetector_Response::_use_time_type arg)
  {
    msg_.use_time = std::move(arg);
    return Init_FaceDetector_Response_top(msg_);
  }

private:
  ::base_interfaces::srv::FaceDetector_Response msg_;
};

class Init_FaceDetector_Response_number
{
public:
  Init_FaceDetector_Response_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FaceDetector_Response_use_time number(::base_interfaces::srv::FaceDetector_Response::_number_type arg)
  {
    msg_.number = std::move(arg);
    return Init_FaceDetector_Response_use_time(msg_);
  }

private:
  ::base_interfaces::srv::FaceDetector_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces::srv::FaceDetector_Response>()
{
  return base_interfaces::srv::builder::Init_FaceDetector_Response_number();
}

}  // namespace base_interfaces


namespace base_interfaces
{

namespace srv
{

namespace builder
{

class Init_FaceDetector_Event_response
{
public:
  explicit Init_FaceDetector_Event_response(::base_interfaces::srv::FaceDetector_Event & msg)
  : msg_(msg)
  {}
  ::base_interfaces::srv::FaceDetector_Event response(::base_interfaces::srv::FaceDetector_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces::srv::FaceDetector_Event msg_;
};

class Init_FaceDetector_Event_request
{
public:
  explicit Init_FaceDetector_Event_request(::base_interfaces::srv::FaceDetector_Event & msg)
  : msg_(msg)
  {}
  Init_FaceDetector_Event_response request(::base_interfaces::srv::FaceDetector_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_FaceDetector_Event_response(msg_);
  }

private:
  ::base_interfaces::srv::FaceDetector_Event msg_;
};

class Init_FaceDetector_Event_info
{
public:
  Init_FaceDetector_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FaceDetector_Event_request info(::base_interfaces::srv::FaceDetector_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_FaceDetector_Event_request(msg_);
  }

private:
  ::base_interfaces::srv::FaceDetector_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces::srv::FaceDetector_Event>()
{
  return base_interfaces::srv::builder::Init_FaceDetector_Event_info();
}

}  // namespace base_interfaces

#endif  // BASE_INTERFACES__SRV__DETAIL__FACE_DETECTOR__BUILDER_HPP_
