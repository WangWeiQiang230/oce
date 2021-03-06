// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Storage_Error_HeaderFile
#define _Storage_Error_HeaderFile

#include <Standard_PrimitiveTypes.hxx>

//! Error codes returned by the ErrorStatus
//! function on a Storage_Data set of data during a
//! storage or retrieval operation :
//! -   Storage_VSOk : no problem has been detected
//! -   Storage_VSOpenError : an error has
//! occurred when opening the driver
//! -   Storage_VSModeError : the driver has not
//! been opened in the correct mode
//! -   Storage_VSCloseError : an error has
//! occurred when closing the driver
//! -   Storage_VSAlreadyOpen : the driver is   already open
//! -   Storage_VSNotOpen : the driver is not   open
//! -   Storage_VSSectionNotFound : a section
//! has not been found in the driver
//! -   Storage_VSWriteError : an error occurred when writing the driver
//! -   Storage_VSFormatError : the file format is wrong
//! -   Storage_VSUnknownType : a type is not known from the schema
//! -   Storage_VSTypeMismatch : trying to read   a wrong type
//! -   Storage_VSInternalError : an internal error  has been detected
//! -   Storage_VSExtCharParityError : an error
//! has occurred while reading 16 bit characte
enum Storage_Error
{
Storage_VSOk,
Storage_VSOpenError,
Storage_VSModeError,
Storage_VSCloseError,
Storage_VSAlreadyOpen,
Storage_VSNotOpen,
Storage_VSSectionNotFound,
Storage_VSWriteError,
Storage_VSFormatError,
Storage_VSUnknownType,
Storage_VSTypeMismatch,
Storage_VSInternalError,
Storage_VSExtCharParityError,
Storage_VSWrongFileDriver
};

#endif // _Storage_Error_HeaderFile
