#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__srv__SetAnalogOutput_Request() -> *const std::ffi::c_void;
}

#[link(name = "ur_msgs__rosidl_generator_c")]
extern "C" {
    fn ur_msgs__srv__SetAnalogOutput_Request__init(msg: *mut SetAnalogOutput_Request) -> bool;
    fn ur_msgs__srv__SetAnalogOutput_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetAnalogOutput_Request>, size: usize) -> bool;
    fn ur_msgs__srv__SetAnalogOutput_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetAnalogOutput_Request>);
    fn ur_msgs__srv__SetAnalogOutput_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetAnalogOutput_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetAnalogOutput_Request>) -> bool;
}

// Corresponds to ur_msgs__srv__SetAnalogOutput_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetAnalogOutput_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: super::super::msg::rmw::Analog,

}



impl Default for SetAnalogOutput_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !ur_msgs__srv__SetAnalogOutput_Request__init(&mut msg as *mut _) {
        panic!("Call to ur_msgs__srv__SetAnalogOutput_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetAnalogOutput_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__srv__SetAnalogOutput_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__srv__SetAnalogOutput_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__srv__SetAnalogOutput_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetAnalogOutput_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetAnalogOutput_Request where Self: Sized {
  const TYPE_NAME: &'static str = "ur_msgs/srv/SetAnalogOutput_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__srv__SetAnalogOutput_Request() }
  }
}


#[link(name = "ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__srv__SetAnalogOutput_Response() -> *const std::ffi::c_void;
}

#[link(name = "ur_msgs__rosidl_generator_c")]
extern "C" {
    fn ur_msgs__srv__SetAnalogOutput_Response__init(msg: *mut SetAnalogOutput_Response) -> bool;
    fn ur_msgs__srv__SetAnalogOutput_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetAnalogOutput_Response>, size: usize) -> bool;
    fn ur_msgs__srv__SetAnalogOutput_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetAnalogOutput_Response>);
    fn ur_msgs__srv__SetAnalogOutput_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetAnalogOutput_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetAnalogOutput_Response>) -> bool;
}

// Corresponds to ur_msgs__srv__SetAnalogOutput_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetAnalogOutput_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for SetAnalogOutput_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !ur_msgs__srv__SetAnalogOutput_Response__init(&mut msg as *mut _) {
        panic!("Call to ur_msgs__srv__SetAnalogOutput_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetAnalogOutput_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__srv__SetAnalogOutput_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__srv__SetAnalogOutput_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__srv__SetAnalogOutput_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetAnalogOutput_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetAnalogOutput_Response where Self: Sized {
  const TYPE_NAME: &'static str = "ur_msgs/srv/SetAnalogOutput_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__srv__SetAnalogOutput_Response() }
  }
}


#[link(name = "ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__srv__SetGravity_Request() -> *const std::ffi::c_void;
}

#[link(name = "ur_msgs__rosidl_generator_c")]
extern "C" {
    fn ur_msgs__srv__SetGravity_Request__init(msg: *mut SetGravity_Request) -> bool;
    fn ur_msgs__srv__SetGravity_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetGravity_Request>, size: usize) -> bool;
    fn ur_msgs__srv__SetGravity_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetGravity_Request>);
    fn ur_msgs__srv__SetGravity_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetGravity_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetGravity_Request>) -> bool;
}

// Corresponds to ur_msgs__srv__SetGravity_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetGravity_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub gravity: geometry_msgs::msg::rmw::Vector3Stamped,

}



impl Default for SetGravity_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !ur_msgs__srv__SetGravity_Request__init(&mut msg as *mut _) {
        panic!("Call to ur_msgs__srv__SetGravity_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetGravity_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__srv__SetGravity_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__srv__SetGravity_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__srv__SetGravity_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetGravity_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetGravity_Request where Self: Sized {
  const TYPE_NAME: &'static str = "ur_msgs/srv/SetGravity_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__srv__SetGravity_Request() }
  }
}


#[link(name = "ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__srv__SetGravity_Response() -> *const std::ffi::c_void;
}

#[link(name = "ur_msgs__rosidl_generator_c")]
extern "C" {
    fn ur_msgs__srv__SetGravity_Response__init(msg: *mut SetGravity_Response) -> bool;
    fn ur_msgs__srv__SetGravity_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetGravity_Response>, size: usize) -> bool;
    fn ur_msgs__srv__SetGravity_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetGravity_Response>);
    fn ur_msgs__srv__SetGravity_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetGravity_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetGravity_Response>) -> bool;
}

// Corresponds to ur_msgs__srv__SetGravity_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetGravity_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status: rosidl_runtime_rs::String,

}



impl Default for SetGravity_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !ur_msgs__srv__SetGravity_Response__init(&mut msg as *mut _) {
        panic!("Call to ur_msgs__srv__SetGravity_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetGravity_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__srv__SetGravity_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__srv__SetGravity_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__srv__SetGravity_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetGravity_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetGravity_Response where Self: Sized {
  const TYPE_NAME: &'static str = "ur_msgs/srv/SetGravity_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__srv__SetGravity_Response() }
  }
}


#[link(name = "ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__srv__SetPayload_Request() -> *const std::ffi::c_void;
}

#[link(name = "ur_msgs__rosidl_generator_c")]
extern "C" {
    fn ur_msgs__srv__SetPayload_Request__init(msg: *mut SetPayload_Request) -> bool;
    fn ur_msgs__srv__SetPayload_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetPayload_Request>, size: usize) -> bool;
    fn ur_msgs__srv__SetPayload_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetPayload_Request>);
    fn ur_msgs__srv__SetPayload_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetPayload_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetPayload_Request>) -> bool;
}

// Corresponds to ur_msgs__srv__SetPayload_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetPayload_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mass: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub center_of_gravity: geometry_msgs::msg::rmw::Vector3,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ixx: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub iyy: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub izz: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ixy: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ixz: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub iyz: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub transition_time: builtin_interfaces::msg::rmw::Duration,

}



impl Default for SetPayload_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !ur_msgs__srv__SetPayload_Request__init(&mut msg as *mut _) {
        panic!("Call to ur_msgs__srv__SetPayload_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetPayload_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__srv__SetPayload_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__srv__SetPayload_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__srv__SetPayload_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetPayload_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetPayload_Request where Self: Sized {
  const TYPE_NAME: &'static str = "ur_msgs/srv/SetPayload_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__srv__SetPayload_Request() }
  }
}


#[link(name = "ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__srv__SetPayload_Response() -> *const std::ffi::c_void;
}

#[link(name = "ur_msgs__rosidl_generator_c")]
extern "C" {
    fn ur_msgs__srv__SetPayload_Response__init(msg: *mut SetPayload_Response) -> bool;
    fn ur_msgs__srv__SetPayload_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetPayload_Response>, size: usize) -> bool;
    fn ur_msgs__srv__SetPayload_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetPayload_Response>);
    fn ur_msgs__srv__SetPayload_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetPayload_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetPayload_Response>) -> bool;
}

// Corresponds to ur_msgs__srv__SetPayload_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetPayload_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for SetPayload_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !ur_msgs__srv__SetPayload_Response__init(&mut msg as *mut _) {
        panic!("Call to ur_msgs__srv__SetPayload_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetPayload_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__srv__SetPayload_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__srv__SetPayload_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__srv__SetPayload_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetPayload_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetPayload_Response where Self: Sized {
  const TYPE_NAME: &'static str = "ur_msgs/srv/SetPayload_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__srv__SetPayload_Response() }
  }
}


#[link(name = "ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__srv__SetSpeedSliderFraction_Request() -> *const std::ffi::c_void;
}

#[link(name = "ur_msgs__rosidl_generator_c")]
extern "C" {
    fn ur_msgs__srv__SetSpeedSliderFraction_Request__init(msg: *mut SetSpeedSliderFraction_Request) -> bool;
    fn ur_msgs__srv__SetSpeedSliderFraction_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetSpeedSliderFraction_Request>, size: usize) -> bool;
    fn ur_msgs__srv__SetSpeedSliderFraction_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetSpeedSliderFraction_Request>);
    fn ur_msgs__srv__SetSpeedSliderFraction_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetSpeedSliderFraction_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetSpeedSliderFraction_Request>) -> bool;
}

// Corresponds to ur_msgs__srv__SetSpeedSliderFraction_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetSpeedSliderFraction_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub speed_slider_fraction: f64,

}



impl Default for SetSpeedSliderFraction_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !ur_msgs__srv__SetSpeedSliderFraction_Request__init(&mut msg as *mut _) {
        panic!("Call to ur_msgs__srv__SetSpeedSliderFraction_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetSpeedSliderFraction_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__srv__SetSpeedSliderFraction_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__srv__SetSpeedSliderFraction_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__srv__SetSpeedSliderFraction_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetSpeedSliderFraction_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetSpeedSliderFraction_Request where Self: Sized {
  const TYPE_NAME: &'static str = "ur_msgs/srv/SetSpeedSliderFraction_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__srv__SetSpeedSliderFraction_Request() }
  }
}


#[link(name = "ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__srv__SetSpeedSliderFraction_Response() -> *const std::ffi::c_void;
}

#[link(name = "ur_msgs__rosidl_generator_c")]
extern "C" {
    fn ur_msgs__srv__SetSpeedSliderFraction_Response__init(msg: *mut SetSpeedSliderFraction_Response) -> bool;
    fn ur_msgs__srv__SetSpeedSliderFraction_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetSpeedSliderFraction_Response>, size: usize) -> bool;
    fn ur_msgs__srv__SetSpeedSliderFraction_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetSpeedSliderFraction_Response>);
    fn ur_msgs__srv__SetSpeedSliderFraction_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetSpeedSliderFraction_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetSpeedSliderFraction_Response>) -> bool;
}

// Corresponds to ur_msgs__srv__SetSpeedSliderFraction_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetSpeedSliderFraction_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for SetSpeedSliderFraction_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !ur_msgs__srv__SetSpeedSliderFraction_Response__init(&mut msg as *mut _) {
        panic!("Call to ur_msgs__srv__SetSpeedSliderFraction_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetSpeedSliderFraction_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__srv__SetSpeedSliderFraction_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__srv__SetSpeedSliderFraction_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__srv__SetSpeedSliderFraction_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetSpeedSliderFraction_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetSpeedSliderFraction_Response where Self: Sized {
  const TYPE_NAME: &'static str = "ur_msgs/srv/SetSpeedSliderFraction_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__srv__SetSpeedSliderFraction_Response() }
  }
}


#[link(name = "ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__srv__SetIO_Request() -> *const std::ffi::c_void;
}

#[link(name = "ur_msgs__rosidl_generator_c")]
extern "C" {
    fn ur_msgs__srv__SetIO_Request__init(msg: *mut SetIO_Request) -> bool;
    fn ur_msgs__srv__SetIO_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetIO_Request>, size: usize) -> bool;
    fn ur_msgs__srv__SetIO_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetIO_Request>);
    fn ur_msgs__srv__SetIO_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetIO_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetIO_Request>) -> bool;
}

// Corresponds to ur_msgs__srv__SetIO_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetIO_Request {
    /// request fields
    pub fun: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pin: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub state: f32,

}

impl SetIO_Request {
    /// constants
    /// pin mapping
    /// analog out
    pub const PIN_AOUT0: i8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PIN_AOUT1: i8 = 1;

    /// digital out
    pub const PIN_DOUT0: i8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PIN_DOUT1: i8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PIN_DOUT2: i8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PIN_DOUT3: i8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PIN_DOUT4: i8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PIN_DOUT5: i8 = 5;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PIN_DOUT6: i8 = 6;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PIN_DOUT7: i8 = 7;

    /// configurable out
    pub const PIN_CONF_OUT0: i8 = 8;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PIN_CONF_OUT1: i8 = 9;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PIN_CONF_OUT2: i8 = 10;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PIN_CONF_OUT3: i8 = 11;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PIN_CONF_OUT4: i8 = 12;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PIN_CONF_OUT5: i8 = 13;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PIN_CONF_OUT6: i8 = 14;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PIN_CONF_OUT7: i8 = 15;

    /// digital tool output
    pub const PIN_TOOL_DOUT0: i8 = 16;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PIN_TOOL_DOUT1: i8 = 17;

    /// valid function values
    ///
    /// Note: 'fun' is short for 'function' (ie: the function the service should perform).
    pub const FUN_SET_DIGITAL_OUT: i8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FUN_SET_FLAG: i8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FUN_SET_ANALOG_OUT: i8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FUN_SET_TOOL_VOLTAGE: i8 = 4;

    /// valid values for 'state' when setting digital IO or flags
    pub const STATE_OFF: i8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATE_ON: i8 = 1;

    /// valid 'state' values when setting tool voltage
    pub const STATE_TOOL_VOLTAGE_0V: i8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATE_TOOL_VOLTAGE_12V: i8 = 12;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATE_TOOL_VOLTAGE_24V: i8 = 24;

}


impl Default for SetIO_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !ur_msgs__srv__SetIO_Request__init(&mut msg as *mut _) {
        panic!("Call to ur_msgs__srv__SetIO_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetIO_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__srv__SetIO_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__srv__SetIO_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__srv__SetIO_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetIO_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetIO_Request where Self: Sized {
  const TYPE_NAME: &'static str = "ur_msgs/srv/SetIO_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__srv__SetIO_Request() }
  }
}


#[link(name = "ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__srv__SetIO_Response() -> *const std::ffi::c_void;
}

#[link(name = "ur_msgs__rosidl_generator_c")]
extern "C" {
    fn ur_msgs__srv__SetIO_Response__init(msg: *mut SetIO_Response) -> bool;
    fn ur_msgs__srv__SetIO_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetIO_Response>, size: usize) -> bool;
    fn ur_msgs__srv__SetIO_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetIO_Response>);
    fn ur_msgs__srv__SetIO_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetIO_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetIO_Response>) -> bool;
}

// Corresponds to ur_msgs__srv__SetIO_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetIO_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for SetIO_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !ur_msgs__srv__SetIO_Response__init(&mut msg as *mut _) {
        panic!("Call to ur_msgs__srv__SetIO_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetIO_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__srv__SetIO_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__srv__SetIO_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__srv__SetIO_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetIO_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetIO_Response where Self: Sized {
  const TYPE_NAME: &'static str = "ur_msgs/srv/SetIO_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__srv__SetIO_Response() }
  }
}


#[link(name = "ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__srv__GetRobotSoftwareVersion_Request() -> *const std::ffi::c_void;
}

#[link(name = "ur_msgs__rosidl_generator_c")]
extern "C" {
    fn ur_msgs__srv__GetRobotSoftwareVersion_Request__init(msg: *mut GetRobotSoftwareVersion_Request) -> bool;
    fn ur_msgs__srv__GetRobotSoftwareVersion_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetRobotSoftwareVersion_Request>, size: usize) -> bool;
    fn ur_msgs__srv__GetRobotSoftwareVersion_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetRobotSoftwareVersion_Request>);
    fn ur_msgs__srv__GetRobotSoftwareVersion_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetRobotSoftwareVersion_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetRobotSoftwareVersion_Request>) -> bool;
}

// Corresponds to ur_msgs__srv__GetRobotSoftwareVersion_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetRobotSoftwareVersion_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetRobotSoftwareVersion_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !ur_msgs__srv__GetRobotSoftwareVersion_Request__init(&mut msg as *mut _) {
        panic!("Call to ur_msgs__srv__GetRobotSoftwareVersion_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetRobotSoftwareVersion_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__srv__GetRobotSoftwareVersion_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__srv__GetRobotSoftwareVersion_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__srv__GetRobotSoftwareVersion_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetRobotSoftwareVersion_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetRobotSoftwareVersion_Request where Self: Sized {
  const TYPE_NAME: &'static str = "ur_msgs/srv/GetRobotSoftwareVersion_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__srv__GetRobotSoftwareVersion_Request() }
  }
}


#[link(name = "ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__srv__GetRobotSoftwareVersion_Response() -> *const std::ffi::c_void;
}

#[link(name = "ur_msgs__rosidl_generator_c")]
extern "C" {
    fn ur_msgs__srv__GetRobotSoftwareVersion_Response__init(msg: *mut GetRobotSoftwareVersion_Response) -> bool;
    fn ur_msgs__srv__GetRobotSoftwareVersion_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetRobotSoftwareVersion_Response>, size: usize) -> bool;
    fn ur_msgs__srv__GetRobotSoftwareVersion_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetRobotSoftwareVersion_Response>);
    fn ur_msgs__srv__GetRobotSoftwareVersion_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetRobotSoftwareVersion_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetRobotSoftwareVersion_Response>) -> bool;
}

// Corresponds to ur_msgs__srv__GetRobotSoftwareVersion_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetRobotSoftwareVersion_Response {
    /// Major version number
    pub major: u32,

    /// Minor version number
    pub minor: u32,

    /// Bugfix version number
    pub bugfix: u32,

    /// Build number
    pub build: u32,

}



impl Default for GetRobotSoftwareVersion_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !ur_msgs__srv__GetRobotSoftwareVersion_Response__init(&mut msg as *mut _) {
        panic!("Call to ur_msgs__srv__GetRobotSoftwareVersion_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetRobotSoftwareVersion_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__srv__GetRobotSoftwareVersion_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__srv__GetRobotSoftwareVersion_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__srv__GetRobotSoftwareVersion_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetRobotSoftwareVersion_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetRobotSoftwareVersion_Response where Self: Sized {
  const TYPE_NAME: &'static str = "ur_msgs/srv/GetRobotSoftwareVersion_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__srv__GetRobotSoftwareVersion_Response() }
  }
}


#[link(name = "ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__srv__SetForceMode_Request() -> *const std::ffi::c_void;
}

#[link(name = "ur_msgs__rosidl_generator_c")]
extern "C" {
    fn ur_msgs__srv__SetForceMode_Request__init(msg: *mut SetForceMode_Request) -> bool;
    fn ur_msgs__srv__SetForceMode_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetForceMode_Request>, size: usize) -> bool;
    fn ur_msgs__srv__SetForceMode_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetForceMode_Request>);
    fn ur_msgs__srv__SetForceMode_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetForceMode_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetForceMode_Request>) -> bool;
}

// Corresponds to ur_msgs__srv__SetForceMode_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetForceMode_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub task_frame: geometry_msgs::msg::rmw::PoseStamped,

    /// 1 means that the robot will be compliant in the corresponding axis of the task frame
    pub selection_vector_x: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub selection_vector_y: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub selection_vector_z: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub selection_vector_rx: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub selection_vector_ry: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub selection_vector_rz: bool,

    /// The forces/torques the robot will apply to its environment. For geometric interpretation, please
    /// see parameter `type`
    pub wrench: geometry_msgs::msg::rmw::Wrench,

    /// An integer specifying how the robot interprets the force frame
    /// 1: The force frame is transformed in a way such that its y-axis is aligned with a vector pointing
    ///    from the robot tcp towards the origin of the force frame.
    /// 2: The force frame is not transformed.
    /// 3: The force frame is transformed in a way such that its x-axis is the projection of the robot tcp
    ///     velocity vector onto the x-y plane of the force frame.
    pub type_: u8,

    /// Maximum allowed tcp speed (relative to the task frame).
    /// PLEASE NOTE: This is only relevant for axes marked as compliant in the selection_vector
    pub speed_limits: geometry_msgs::msg::rmw::Twist,

    /// For non-compliant axes, these values are the maximum allowed deviation along/about an axis
    /// between the actual tcp position and the one set by the program.
    pub deviation_limits: [f32; 6],

    /// Force mode damping factor. Sets the damping parameter in force mode. In range, default value is 0.025
    /// A value of 1 is full damping, so the robot will decelerate quickly if no force is present. A value of 0
    /// is no damping, here the robot will maintain the speed.
    pub damping_factor: f32,

    /// Force mode gain scaling factor. Scales the gain in force mode. scaling parameter is in range, default is 0.5.
    /// A value larger than 1 can make force mode unstable, e.g. in case of collisions or pushing against hard surfaces.
    pub gain_scaling: f32,

}

impl SetForceMode_Request {
    /// Type constants:
    pub const TCP_TO_ORIGIN: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const NO_TRANSFORM: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TCP_VELOCITY_TO_X_Y: u8 = 3;

}


impl Default for SetForceMode_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !ur_msgs__srv__SetForceMode_Request__init(&mut msg as *mut _) {
        panic!("Call to ur_msgs__srv__SetForceMode_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetForceMode_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__srv__SetForceMode_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__srv__SetForceMode_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__srv__SetForceMode_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetForceMode_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetForceMode_Request where Self: Sized {
  const TYPE_NAME: &'static str = "ur_msgs/srv/SetForceMode_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__srv__SetForceMode_Request() }
  }
}


#[link(name = "ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__srv__SetForceMode_Response() -> *const std::ffi::c_void;
}

#[link(name = "ur_msgs__rosidl_generator_c")]
extern "C" {
    fn ur_msgs__srv__SetForceMode_Response__init(msg: *mut SetForceMode_Response) -> bool;
    fn ur_msgs__srv__SetForceMode_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetForceMode_Response>, size: usize) -> bool;
    fn ur_msgs__srv__SetForceMode_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetForceMode_Response>);
    fn ur_msgs__srv__SetForceMode_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetForceMode_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetForceMode_Response>) -> bool;
}

// Corresponds to ur_msgs__srv__SetForceMode_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetForceMode_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for SetForceMode_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !ur_msgs__srv__SetForceMode_Response__init(&mut msg as *mut _) {
        panic!("Call to ur_msgs__srv__SetForceMode_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetForceMode_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__srv__SetForceMode_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__srv__SetForceMode_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__srv__SetForceMode_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetForceMode_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetForceMode_Response where Self: Sized {
  const TYPE_NAME: &'static str = "ur_msgs/srv/SetForceMode_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__srv__SetForceMode_Response() }
  }
}


#[link(name = "ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__srv__SetFrictionModelParameters_Request() -> *const std::ffi::c_void;
}

#[link(name = "ur_msgs__rosidl_generator_c")]
extern "C" {
    fn ur_msgs__srv__SetFrictionModelParameters_Request__init(msg: *mut SetFrictionModelParameters_Request) -> bool;
    fn ur_msgs__srv__SetFrictionModelParameters_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetFrictionModelParameters_Request>, size: usize) -> bool;
    fn ur_msgs__srv__SetFrictionModelParameters_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetFrictionModelParameters_Request>);
    fn ur_msgs__srv__SetFrictionModelParameters_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetFrictionModelParameters_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetFrictionModelParameters_Request>) -> bool;
}

// Corresponds to ur_msgs__srv__SetFrictionModelParameters_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetFrictionModelParameters_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub parameters: super::super::msg::rmw::FrictionModelParameters,

}



impl Default for SetFrictionModelParameters_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !ur_msgs__srv__SetFrictionModelParameters_Request__init(&mut msg as *mut _) {
        panic!("Call to ur_msgs__srv__SetFrictionModelParameters_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetFrictionModelParameters_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__srv__SetFrictionModelParameters_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__srv__SetFrictionModelParameters_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__srv__SetFrictionModelParameters_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetFrictionModelParameters_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetFrictionModelParameters_Request where Self: Sized {
  const TYPE_NAME: &'static str = "ur_msgs/srv/SetFrictionModelParameters_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__srv__SetFrictionModelParameters_Request() }
  }
}


#[link(name = "ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__srv__SetFrictionModelParameters_Response() -> *const std::ffi::c_void;
}

#[link(name = "ur_msgs__rosidl_generator_c")]
extern "C" {
    fn ur_msgs__srv__SetFrictionModelParameters_Response__init(msg: *mut SetFrictionModelParameters_Response) -> bool;
    fn ur_msgs__srv__SetFrictionModelParameters_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetFrictionModelParameters_Response>, size: usize) -> bool;
    fn ur_msgs__srv__SetFrictionModelParameters_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetFrictionModelParameters_Response>);
    fn ur_msgs__srv__SetFrictionModelParameters_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetFrictionModelParameters_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetFrictionModelParameters_Response>) -> bool;
}

// Corresponds to ur_msgs__srv__SetFrictionModelParameters_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetFrictionModelParameters_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for SetFrictionModelParameters_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !ur_msgs__srv__SetFrictionModelParameters_Response__init(&mut msg as *mut _) {
        panic!("Call to ur_msgs__srv__SetFrictionModelParameters_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetFrictionModelParameters_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__srv__SetFrictionModelParameters_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__srv__SetFrictionModelParameters_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ur_msgs__srv__SetFrictionModelParameters_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetFrictionModelParameters_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetFrictionModelParameters_Response where Self: Sized {
  const TYPE_NAME: &'static str = "ur_msgs/srv/SetFrictionModelParameters_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__ur_msgs__srv__SetFrictionModelParameters_Response() }
  }
}






#[link(name = "ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__ur_msgs__srv__SetAnalogOutput() -> *const std::ffi::c_void;
}

// Corresponds to ur_msgs__srv__SetAnalogOutput
#[allow(missing_docs, non_camel_case_types)]
pub struct SetAnalogOutput;

impl rosidl_runtime_rs::Service for SetAnalogOutput {
    type Request = SetAnalogOutput_Request;
    type Response = SetAnalogOutput_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__ur_msgs__srv__SetAnalogOutput() }
    }
}




#[link(name = "ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__ur_msgs__srv__SetGravity() -> *const std::ffi::c_void;
}

// Corresponds to ur_msgs__srv__SetGravity
#[allow(missing_docs, non_camel_case_types)]
pub struct SetGravity;

impl rosidl_runtime_rs::Service for SetGravity {
    type Request = SetGravity_Request;
    type Response = SetGravity_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__ur_msgs__srv__SetGravity() }
    }
}




#[link(name = "ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__ur_msgs__srv__SetPayload() -> *const std::ffi::c_void;
}

// Corresponds to ur_msgs__srv__SetPayload
#[allow(missing_docs, non_camel_case_types)]
pub struct SetPayload;

impl rosidl_runtime_rs::Service for SetPayload {
    type Request = SetPayload_Request;
    type Response = SetPayload_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__ur_msgs__srv__SetPayload() }
    }
}




#[link(name = "ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__ur_msgs__srv__SetSpeedSliderFraction() -> *const std::ffi::c_void;
}

// Corresponds to ur_msgs__srv__SetSpeedSliderFraction
#[allow(missing_docs, non_camel_case_types)]
pub struct SetSpeedSliderFraction;

impl rosidl_runtime_rs::Service for SetSpeedSliderFraction {
    type Request = SetSpeedSliderFraction_Request;
    type Response = SetSpeedSliderFraction_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__ur_msgs__srv__SetSpeedSliderFraction() }
    }
}




#[link(name = "ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__ur_msgs__srv__SetIO() -> *const std::ffi::c_void;
}

// Corresponds to ur_msgs__srv__SetIO
#[allow(missing_docs, non_camel_case_types)]
pub struct SetIO;

impl rosidl_runtime_rs::Service for SetIO {
    type Request = SetIO_Request;
    type Response = SetIO_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__ur_msgs__srv__SetIO() }
    }
}




#[link(name = "ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__ur_msgs__srv__GetRobotSoftwareVersion() -> *const std::ffi::c_void;
}

// Corresponds to ur_msgs__srv__GetRobotSoftwareVersion
#[allow(missing_docs, non_camel_case_types)]
pub struct GetRobotSoftwareVersion;

impl rosidl_runtime_rs::Service for GetRobotSoftwareVersion {
    type Request = GetRobotSoftwareVersion_Request;
    type Response = GetRobotSoftwareVersion_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__ur_msgs__srv__GetRobotSoftwareVersion() }
    }
}




#[link(name = "ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__ur_msgs__srv__SetForceMode() -> *const std::ffi::c_void;
}

// Corresponds to ur_msgs__srv__SetForceMode
#[allow(missing_docs, non_camel_case_types)]
pub struct SetForceMode;

impl rosidl_runtime_rs::Service for SetForceMode {
    type Request = SetForceMode_Request;
    type Response = SetForceMode_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__ur_msgs__srv__SetForceMode() }
    }
}




#[link(name = "ur_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__ur_msgs__srv__SetFrictionModelParameters() -> *const std::ffi::c_void;
}

// Corresponds to ur_msgs__srv__SetFrictionModelParameters
#[allow(missing_docs, non_camel_case_types)]
pub struct SetFrictionModelParameters;

impl rosidl_runtime_rs::Service for SetFrictionModelParameters {
    type Request = SetFrictionModelParameters_Request;
    type Response = SetFrictionModelParameters_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__ur_msgs__srv__SetFrictionModelParameters() }
    }
}


