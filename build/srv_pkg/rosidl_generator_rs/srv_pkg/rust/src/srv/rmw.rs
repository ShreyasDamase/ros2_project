#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "srv_pkg__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__srv_pkg__srv__SetRobotSpeed_Request() -> *const std::ffi::c_void;
}

#[link(name = "srv_pkg__rosidl_generator_c")]
extern "C" {
    fn srv_pkg__srv__SetRobotSpeed_Request__init(msg: *mut SetRobotSpeed_Request) -> bool;
    fn srv_pkg__srv__SetRobotSpeed_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetRobotSpeed_Request>, size: usize) -> bool;
    fn srv_pkg__srv__SetRobotSpeed_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetRobotSpeed_Request>);
    fn srv_pkg__srv__SetRobotSpeed_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetRobotSpeed_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetRobotSpeed_Request>) -> bool;
}

// Corresponds to srv_pkg__srv__SetRobotSpeed_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !srv_pkg__srv__SetRobotSpeed_Request__init(&mut msg as *mut _) {
        panic!("Call to srv_pkg__srv__SetRobotSpeed_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetRobotSpeed_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { srv_pkg__srv__SetRobotSpeed_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { srv_pkg__srv__SetRobotSpeed_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { srv_pkg__srv__SetRobotSpeed_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetRobotSpeed_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetRobotSpeed_Request where Self: Sized {
  const TYPE_NAME: &'static str = "srv_pkg/srv/SetRobotSpeed_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__srv_pkg__srv__SetRobotSpeed_Request() }
  }
}


#[link(name = "srv_pkg__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__srv_pkg__srv__SetRobotSpeed_Response() -> *const std::ffi::c_void;
}

#[link(name = "srv_pkg__rosidl_generator_c")]
extern "C" {
    fn srv_pkg__srv__SetRobotSpeed_Response__init(msg: *mut SetRobotSpeed_Response) -> bool;
    fn srv_pkg__srv__SetRobotSpeed_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetRobotSpeed_Response>, size: usize) -> bool;
    fn srv_pkg__srv__SetRobotSpeed_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetRobotSpeed_Response>);
    fn srv_pkg__srv__SetRobotSpeed_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetRobotSpeed_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetRobotSpeed_Response>) -> bool;
}

// Corresponds to srv_pkg__srv__SetRobotSpeed_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
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
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetRobotSpeed_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !srv_pkg__srv__SetRobotSpeed_Response__init(&mut msg as *mut _) {
        panic!("Call to srv_pkg__srv__SetRobotSpeed_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetRobotSpeed_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { srv_pkg__srv__SetRobotSpeed_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { srv_pkg__srv__SetRobotSpeed_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { srv_pkg__srv__SetRobotSpeed_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetRobotSpeed_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetRobotSpeed_Response where Self: Sized {
  const TYPE_NAME: &'static str = "srv_pkg/srv/SetRobotSpeed_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__srv_pkg__srv__SetRobotSpeed_Response() }
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


