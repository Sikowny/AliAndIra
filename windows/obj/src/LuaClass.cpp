// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_cc9afe4755847ade
#define INCLUDED_cc9afe4755847ade
#include "linc_lua.h"
#endif
#ifndef INCLUDED_LuaClass
#include <LuaClass.h>
#endif
#ifndef INCLUDED_LuaStorage
#include <LuaStorage.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_llua_Convert
#include <llua/Convert.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4fd24ca0ebdf46db_33_new,"LuaClass","new",0xafa67072,"LuaClass.new","LuaClass.hx",33,0xe0a4e33e)
HX_LOCAL_STACK_FRAME(_hx_pos_4fd24ca0ebdf46db_39_Register,"LuaClass","Register",0x7de74131,"LuaClass.Register","LuaClass.hx",39,0xe0a4e33e)
HX_LOCAL_STACK_FRAME(_hx_pos_4fd24ca0ebdf46db_82_index,"LuaClass","index",0xdf5ce3a4,"LuaClass.index","LuaClass.hx",82,0xe0a4e33e)
HX_LOCAL_STACK_FRAME(_hx_pos_4fd24ca0ebdf46db_104_newindex,"LuaClass","newindex",0x21c74d60,"LuaClass.newindex","LuaClass.hx",104,0xe0a4e33e)
HX_LOCAL_STACK_FRAME(_hx_pos_4fd24ca0ebdf46db_127_SetProperty,"LuaClass","SetProperty",0xc8b7ac09,"LuaClass.SetProperty","LuaClass.hx",127,0xe0a4e33e)
HX_LOCAL_STACK_FRAME(_hx_pos_4fd24ca0ebdf46db_135_DefaultSetter,"LuaClass","DefaultSetter",0x8e6f8192,"LuaClass.DefaultSetter","LuaClass.hx",135,0xe0a4e33e)

void LuaClass_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_4fd24ca0ebdf46db_33_new)
HXLINE(  38)		this->addToGlobal = true;
HXLINE(  36)		this->className = HX_("BaseClass",47,02,10,fa);
HXLINE(  35)		this->methods =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  34)		this->properties =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}

Dynamic LuaClass_obj::__CreateEmpty() { return new LuaClass_obj; }

void *LuaClass_obj::_hx_vtable = 0;

Dynamic LuaClass_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LuaClass_obj > _hx_result = new LuaClass_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LuaClass_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x52dfe7a4;
}

void LuaClass_obj::Register( cpp::Reference<lua_State> l){
            	HX_STACKFRAME(&_hx_pos_4fd24ca0ebdf46db_39_Register)
HXLINE(  40)		lua_newtable(l);
HXLINE(  41)		::LuaClass_obj::state = l;
HXLINE(  42)		{
HXLINE(  42)			 ::haxe::ds::StringMap v = this->properties;
HXDLIN(  42)			::LuaStorage_obj::objectProperties->set(this->className,v);
            		}
HXLINE(  44)		int classIdx = lua_gettop(l);
HXLINE(  45)		lua_pushvalue(l,classIdx);
HXLINE(  46)		if (this->addToGlobal) {
HXLINE(  47)			lua_setglobal(l,this->className);
            		}
HXLINE(  49)		{
HXLINE(  49)			 ::Dynamic k = this->methods->keys();
HXDLIN(  49)			while(( (bool)(k->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  49)				::String k1 = ( (::String)(k->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  50)				linc::lua::pushcfunction(l,this->methods->get(k1));
HXLINE(  51)				lua_setfield(l,classIdx,k1);
            			}
            		}
HXLINE(  54)		luaL_newmetatable(l,(this->className + HX_("Metatable",09,23,bf,ae)));
HXLINE(  55)		int mtIdx = lua_gettop(l);
HXLINE(  56)		lua_pushstring(l,HX_("__index",f2,f3,72,28));
HXLINE(  57)		linc::lua::pushcfunction(l,::cpp::Function< int ( lua_State*)>(::hx::AnyCast(&::LuaClass_obj::index )));
HXLINE(  58)		lua_settable(l,mtIdx);
HXLINE(  60)		lua_pushstring(l,HX_("__newindex",d2,e1,69,f1));
HXLINE(  61)		linc::lua::pushcfunction(l,::cpp::Function< int ( lua_State*)>(::hx::AnyCast(&::LuaClass_obj::newindex )));
HXLINE(  62)		lua_settable(l,mtIdx);
HXLINE(  64)		{
HXLINE(  64)			 ::Dynamic k1 = this->properties->keys();
HXDLIN(  64)			while(( (bool)(k1->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  64)				::String k = ( (::String)(k1->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  65)				lua_pushstring(l,(k + HX_("PropertyData",3f,65,5a,e8)));
HXLINE(  66)				::llua::Convert_obj::toLua(l, ::Dynamic(this->properties->get(k)->__Field(HX_("defaultValue",f0,ba,13,e7),::hx::paccDynamic)));
HXLINE(  67)				lua_settable(l,mtIdx);
            			}
            		}
HXLINE(  69)		lua_pushstring(l,HX_("_CLASSNAME",24,52,5f,48));
HXLINE(  70)		lua_pushstring(l,this->className);
HXLINE(  71)		lua_settable(l,mtIdx);
HXLINE(  73)		lua_pushstring(l,HX_("__metatable",09,8c,18,3b));
HXLINE(  74)		lua_pushstring(l,HX_("This metatable is locked.",27,8a,ea,a3));
HXLINE(  75)		lua_settable(l,mtIdx);
HXLINE(  77)		lua_setmetatable(l,classIdx);
            	}


HX_DEFINE_DYNAMIC_FUNC1(LuaClass_obj,Register,(void))

 cpp::Reference<lua_State> LuaClass_obj::state;

int LuaClass_obj::index( lua_State* l){
            	HX_STACKFRAME(&_hx_pos_4fd24ca0ebdf46db_82_index)
HXLINE(  83)		 cpp::Reference<lua_State> l1 = ::LuaClass_obj::state;
HXLINE(  84)		::String index = linc::lua::tostring(l1,-1);
HXLINE(  85)		if ((lua_getmetatable(l1,-2) != 0)) {
HXLINE(  86)			int mtIdx = lua_gettop(l1);
HXLINE(  87)			lua_pushstring(l1,(index + HX_("PropertyData",3f,65,5a,e8)));
HXLINE(  88)			lua_rawget(l1,mtIdx);
HXLINE(  89)			 ::Dynamic ret = null();
HXDLIN(  89)			switch((int)(lua_type(l1,-1))){
            				case (int)0: {
HXLINE(  89)					ret = null();
            				}
            				break;
            				case (int)1: {
HXLINE(  89)					ret = (lua_toboolean(l1,-1) != 0);
            				}
            				break;
            				case (int)3: {
HXLINE(  89)					ret = lua_tonumber(l1,-1);
            				}
            				break;
            				case (int)4: {
HXLINE(  89)					ret = linc::lua::tostring(l1,-1);
            				}
            				break;
            				case (int)5: {
HXLINE(  89)					ret = ::llua::Convert_obj::toHaxeObj(l1,-1);
            				}
            				break;
            				default:{
HXLINE(  89)					ret = null();
            				}
            			}
HXDLIN(  89)			 ::Dynamic data = ret;
HXLINE(  90)			if (::hx::IsNotNull( data )) {
HXLINE(  91)				lua_pushstring(l1,HX_("_CLASSNAME",24,52,5f,48));
HXLINE(  92)				lua_rawget(l1,mtIdx);
HXLINE(  93)				::String clName = linc::lua::tostring(l1,-1);
HXLINE(  94)				bool _hx_tmp;
HXDLIN(  94)				if (::hx::IsNotNull( ::LuaStorage_obj::objectProperties->get(clName) )) {
HXLINE(  94)					_hx_tmp = ::hx::IsNotNull( ( ( ::haxe::ds::StringMap)(::LuaStorage_obj::objectProperties->get(clName)) )->get(index) );
            				}
            				else {
HXLINE(  94)					_hx_tmp = false;
            				}
HXDLIN(  94)				if (_hx_tmp) {
HXLINE(  95)					return ( (int)(( ( ::haxe::ds::StringMap)(::LuaStorage_obj::objectProperties->get(clName)) )->get(index)->__Field(HX_("getter",0b,df,3f,a3),::hx::paccDynamic)(l1,data)) );
            				}
            			}
            		}
HXLINE( 101)		return 0;
            	}


int LuaClass_obj::newindex( lua_State* l){
            	HX_STACKFRAME(&_hx_pos_4fd24ca0ebdf46db_104_newindex)
HXLINE( 105)		 cpp::Reference<lua_State> l1 = ::LuaClass_obj::state;
HXLINE( 106)		::String index = linc::lua::tostring(l1,2);
HXLINE( 107)		if ((lua_getmetatable(l1,1) != 0)) {
HXLINE( 108)			int mtIdx = lua_gettop(l1);
HXLINE( 109)			lua_pushstring(l1,(index + HX_("PropertyData",3f,65,5a,e8)));
HXLINE( 110)			lua_rawget(l1,mtIdx);
HXLINE( 111)			 ::Dynamic ret = null();
HXDLIN( 111)			switch((int)(lua_type(l1,-1))){
            				case (int)0: {
HXLINE( 111)					ret = null();
            				}
            				break;
            				case (int)1: {
HXLINE( 111)					ret = (lua_toboolean(l1,-1) != 0);
            				}
            				break;
            				case (int)3: {
HXLINE( 111)					ret = lua_tonumber(l1,-1);
            				}
            				break;
            				case (int)4: {
HXLINE( 111)					ret = linc::lua::tostring(l1,-1);
            				}
            				break;
            				case (int)5: {
HXLINE( 111)					ret = ::llua::Convert_obj::toHaxeObj(l1,-1);
            				}
            				break;
            				default:{
HXLINE( 111)					ret = null();
            				}
            			}
HXDLIN( 111)			 ::Dynamic data = ret;
HXLINE( 112)			if (::hx::IsNotNull( data )) {
HXLINE( 113)				lua_pushstring(l1,HX_("_CLASSNAME",24,52,5f,48));
HXLINE( 114)				lua_rawget(l1,mtIdx);
HXLINE( 115)				::String clName = linc::lua::tostring(l1,-1);
HXLINE( 116)				bool _hx_tmp;
HXDLIN( 116)				if (::hx::IsNotNull( ::LuaStorage_obj::objectProperties->get(clName) )) {
HXLINE( 116)					_hx_tmp = ::hx::IsNotNull( ( ( ::haxe::ds::StringMap)(::LuaStorage_obj::objectProperties->get(clName)) )->get(index) );
            				}
            				else {
HXLINE( 116)					_hx_tmp = false;
            				}
HXDLIN( 116)				if (_hx_tmp) {
HXLINE( 117)					lua_pop(l1,2);
HXLINE( 118)					return ( (int)(( ( ::haxe::ds::StringMap)(::LuaStorage_obj::objectProperties->get(clName)) )->get(index)->__Field(HX_("setter",7f,33,88,6f),::hx::paccDynamic)(l1)) );
            				}
            			}
            		}
HXLINE( 124)		return 0;
            	}


void LuaClass_obj::SetProperty( cpp::Reference<lua_State> l,int tableIndex,::String key, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_4fd24ca0ebdf46db_127_SetProperty)
HXLINE( 128)		lua_pushstring(l,(key + HX_("PropertyData",3f,65,5a,e8)));
HXLINE( 129)		::llua::Convert_obj::toLua(l,value);
HXLINE( 130)		lua_settable(l,tableIndex);
HXLINE( 132)		lua_pop(l,2);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(LuaClass_obj,SetProperty,(void))

void LuaClass_obj::DefaultSetter( cpp::Reference<lua_State> l){
            	HX_STACKFRAME(&_hx_pos_4fd24ca0ebdf46db_135_DefaultSetter)
HXLINE( 136)		::String key = linc::lua::tostring(l,2);
HXLINE( 138)		lua_pushstring(l,(key + HX_("PropertyData",3f,65,5a,e8)));
HXLINE( 139)		lua_pushvalue(l,3);
HXLINE( 140)		lua_settable(l,4);
HXLINE( 142)		lua_pop(l,2);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LuaClass_obj,DefaultSetter,(void))


::hx::ObjectPtr< LuaClass_obj > LuaClass_obj::__new() {
	::hx::ObjectPtr< LuaClass_obj > __this = new LuaClass_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< LuaClass_obj > LuaClass_obj::__alloc(::hx::Ctx *_hx_ctx) {
	LuaClass_obj *__this = (LuaClass_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LuaClass_obj), true, "LuaClass"));
	*(void **)__this = LuaClass_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

LuaClass_obj::LuaClass_obj()
{
}

void LuaClass_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LuaClass);
	HX_MARK_MEMBER_NAME(properties,"properties");
	HX_MARK_MEMBER_NAME(methods,"methods");
	HX_MARK_MEMBER_NAME(className,"className");
	HX_MARK_MEMBER_NAME(addToGlobal,"addToGlobal");
	HX_MARK_END_CLASS();
}

void LuaClass_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(properties,"properties");
	HX_VISIT_MEMBER_NAME(methods,"methods");
	HX_VISIT_MEMBER_NAME(className,"className");
	HX_VISIT_MEMBER_NAME(addToGlobal,"addToGlobal");
}

::hx::Val LuaClass_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"methods") ) { return ::hx::Val( methods ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"Register") ) { return ::hx::Val( Register_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { return ::hx::Val( className ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { return ::hx::Val( properties ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"addToGlobal") ) { return ::hx::Val( addToGlobal ); }
	}
	return super::__Field(inName,inCallProp);
}

bool LuaClass_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { outValue = ( state ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"SetProperty") ) { outValue = SetProperty_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"DefaultSetter") ) { outValue = DefaultSetter_dyn(); return true; }
	}
	return false;
}

::hx::Val LuaClass_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"methods") ) { methods=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { className=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { properties=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"addToGlobal") ) { addToGlobal=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool LuaClass_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { state=ioValue.Cast<  cpp::Reference<lua_State> >(); return true; }
	}
	return false;
}

void LuaClass_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("properties",f3,fb,0e,61));
	outFields->push(HX_("methods",72,0e,3d,26));
	outFields->push(HX_("className",a3,92,3d,dc));
	outFields->push(HX_("addToGlobal",7f,10,4d,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LuaClass_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(LuaClass_obj,properties),HX_("properties",f3,fb,0e,61)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(LuaClass_obj,methods),HX_("methods",72,0e,3d,26)},
	{::hx::fsString,(int)offsetof(LuaClass_obj,className),HX_("className",a3,92,3d,dc)},
	{::hx::fsBool,(int)offsetof(LuaClass_obj,addToGlobal),HX_("addToGlobal",7f,10,4d,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo LuaClass_obj_sStaticStorageInfo[] = {
	{::hx::fsUnknown /*  cpp::Reference<lua_State> */ ,(void *) &LuaClass_obj::state,HX_("state",11,76,0b,84)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String LuaClass_obj_sMemberFields[] = {
	HX_("properties",f3,fb,0e,61),
	HX_("methods",72,0e,3d,26),
	HX_("className",a3,92,3d,dc),
	HX_("addToGlobal",7f,10,4d,00),
	HX_("Register",83,62,51,aa),
	::String(null()) };

static void LuaClass_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LuaClass_obj::state,"state");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LuaClass_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LuaClass_obj::state,"state");
};

#endif

::hx::Class LuaClass_obj::__mClass;

static ::String LuaClass_obj_sStaticFields[] = {
	HX_("state",11,76,0b,84),
	HX_("SetProperty",f7,a9,cb,c0),
	HX_("DefaultSetter",00,57,f1,b1),
	::String(null())
};

void LuaClass_obj::__register()
{
	LuaClass_obj _hx_dummy;
	LuaClass_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("LuaClass",80,0f,6d,a0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LuaClass_obj::__GetStatic;
	__mClass->mSetStaticField = &LuaClass_obj::__SetStatic;
	__mClass->mMarkFunc = LuaClass_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(LuaClass_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LuaClass_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LuaClass_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LuaClass_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LuaClass_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LuaClass_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

