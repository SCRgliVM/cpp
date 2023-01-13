/**
 * @file ByteRepresentations.h
 * @brief The module allows you to see the representation of values of
 *         various types as a sequence of bytes in memory
 * @version 0.1
 * @date 2023-01-12
 * 
 * @warning The module uses the printf function to display the results.
 *           Module functions do not check the correctness of parameters
 */
#ifndef BYTE_REPRESENTATIONS_H
#define BYTE_REPRESENTATIONS_H

/**
 * @brief Pointer to byte
 * 
 */
typedef unsigned char *byte_pointer;

/**
 * @brief The function shows the number of bytes passed to it located at
 *        the passed pointer
 * 
 * @param[in] pointer Pointer to the first byte starting from which the value
 *                    representation will be displayed
 * @param[in] length Shown area size in bytes. length must be > 0
 * @warning The function uses the printf function to display the results.
 *          The function do not check the correctness of parameters.
 *          The function does not check the correctness of the pointer
 *          and the availability of memory on it
 */
void show_bytes(byte_pointer pointer, size_t length);

#endif