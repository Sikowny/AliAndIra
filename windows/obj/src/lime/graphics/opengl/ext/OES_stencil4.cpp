// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_OES_stencil4
#include <lime/graphics/opengl/ext/OES_stencil4.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_516111834cfcca0e_6_new,"lime.graphics.opengl.ext.OES_stencil4","new",0x1f7a308e,"lime.graphics.opengl.ext.OES_stencil4.new","lime/graphics/opengl/ext/OES_stencil4.hx",6,0x3d6f3840)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void OES_stencil4_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_516111834cfcca0e_6_new)
HXDLIN(   6)		this->STENCIL_INDEX4_OES = 36167;
            	}

Dynamic OES_stencil4_obj::__CreateEmpty() { return new OES_stencil4_obj; }

void *OES_stencil4_obj::_hx_vtable = 0;

Dynamic OES_stencil4_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OES_stencil4_obj > _hx_result = new OES_stencil4_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool OES_stencil4_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5bf2a308;
}


OES_stencil4_obj::OES_stencil4_obj()
{
}

::hx::Val OES_stencil4_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"STENCIL_INDEX4_OES") ) { return ::hx::Val( STENCIL_INDEX4_OES ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val OES_stencil4_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"STENCIL_INDEX4_OES") ) { STENCIL_INDEX4_OES=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OES_stencil4_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("STENCIL_INDEX4_OES",43,ee,6a,12));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo OES_stencil4_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(OES_stencil4_obj,STENCIL_INDEX4_OES),HX_("STENCIL_INDEX4_OES",43,ee,6a,12)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *OES_stencil4_obj_sStaticStorageInfo = 0;
#endif

static ::String OES_stencil4_obj_sMemberFields[] = {
	HX_("STENCIL_INDEX4_OES",43,ee,6a,12),
	::String(null()) };

::hx::Class OES_stencil4_obj::__mClass;

void OES_stencil4_obj::__register()
{
	OES_stencil4_obj _hx_dummy;
	OES_stencil4_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.OES_stencil4",9c,91,9f,d8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(OES_stencil4_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< OES_stencil4_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OES_stencil4_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OES_stencil4_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
