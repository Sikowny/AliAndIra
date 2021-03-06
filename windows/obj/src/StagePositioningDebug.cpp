// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_Boyfriend
#include <Boyfriend.h>
#endif
#ifndef INCLUDED_Character
#include <Character.h>
#endif
#ifndef INCLUDED_MainMenuState
#include <MainMenuState.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Stage
#include <Stage.h>
#endif
#ifndef INCLUDED_StagePositioningDebug
#include <StagePositioningDebug.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxCameraFollowStyle
#include <flixel/FlxCameraFollowStyle.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4385afe994abbcf3_11_new,"StagePositioningDebug","new",0xf641436a,"StagePositioningDebug.new","StagePositioningDebug.hx",11,0xe4679746)
HX_LOCAL_STACK_FRAME(_hx_pos_4385afe994abbcf3_45_create,"StagePositioningDebug","create",0x4267f632,"StagePositioningDebug.create","StagePositioningDebug.hx",45,0xe4679746)
HX_LOCAL_STACK_FRAME(_hx_pos_4385afe994abbcf3_102_update,"StagePositioningDebug","update",0x4d5e153f,"StagePositioningDebug.update","StagePositioningDebug.hx",102,0xe4679746)
HX_LOCAL_STACK_FRAME(_hx_pos_4385afe994abbcf3_178_updateMousePos,"StagePositioningDebug","updateMousePos",0x10344cce,"StagePositioningDebug.updateMousePos","StagePositioningDebug.hx",178,0xe4679746)

void StagePositioningDebug_obj::__construct(::String __o_daStage,::String __o_daGf,::String __o_daBf,::String __o_opponent){
            		::String daStage = __o_daStage;
            		if (::hx::IsNull(__o_daStage)) daStage = HX_("stage",be,6a,0b,84);
            		::String daGf = __o_daGf;
            		if (::hx::IsNull(__o_daGf)) daGf = HX_("gf",1f,5a,00,00);
            		::String daBf = __o_daBf;
            		if (::hx::IsNull(__o_daBf)) daBf = HX_("bf",c4,55,00,00);
            		::String opponent = __o_opponent;
            		if (::hx::IsNull(__o_opponent)) opponent = HX_("dad",47,36,4c,00);
            	HX_STACKFRAME(&_hx_pos_4385afe994abbcf3_11_new)
HXLINE(  28)		this->dragging = false;
HXLINE(  25)		this->curCharIndex = 0;
HXLINE(  36)		super::__construct(null());
HXLINE(  37)		this->daStage = daStage;
HXLINE(  38)		this->daGf = daGf;
HXLINE(  39)		this->daBf = daBf;
HXLINE(  40)		this->opponent = opponent;
HXLINE(  41)		this->curCharString = daGf;
            	}

Dynamic StagePositioningDebug_obj::__CreateEmpty() { return new StagePositioningDebug_obj; }

void *StagePositioningDebug_obj::_hx_vtable = 0;

Dynamic StagePositioningDebug_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StagePositioningDebug_obj > _hx_result = new StagePositioningDebug_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool StagePositioningDebug_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7c795c9f) {
		if (inClassId<=(int)0x62817b24) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x62817b24;
		} else {
			return inClassId==(int)0x7c795c9f;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7eb35bb8;
	}
}

void StagePositioningDebug_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_4385afe994abbcf3_45_create)
HXLINE(  46)		{
HXLINE(  46)			 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN(  46)			_this->cleanup(_this->autoDestroy,true);
            		}
HXLINE(  47)		::flixel::FlxG_obj::mouse->set_visible(true);
HXLINE(  49)		this->Stage = ::PlayState_obj::Stage;
HXLINE(  51)		this->gf = ::PlayState_obj::gf;
HXLINE(  52)		this->boyfriend = ::PlayState_obj::boyfriend;
HXLINE(  53)		this->dad = ::PlayState_obj::dad;
HXLINE(  54)		this->curChars = ::Array_obj< ::Dynamic>::__new(3)->init(0,this->gf)->init(1,this->boyfriend)->init(2,this->dad);
HXLINE(  55)		this->curChar = this->curChars->__get(this->curCharIndex).StaticCast<  ::flixel::FlxSprite >();
HXLINE(  57)		{
HXLINE(  57)			int _g = 0;
HXDLIN(  57)			::cpp::VirtualArray _g1 = this->Stage->toAdd;
HXDLIN(  57)			while((_g < _g1->get_length())){
HXLINE(  57)				 ::Dynamic i = _g1->__get(_g);
HXDLIN(  57)				_g = (_g + 1);
HXLINE(  59)				this->add(i);
            			}
            		}
HXLINE(  62)		{
HXLINE(  62)			int _g2_current = 0;
HXDLIN(  62)			::Array< ::Dynamic> _g2_array = this->Stage->layInFront;
HXDLIN(  62)			while((_g2_current < _g2_array->length)){
HXLINE(  62)				::Array< ::Dynamic> _g3_value = _g2_array->__get(_g2_current).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  62)				_g2_current = (_g2_current + 1);
HXDLIN(  62)				int _g3_key = (_g2_current - 1);
HXDLIN(  62)				int index = _g3_key;
HXDLIN(  62)				::Array< ::Dynamic> array = _g3_value;
HXLINE(  64)				switch((int)(index)){
            					case (int)0: {
HXLINE(  67)						this->add(this->gf);
HXLINE(  68)						{
HXLINE(  68)							int _g = 0;
HXDLIN(  68)							while((_g < array->length)){
HXLINE(  68)								 ::flixel::FlxSprite bg = array->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN(  68)								_g = (_g + 1);
HXLINE(  69)								this->add(bg);
            							}
            						}
            					}
            					break;
            					case (int)1: {
HXLINE(  71)						this->add(this->dad);
HXLINE(  72)						{
HXLINE(  72)							int _g = 0;
HXDLIN(  72)							while((_g < array->length)){
HXLINE(  72)								 ::flixel::FlxSprite bg = array->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN(  72)								_g = (_g + 1);
HXLINE(  73)								this->add(bg);
            							}
            						}
            					}
            					break;
            					case (int)2: {
HXLINE(  75)						this->add(this->boyfriend);
HXLINE(  76)						{
HXLINE(  76)							int _g = 0;
HXDLIN(  76)							while((_g < array->length)){
HXLINE(  76)								 ::flixel::FlxSprite bg = array->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN(  76)								_g = (_g + 1);
HXLINE(  77)								this->add(bg);
            							}
            						}
            					}
            					break;
            				}
            			}
            		}
HXLINE(  81)		this->camFollow =  ::flixel::FlxObject_obj::__alloc( HX_CTX ,0,0,2,2);
HXLINE(  82)		this->camFollow->screenCenter(null());
HXLINE(  83)		this->add(this->camFollow);
HXLINE(  85)		this->camHUD =  ::flixel::FlxCamera_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null());
HXLINE(  86)		{
HXLINE(  86)			 ::flixel::FlxCamera _hx_tmp = this->camHUD;
HXDLIN(  86)			_hx_tmp->bgColor = (_hx_tmp->bgColor & 16777215);
HXDLIN(  86)			 ::flixel::FlxCamera _hx_tmp1 = this->camHUD;
HXDLIN(  86)			_hx_tmp1->bgColor = (_hx_tmp1->bgColor | 0);
            		}
HXLINE(  87)		this->camGame =  ::flixel::FlxCamera_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null());
HXLINE(  88)		this->camGame->set_zoom(((Float)0.7));
HXLINE(  89)		::flixel::FlxG_obj::cameras->add(this->camGame).StaticCast<  ::flixel::FlxCamera >();
HXLINE(  90)		::flixel::FlxG_obj::cameras->add(this->camHUD).StaticCast<  ::flixel::FlxCamera >();
HXLINE(  91)		::flixel::FlxCamera_obj::defaultCameras = ::Array_obj< ::Dynamic>::__new(1)->init(0,this->camGame);
HXLINE(  92)		this->camGame->follow(this->camFollow,null(),null());
HXLINE(  94)		this->posText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,null(),null(),null(),null());
HXLINE(  95)		this->posText->set_size(26);
HXLINE(  96)		this->posText->scrollFactor->set(null(),null());
HXLINE(  97)		this->posText->set_cameras(::Array_obj< ::Dynamic>::__new(1)->init(0,this->camHUD));
HXLINE(  98)		this->add(this->posText);
            	}


void StagePositioningDebug_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_4385afe994abbcf3_102_update)
HXLINE( 103)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 103)		if (_this->keyManager->checkStatus(69,_this->status)) {
HXLINE( 104)			 ::flixel::FlxCamera _g = this->camGame;
HXDLIN( 104)			_g->set_zoom((_g->zoom + ((Float)0.1)));
            		}
HXLINE( 105)		 ::flixel::input::keyboard::FlxKeyList _this1 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 105)		if (_this1->keyManager->checkStatus(81,_this1->status)) {
HXLINE( 107)			if ((this->camGame->zoom > ((Float)0.11))) {
HXLINE( 108)				 ::flixel::FlxCamera _g = this->camGame;
HXDLIN( 108)				_g->set_zoom((_g->zoom - ((Float)0.1)));
            			}
            		}
HXLINE( 112)		bool _hx_tmp;
HXDLIN( 112)		bool _hx_tmp1;
HXDLIN( 112)		bool _hx_tmp2;
HXDLIN( 112)		 ::flixel::input::keyboard::FlxKeyList _this2 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 112)		if (!(_this2->keyManager->checkStatus(73,_this2->status))) {
HXLINE( 112)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 112)			_hx_tmp2 = _this->keyManager->checkStatus(74,_this->status);
            		}
            		else {
HXLINE( 112)			_hx_tmp2 = true;
            		}
HXDLIN( 112)		if (!(_hx_tmp2)) {
HXLINE( 112)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 112)			_hx_tmp1 = _this->keyManager->checkStatus(75,_this->status);
            		}
            		else {
HXLINE( 112)			_hx_tmp1 = true;
            		}
HXDLIN( 112)		if (!(_hx_tmp1)) {
HXLINE( 112)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 112)			_hx_tmp = _this->keyManager->checkStatus(76,_this->status);
            		}
            		else {
HXLINE( 112)			_hx_tmp = true;
            		}
HXDLIN( 112)		if (_hx_tmp) {
HXLINE( 114)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 114)			if (_this->keyManager->checkStatus(73,_this->status)) {
HXLINE( 115)				this->camFollow->velocity->set_y(( (Float)(-90) ));
            			}
            			else {
HXLINE( 116)				 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 116)				if (_this->keyManager->checkStatus(75,_this->status)) {
HXLINE( 117)					this->camFollow->velocity->set_y(( (Float)(90) ));
            				}
            				else {
HXLINE( 119)					this->camFollow->velocity->set_y(( (Float)(0) ));
            				}
            			}
HXLINE( 121)			 ::flixel::input::keyboard::FlxKeyList _this1 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 121)			if (_this1->keyManager->checkStatus(74,_this1->status)) {
HXLINE( 122)				this->camFollow->velocity->set_x(( (Float)(-90) ));
            			}
            			else {
HXLINE( 123)				 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 123)				if (_this->keyManager->checkStatus(76,_this->status)) {
HXLINE( 124)					this->camFollow->velocity->set_x(( (Float)(90) ));
            				}
            				else {
HXLINE( 126)					this->camFollow->velocity->set_x(( (Float)(0) ));
            				}
            			}
            		}
            		else {
HXLINE( 130)			this->camFollow->velocity->set(null(),null());
            		}
HXLINE( 133)		 ::flixel::input::keyboard::FlxKeyList _this3 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 133)		if (_this3->keyManager->checkStatus(32,_this3->status)) {
HXLINE( 135)			++this->curCharIndex;
HXLINE( 136)			if ((this->curCharIndex >= this->curChars->length)) {
HXLINE( 138)				this->curChar = this->curChars->__get(0).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 139)				this->curCharIndex = 0;
            			}
            			else {
HXLINE( 142)				this->curChar = this->curChars->__get(this->curCharIndex).StaticCast<  ::flixel::FlxSprite >();
            			}
HXLINE( 143)			switch((int)(this->curCharIndex)){
            				case (int)0: {
HXLINE( 146)					this->curCharString = this->daGf;
            				}
            				break;
            				case (int)1: {
HXLINE( 148)					this->curCharString = this->daBf;
            				}
            				break;
            				case (int)2: {
HXLINE( 150)					this->curCharString = this->opponent;
            				}
            				break;
            			}
            		}
HXLINE( 154)		bool _hx_tmp3;
HXDLIN( 154)		bool _hx_tmp4;
HXDLIN( 154)		 ::flixel::input::mouse::FlxMouseButton _this4 = ::flixel::FlxG_obj::mouse->_leftButton;
HXDLIN( 154)		bool _hx_tmp5;
HXDLIN( 154)		if ((_this4->current != 1)) {
HXLINE( 154)			_hx_tmp5 = (_this4->current == 2);
            		}
            		else {
HXLINE( 154)			_hx_tmp5 = true;
            		}
HXDLIN( 154)		if (_hx_tmp5) {
HXLINE( 154)			 ::flixel::FlxSprite _hx_tmp = this->curChar;
HXDLIN( 154)			_hx_tmp4 = _hx_tmp->pixelsOverlapPoint(::flixel::FlxG_obj::mouse->getPosition(null()),null(),null());
            		}
            		else {
HXLINE( 154)			_hx_tmp4 = false;
            		}
HXDLIN( 154)		if (_hx_tmp4) {
HXLINE( 154)			_hx_tmp3 = !(this->dragging);
            		}
            		else {
HXLINE( 154)			_hx_tmp3 = false;
            		}
HXDLIN( 154)		if (_hx_tmp3) {
HXLINE( 156)			this->dragging = true;
HXLINE( 157)			this->updateMousePos();
            		}
HXLINE( 160)		bool _hx_tmp6;
HXDLIN( 160)		if (this->dragging) {
HXLINE( 160)			 ::flixel::input::mouse::FlxMouse _this = ::flixel::FlxG_obj::mouse;
HXDLIN( 160)			if ((_this->_prevX == _this->x)) {
HXLINE( 160)				_hx_tmp6 = (_this->_prevY != _this->y);
            			}
            			else {
HXLINE( 160)				_hx_tmp6 = true;
            			}
            		}
            		else {
HXLINE( 160)			_hx_tmp6 = false;
            		}
HXDLIN( 160)		if (_hx_tmp6) {
HXLINE( 162)			this->curChar->setPosition((-((this->oldMousePosX - ::flixel::FlxG_obj::mouse->x)) + this->curChar->x),(-((this->oldMousePosY - ::flixel::FlxG_obj::mouse->y)) + this->curChar->y));
HXLINE( 163)			this->updateMousePos();
            		}
HXLINE( 166)		bool _hx_tmp7;
HXDLIN( 166)		bool _hx_tmp8;
HXDLIN( 166)		if (this->dragging) {
HXLINE( 166)			_hx_tmp8 = (::flixel::FlxG_obj::mouse->_leftButton->current == -1);
            		}
            		else {
HXLINE( 166)			_hx_tmp8 = false;
            		}
HXDLIN( 166)		if (!(_hx_tmp8)) {
HXLINE( 166)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 166)			_hx_tmp7 = _this->keyManager->checkStatus(9,_this->status);
            		}
            		else {
HXLINE( 166)			_hx_tmp7 = true;
            		}
HXDLIN( 166)		if (_hx_tmp7) {
HXLINE( 167)			this->dragging = false;
            		}
HXLINE( 169)		this->posText->set_text(((((this->curCharString + HX_(" X: ",de,cc,69,15)) + this->curChar->x) + HX_(" Y: ",1f,8f,6a,15)) + this->curChar->y));
HXLINE( 171)		 ::flixel::input::keyboard::FlxKeyList _this5 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 171)		if (_this5->keyManager->checkStatus(27,_this5->status)) {
HXLINE( 172)			 ::flixel::FlxState nextState =  ::MainMenuState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 172)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 172)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
            		}
HXLINE( 174)		this->super::update(elapsed);
            	}


void StagePositioningDebug_obj::updateMousePos(){
            	HX_STACKFRAME(&_hx_pos_4385afe994abbcf3_178_updateMousePos)
HXLINE( 179)		this->oldMousePosX = ::flixel::FlxG_obj::mouse->x;
HXLINE( 180)		this->oldMousePosY = ::flixel::FlxG_obj::mouse->y;
            	}


HX_DEFINE_DYNAMIC_FUNC0(StagePositioningDebug_obj,updateMousePos,(void))


::hx::ObjectPtr< StagePositioningDebug_obj > StagePositioningDebug_obj::__new(::String __o_daStage,::String __o_daGf,::String __o_daBf,::String __o_opponent) {
	::hx::ObjectPtr< StagePositioningDebug_obj > __this = new StagePositioningDebug_obj();
	__this->__construct(__o_daStage,__o_daGf,__o_daBf,__o_opponent);
	return __this;
}

::hx::ObjectPtr< StagePositioningDebug_obj > StagePositioningDebug_obj::__alloc(::hx::Ctx *_hx_ctx,::String __o_daStage,::String __o_daGf,::String __o_daBf,::String __o_opponent) {
	StagePositioningDebug_obj *__this = (StagePositioningDebug_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StagePositioningDebug_obj), true, "StagePositioningDebug"));
	*(void **)__this = StagePositioningDebug_obj::_hx_vtable;
	__this->__construct(__o_daStage,__o_daGf,__o_daBf,__o_opponent);
	return __this;
}

StagePositioningDebug_obj::StagePositioningDebug_obj()
{
}

void StagePositioningDebug_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StagePositioningDebug);
	HX_MARK_MEMBER_NAME(daStage,"daStage");
	HX_MARK_MEMBER_NAME(daBf,"daBf");
	HX_MARK_MEMBER_NAME(daGf,"daGf");
	HX_MARK_MEMBER_NAME(opponent,"opponent");
	HX_MARK_MEMBER_NAME(gf,"gf");
	HX_MARK_MEMBER_NAME(boyfriend,"boyfriend");
	HX_MARK_MEMBER_NAME(dad,"dad");
	HX_MARK_MEMBER_NAME(Stage,"Stage");
	HX_MARK_MEMBER_NAME(camFollow,"camFollow");
	HX_MARK_MEMBER_NAME(posText,"posText");
	HX_MARK_MEMBER_NAME(curChar,"curChar");
	HX_MARK_MEMBER_NAME(curCharIndex,"curCharIndex");
	HX_MARK_MEMBER_NAME(curCharString,"curCharString");
	HX_MARK_MEMBER_NAME(curChars,"curChars");
	HX_MARK_MEMBER_NAME(dragging,"dragging");
	HX_MARK_MEMBER_NAME(oldMousePosX,"oldMousePosX");
	HX_MARK_MEMBER_NAME(oldMousePosY,"oldMousePosY");
	HX_MARK_MEMBER_NAME(camHUD,"camHUD");
	HX_MARK_MEMBER_NAME(camGame,"camGame");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StagePositioningDebug_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(daStage,"daStage");
	HX_VISIT_MEMBER_NAME(daBf,"daBf");
	HX_VISIT_MEMBER_NAME(daGf,"daGf");
	HX_VISIT_MEMBER_NAME(opponent,"opponent");
	HX_VISIT_MEMBER_NAME(gf,"gf");
	HX_VISIT_MEMBER_NAME(boyfriend,"boyfriend");
	HX_VISIT_MEMBER_NAME(dad,"dad");
	HX_VISIT_MEMBER_NAME(Stage,"Stage");
	HX_VISIT_MEMBER_NAME(camFollow,"camFollow");
	HX_VISIT_MEMBER_NAME(posText,"posText");
	HX_VISIT_MEMBER_NAME(curChar,"curChar");
	HX_VISIT_MEMBER_NAME(curCharIndex,"curCharIndex");
	HX_VISIT_MEMBER_NAME(curCharString,"curCharString");
	HX_VISIT_MEMBER_NAME(curChars,"curChars");
	HX_VISIT_MEMBER_NAME(dragging,"dragging");
	HX_VISIT_MEMBER_NAME(oldMousePosX,"oldMousePosX");
	HX_VISIT_MEMBER_NAME(oldMousePosY,"oldMousePosY");
	HX_VISIT_MEMBER_NAME(camHUD,"camHUD");
	HX_VISIT_MEMBER_NAME(camGame,"camGame");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val StagePositioningDebug_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gf") ) { return ::hx::Val( gf ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"dad") ) { return ::hx::Val( dad ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"daBf") ) { return ::hx::Val( daBf ); }
		if (HX_FIELD_EQ(inName,"daGf") ) { return ::hx::Val( daGf ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"Stage") ) { return ::hx::Val( Stage ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"camHUD") ) { return ::hx::Val( camHUD ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"daStage") ) { return ::hx::Val( daStage ); }
		if (HX_FIELD_EQ(inName,"posText") ) { return ::hx::Val( posText ); }
		if (HX_FIELD_EQ(inName,"curChar") ) { return ::hx::Val( curChar ); }
		if (HX_FIELD_EQ(inName,"camGame") ) { return ::hx::Val( camGame ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"opponent") ) { return ::hx::Val( opponent ); }
		if (HX_FIELD_EQ(inName,"curChars") ) { return ::hx::Val( curChars ); }
		if (HX_FIELD_EQ(inName,"dragging") ) { return ::hx::Val( dragging ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"boyfriend") ) { return ::hx::Val( boyfriend ); }
		if (HX_FIELD_EQ(inName,"camFollow") ) { return ::hx::Val( camFollow ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"curCharIndex") ) { return ::hx::Val( curCharIndex ); }
		if (HX_FIELD_EQ(inName,"oldMousePosX") ) { return ::hx::Val( oldMousePosX ); }
		if (HX_FIELD_EQ(inName,"oldMousePosY") ) { return ::hx::Val( oldMousePosY ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"curCharString") ) { return ::hx::Val( curCharString ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updateMousePos") ) { return ::hx::Val( updateMousePos_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val StagePositioningDebug_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gf") ) { gf=inValue.Cast<  ::Character >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"dad") ) { dad=inValue.Cast<  ::Character >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"daBf") ) { daBf=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"daGf") ) { daGf=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"Stage") ) { Stage=inValue.Cast<  ::Stage >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"camHUD") ) { camHUD=inValue.Cast<  ::flixel::FlxCamera >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"daStage") ) { daStage=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"posText") ) { posText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curChar") ) { curChar=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"camGame") ) { camGame=inValue.Cast<  ::flixel::FlxCamera >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"opponent") ) { opponent=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curChars") ) { curChars=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dragging") ) { dragging=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"boyfriend") ) { boyfriend=inValue.Cast<  ::Boyfriend >(); return inValue; }
		if (HX_FIELD_EQ(inName,"camFollow") ) { camFollow=inValue.Cast<  ::flixel::FlxObject >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"curCharIndex") ) { curCharIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"oldMousePosX") ) { oldMousePosX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"oldMousePosY") ) { oldMousePosY=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"curCharString") ) { curCharString=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StagePositioningDebug_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("daStage",01,3e,39,1e));
	outFields->push(HX_("daBf",a1,2a,63,42));
	outFields->push(HX_("daGf",fc,2e,63,42));
	outFields->push(HX_("opponent",9d,b9,b8,f8));
	outFields->push(HX_("gf",1f,5a,00,00));
	outFields->push(HX_("boyfriend",6a,29,b8,e6));
	outFields->push(HX_("dad",47,36,4c,00));
	outFields->push(HX_("Stage",9e,da,38,17));
	outFields->push(HX_("camFollow",e0,6e,47,22));
	outFields->push(HX_("posText",61,b0,e8,01));
	outFields->push(HX_("curChar",76,d0,d4,ac));
	outFields->push(HX_("curCharIndex",bc,ce,17,0d));
	outFields->push(HX_("curCharString",e7,29,fa,e4));
	outFields->push(HX_("curChars",3d,97,61,8d));
	outFields->push(HX_("dragging",cf,3c,8c,37));
	outFields->push(HX_("oldMousePosX",62,b7,70,95));
	outFields->push(HX_("oldMousePosY",63,b7,70,95));
	outFields->push(HX_("camHUD",e8,2b,76,b7));
	outFields->push(HX_("camGame",a1,47,50,cf));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo StagePositioningDebug_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(StagePositioningDebug_obj,daStage),HX_("daStage",01,3e,39,1e)},
	{::hx::fsString,(int)offsetof(StagePositioningDebug_obj,daBf),HX_("daBf",a1,2a,63,42)},
	{::hx::fsString,(int)offsetof(StagePositioningDebug_obj,daGf),HX_("daGf",fc,2e,63,42)},
	{::hx::fsString,(int)offsetof(StagePositioningDebug_obj,opponent),HX_("opponent",9d,b9,b8,f8)},
	{::hx::fsObject /*  ::Character */ ,(int)offsetof(StagePositioningDebug_obj,gf),HX_("gf",1f,5a,00,00)},
	{::hx::fsObject /*  ::Boyfriend */ ,(int)offsetof(StagePositioningDebug_obj,boyfriend),HX_("boyfriend",6a,29,b8,e6)},
	{::hx::fsObject /*  ::Character */ ,(int)offsetof(StagePositioningDebug_obj,dad),HX_("dad",47,36,4c,00)},
	{::hx::fsObject /*  ::Stage */ ,(int)offsetof(StagePositioningDebug_obj,Stage),HX_("Stage",9e,da,38,17)},
	{::hx::fsObject /*  ::flixel::FlxObject */ ,(int)offsetof(StagePositioningDebug_obj,camFollow),HX_("camFollow",e0,6e,47,22)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(StagePositioningDebug_obj,posText),HX_("posText",61,b0,e8,01)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(StagePositioningDebug_obj,curChar),HX_("curChar",76,d0,d4,ac)},
	{::hx::fsInt,(int)offsetof(StagePositioningDebug_obj,curCharIndex),HX_("curCharIndex",bc,ce,17,0d)},
	{::hx::fsString,(int)offsetof(StagePositioningDebug_obj,curCharString),HX_("curCharString",e7,29,fa,e4)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(StagePositioningDebug_obj,curChars),HX_("curChars",3d,97,61,8d)},
	{::hx::fsBool,(int)offsetof(StagePositioningDebug_obj,dragging),HX_("dragging",cf,3c,8c,37)},
	{::hx::fsInt,(int)offsetof(StagePositioningDebug_obj,oldMousePosX),HX_("oldMousePosX",62,b7,70,95)},
	{::hx::fsInt,(int)offsetof(StagePositioningDebug_obj,oldMousePosY),HX_("oldMousePosY",63,b7,70,95)},
	{::hx::fsObject /*  ::flixel::FlxCamera */ ,(int)offsetof(StagePositioningDebug_obj,camHUD),HX_("camHUD",e8,2b,76,b7)},
	{::hx::fsObject /*  ::flixel::FlxCamera */ ,(int)offsetof(StagePositioningDebug_obj,camGame),HX_("camGame",a1,47,50,cf)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *StagePositioningDebug_obj_sStaticStorageInfo = 0;
#endif

static ::String StagePositioningDebug_obj_sMemberFields[] = {
	HX_("daStage",01,3e,39,1e),
	HX_("daBf",a1,2a,63,42),
	HX_("daGf",fc,2e,63,42),
	HX_("opponent",9d,b9,b8,f8),
	HX_("gf",1f,5a,00,00),
	HX_("boyfriend",6a,29,b8,e6),
	HX_("dad",47,36,4c,00),
	HX_("Stage",9e,da,38,17),
	HX_("camFollow",e0,6e,47,22),
	HX_("posText",61,b0,e8,01),
	HX_("curChar",76,d0,d4,ac),
	HX_("curCharIndex",bc,ce,17,0d),
	HX_("curCharString",e7,29,fa,e4),
	HX_("curChars",3d,97,61,8d),
	HX_("dragging",cf,3c,8c,37),
	HX_("oldMousePosX",62,b7,70,95),
	HX_("oldMousePosY",63,b7,70,95),
	HX_("camHUD",e8,2b,76,b7),
	HX_("camGame",a1,47,50,cf),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("updateMousePos",98,97,48,d9),
	::String(null()) };

::hx::Class StagePositioningDebug_obj::__mClass;

void StagePositioningDebug_obj::__register()
{
	StagePositioningDebug_obj _hx_dummy;
	StagePositioningDebug_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("StagePositioningDebug",78,06,75,f9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(StagePositioningDebug_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< StagePositioningDebug_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StagePositioningDebug_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StagePositioningDebug_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

