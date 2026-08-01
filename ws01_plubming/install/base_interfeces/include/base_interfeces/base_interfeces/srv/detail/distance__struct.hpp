// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from base_interfeces:srv/Distance.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "base_interfeces/srv/distance.hpp"


#ifndef BASE_INTERFECES__SRV__DETAIL__DISTANCE__STRUCT_HPP_
#define BASE_INTERFECES__SRV__DETAIL__DISTANCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_buffer/buffer.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__base_interfeces__srv__Distance_Request __attribute__((deprecated))
#else
# define DEPRECATED__base_interfeces__srv__Distance_Request __declspec(deprecated)
#endif

namespace base_interfeces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Distance_Request_
{
  using Type = Distance_Request_<ContainerAllocator>;

  explicit Distance_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->theta = 0.0f;
    }
  }

  explicit Distance_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->theta = 0.0f;
    }
  }

  // field types and members
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;
  using _theta_type =
    float;
  _theta_type theta;

  // setters for named parameter idiom
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__theta(
    const float & _arg)
  {
    this->theta = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfeces::srv::Distance_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfeces::srv::Distance_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfeces::srv::Distance_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfeces::srv::Distance_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfeces::srv::Distance_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfeces::srv::Distance_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfeces::srv::Distance_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfeces::srv::Distance_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfeces::srv::Distance_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfeces::srv::Distance_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfeces__srv__Distance_Request
    std::shared_ptr<base_interfeces::srv::Distance_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfeces__srv__Distance_Request
    std::shared_ptr<base_interfeces::srv::Distance_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Distance_Request_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->theta != other.theta) {
      return false;
    }
    return true;
  }
  bool operator!=(const Distance_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Distance_Request_

// alias to use template instance with default allocator
using Distance_Request =
  base_interfeces::srv::Distance_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace base_interfeces


#ifndef _WIN32
# define DEPRECATED__base_interfeces__srv__Distance_Response __attribute__((deprecated))
#else
# define DEPRECATED__base_interfeces__srv__Distance_Response __declspec(deprecated)
#endif

namespace base_interfeces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Distance_Response_
{
  using Type = Distance_Response_<ContainerAllocator>;

  explicit Distance_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance = 0.0f;
    }
  }

  explicit Distance_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance = 0.0f;
    }
  }

  // field types and members
  using _distance_type =
    float;
  _distance_type distance;

  // setters for named parameter idiom
  Type & set__distance(
    const float & _arg)
  {
    this->distance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfeces::srv::Distance_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfeces::srv::Distance_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfeces::srv::Distance_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfeces::srv::Distance_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfeces::srv::Distance_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfeces::srv::Distance_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfeces::srv::Distance_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfeces::srv::Distance_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfeces::srv::Distance_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfeces::srv::Distance_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfeces__srv__Distance_Response
    std::shared_ptr<base_interfeces::srv::Distance_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfeces__srv__Distance_Response
    std::shared_ptr<base_interfeces::srv::Distance_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Distance_Response_ & other) const
  {
    if (this->distance != other.distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const Distance_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Distance_Response_

// alias to use template instance with default allocator
using Distance_Response =
  base_interfeces::srv::Distance_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace base_interfeces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__base_interfeces__srv__Distance_Event __attribute__((deprecated))
#else
# define DEPRECATED__base_interfeces__srv__Distance_Event __declspec(deprecated)
#endif

namespace base_interfeces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Distance_Event_
{
  using Type = Distance_Event_<ContainerAllocator>;

  explicit Distance_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit Distance_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<base_interfeces::srv::Distance_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<base_interfeces::srv::Distance_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<base_interfeces::srv::Distance_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<base_interfeces::srv::Distance_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<base_interfeces::srv::Distance_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<base_interfeces::srv::Distance_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<base_interfeces::srv::Distance_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<base_interfeces::srv::Distance_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfeces::srv::Distance_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfeces::srv::Distance_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfeces::srv::Distance_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfeces::srv::Distance_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfeces::srv::Distance_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfeces::srv::Distance_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfeces::srv::Distance_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfeces::srv::Distance_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfeces::srv::Distance_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfeces::srv::Distance_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfeces__srv__Distance_Event
    std::shared_ptr<base_interfeces::srv::Distance_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfeces__srv__Distance_Event
    std::shared_ptr<base_interfeces::srv::Distance_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Distance_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const Distance_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Distance_Event_

// alias to use template instance with default allocator
using Distance_Event =
  base_interfeces::srv::Distance_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace base_interfeces

namespace base_interfeces
{

namespace srv
{

struct Distance
{
  using Request = base_interfeces::srv::Distance_Request;
  using Response = base_interfeces::srv::Distance_Response;
  using Event = base_interfeces::srv::Distance_Event;
};

}  // namespace srv

}  // namespace base_interfeces

#endif  // BASE_INTERFECES__SRV__DETAIL__DISTANCE__STRUCT_HPP_
