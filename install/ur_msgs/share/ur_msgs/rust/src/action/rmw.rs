
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__action__ToolContact_Goal() -> *const std::ffi::c_void;
}

#[link(name = "ur_msgs__rosidl_generator_c")]
extern "C" {
    fn ur_msgs__action__ToolContact_Goal__init(msg: *mut ToolContact_Goal) -> bool;
    fn ur_msgs__action__ToolContact_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ToolContact_Goal>, size: usize) -> bool;
    fn ur_msgs__action__ToolContact_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ToolContact_Goal>);
    fn ur_msgs__action__ToolContact_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ToolContact_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<ToolContact_Goal>) -> bool;
}

// Corresponds to ur_msgs__action__ToolContact_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ToolContact_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for ToolContact_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !ur_msgs__action__ToolContact_Goal__init(&mut msg as *mut _) {
        panic!("Call to ur_msgs__action__ToolContact_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ToolContact_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__ToolContact_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__ToolContact_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__ToolContact_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ToolContact_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ToolContact_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "ur_msgs/action/ToolContact_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__action__ToolContact_Goal() }
  }
}


#[link(name = "ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__action__ToolContact_Result() -> *const std::ffi::c_void;
}

#[link(name = "ur_msgs__rosidl_generator_c")]
extern "C" {
    fn ur_msgs__action__ToolContact_Result__init(msg: *mut ToolContact_Result) -> bool;
    fn ur_msgs__action__ToolContact_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ToolContact_Result>, size: usize) -> bool;
    fn ur_msgs__action__ToolContact_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ToolContact_Result>);
    fn ur_msgs__action__ToolContact_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ToolContact_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<ToolContact_Result>) -> bool;
}

// Corresponds to ur_msgs__action__ToolContact_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ToolContact_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for ToolContact_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !ur_msgs__action__ToolContact_Result__init(&mut msg as *mut _) {
        panic!("Call to ur_msgs__action__ToolContact_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ToolContact_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__ToolContact_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__ToolContact_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__ToolContact_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ToolContact_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ToolContact_Result where Self: Sized {
  const TYPE_NAME: &'static str = "ur_msgs/action/ToolContact_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__action__ToolContact_Result() }
  }
}


#[link(name = "ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__action__ToolContact_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "ur_msgs__rosidl_generator_c")]
extern "C" {
    fn ur_msgs__action__ToolContact_Feedback__init(msg: *mut ToolContact_Feedback) -> bool;
    fn ur_msgs__action__ToolContact_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ToolContact_Feedback>, size: usize) -> bool;
    fn ur_msgs__action__ToolContact_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ToolContact_Feedback>);
    fn ur_msgs__action__ToolContact_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ToolContact_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<ToolContact_Feedback>) -> bool;
}

// Corresponds to ur_msgs__action__ToolContact_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ToolContact_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for ToolContact_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !ur_msgs__action__ToolContact_Feedback__init(&mut msg as *mut _) {
        panic!("Call to ur_msgs__action__ToolContact_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ToolContact_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__ToolContact_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__ToolContact_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__ToolContact_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ToolContact_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ToolContact_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "ur_msgs/action/ToolContact_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__action__ToolContact_Feedback() }
  }
}


#[link(name = "ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__action__ToolContact_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "ur_msgs__rosidl_generator_c")]
extern "C" {
    fn ur_msgs__action__ToolContact_FeedbackMessage__init(msg: *mut ToolContact_FeedbackMessage) -> bool;
    fn ur_msgs__action__ToolContact_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ToolContact_FeedbackMessage>, size: usize) -> bool;
    fn ur_msgs__action__ToolContact_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ToolContact_FeedbackMessage>);
    fn ur_msgs__action__ToolContact_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ToolContact_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<ToolContact_FeedbackMessage>) -> bool;
}

// Corresponds to ur_msgs__action__ToolContact_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ToolContact_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::ToolContact_Feedback,

}



impl Default for ToolContact_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !ur_msgs__action__ToolContact_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to ur_msgs__action__ToolContact_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ToolContact_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__ToolContact_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__ToolContact_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__ToolContact_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ToolContact_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ToolContact_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "ur_msgs/action/ToolContact_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__action__ToolContact_FeedbackMessage() }
  }
}


#[link(name = "ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__action__FollowJointTrajectoryUntil_Goal() -> *const std::ffi::c_void;
}

#[link(name = "ur_msgs__rosidl_generator_c")]
extern "C" {
    fn ur_msgs__action__FollowJointTrajectoryUntil_Goal__init(msg: *mut FollowJointTrajectoryUntil_Goal) -> bool;
    fn ur_msgs__action__FollowJointTrajectoryUntil_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<FollowJointTrajectoryUntil_Goal>, size: usize) -> bool;
    fn ur_msgs__action__FollowJointTrajectoryUntil_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<FollowJointTrajectoryUntil_Goal>);
    fn ur_msgs__action__FollowJointTrajectoryUntil_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<FollowJointTrajectoryUntil_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<FollowJointTrajectoryUntil_Goal>) -> bool;
}

// Corresponds to ur_msgs__action__FollowJointTrajectoryUntil_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowJointTrajectoryUntil_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub trajectory: trajectory_msgs::msg::rmw::JointTrajectory,

    /// The tolerances for the trajectory, while it is executing
    pub path_tolerance: rosidl_runtime_rs::Sequence<control_msgs::msg::rmw::JointTolerance>,

    /// The tolerances for the goal, when the trajectory is finished.
    pub goal_tolerance: rosidl_runtime_rs::Sequence<control_msgs::msg::rmw::JointTolerance>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_time_tolerance: builtin_interfaces::msg::rmw::Duration,

    /// The condition until which the trajectory should run.
    pub until_type: u8,

}

impl FollowJointTrajectoryUntil_Goal {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TOOL_CONTACT: u8 = 0;

}


impl Default for FollowJointTrajectoryUntil_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !ur_msgs__action__FollowJointTrajectoryUntil_Goal__init(&mut msg as *mut _) {
        panic!("Call to ur_msgs__action__FollowJointTrajectoryUntil_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for FollowJointTrajectoryUntil_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__FollowJointTrajectoryUntil_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__FollowJointTrajectoryUntil_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__FollowJointTrajectoryUntil_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for FollowJointTrajectoryUntil_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for FollowJointTrajectoryUntil_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "ur_msgs/action/FollowJointTrajectoryUntil_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__action__FollowJointTrajectoryUntil_Goal() }
  }
}


#[link(name = "ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__action__FollowJointTrajectoryUntil_Result() -> *const std::ffi::c_void;
}

#[link(name = "ur_msgs__rosidl_generator_c")]
extern "C" {
    fn ur_msgs__action__FollowJointTrajectoryUntil_Result__init(msg: *mut FollowJointTrajectoryUntil_Result) -> bool;
    fn ur_msgs__action__FollowJointTrajectoryUntil_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<FollowJointTrajectoryUntil_Result>, size: usize) -> bool;
    fn ur_msgs__action__FollowJointTrajectoryUntil_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<FollowJointTrajectoryUntil_Result>);
    fn ur_msgs__action__FollowJointTrajectoryUntil_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<FollowJointTrajectoryUntil_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<FollowJointTrajectoryUntil_Result>) -> bool;
}

// Corresponds to ur_msgs__action__FollowJointTrajectoryUntil_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowJointTrajectoryUntil_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub error_code: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub until_condition_result: i32,

    /// The error string will contain information about the final state of the trajectory execution.
    pub error_string: rosidl_runtime_rs::String,

}

impl FollowJointTrajectoryUntil_Result {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SUCCESSFUL: i32 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const INVALID_GOAL: i32 = -1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const INVALID_JOINTS: i32 = -2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const OLD_HEADER_TIMESTAMP: i32 = -3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PATH_TOLERANCE_VIOLATED: i32 = -4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GOAL_TOLERANCE_VIOLATED: i32 = -5;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TRIGGERED: i32 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const NOT_TRIGGERED: i32 = 1;

}


impl Default for FollowJointTrajectoryUntil_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !ur_msgs__action__FollowJointTrajectoryUntil_Result__init(&mut msg as *mut _) {
        panic!("Call to ur_msgs__action__FollowJointTrajectoryUntil_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for FollowJointTrajectoryUntil_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__FollowJointTrajectoryUntil_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__FollowJointTrajectoryUntil_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__FollowJointTrajectoryUntil_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for FollowJointTrajectoryUntil_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for FollowJointTrajectoryUntil_Result where Self: Sized {
  const TYPE_NAME: &'static str = "ur_msgs/action/FollowJointTrajectoryUntil_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__action__FollowJointTrajectoryUntil_Result() }
  }
}


#[link(name = "ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__action__FollowJointTrajectoryUntil_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "ur_msgs__rosidl_generator_c")]
extern "C" {
    fn ur_msgs__action__FollowJointTrajectoryUntil_Feedback__init(msg: *mut FollowJointTrajectoryUntil_Feedback) -> bool;
    fn ur_msgs__action__FollowJointTrajectoryUntil_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<FollowJointTrajectoryUntil_Feedback>, size: usize) -> bool;
    fn ur_msgs__action__FollowJointTrajectoryUntil_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<FollowJointTrajectoryUntil_Feedback>);
    fn ur_msgs__action__FollowJointTrajectoryUntil_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<FollowJointTrajectoryUntil_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<FollowJointTrajectoryUntil_Feedback>) -> bool;
}

// Corresponds to ur_msgs__action__FollowJointTrajectoryUntil_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowJointTrajectoryUntil_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_names: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub desired: trajectory_msgs::msg::rmw::JointTrajectoryPoint,


    // This member is not documented.
    #[allow(missing_docs)]
    pub actual: trajectory_msgs::msg::rmw::JointTrajectoryPoint,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error: trajectory_msgs::msg::rmw::JointTrajectoryPoint,

}



impl Default for FollowJointTrajectoryUntil_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !ur_msgs__action__FollowJointTrajectoryUntil_Feedback__init(&mut msg as *mut _) {
        panic!("Call to ur_msgs__action__FollowJointTrajectoryUntil_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for FollowJointTrajectoryUntil_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__FollowJointTrajectoryUntil_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__FollowJointTrajectoryUntil_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__FollowJointTrajectoryUntil_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for FollowJointTrajectoryUntil_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for FollowJointTrajectoryUntil_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "ur_msgs/action/FollowJointTrajectoryUntil_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__action__FollowJointTrajectoryUntil_Feedback() }
  }
}


#[link(name = "ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__action__FollowJointTrajectoryUntil_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "ur_msgs__rosidl_generator_c")]
extern "C" {
    fn ur_msgs__action__FollowJointTrajectoryUntil_FeedbackMessage__init(msg: *mut FollowJointTrajectoryUntil_FeedbackMessage) -> bool;
    fn ur_msgs__action__FollowJointTrajectoryUntil_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<FollowJointTrajectoryUntil_FeedbackMessage>, size: usize) -> bool;
    fn ur_msgs__action__FollowJointTrajectoryUntil_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<FollowJointTrajectoryUntil_FeedbackMessage>);
    fn ur_msgs__action__FollowJointTrajectoryUntil_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<FollowJointTrajectoryUntil_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<FollowJointTrajectoryUntil_FeedbackMessage>) -> bool;
}

// Corresponds to ur_msgs__action__FollowJointTrajectoryUntil_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowJointTrajectoryUntil_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::FollowJointTrajectoryUntil_Feedback,

}



impl Default for FollowJointTrajectoryUntil_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !ur_msgs__action__FollowJointTrajectoryUntil_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to ur_msgs__action__FollowJointTrajectoryUntil_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for FollowJointTrajectoryUntil_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__FollowJointTrajectoryUntil_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__FollowJointTrajectoryUntil_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__FollowJointTrajectoryUntil_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for FollowJointTrajectoryUntil_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for FollowJointTrajectoryUntil_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "ur_msgs/action/FollowJointTrajectoryUntil_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__action__FollowJointTrajectoryUntil_FeedbackMessage() }
  }
}


#[link(name = "ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__action__SendScript_Goal() -> *const std::ffi::c_void;
}

#[link(name = "ur_msgs__rosidl_generator_c")]
extern "C" {
    fn ur_msgs__action__SendScript_Goal__init(msg: *mut SendScript_Goal) -> bool;
    fn ur_msgs__action__SendScript_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SendScript_Goal>, size: usize) -> bool;
    fn ur_msgs__action__SendScript_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SendScript_Goal>);
    fn ur_msgs__action__SendScript_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SendScript_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<SendScript_Goal>) -> bool;
}

// Corresponds to ur_msgs__action__SendScript_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SendScript_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub program: rosidl_runtime_rs::String,

    /// Name for the script which will be used in various log messages. This will be ignored, if a name is already defined in the script code itself.
    pub script_name: rosidl_runtime_rs::String,

    /// The maximum amount of time that is allowed to pass, before the script must be confirmed to have started
    pub start_timeout: builtin_interfaces::msg::rmw::Duration,

    /// Whether the script execution should report as failed, if the robot generates a warning during execution
    pub fail_on_warnings: bool,

}



impl Default for SendScript_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !ur_msgs__action__SendScript_Goal__init(&mut msg as *mut _) {
        panic!("Call to ur_msgs__action__SendScript_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SendScript_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__SendScript_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__SendScript_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__SendScript_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SendScript_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SendScript_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "ur_msgs/action/SendScript_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__action__SendScript_Goal() }
  }
}


#[link(name = "ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__action__SendScript_Result() -> *const std::ffi::c_void;
}

#[link(name = "ur_msgs__rosidl_generator_c")]
extern "C" {
    fn ur_msgs__action__SendScript_Result__init(msg: *mut SendScript_Result) -> bool;
    fn ur_msgs__action__SendScript_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SendScript_Result>, size: usize) -> bool;
    fn ur_msgs__action__SendScript_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SendScript_Result>);
    fn ur_msgs__action__SendScript_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SendScript_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<SendScript_Result>) -> bool;
}

// Corresponds to ur_msgs__action__SendScript_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SendScript_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

    /// Message containing the cause of failure, if any.
    pub message: rosidl_runtime_rs::String,

}



impl Default for SendScript_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !ur_msgs__action__SendScript_Result__init(&mut msg as *mut _) {
        panic!("Call to ur_msgs__action__SendScript_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SendScript_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__SendScript_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__SendScript_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__SendScript_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SendScript_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SendScript_Result where Self: Sized {
  const TYPE_NAME: &'static str = "ur_msgs/action/SendScript_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__action__SendScript_Result() }
  }
}


#[link(name = "ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__action__SendScript_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "ur_msgs__rosidl_generator_c")]
extern "C" {
    fn ur_msgs__action__SendScript_Feedback__init(msg: *mut SendScript_Feedback) -> bool;
    fn ur_msgs__action__SendScript_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SendScript_Feedback>, size: usize) -> bool;
    fn ur_msgs__action__SendScript_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SendScript_Feedback>);
    fn ur_msgs__action__SendScript_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SendScript_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<SendScript_Feedback>) -> bool;
}

// Corresponds to ur_msgs__action__SendScript_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SendScript_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for SendScript_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !ur_msgs__action__SendScript_Feedback__init(&mut msg as *mut _) {
        panic!("Call to ur_msgs__action__SendScript_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SendScript_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__SendScript_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__SendScript_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__SendScript_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SendScript_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SendScript_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "ur_msgs/action/SendScript_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__action__SendScript_Feedback() }
  }
}


#[link(name = "ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__action__SendScript_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "ur_msgs__rosidl_generator_c")]
extern "C" {
    fn ur_msgs__action__SendScript_FeedbackMessage__init(msg: *mut SendScript_FeedbackMessage) -> bool;
    fn ur_msgs__action__SendScript_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SendScript_FeedbackMessage>, size: usize) -> bool;
    fn ur_msgs__action__SendScript_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SendScript_FeedbackMessage>);
    fn ur_msgs__action__SendScript_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SendScript_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<SendScript_FeedbackMessage>) -> bool;
}

// Corresponds to ur_msgs__action__SendScript_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SendScript_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::SendScript_Feedback,

}



impl Default for SendScript_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !ur_msgs__action__SendScript_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to ur_msgs__action__SendScript_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SendScript_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__SendScript_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__SendScript_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__SendScript_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SendScript_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SendScript_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "ur_msgs/action/SendScript_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__action__SendScript_FeedbackMessage() }
  }
}




#[link(name = "ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__action__ToolContact_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "ur_msgs__rosidl_generator_c")]
extern "C" {
    fn ur_msgs__action__ToolContact_SendGoal_Request__init(msg: *mut ToolContact_SendGoal_Request) -> bool;
    fn ur_msgs__action__ToolContact_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ToolContact_SendGoal_Request>, size: usize) -> bool;
    fn ur_msgs__action__ToolContact_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ToolContact_SendGoal_Request>);
    fn ur_msgs__action__ToolContact_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ToolContact_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ToolContact_SendGoal_Request>) -> bool;
}

// Corresponds to ur_msgs__action__ToolContact_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ToolContact_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::ToolContact_Goal,

}



impl Default for ToolContact_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !ur_msgs__action__ToolContact_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to ur_msgs__action__ToolContact_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ToolContact_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__ToolContact_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__ToolContact_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__ToolContact_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ToolContact_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ToolContact_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "ur_msgs/action/ToolContact_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__action__ToolContact_SendGoal_Request() }
  }
}


#[link(name = "ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__action__ToolContact_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "ur_msgs__rosidl_generator_c")]
extern "C" {
    fn ur_msgs__action__ToolContact_SendGoal_Response__init(msg: *mut ToolContact_SendGoal_Response) -> bool;
    fn ur_msgs__action__ToolContact_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ToolContact_SendGoal_Response>, size: usize) -> bool;
    fn ur_msgs__action__ToolContact_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ToolContact_SendGoal_Response>);
    fn ur_msgs__action__ToolContact_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ToolContact_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ToolContact_SendGoal_Response>) -> bool;
}

// Corresponds to ur_msgs__action__ToolContact_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ToolContact_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for ToolContact_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !ur_msgs__action__ToolContact_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to ur_msgs__action__ToolContact_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ToolContact_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__ToolContact_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__ToolContact_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__ToolContact_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ToolContact_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ToolContact_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "ur_msgs/action/ToolContact_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__action__ToolContact_SendGoal_Response() }
  }
}


#[link(name = "ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__action__ToolContact_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "ur_msgs__rosidl_generator_c")]
extern "C" {
    fn ur_msgs__action__ToolContact_GetResult_Request__init(msg: *mut ToolContact_GetResult_Request) -> bool;
    fn ur_msgs__action__ToolContact_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ToolContact_GetResult_Request>, size: usize) -> bool;
    fn ur_msgs__action__ToolContact_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ToolContact_GetResult_Request>);
    fn ur_msgs__action__ToolContact_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ToolContact_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ToolContact_GetResult_Request>) -> bool;
}

// Corresponds to ur_msgs__action__ToolContact_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ToolContact_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for ToolContact_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !ur_msgs__action__ToolContact_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to ur_msgs__action__ToolContact_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ToolContact_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__ToolContact_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__ToolContact_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__ToolContact_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ToolContact_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ToolContact_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "ur_msgs/action/ToolContact_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__action__ToolContact_GetResult_Request() }
  }
}


#[link(name = "ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__action__ToolContact_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "ur_msgs__rosidl_generator_c")]
extern "C" {
    fn ur_msgs__action__ToolContact_GetResult_Response__init(msg: *mut ToolContact_GetResult_Response) -> bool;
    fn ur_msgs__action__ToolContact_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ToolContact_GetResult_Response>, size: usize) -> bool;
    fn ur_msgs__action__ToolContact_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ToolContact_GetResult_Response>);
    fn ur_msgs__action__ToolContact_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ToolContact_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ToolContact_GetResult_Response>) -> bool;
}

// Corresponds to ur_msgs__action__ToolContact_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ToolContact_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::ToolContact_Result,

}



impl Default for ToolContact_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !ur_msgs__action__ToolContact_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to ur_msgs__action__ToolContact_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ToolContact_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__ToolContact_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__ToolContact_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__ToolContact_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ToolContact_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ToolContact_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "ur_msgs/action/ToolContact_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__action__ToolContact_GetResult_Response() }
  }
}


#[link(name = "ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "ur_msgs__rosidl_generator_c")]
extern "C" {
    fn ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request__init(msg: *mut FollowJointTrajectoryUntil_SendGoal_Request) -> bool;
    fn ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<FollowJointTrajectoryUntil_SendGoal_Request>, size: usize) -> bool;
    fn ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<FollowJointTrajectoryUntil_SendGoal_Request>);
    fn ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<FollowJointTrajectoryUntil_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<FollowJointTrajectoryUntil_SendGoal_Request>) -> bool;
}

// Corresponds to ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowJointTrajectoryUntil_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::FollowJointTrajectoryUntil_Goal,

}



impl Default for FollowJointTrajectoryUntil_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for FollowJointTrajectoryUntil_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for FollowJointTrajectoryUntil_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for FollowJointTrajectoryUntil_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "ur_msgs/action/FollowJointTrajectoryUntil_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request() }
  }
}


#[link(name = "ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "ur_msgs__rosidl_generator_c")]
extern "C" {
    fn ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response__init(msg: *mut FollowJointTrajectoryUntil_SendGoal_Response) -> bool;
    fn ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<FollowJointTrajectoryUntil_SendGoal_Response>, size: usize) -> bool;
    fn ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<FollowJointTrajectoryUntil_SendGoal_Response>);
    fn ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<FollowJointTrajectoryUntil_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<FollowJointTrajectoryUntil_SendGoal_Response>) -> bool;
}

// Corresponds to ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowJointTrajectoryUntil_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for FollowJointTrajectoryUntil_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for FollowJointTrajectoryUntil_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for FollowJointTrajectoryUntil_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for FollowJointTrajectoryUntil_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "ur_msgs/action/FollowJointTrajectoryUntil_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response() }
  }
}


#[link(name = "ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "ur_msgs__rosidl_generator_c")]
extern "C" {
    fn ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request__init(msg: *mut FollowJointTrajectoryUntil_GetResult_Request) -> bool;
    fn ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<FollowJointTrajectoryUntil_GetResult_Request>, size: usize) -> bool;
    fn ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<FollowJointTrajectoryUntil_GetResult_Request>);
    fn ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<FollowJointTrajectoryUntil_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<FollowJointTrajectoryUntil_GetResult_Request>) -> bool;
}

// Corresponds to ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowJointTrajectoryUntil_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for FollowJointTrajectoryUntil_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for FollowJointTrajectoryUntil_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for FollowJointTrajectoryUntil_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for FollowJointTrajectoryUntil_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "ur_msgs/action/FollowJointTrajectoryUntil_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request() }
  }
}


#[link(name = "ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "ur_msgs__rosidl_generator_c")]
extern "C" {
    fn ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response__init(msg: *mut FollowJointTrajectoryUntil_GetResult_Response) -> bool;
    fn ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<FollowJointTrajectoryUntil_GetResult_Response>, size: usize) -> bool;
    fn ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<FollowJointTrajectoryUntil_GetResult_Response>);
    fn ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<FollowJointTrajectoryUntil_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<FollowJointTrajectoryUntil_GetResult_Response>) -> bool;
}

// Corresponds to ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowJointTrajectoryUntil_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::FollowJointTrajectoryUntil_Result,

}



impl Default for FollowJointTrajectoryUntil_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for FollowJointTrajectoryUntil_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for FollowJointTrajectoryUntil_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for FollowJointTrajectoryUntil_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "ur_msgs/action/FollowJointTrajectoryUntil_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response() }
  }
}


#[link(name = "ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__action__SendScript_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "ur_msgs__rosidl_generator_c")]
extern "C" {
    fn ur_msgs__action__SendScript_SendGoal_Request__init(msg: *mut SendScript_SendGoal_Request) -> bool;
    fn ur_msgs__action__SendScript_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SendScript_SendGoal_Request>, size: usize) -> bool;
    fn ur_msgs__action__SendScript_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SendScript_SendGoal_Request>);
    fn ur_msgs__action__SendScript_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SendScript_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SendScript_SendGoal_Request>) -> bool;
}

// Corresponds to ur_msgs__action__SendScript_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SendScript_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::SendScript_Goal,

}



impl Default for SendScript_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !ur_msgs__action__SendScript_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to ur_msgs__action__SendScript_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SendScript_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__SendScript_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__SendScript_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__SendScript_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SendScript_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SendScript_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "ur_msgs/action/SendScript_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__action__SendScript_SendGoal_Request() }
  }
}


#[link(name = "ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__action__SendScript_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "ur_msgs__rosidl_generator_c")]
extern "C" {
    fn ur_msgs__action__SendScript_SendGoal_Response__init(msg: *mut SendScript_SendGoal_Response) -> bool;
    fn ur_msgs__action__SendScript_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SendScript_SendGoal_Response>, size: usize) -> bool;
    fn ur_msgs__action__SendScript_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SendScript_SendGoal_Response>);
    fn ur_msgs__action__SendScript_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SendScript_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SendScript_SendGoal_Response>) -> bool;
}

// Corresponds to ur_msgs__action__SendScript_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SendScript_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for SendScript_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !ur_msgs__action__SendScript_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to ur_msgs__action__SendScript_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SendScript_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__SendScript_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__SendScript_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__SendScript_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SendScript_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SendScript_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "ur_msgs/action/SendScript_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__action__SendScript_SendGoal_Response() }
  }
}


#[link(name = "ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__action__SendScript_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "ur_msgs__rosidl_generator_c")]
extern "C" {
    fn ur_msgs__action__SendScript_GetResult_Request__init(msg: *mut SendScript_GetResult_Request) -> bool;
    fn ur_msgs__action__SendScript_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SendScript_GetResult_Request>, size: usize) -> bool;
    fn ur_msgs__action__SendScript_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SendScript_GetResult_Request>);
    fn ur_msgs__action__SendScript_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SendScript_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SendScript_GetResult_Request>) -> bool;
}

// Corresponds to ur_msgs__action__SendScript_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SendScript_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for SendScript_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !ur_msgs__action__SendScript_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to ur_msgs__action__SendScript_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SendScript_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__SendScript_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__SendScript_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__SendScript_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SendScript_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SendScript_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "ur_msgs/action/SendScript_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__action__SendScript_GetResult_Request() }
  }
}


#[link(name = "ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__action__SendScript_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "ur_msgs__rosidl_generator_c")]
extern "C" {
    fn ur_msgs__action__SendScript_GetResult_Response__init(msg: *mut SendScript_GetResult_Response) -> bool;
    fn ur_msgs__action__SendScript_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SendScript_GetResult_Response>, size: usize) -> bool;
    fn ur_msgs__action__SendScript_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SendScript_GetResult_Response>);
    fn ur_msgs__action__SendScript_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SendScript_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SendScript_GetResult_Response>) -> bool;
}

// Corresponds to ur_msgs__action__SendScript_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SendScript_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::SendScript_Result,

}



impl Default for SendScript_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !ur_msgs__action__SendScript_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to ur_msgs__action__SendScript_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SendScript_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__SendScript_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__SendScript_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__action__SendScript_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SendScript_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SendScript_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "ur_msgs/action/SendScript_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__action__SendScript_GetResult_Response() }
  }
}






#[link(name = "ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__ur_msgs__action__ToolContact_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to ur_msgs__action__ToolContact_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct ToolContact_SendGoal;

impl rosidl_runtime_rs::Service for ToolContact_SendGoal {
    type Request = ToolContact_SendGoal_Request;
    type Response = ToolContact_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__ur_msgs__action__ToolContact_SendGoal() }
    }
}




#[link(name = "ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__ur_msgs__action__ToolContact_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to ur_msgs__action__ToolContact_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct ToolContact_GetResult;

impl rosidl_runtime_rs::Service for ToolContact_GetResult {
    type Request = ToolContact_GetResult_Request;
    type Response = ToolContact_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__ur_msgs__action__ToolContact_GetResult() }
    }
}




#[link(name = "ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__ur_msgs__action__FollowJointTrajectoryUntil_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to ur_msgs__action__FollowJointTrajectoryUntil_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct FollowJointTrajectoryUntil_SendGoal;

impl rosidl_runtime_rs::Service for FollowJointTrajectoryUntil_SendGoal {
    type Request = FollowJointTrajectoryUntil_SendGoal_Request;
    type Response = FollowJointTrajectoryUntil_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__ur_msgs__action__FollowJointTrajectoryUntil_SendGoal() }
    }
}




#[link(name = "ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__ur_msgs__action__FollowJointTrajectoryUntil_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to ur_msgs__action__FollowJointTrajectoryUntil_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct FollowJointTrajectoryUntil_GetResult;

impl rosidl_runtime_rs::Service for FollowJointTrajectoryUntil_GetResult {
    type Request = FollowJointTrajectoryUntil_GetResult_Request;
    type Response = FollowJointTrajectoryUntil_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__ur_msgs__action__FollowJointTrajectoryUntil_GetResult() }
    }
}




#[link(name = "ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__ur_msgs__action__SendScript_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to ur_msgs__action__SendScript_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct SendScript_SendGoal;

impl rosidl_runtime_rs::Service for SendScript_SendGoal {
    type Request = SendScript_SendGoal_Request;
    type Response = SendScript_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__ur_msgs__action__SendScript_SendGoal() }
    }
}




#[link(name = "ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__ur_msgs__action__SendScript_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to ur_msgs__action__SendScript_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct SendScript_GetResult;

impl rosidl_runtime_rs::Service for SendScript_GetResult {
    type Request = SendScript_GetResult_Request;
    type Response = SendScript_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__ur_msgs__action__SendScript_GetResult() }
    }
}


