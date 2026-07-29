// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mir_msgs:msg/MirLocalPlannerPathTypes.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mir_msgs/msg/mir_local_planner_path_types.hpp"


#ifndef MIR_MSGS__MSG__DETAIL__MIR_LOCAL_PLANNER_PATH_TYPES__BUILDER_HPP_
#define MIR_MSGS__MSG__DETAIL__MIR_LOCAL_PLANNER_PATH_TYPES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mir_msgs/msg/detail/mir_local_planner_path_types__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mir_msgs
{

namespace msg
{

namespace builder
{

class Init_MirLocalPlannerPathTypes_path_type
{
public:
  Init_MirLocalPlannerPathTypes_path_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mir_msgs::msg::MirLocalPlannerPathTypes path_type(::mir_msgs::msg::MirLocalPlannerPathTypes::_path_type_type arg)
  {
    msg_.path_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_msgs::msg::MirLocalPlannerPathTypes msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_msgs::msg::MirLocalPlannerPathTypes>()
{
  return mir_msgs::msg::builder::Init_MirLocalPlannerPathTypes_path_type();
}

}  // namespace mir_msgs

#endif  // MIR_MSGS__MSG__DETAIL__MIR_LOCAL_PLANNER_PATH_TYPES__BUILDER_HPP_
