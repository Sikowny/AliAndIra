// Generated by Haxe 4.1.5
#ifndef INCLUDED_LuaCamera
#define INCLUDED_LuaCamera

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_LuaClass
#include <LuaClass.h>
#endif
#ifndef INCLUDED_cc9afe4755847ade
#define INCLUDED_cc9afe4755847ade
#include "linc_lua.h"
#endif
HX_DECLARE_CLASS0(LuaCamera)
HX_DECLARE_CLASS0(LuaClass)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES LuaCamera_obj : public  ::LuaClass_obj
{
	public:
		typedef  ::LuaClass_obj super;
		typedef LuaCamera_obj OBJ_;
		LuaCamera_obj();

	public:
		enum { _hx_ClassId = 0x34bf839d };

		void __construct( ::flixel::FlxCamera connectedCamera,::String name);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="LuaCamera")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"LuaCamera"); }
		static ::hx::ObjectPtr< LuaCamera_obj > __new( ::flixel::FlxCamera connectedCamera,::String name);
		static ::hx::ObjectPtr< LuaCamera_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::FlxCamera connectedCamera,::String name);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LuaCamera_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LuaCamera",5d,0e,7c,71); }

		static void __boot();
		static  cpp::Reference<lua_State> state;
		static int tweenZoom( lua_State* l);

		static ::cpp::Function< int  ( lua_State*) > tweenZoomC;
		static Dynamic tweenZoomC_dyn() { return tweenZoomC;}
		static int tweenPos( lua_State* l);

		static int tweenAngle( lua_State* l);

		static int tweenAlpha( lua_State* l);

		static ::cpp::Function< int  ( lua_State*) > tweenPosC;
		static Dynamic tweenPosC_dyn() { return tweenPosC;}
		static ::cpp::Function< int  ( lua_State*) > tweenAngleC;
		static Dynamic tweenAngleC_dyn() { return tweenAngleC;}
		static ::cpp::Function< int  ( lua_State*) > tweenAlphaC;
		static Dynamic tweenAlphaC_dyn() { return tweenAlphaC;}
		 ::flixel::FlxCamera cam;
		int SetNumProperty( cpp::Reference<lua_State> l);
		::Dynamic SetNumProperty_dyn();

		void Register( cpp::Reference<lua_State> l);

};


#endif /* INCLUDED_LuaCamera */ 