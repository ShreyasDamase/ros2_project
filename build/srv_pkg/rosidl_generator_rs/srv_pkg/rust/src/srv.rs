#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to srv_pkg__srv__SetRobotSpeed_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetRobotSpeed_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub target_speed: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub gradual: bool,

}



impl Default for SetRobotSpeed_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetRobotSpeed_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetRobotSpeed_Request {
  type RmwMsg = super::srv::rmw::SetRobotSpeed_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        target_speed: msg.target_speed,
        gradual: msg.gradual,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      target_speed: msg.target_speed,
      gradual: msg.gradual,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      target_speed: msg.target_speed,
      gradual: msg.gradual,
    }
  }
}


// Corresponds to srv_pkg__srv__SetRobotSpeed_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetRobotSpeed_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub applied_speed: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for SetRobotSpeed_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetRobotSpeed_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetRobotSpeed_Response {
  type RmwMsg = super::srv::rmw::SetRobotSpeed_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        applied_speed: msg.applied_speed,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
      applied_speed: msg.applied_speed,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      applied_speed: msg.applied_speed,
      message: msg.message.to_string(),
    }
  }
}






#[link(name = "srv_pkg__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__srv_pkg__srv__SetRobotSpeed() -> *const std::ffi::c_void;
}

// Corresponds to srv_pkg__srv__SetRobotSpeed
#[allow(missing_docs, non_camel_case_types)]
pub struct SetRobotSpeed;

impl rosidl_runtime_rs::Service for SetRobotSpeed {
    type Request = SetRobotSpeed_Request;
    type Response = SetRobotSpeed_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__srv_pkg__srv__SetRobotSpeed() }
    }
}


