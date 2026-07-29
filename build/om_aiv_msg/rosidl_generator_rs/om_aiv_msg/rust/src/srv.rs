#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to om_aiv_msg__srv__ArclApi_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ArclApi_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub command: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub line_identifier: std::string::String,

}



impl Default for ArclApi_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ArclApi_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ArclApi_Request {
  type RmwMsg = super::srv::rmw::ArclApi_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        command: msg.command.as_str().into(),
        line_identifier: msg.line_identifier.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        command: msg.command.as_str().into(),
        line_identifier: msg.line_identifier.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      command: msg.command.to_string(),
      line_identifier: msg.line_identifier.to_string(),
    }
  }
}


// Corresponds to om_aiv_msg__srv__ArclApi_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ArclApi_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: std::string::String,

}



impl Default for ArclApi_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ArclApi_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ArclApi_Response {
  type RmwMsg = super::srv::rmw::ArclApi_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: msg.response.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: msg.response.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      response: msg.response.to_string(),
    }
  }
}


// Corresponds to om_aiv_msg__srv__ArclListen_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ArclListen_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub resp_header: std::string::String,

}



impl Default for ArclListen_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ArclListen_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ArclListen_Request {
  type RmwMsg = super::srv::rmw::ArclListen_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        resp_header: msg.resp_header.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        resp_header: msg.resp_header.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      resp_header: msg.resp_header.to_string(),
    }
  }
}


// Corresponds to om_aiv_msg__srv__ArclListen_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ArclListen_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub resp_text: std::string::String,

}



impl Default for ArclListen_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ArclListen_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ArclListen_Response {
  type RmwMsg = super::srv::rmw::ArclListen_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        resp_text: msg.resp_text.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        resp_text: msg.resp_text.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      resp_text: msg.resp_text.to_string(),
    }
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


