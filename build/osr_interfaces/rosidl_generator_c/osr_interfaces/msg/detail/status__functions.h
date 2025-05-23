// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from osr_interfaces:msg/Status.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "osr_interfaces/msg/status.h"


#ifndef OSR_INTERFACES__MSG__DETAIL__STATUS__FUNCTIONS_H_
#define OSR_INTERFACES__MSG__DETAIL__STATUS__FUNCTIONS_H_

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
#include "osr_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "osr_interfaces/msg/detail/status__struct.h"

/// Initialize msg/Status message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * osr_interfaces__msg__Status
 * )) before or use
 * osr_interfaces__msg__Status__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_osr_interfaces
bool
osr_interfaces__msg__Status__init(osr_interfaces__msg__Status * msg);

/// Finalize msg/Status message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_osr_interfaces
void
osr_interfaces__msg__Status__fini(osr_interfaces__msg__Status * msg);

/// Create msg/Status message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * osr_interfaces__msg__Status__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_osr_interfaces
osr_interfaces__msg__Status *
osr_interfaces__msg__Status__create(void);

/// Destroy msg/Status message.
/**
 * It calls
 * osr_interfaces__msg__Status__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_osr_interfaces
void
osr_interfaces__msg__Status__destroy(osr_interfaces__msg__Status * msg);

/// Check for msg/Status message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_osr_interfaces
bool
osr_interfaces__msg__Status__are_equal(const osr_interfaces__msg__Status * lhs, const osr_interfaces__msg__Status * rhs);

/// Copy a msg/Status message.
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
ROSIDL_GENERATOR_C_PUBLIC_osr_interfaces
bool
osr_interfaces__msg__Status__copy(
  const osr_interfaces__msg__Status * input,
  osr_interfaces__msg__Status * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_osr_interfaces
const rosidl_type_hash_t *
osr_interfaces__msg__Status__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_osr_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
osr_interfaces__msg__Status__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_osr_interfaces
const rosidl_runtime_c__type_description__TypeSource *
osr_interfaces__msg__Status__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_osr_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
osr_interfaces__msg__Status__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/Status messages.
/**
 * It allocates the memory for the number of elements and calls
 * osr_interfaces__msg__Status__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_osr_interfaces
bool
osr_interfaces__msg__Status__Sequence__init(osr_interfaces__msg__Status__Sequence * array, size_t size);

/// Finalize array of msg/Status messages.
/**
 * It calls
 * osr_interfaces__msg__Status__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_osr_interfaces
void
osr_interfaces__msg__Status__Sequence__fini(osr_interfaces__msg__Status__Sequence * array);

/// Create array of msg/Status messages.
/**
 * It allocates the memory for the array and calls
 * osr_interfaces__msg__Status__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_osr_interfaces
osr_interfaces__msg__Status__Sequence *
osr_interfaces__msg__Status__Sequence__create(size_t size);

/// Destroy array of msg/Status messages.
/**
 * It calls
 * osr_interfaces__msg__Status__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_osr_interfaces
void
osr_interfaces__msg__Status__Sequence__destroy(osr_interfaces__msg__Status__Sequence * array);

/// Check for msg/Status message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_osr_interfaces
bool
osr_interfaces__msg__Status__Sequence__are_equal(const osr_interfaces__msg__Status__Sequence * lhs, const osr_interfaces__msg__Status__Sequence * rhs);

/// Copy an array of msg/Status messages.
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
ROSIDL_GENERATOR_C_PUBLIC_osr_interfaces
bool
osr_interfaces__msg__Status__Sequence__copy(
  const osr_interfaces__msg__Status__Sequence * input,
  osr_interfaces__msg__Status__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // OSR_INTERFACES__MSG__DETAIL__STATUS__FUNCTIONS_H_
