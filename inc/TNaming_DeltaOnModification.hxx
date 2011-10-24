// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TNaming_DeltaOnModification_HeaderFile
#define _TNaming_DeltaOnModification_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TNaming_DeltaOnModification_HeaderFile
#include <Handle_TNaming_DeltaOnModification.hxx>
#endif

#ifndef _Handle_TopTools_HArray1OfShape_HeaderFile
#include <Handle_TopTools_HArray1OfShape.hxx>
#endif
#ifndef _TDF_DeltaOnModification_HeaderFile
#include <TDF_DeltaOnModification.hxx>
#endif
#ifndef _Handle_TNaming_NamedShape_HeaderFile
#include <Handle_TNaming_NamedShape.hxx>
#endif
class TopTools_HArray1OfShape;
class TNaming_NamedShape;


//! This class provides default services for an <br>
//!          AttributeDelta on a MODIFICATION action. <br>
//! <br>
//!          Applying this AttributeDelta means GOING BACK to <br>
//!          the attribute previously registered state. <br>
class TNaming_DeltaOnModification : public TDF_DeltaOnModification {

public:

  //! Initializes a TDF_DeltaOnModification. <br>
  Standard_EXPORT   TNaming_DeltaOnModification(const Handle(TNaming_NamedShape)& NS);
  //! Applies the delta to the attribute. <br>
  Standard_EXPORT   virtual  void Apply() ;




  DEFINE_STANDARD_RTTI(TNaming_DeltaOnModification)

protected:




private: 


Handle_TopTools_HArray1OfShape myOld;
Handle_TopTools_HArray1OfShape myNew;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif