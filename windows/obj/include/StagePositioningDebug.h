// Generated by Haxe 4.1.5
#ifndef INCLUDED_StagePositioningDebug
#define INCLUDED_StagePositioningDebug

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
HX_DECLARE_CLASS0(Boyfriend)
HX_DECLARE_CLASS0(Character)
HX_DECLARE_CLASS0(Stage)
HX_DECLARE_CLASS0(StagePositioningDebug)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES StagePositioningDebug_obj : public  ::flixel::FlxState_obj
{
	public:
		typedef  ::flixel::FlxState_obj super;
		typedef StagePositioningDebug_obj OBJ_;
		StagePositioningDebug_obj();

	public:
		enum { _hx_ClassId = 0x7eb35bb8 };

		void __construct(::String __o_daStage,::String __o_daGf,::String __o_daBf,::String __o_opponent);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="StagePositioningDebug")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"StagePositioningDebug"); }
		static ::hx::ObjectPtr< StagePositioningDebug_obj > __new(::String __o_daStage,::String __o_daGf,::String __o_daBf,::String __o_opponent);
		static ::hx::ObjectPtr< StagePositioningDebug_obj > __alloc(::hx::Ctx *_hx_ctx,::String __o_daStage,::String __o_daGf,::String __o_daBf,::String __o_opponent);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~StagePositioningDebug_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("StagePositioningDebug",78,06,75,f9); }

		::String daStage;
		::String daBf;
		::String daGf;
		::String opponent;
		 ::Character gf;
		 ::Boyfriend boyfriend;
		 ::Character dad;
		 ::Stage Stage;
		 ::flixel::FlxObject camFollow;
		 ::flixel::text::FlxText posText;
		 ::flixel::FlxSprite curChar;
		int curCharIndex;
		::String curCharString;
		::Array< ::Dynamic> curChars;
		bool dragging;
		int oldMousePosX;
		int oldMousePosY;
		 ::flixel::FlxCamera camHUD;
		 ::flixel::FlxCamera camGame;
		void create();

		void update(Float elapsed);

		void updateMousePos();
		::Dynamic updateMousePos_dyn();

};


#endif /* INCLUDED_StagePositioningDebug */ 
