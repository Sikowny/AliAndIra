// Generated by Haxe 4.1.5
#ifndef INCLUDED_Stage
#define INCLUDED_Stage

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Stage)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)



class HXCPP_CLASS_ATTRIBUTES Stage_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Stage_obj OBJ_;
		Stage_obj();

	public:
		enum { _hx_ClassId = 0x0b7d43fa };

		void __construct(::String daStage);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Stage")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"Stage"); }
		static ::hx::ObjectPtr< Stage_obj > __new(::String daStage);
		static ::hx::ObjectPtr< Stage_obj > __alloc(::hx::Ctx *_hx_ctx,::String daStage);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Stage_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Stage",9e,da,38,17); }

		::String curStage;
		bool halloweenLevel;
		Float camZoom;
		bool hideLastBG;
		Float tweenDuration;
		::cpp::VirtualArray toAdd;
		 ::haxe::ds::StringMap swagBacks;
		 ::haxe::ds::StringMap swagGroup;
		::Array< ::Dynamic> animatedBacks;
		::Array< ::Dynamic> layInFront;
		 ::haxe::ds::IntMap slowBacks;
};


#endif /* INCLUDED_Stage */ 
