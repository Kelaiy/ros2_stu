// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_interfeces:srv/Distance.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "base_interfeces/srv/distance.hpp"


#ifndef BASE_INTERFECES__SRV__DETAIL__DISTANCE__BUILDER_HPP_
#define BASE_INTERFECES__SRV__DETAIL__DISTANCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "base_interfeces/srv/detail/distance__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace base_interfeces
{

namespace srv
{

namespace builder
{

class Init_Distance_Request_theta
{
public:
  explicit Init_Distance_Request_theta(::base_interfeces::srv::Distance_Request & msg)
  : msg_(msg)
  {}
  ::base_interfeces::srv::Distance_Request theta(::base_interfeces::srv::Distance_Request::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfeces::srv::Distance_Request msg_;
};

class Init_Distance_Request_y
{
public:
  explicit Init_Distance_Request_y(::base_interfeces::srv::Distance_Request & msg)
  : msg_(msg)
  {}
  Init_Distance_Request_theta y(::base_interfeces::srv::Distance_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Distance_Request_theta(msg_);
  }

private:
  ::base_interfeces::srv::Distance_Request msg_;
};

class Init_Distance_Request_x
{
public:
  Init_Distance_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Distance_Request_y x(::base_interfeces::srv::Distance_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Distance_Request_y(msg_);
  }

private:
  ::base_interfeces::srv::Distance_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfeces::srv::Distance_Request>()
{
  return base_interfeces::srv::builder::Init_Distance_Request_x();
}

}  // namespace base_interfeces


namespace base_interfeces
{

namespace srv
{

namespace builder
{

class Init_Distance_Response_distance
{
public:
  Init_Distance_Response_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::base_interfeces::srv::Distance_Response distance(::base_interfeces::srv::Distance_Response::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfeces::srv::Distance_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfeces::srv::Distance_Response>()
{
  return base_interfeces::srv::builder::Init_Distance_Response_distance();
}

}  // namespace base_interfeces


namespace base_interfeces
{

namespace srv
{

namespace builder
{

class Init_Distance_Event_response
{
public:
  explicit Init_Distance_Event_response(::base_interfeces::srv::Distance_Event & msg)
  : msg_(msg)
  {}
  ::base_interfeces::srv::Distance_Event response(::base_interfeces::srv::Distance_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfeces::srv::Distance_Event msg_;
};

class Init_Distance_Event_request
{
public:
  explicit Init_Distance_Event_request(::base_interfeces::srv::Distance_Event & msg)
  : msg_(msg)
  {}
  Init_Distance_Event_response request(::base_interfeces::srv::Distance_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Distance_Event_response(msg_);
  }

private:
  ::base_interfeces::srv::Distance_Event msg_;
};

class Init_Distance_Event_info
{
public:
  Init_Distance_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Distance_Event_request info(::base_interfeces::srv::Distance_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Distance_Event_request(msg_);
  }

private:
  ::base_interfeces::srv::Distance_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfeces::srv::Distance_Event>()
{
  return base_interfeces::srv::builder::Init_Distance_Event_info();
}

}  // namespace base_interfeces

#endif  // BASE_INTERFECES__SRV__DETAIL__DISTANCE__BUILDER_HPP_
