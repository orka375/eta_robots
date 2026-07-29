#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to ur_msgs__srv__SetAnalogOutput_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetAnalogOutput_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: super::msg::Analog,

}



impl Default for SetAnalogOutput_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetAnalogOutput_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetAnalogOutput_Request {
  type RmwMsg = super::srv::rmw::SetAnalogOutput_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: super::msg::Analog::into_rmw_message(std::borrow::Cow::Owned(msg.data)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: super::msg::Analog::into_rmw_message(std::borrow::Cow::Borrowed(&msg.data)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data: super::msg::Analog::from_rmw_message(msg.data),
    }
  }
}


// Corresponds to ur_msgs__srv__SetAnalogOutput_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetAnalogOutput_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for SetAnalogOutput_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetAnalogOutput_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetAnalogOutput_Response {
  type RmwMsg = super::srv::rmw::SetAnalogOutput_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
    }
  }
}


// Corresponds to ur_msgs__srv__SetGravity_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetGravity_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub gravity: geometry_msgs::msg::Vector3Stamped,

}



impl Default for SetGravity_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetGravity_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetGravity_Request {
  type RmwMsg = super::srv::rmw::SetGravity_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        gravity: geometry_msgs::msg::Vector3Stamped::into_rmw_message(std::borrow::Cow::Owned(msg.gravity)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        gravity: geometry_msgs::msg::Vector3Stamped::into_rmw_message(std::borrow::Cow::Borrowed(&msg.gravity)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      gravity: geometry_msgs::msg::Vector3Stamped::from_rmw_message(msg.gravity),
    }
  }
}


// Corresponds to ur_msgs__srv__SetGravity_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetGravity_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status: std::string::String,

}



impl Default for SetGravity_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetGravity_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetGravity_Response {
  type RmwMsg = super::srv::rmw::SetGravity_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        status: msg.status.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        status: msg.status.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      status: msg.status.to_string(),
    }
  }
}


// Corresponds to ur_msgs__srv__SetPayload_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetPayload_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mass: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub center_of_gravity: geometry_msgs::msg::Vector3,


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
    pub transition_time: builtin_interfaces::msg::Duration,

}



impl Default for SetPayload_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetPayload_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetPayload_Request {
  type RmwMsg = super::srv::rmw::SetPayload_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mass: msg.mass,
        center_of_gravity: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Owned(msg.center_of_gravity)).into_owned(),
        ixx: msg.ixx,
        iyy: msg.iyy,
        izz: msg.izz,
        ixy: msg.ixy,
        ixz: msg.ixz,
        iyz: msg.iyz,
        transition_time: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Owned(msg.transition_time)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      mass: msg.mass,
        center_of_gravity: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Borrowed(&msg.center_of_gravity)).into_owned(),
      ixx: msg.ixx,
      iyy: msg.iyy,
      izz: msg.izz,
      ixy: msg.ixy,
      ixz: msg.ixz,
      iyz: msg.iyz,
        transition_time: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Borrowed(&msg.transition_time)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      mass: msg.mass,
      center_of_gravity: geometry_msgs::msg::Vector3::from_rmw_message(msg.center_of_gravity),
      ixx: msg.ixx,
      iyy: msg.iyy,
      izz: msg.izz,
      ixy: msg.ixy,
      ixz: msg.ixz,
      iyz: msg.iyz,
      transition_time: builtin_interfaces::msg::Duration::from_rmw_message(msg.transition_time),
    }
  }
}


// Corresponds to ur_msgs__srv__SetPayload_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetPayload_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for SetPayload_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetPayload_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetPayload_Response {
  type RmwMsg = super::srv::rmw::SetPayload_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
    }
  }
}


// Corresponds to ur_msgs__srv__SetSpeedSliderFraction_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetSpeedSliderFraction_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub speed_slider_fraction: f64,

}



impl Default for SetSpeedSliderFraction_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetSpeedSliderFraction_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetSpeedSliderFraction_Request {
  type RmwMsg = super::srv::rmw::SetSpeedSliderFraction_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        speed_slider_fraction: msg.speed_slider_fraction,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      speed_slider_fraction: msg.speed_slider_fraction,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      speed_slider_fraction: msg.speed_slider_fraction,
    }
  }
}


// Corresponds to ur_msgs__srv__SetSpeedSliderFraction_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetSpeedSliderFraction_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for SetSpeedSliderFraction_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetSpeedSliderFraction_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetSpeedSliderFraction_Response {
  type RmwMsg = super::srv::rmw::SetSpeedSliderFraction_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
    }
  }
}


// Corresponds to ur_msgs__srv__SetIO_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetIO_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetIO_Request {
  type RmwMsg = super::srv::rmw::SetIO_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        fun: msg.fun,
        pin: msg.pin,
        state: msg.state,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      fun: msg.fun,
      pin: msg.pin,
      state: msg.state,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      fun: msg.fun,
      pin: msg.pin,
      state: msg.state,
    }
  }
}


// Corresponds to ur_msgs__srv__SetIO_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetIO_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for SetIO_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetIO_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetIO_Response {
  type RmwMsg = super::srv::rmw::SetIO_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
    }
  }
}


// Corresponds to ur_msgs__srv__GetRobotSoftwareVersion_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetRobotSoftwareVersion_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetRobotSoftwareVersion_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetRobotSoftwareVersion_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetRobotSoftwareVersion_Request {
  type RmwMsg = super::srv::rmw::GetRobotSoftwareVersion_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


// Corresponds to ur_msgs__srv__GetRobotSoftwareVersion_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetRobotSoftwareVersion_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetRobotSoftwareVersion_Response {
  type RmwMsg = super::srv::rmw::GetRobotSoftwareVersion_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        major: msg.major,
        minor: msg.minor,
        bugfix: msg.bugfix,
        build: msg.build,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      major: msg.major,
      minor: msg.minor,
      bugfix: msg.bugfix,
      build: msg.build,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      major: msg.major,
      minor: msg.minor,
      bugfix: msg.bugfix,
      build: msg.build,
    }
  }
}


// Corresponds to ur_msgs__srv__SetForceMode_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetForceMode_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub task_frame: geometry_msgs::msg::PoseStamped,

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
    pub wrench: geometry_msgs::msg::Wrench,

    /// An integer specifying how the robot interprets the force frame
    /// 1: The force frame is transformed in a way such that its y-axis is aligned with a vector pointing
    ///    from the robot tcp towards the origin of the force frame.
    /// 2: The force frame is not transformed.
    /// 3: The force frame is transformed in a way such that its x-axis is the projection of the robot tcp
    ///     velocity vector onto the x-y plane of the force frame.
    pub type_: u8,

    /// Maximum allowed tcp speed (relative to the task frame).
    /// PLEASE NOTE: This is only relevant for axes marked as compliant in the selection_vector
    pub speed_limits: geometry_msgs::msg::Twist,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetForceMode_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetForceMode_Request {
  type RmwMsg = super::srv::rmw::SetForceMode_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        task_frame: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Owned(msg.task_frame)).into_owned(),
        selection_vector_x: msg.selection_vector_x,
        selection_vector_y: msg.selection_vector_y,
        selection_vector_z: msg.selection_vector_z,
        selection_vector_rx: msg.selection_vector_rx,
        selection_vector_ry: msg.selection_vector_ry,
        selection_vector_rz: msg.selection_vector_rz,
        wrench: geometry_msgs::msg::Wrench::into_rmw_message(std::borrow::Cow::Owned(msg.wrench)).into_owned(),
        type_: msg.type_,
        speed_limits: geometry_msgs::msg::Twist::into_rmw_message(std::borrow::Cow::Owned(msg.speed_limits)).into_owned(),
        deviation_limits: msg.deviation_limits,
        damping_factor: msg.damping_factor,
        gain_scaling: msg.gain_scaling,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        task_frame: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Borrowed(&msg.task_frame)).into_owned(),
      selection_vector_x: msg.selection_vector_x,
      selection_vector_y: msg.selection_vector_y,
      selection_vector_z: msg.selection_vector_z,
      selection_vector_rx: msg.selection_vector_rx,
      selection_vector_ry: msg.selection_vector_ry,
      selection_vector_rz: msg.selection_vector_rz,
        wrench: geometry_msgs::msg::Wrench::into_rmw_message(std::borrow::Cow::Borrowed(&msg.wrench)).into_owned(),
      type_: msg.type_,
        speed_limits: geometry_msgs::msg::Twist::into_rmw_message(std::borrow::Cow::Borrowed(&msg.speed_limits)).into_owned(),
        deviation_limits: msg.deviation_limits,
      damping_factor: msg.damping_factor,
      gain_scaling: msg.gain_scaling,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      task_frame: geometry_msgs::msg::PoseStamped::from_rmw_message(msg.task_frame),
      selection_vector_x: msg.selection_vector_x,
      selection_vector_y: msg.selection_vector_y,
      selection_vector_z: msg.selection_vector_z,
      selection_vector_rx: msg.selection_vector_rx,
      selection_vector_ry: msg.selection_vector_ry,
      selection_vector_rz: msg.selection_vector_rz,
      wrench: geometry_msgs::msg::Wrench::from_rmw_message(msg.wrench),
      type_: msg.type_,
      speed_limits: geometry_msgs::msg::Twist::from_rmw_message(msg.speed_limits),
      deviation_limits: msg.deviation_limits,
      damping_factor: msg.damping_factor,
      gain_scaling: msg.gain_scaling,
    }
  }
}


// Corresponds to ur_msgs__srv__SetForceMode_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetForceMode_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for SetForceMode_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetForceMode_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetForceMode_Response {
  type RmwMsg = super::srv::rmw::SetForceMode_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
    }
  }
}


// Corresponds to ur_msgs__srv__SetFrictionModelParameters_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetFrictionModelParameters_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub parameters: super::msg::FrictionModelParameters,

}



impl Default for SetFrictionModelParameters_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetFrictionModelParameters_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetFrictionModelParameters_Request {
  type RmwMsg = super::srv::rmw::SetFrictionModelParameters_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        parameters: super::msg::FrictionModelParameters::into_rmw_message(std::borrow::Cow::Owned(msg.parameters)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        parameters: super::msg::FrictionModelParameters::into_rmw_message(std::borrow::Cow::Borrowed(&msg.parameters)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      parameters: super::msg::FrictionModelParameters::from_rmw_message(msg.parameters),
    }
  }
}


// Corresponds to ur_msgs__srv__SetFrictionModelParameters_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetFrictionModelParameters_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for SetFrictionModelParameters_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetFrictionModelParameters_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetFrictionModelParameters_Response {
  type RmwMsg = super::srv::rmw::SetFrictionModelParameters_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
    }
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


