// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ur_msgs:msg/FrictionModelParameters.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ur_msgs/msg/friction_model_parameters.hpp"


#ifndef UR_MSGS__MSG__DETAIL__FRICTION_MODEL_PARAMETERS__BUILDER_HPP_
#define UR_MSGS__MSG__DETAIL__FRICTION_MODEL_PARAMETERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ur_msgs/msg/detail/friction_model_parameters__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ur_msgs
{

namespace msg
{

namespace builder
{

class Init_FrictionModelParameters_coulomb_scale
{
public:
  explicit Init_FrictionModelParameters_coulomb_scale(::ur_msgs::msg::FrictionModelParameters & msg)
  : msg_(msg)
  {}
  ::ur_msgs::msg::FrictionModelParameters coulomb_scale(::ur_msgs::msg::FrictionModelParameters::_coulomb_scale_type arg)
  {
    msg_.coulomb_scale = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_msgs::msg::FrictionModelParameters msg_;
};

class Init_FrictionModelParameters_viscous_scale
{
public:
  Init_FrictionModelParameters_viscous_scale()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FrictionModelParameters_coulomb_scale viscous_scale(::ur_msgs::msg::FrictionModelParameters::_viscous_scale_type arg)
  {
    msg_.viscous_scale = std::move(arg);
    return Init_FrictionModelParameters_coulomb_scale(msg_);
  }

private:
  ::ur_msgs::msg::FrictionModelParameters msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_msgs::msg::FrictionModelParameters>()
{
  return ur_msgs::msg::builder::Init_FrictionModelParameters_viscous_scale();
}

}  // namespace ur_msgs

#endif  // UR_MSGS__MSG__DETAIL__FRICTION_MODEL_PARAMETERS__BUILDER_HPP_
