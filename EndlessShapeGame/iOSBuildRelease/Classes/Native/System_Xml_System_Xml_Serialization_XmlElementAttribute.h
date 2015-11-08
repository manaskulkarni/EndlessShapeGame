#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Attribute
#include "mscorlib_System_Attribute.h"
// System.Xml.Serialization.XmlElementAttribute
struct  XmlElementAttribute_t986  : public Attribute_t747
{
	// System.String System.Xml.Serialization.XmlElementAttribute::elementName
	String_t* ___elementName_0;
	// System.Int32 System.Xml.Serialization.XmlElementAttribute::order
	int32_t ___order_1;
};
