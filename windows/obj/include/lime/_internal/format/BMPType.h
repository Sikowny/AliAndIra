// Generated by Haxe 4.1.5
#ifndef INCLUDED_lime__internal_format_BMPType
#define INCLUDED_lime__internal_format_BMPType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,_internal,format,BMPType)
namespace lime{
namespace _internal{
namespace format{


class BMPType_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef BMPType_obj OBJ_;

	public:
		BMPType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("lime._internal.format.BMPType",53,b1,d9,82); }
		::String __ToString() const { return HX_("BMPType.",cf,e1,7b,eb) + _hx_tag; }

		static ::lime::_internal::format::BMPType BITFIELD;
		static inline ::lime::_internal::format::BMPType BITFIELD_dyn() { return BITFIELD; }
		static ::lime::_internal::format::BMPType ICO;
		static inline ::lime::_internal::format::BMPType ICO_dyn() { return ICO; }
		static ::lime::_internal::format::BMPType RGB;
		static inline ::lime::_internal::format::BMPType RGB_dyn() { return RGB; }
};

} // end namespace lime
} // end namespace _internal
} // end namespace format

#endif /* INCLUDED_lime__internal_format_BMPType */ 