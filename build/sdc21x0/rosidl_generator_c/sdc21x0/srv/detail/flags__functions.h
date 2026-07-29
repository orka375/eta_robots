// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from sdc21x0:srv/Flags.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdc21x0/srv/flags.h"


#ifndef SDC21X0__SRV__DETAIL__FLAGS__FUNCTIONS_H_
#define SDC21X0__SRV__DETAIL__FLAGS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "sdc21x0/msg/rosidl_generator_c__visibility_control.h"

#include "sdc21x0/srv/detail/flags__struct.h"

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
const rosidl_type_hash_t *
sdc21x0__srv__Flags__get_type_hash(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
const rosidl_runtime_c__type_description__TypeDescription *
sdc21x0__srv__Flags__get_type_description(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
const rosidl_runtime_c__type_description__TypeSource *
sdc21x0__srv__Flags__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
const rosidl_runtime_c__type_description__TypeSource__Sequence *
sdc21x0__srv__Flags__get_type_description_sources(
  const rosidl_service_type_support_t * type_support);

/// Initialize srv/Flags message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sdc21x0__srv__Flags_Request
 * )) before or use
 * sdc21x0__srv__Flags_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
bool
sdc21x0__srv__Flags_Request__init(sdc21x0__srv__Flags_Request * msg);

/// Finalize srv/Flags message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
void
sdc21x0__srv__Flags_Request__fini(sdc21x0__srv__Flags_Request * msg);

/// Create srv/Flags message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sdc21x0__srv__Flags_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
sdc21x0__srv__Flags_Request *
sdc21x0__srv__Flags_Request__create(void);

/// Destroy srv/Flags message.
/**
 * It calls
 * sdc21x0__srv__Flags_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
void
sdc21x0__srv__Flags_Request__destroy(sdc21x0__srv__Flags_Request * msg);

/// Check for srv/Flags message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
bool
sdc21x0__srv__Flags_Request__are_equal(const sdc21x0__srv__Flags_Request * lhs, const sdc21x0__srv__Flags_Request * rhs);

/// Copy a srv/Flags message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
bool
sdc21x0__srv__Flags_Request__copy(
  const sdc21x0__srv__Flags_Request * input,
  sdc21x0__srv__Flags_Request * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
const rosidl_type_hash_t *
sdc21x0__srv__Flags_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
const rosidl_runtime_c__type_description__TypeDescription *
sdc21x0__srv__Flags_Request__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
const rosidl_runtime_c__type_description__TypeSource *
sdc21x0__srv__Flags_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
const rosidl_runtime_c__type_description__TypeSource__Sequence *
sdc21x0__srv__Flags_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/Flags messages.
/**
 * It allocates the memory for the number of elements and calls
 * sdc21x0__srv__Flags_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
bool
sdc21x0__srv__Flags_Request__Sequence__init(sdc21x0__srv__Flags_Request__Sequence * array, size_t size);

/// Finalize array of srv/Flags messages.
/**
 * It calls
 * sdc21x0__srv__Flags_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
void
sdc21x0__srv__Flags_Request__Sequence__fini(sdc21x0__srv__Flags_Request__Sequence * array);

/// Create array of srv/Flags messages.
/**
 * It allocates the memory for the array and calls
 * sdc21x0__srv__Flags_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
sdc21x0__srv__Flags_Request__Sequence *
sdc21x0__srv__Flags_Request__Sequence__create(size_t size);

/// Destroy array of srv/Flags messages.
/**
 * It calls
 * sdc21x0__srv__Flags_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
void
sdc21x0__srv__Flags_Request__Sequence__destroy(sdc21x0__srv__Flags_Request__Sequence * array);

/// Check for srv/Flags message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
bool
sdc21x0__srv__Flags_Request__Sequence__are_equal(const sdc21x0__srv__Flags_Request__Sequence * lhs, const sdc21x0__srv__Flags_Request__Sequence * rhs);

/// Copy an array of srv/Flags messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
bool
sdc21x0__srv__Flags_Request__Sequence__copy(
  const sdc21x0__srv__Flags_Request__Sequence * input,
  sdc21x0__srv__Flags_Request__Sequence * output);

/// Initialize srv/Flags message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sdc21x0__srv__Flags_Response
 * )) before or use
 * sdc21x0__srv__Flags_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
bool
sdc21x0__srv__Flags_Response__init(sdc21x0__srv__Flags_Response * msg);

/// Finalize srv/Flags message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
void
sdc21x0__srv__Flags_Response__fini(sdc21x0__srv__Flags_Response * msg);

/// Create srv/Flags message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sdc21x0__srv__Flags_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
sdc21x0__srv__Flags_Response *
sdc21x0__srv__Flags_Response__create(void);

/// Destroy srv/Flags message.
/**
 * It calls
 * sdc21x0__srv__Flags_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
void
sdc21x0__srv__Flags_Response__destroy(sdc21x0__srv__Flags_Response * msg);

/// Check for srv/Flags message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
bool
sdc21x0__srv__Flags_Response__are_equal(const sdc21x0__srv__Flags_Response * lhs, const sdc21x0__srv__Flags_Response * rhs);

/// Copy a srv/Flags message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
bool
sdc21x0__srv__Flags_Response__copy(
  const sdc21x0__srv__Flags_Response * input,
  sdc21x0__srv__Flags_Response * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
const rosidl_type_hash_t *
sdc21x0__srv__Flags_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
const rosidl_runtime_c__type_description__TypeDescription *
sdc21x0__srv__Flags_Response__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
const rosidl_runtime_c__type_description__TypeSource *
sdc21x0__srv__Flags_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
const rosidl_runtime_c__type_description__TypeSource__Sequence *
sdc21x0__srv__Flags_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/Flags messages.
/**
 * It allocates the memory for the number of elements and calls
 * sdc21x0__srv__Flags_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
bool
sdc21x0__srv__Flags_Response__Sequence__init(sdc21x0__srv__Flags_Response__Sequence * array, size_t size);

/// Finalize array of srv/Flags messages.
/**
 * It calls
 * sdc21x0__srv__Flags_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
void
sdc21x0__srv__Flags_Response__Sequence__fini(sdc21x0__srv__Flags_Response__Sequence * array);

/// Create array of srv/Flags messages.
/**
 * It allocates the memory for the array and calls
 * sdc21x0__srv__Flags_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
sdc21x0__srv__Flags_Response__Sequence *
sdc21x0__srv__Flags_Response__Sequence__create(size_t size);

/// Destroy array of srv/Flags messages.
/**
 * It calls
 * sdc21x0__srv__Flags_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
void
sdc21x0__srv__Flags_Response__Sequence__destroy(sdc21x0__srv__Flags_Response__Sequence * array);

/// Check for srv/Flags message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
bool
sdc21x0__srv__Flags_Response__Sequence__are_equal(const sdc21x0__srv__Flags_Response__Sequence * lhs, const sdc21x0__srv__Flags_Response__Sequence * rhs);

/// Copy an array of srv/Flags messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
bool
sdc21x0__srv__Flags_Response__Sequence__copy(
  const sdc21x0__srv__Flags_Response__Sequence * input,
  sdc21x0__srv__Flags_Response__Sequence * output);

/// Initialize srv/Flags message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sdc21x0__srv__Flags_Event
 * )) before or use
 * sdc21x0__srv__Flags_Event__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
bool
sdc21x0__srv__Flags_Event__init(sdc21x0__srv__Flags_Event * msg);

/// Finalize srv/Flags message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
void
sdc21x0__srv__Flags_Event__fini(sdc21x0__srv__Flags_Event * msg);

/// Create srv/Flags message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sdc21x0__srv__Flags_Event__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
sdc21x0__srv__Flags_Event *
sdc21x0__srv__Flags_Event__create(void);

/// Destroy srv/Flags message.
/**
 * It calls
 * sdc21x0__srv__Flags_Event__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
void
sdc21x0__srv__Flags_Event__destroy(sdc21x0__srv__Flags_Event * msg);

/// Check for srv/Flags message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
bool
sdc21x0__srv__Flags_Event__are_equal(const sdc21x0__srv__Flags_Event * lhs, const sdc21x0__srv__Flags_Event * rhs);

/// Copy a srv/Flags message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
bool
sdc21x0__srv__Flags_Event__copy(
  const sdc21x0__srv__Flags_Event * input,
  sdc21x0__srv__Flags_Event * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
const rosidl_type_hash_t *
sdc21x0__srv__Flags_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
const rosidl_runtime_c__type_description__TypeDescription *
sdc21x0__srv__Flags_Event__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
const rosidl_runtime_c__type_description__TypeSource *
sdc21x0__srv__Flags_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
const rosidl_runtime_c__type_description__TypeSource__Sequence *
sdc21x0__srv__Flags_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/Flags messages.
/**
 * It allocates the memory for the number of elements and calls
 * sdc21x0__srv__Flags_Event__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
bool
sdc21x0__srv__Flags_Event__Sequence__init(sdc21x0__srv__Flags_Event__Sequence * array, size_t size);

/// Finalize array of srv/Flags messages.
/**
 * It calls
 * sdc21x0__srv__Flags_Event__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
void
sdc21x0__srv__Flags_Event__Sequence__fini(sdc21x0__srv__Flags_Event__Sequence * array);

/// Create array of srv/Flags messages.
/**
 * It allocates the memory for the array and calls
 * sdc21x0__srv__Flags_Event__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
sdc21x0__srv__Flags_Event__Sequence *
sdc21x0__srv__Flags_Event__Sequence__create(size_t size);

/// Destroy array of srv/Flags messages.
/**
 * It calls
 * sdc21x0__srv__Flags_Event__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
void
sdc21x0__srv__Flags_Event__Sequence__destroy(sdc21x0__srv__Flags_Event__Sequence * array);

/// Check for srv/Flags message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
bool
sdc21x0__srv__Flags_Event__Sequence__are_equal(const sdc21x0__srv__Flags_Event__Sequence * lhs, const sdc21x0__srv__Flags_Event__Sequence * rhs);

/// Copy an array of srv/Flags messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sdc21x0
bool
sdc21x0__srv__Flags_Event__Sequence__copy(
  const sdc21x0__srv__Flags_Event__Sequence * input,
  sdc21x0__srv__Flags_Event__Sequence * output);
#ifdef __cplusplus
}
#endif

#endif  // SDC21X0__SRV__DETAIL__FLAGS__FUNCTIONS_H_
