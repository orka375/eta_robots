
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "my_ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_ur_msgs__action__SendScript_Goal() -> *const std::ffi::c_void;
}

#[link(name = "my_ur_msgs__rosidl_generator_c")]
extern "C" {
    fn my_ur_msgs__action__SendScript_Goal__init(msg: *mut SendScript_Goal) -> bool;
    fn my_ur_msgs__action__SendScript_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SendScript_Goal>, size: usize) -> bool;
    fn my_ur_msgs__action__SendScript_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SendScript_Goal>);
    fn my_ur_msgs__action__SendScript_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SendScript_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<SendScript_Goal>) -> bool;
}

// Corresponds to my_ur_msgs__action__SendScript_Goal
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

    /// Name for the script which will be used in various log messages.
    /// This will be ignored if a name is already defined in the script code itself.
    pub script_name: rosidl_runtime_rs::String,

    /// Maximum time allowed before the script must be confirmed to have started.
    pub start_timeout: builtin_interfaces::msg::rmw::Duration,

    /// Whether the script execution should report as failed if the robot generates a warning.
    pub fail_on_warnings: bool,

}



impl Default for SendScript_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_ur_msgs__action__SendScript_Goal__init(&mut msg as *mut _) {
        panic!("Call to my_ur_msgs__action__SendScript_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SendScript_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_ur_msgs__action__SendScript_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_ur_msgs__action__SendScript_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_ur_msgs__action__SendScript_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SendScript_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SendScript_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "my_ur_msgs/action/SendScript_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_ur_msgs__action__SendScript_Goal() }
  }
}


#[link(name = "my_ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_ur_msgs__action__SendScript_Result() -> *const std::ffi::c_void;
}

#[link(name = "my_ur_msgs__rosidl_generator_c")]
extern "C" {
    fn my_ur_msgs__action__SendScript_Result__init(msg: *mut SendScript_Result) -> bool;
    fn my_ur_msgs__action__SendScript_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SendScript_Result>, size: usize) -> bool;
    fn my_ur_msgs__action__SendScript_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SendScript_Result>);
    fn my_ur_msgs__action__SendScript_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SendScript_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<SendScript_Result>) -> bool;
}

// Corresponds to my_ur_msgs__action__SendScript_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SendScript_Result {
    /// Result
    /// Whether the script was successfully executed.
    pub success: bool,

    /// Message containing the cause of failure, if any.
    pub message: rosidl_runtime_rs::String,

}



impl Default for SendScript_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_ur_msgs__action__SendScript_Result__init(&mut msg as *mut _) {
        panic!("Call to my_ur_msgs__action__SendScript_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SendScript_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_ur_msgs__action__SendScript_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_ur_msgs__action__SendScript_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_ur_msgs__action__SendScript_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SendScript_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SendScript_Result where Self: Sized {
  const TYPE_NAME: &'static str = "my_ur_msgs/action/SendScript_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_ur_msgs__action__SendScript_Result() }
  }
}


#[link(name = "my_ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_ur_msgs__action__SendScript_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "my_ur_msgs__rosidl_generator_c")]
extern "C" {
    fn my_ur_msgs__action__SendScript_Feedback__init(msg: *mut SendScript_Feedback) -> bool;
    fn my_ur_msgs__action__SendScript_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SendScript_Feedback>, size: usize) -> bool;
    fn my_ur_msgs__action__SendScript_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SendScript_Feedback>);
    fn my_ur_msgs__action__SendScript_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SendScript_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<SendScript_Feedback>) -> bool;
}

// Corresponds to my_ur_msgs__action__SendScript_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SendScript_Feedback {
    /// Feedback
    /// Add feedback fields if needed
    pub progress: f32,

}



impl Default for SendScript_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_ur_msgs__action__SendScript_Feedback__init(&mut msg as *mut _) {
        panic!("Call to my_ur_msgs__action__SendScript_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SendScript_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_ur_msgs__action__SendScript_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_ur_msgs__action__SendScript_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_ur_msgs__action__SendScript_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SendScript_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SendScript_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "my_ur_msgs/action/SendScript_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_ur_msgs__action__SendScript_Feedback() }
  }
}


#[link(name = "my_ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_ur_msgs__action__SendScript_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "my_ur_msgs__rosidl_generator_c")]
extern "C" {
    fn my_ur_msgs__action__SendScript_FeedbackMessage__init(msg: *mut SendScript_FeedbackMessage) -> bool;
    fn my_ur_msgs__action__SendScript_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SendScript_FeedbackMessage>, size: usize) -> bool;
    fn my_ur_msgs__action__SendScript_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SendScript_FeedbackMessage>);
    fn my_ur_msgs__action__SendScript_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SendScript_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<SendScript_FeedbackMessage>) -> bool;
}

// Corresponds to my_ur_msgs__action__SendScript_FeedbackMessage
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
      if !my_ur_msgs__action__SendScript_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to my_ur_msgs__action__SendScript_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SendScript_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_ur_msgs__action__SendScript_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_ur_msgs__action__SendScript_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_ur_msgs__action__SendScript_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SendScript_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SendScript_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "my_ur_msgs/action/SendScript_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_ur_msgs__action__SendScript_FeedbackMessage() }
  }
}




#[link(name = "my_ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_ur_msgs__action__SendScript_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "my_ur_msgs__rosidl_generator_c")]
extern "C" {
    fn my_ur_msgs__action__SendScript_SendGoal_Request__init(msg: *mut SendScript_SendGoal_Request) -> bool;
    fn my_ur_msgs__action__SendScript_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SendScript_SendGoal_Request>, size: usize) -> bool;
    fn my_ur_msgs__action__SendScript_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SendScript_SendGoal_Request>);
    fn my_ur_msgs__action__SendScript_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SendScript_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SendScript_SendGoal_Request>) -> bool;
}

// Corresponds to my_ur_msgs__action__SendScript_SendGoal_Request
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
      if !my_ur_msgs__action__SendScript_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to my_ur_msgs__action__SendScript_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SendScript_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_ur_msgs__action__SendScript_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_ur_msgs__action__SendScript_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_ur_msgs__action__SendScript_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SendScript_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SendScript_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "my_ur_msgs/action/SendScript_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_ur_msgs__action__SendScript_SendGoal_Request() }
  }
}


#[link(name = "my_ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_ur_msgs__action__SendScript_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "my_ur_msgs__rosidl_generator_c")]
extern "C" {
    fn my_ur_msgs__action__SendScript_SendGoal_Response__init(msg: *mut SendScript_SendGoal_Response) -> bool;
    fn my_ur_msgs__action__SendScript_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SendScript_SendGoal_Response>, size: usize) -> bool;
    fn my_ur_msgs__action__SendScript_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SendScript_SendGoal_Response>);
    fn my_ur_msgs__action__SendScript_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SendScript_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SendScript_SendGoal_Response>) -> bool;
}

// Corresponds to my_ur_msgs__action__SendScript_SendGoal_Response
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
      if !my_ur_msgs__action__SendScript_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to my_ur_msgs__action__SendScript_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SendScript_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_ur_msgs__action__SendScript_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_ur_msgs__action__SendScript_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_ur_msgs__action__SendScript_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SendScript_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SendScript_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "my_ur_msgs/action/SendScript_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_ur_msgs__action__SendScript_SendGoal_Response() }
  }
}


#[link(name = "my_ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_ur_msgs__action__SendScript_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "my_ur_msgs__rosidl_generator_c")]
extern "C" {
    fn my_ur_msgs__action__SendScript_GetResult_Request__init(msg: *mut SendScript_GetResult_Request) -> bool;
    fn my_ur_msgs__action__SendScript_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SendScript_GetResult_Request>, size: usize) -> bool;
    fn my_ur_msgs__action__SendScript_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SendScript_GetResult_Request>);
    fn my_ur_msgs__action__SendScript_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SendScript_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SendScript_GetResult_Request>) -> bool;
}

// Corresponds to my_ur_msgs__action__SendScript_GetResult_Request
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
      if !my_ur_msgs__action__SendScript_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to my_ur_msgs__action__SendScript_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SendScript_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_ur_msgs__action__SendScript_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_ur_msgs__action__SendScript_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_ur_msgs__action__SendScript_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SendScript_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SendScript_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "my_ur_msgs/action/SendScript_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_ur_msgs__action__SendScript_GetResult_Request() }
  }
}


#[link(name = "my_ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_ur_msgs__action__SendScript_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "my_ur_msgs__rosidl_generator_c")]
extern "C" {
    fn my_ur_msgs__action__SendScript_GetResult_Response__init(msg: *mut SendScript_GetResult_Response) -> bool;
    fn my_ur_msgs__action__SendScript_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SendScript_GetResult_Response>, size: usize) -> bool;
    fn my_ur_msgs__action__SendScript_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SendScript_GetResult_Response>);
    fn my_ur_msgs__action__SendScript_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SendScript_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SendScript_GetResult_Response>) -> bool;
}

// Corresponds to my_ur_msgs__action__SendScript_GetResult_Response
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
      if !my_ur_msgs__action__SendScript_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to my_ur_msgs__action__SendScript_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SendScript_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_ur_msgs__action__SendScript_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_ur_msgs__action__SendScript_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_ur_msgs__action__SendScript_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SendScript_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SendScript_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "my_ur_msgs/action/SendScript_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_ur_msgs__action__SendScript_GetResult_Response() }
  }
}






#[link(name = "my_ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__my_ur_msgs__action__SendScript_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to my_ur_msgs__action__SendScript_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct SendScript_SendGoal;

impl rosidl_runtime_rs::Service for SendScript_SendGoal {
    type Request = SendScript_SendGoal_Request;
    type Response = SendScript_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__my_ur_msgs__action__SendScript_SendGoal() }
    }
}




#[link(name = "my_ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__my_ur_msgs__action__SendScript_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to my_ur_msgs__action__SendScript_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct SendScript_GetResult;

impl rosidl_runtime_rs::Service for SendScript_GetResult {
    type Request = SendScript_GetResult_Request;
    type Response = SendScript_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__my_ur_msgs__action__SendScript_GetResult() }
    }
}


