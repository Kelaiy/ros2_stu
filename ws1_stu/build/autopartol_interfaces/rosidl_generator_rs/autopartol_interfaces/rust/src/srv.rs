#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to autopartol_interfaces__srv__SpeechText_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SpeechText_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub text: std::string::String,

}



impl Default for SpeechText_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SpeechText_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SpeechText_Request {
  type RmwMsg = super::srv::rmw::SpeechText_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        text: msg.text.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        text: msg.text.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      text: msg.text.to_string(),
    }
  }
}


// Corresponds to autopartol_interfaces__srv__SpeechText_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SpeechText_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: bool,

}



impl Default for SpeechText_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SpeechText_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SpeechText_Response {
  type RmwMsg = super::srv::rmw::SpeechText_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: msg.result,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      result: msg.result,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: msg.result,
    }
  }
}






#[link(name = "autopartol_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__autopartol_interfaces__srv__SpeechText() -> *const std::ffi::c_void;
}

// Corresponds to autopartol_interfaces__srv__SpeechText
#[allow(missing_docs, non_camel_case_types)]
pub struct SpeechText;

impl rosidl_runtime_rs::Service for SpeechText {
    type Request = SpeechText_Request;
    type Response = SpeechText_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__autopartol_interfaces__srv__SpeechText() }
    }
}


