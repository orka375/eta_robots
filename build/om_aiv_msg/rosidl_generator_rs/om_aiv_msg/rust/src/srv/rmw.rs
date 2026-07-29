#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "om_aiv_msg__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__om_aiv_msg__srv__ArclApi_Request() -> *const std::ffi::c_void;
}

#[link(name = "om_aiv_msg__rosidl_generator_c")]
extern "C" {
    fn om_aiv_msg__srv__ArclApi_Request__init(msg: *mut ArclApi_Request) -> bool;
    fn om_aiv_msg__srv__ArclApi_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ArclApi_Request>, size: usize) -> bool;
    fn om_aiv_msg__srv__ArclApi_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ArclApi_Request>);
    fn om_aiv_msg__srv__ArclApi_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ArclApi_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ArclApi_Request>) -> bool;
}

// Corresponds to om_aiv_msg__srv__ArclApi_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ArclApi_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub command: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub line_identifier: rosidl_runtime_rs::String,

}



impl Default for ArclApi_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !om_aiv_msg__srv__ArclApi_Request__init(&mut msg as *mut _) {
        panic!("Call to om_aiv_msg__srv__ArclApi_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ArclApi_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { om_aiv_msg__srv__ArclApi_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { om_aiv_msg__srv__ArclApi_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { om_aiv_msg__srv__ArclApi_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ArclApi_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ArclApi_Request where Self: Sized {
  const TYPE_NAME: &'static str = "om_aiv_msg/srv/ArclApi_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__om_aiv_msg__srv__ArclApi_Request() }
  }
}


#[link(name = "om_aiv_msg__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__om_aiv_msg__srv__ArclApi_Response() -> *const std::ffi::c_void;
}

#[link(name = "om_aiv_msg__rosidl_generator_c")]
extern "C" {
    fn om_aiv_msg__srv__ArclApi_Response__init(msg: *mut ArclApi_Response) -> bool;
    fn om_aiv_msg__srv__ArclApi_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ArclApi_Response>, size: usize) -> bool;
    fn om_aiv_msg__srv__ArclApi_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ArclApi_Response>);
    fn om_aiv_msg__srv__ArclApi_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ArclApi_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ArclApi_Response>) -> bool;
}

// Corresponds to om_aiv_msg__srv__ArclApi_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ArclApi_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: rosidl_runtime_rs::String,

}



impl Default for ArclApi_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !om_aiv_msg__srv__ArclApi_Response__init(&mut msg as *mut _) {
        panic!("Call to om_aiv_msg__srv__ArclApi_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ArclApi_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { om_aiv_msg__srv__ArclApi_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { om_aiv_msg__srv__ArclApi_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { om_aiv_msg__srv__ArclApi_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ArclApi_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ArclApi_Response where Self: Sized {
  const TYPE_NAME: &'static str = "om_aiv_msg/srv/ArclApi_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__om_aiv_msg__srv__ArclApi_Response() }
  }
}


#[link(name = "om_aiv_msg__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__om_aiv_msg__srv__ArclListen_Request() -> *const std::ffi::c_void;
}

#[link(name = "om_aiv_msg__rosidl_generator_c")]
extern "C" {
    fn om_aiv_msg__srv__ArclListen_Request__init(msg: *mut ArclListen_Request) -> bool;
    fn om_aiv_msg__srv__ArclListen_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ArclListen_Request>, size: usize) -> bool;
    fn om_aiv_msg__srv__ArclListen_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ArclListen_Request>);
    fn om_aiv_msg__srv__ArclListen_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ArclListen_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ArclListen_Request>) -> bool;
}

// Corresponds to om_aiv_msg__srv__ArclListen_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ArclListen_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub resp_header: rosidl_runtime_rs::String,

}



impl Default for ArclListen_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !om_aiv_msg__srv__ArclListen_Request__init(&mut msg as *mut _) {
        panic!("Call to om_aiv_msg__srv__ArclListen_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ArclListen_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { om_aiv_msg__srv__ArclListen_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { om_aiv_msg__srv__ArclListen_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { om_aiv_msg__srv__ArclListen_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ArclListen_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ArclListen_Request where Self: Sized {
  const TYPE_NAME: &'static str = "om_aiv_msg/srv/ArclListen_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__om_aiv_msg__srv__ArclListen_Request() }
  }
}


#[link(name = "om_aiv_msg__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__om_aiv_msg__srv__ArclListen_Response() -> *const std::ffi::c_void;
}

#[link(name = "om_aiv_msg__rosidl_generator_c")]
extern "C" {
    fn om_aiv_msg__srv__ArclListen_Response__init(msg: *mut ArclListen_Response) -> bool;
    fn om_aiv_msg__srv__ArclListen_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ArclListen_Response>, size: usize) -> bool;
    fn om_aiv_msg__srv__ArclListen_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ArclListen_Response>);
    fn om_aiv_msg__srv__ArclListen_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ArclListen_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ArclListen_Response>) -> bool;
}

// Corresponds to om_aiv_msg__srv__ArclListen_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ArclListen_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub resp_text: rosidl_runtime_rs::String,

}



impl Default for ArclListen_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !om_aiv_msg__srv__ArclListen_Response__init(&mut msg as *mut _) {
        panic!("Call to om_aiv_msg__srv__ArclListen_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ArclListen_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { om_aiv_msg__srv__ArclListen_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { om_aiv_msg__srv__ArclListen_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { om_aiv_msg__srv__ArclListen_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ArclListen_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ArclListen_Response where Self: Sized {
  const TYPE_NAME: &'static str = "om_aiv_msg/srv/ArclListen_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__om_aiv_msg__srv__ArclListen_Response() }
  }
}






#[link(name = "om_aiv_msg__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__om_aiv_msg__srv__ArclApi() -> *const std::ffi::c_void;
}

// Corresponds to om_aiv_msg__srv__ArclApi
#[allow(missing_docs, non_camel_case_types)]
pub struct ArclApi;

impl rosidl_runtime_rs::Service for ArclApi {
    type Request = ArclApi_Request;
    type Response = ArclApi_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__om_aiv_msg__srv__ArclApi() }
    }
}




#[link(name = "om_aiv_msg__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__om_aiv_msg__srv__ArclListen() -> *const std::ffi::c_void;
}

// Corresponds to om_aiv_msg__srv__ArclListen
#[allow(missing_docs, non_camel_case_types)]
pub struct ArclListen;

impl rosidl_runtime_rs::Service for ArclListen {
    type Request = ArclListen_Request;
    type Response = ArclListen_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__om_aiv_msg__srv__ArclListen() }
    }
}


