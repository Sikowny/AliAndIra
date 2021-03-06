// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_AlphaCharacter
#include <AlphaCharacter.h>
#endif
#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimerManager
#include <flixel/util/FlxTimerManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_ds_List
#include <haxe/ds/List.h>
#endif
#ifndef INCLUDED_haxe_ds__List_ListNode
#include <haxe/ds/_List/ListNode.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4c95a0630eaf1443_18_new,"Alphabet","new",0xc4ae3f45,"Alphabet.new","Alphabet.hx",18,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_4c95a0630eaf1443_86_reType,"Alphabet","reType",0x30c60648,"Alphabet.reType","Alphabet.hx",86,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_4c95a0630eaf1443_107_addText,"Alphabet","addText",0x712354d3,"Alphabet.addText","Alphabet.hx",107,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_4c95a0630eaf1443_165_doSplitWords,"Alphabet","doSplitWords",0x060ce215,"Alphabet.doSplitWords","Alphabet.hx",165,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_4c95a0630eaf1443_184_startTypedText,"Alphabet","startTypedText",0x740816b0,"Alphabet.startTypedText","Alphabet.hx",184,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_4c95a0630eaf1443_172_startTypedText,"Alphabet","startTypedText",0x740816b0,"Alphabet.startTypedText","Alphabet.hx",172,0xc2e40fcb)
static const int _hx_array_data_faea38d3_8[] = {
	(int)0,
};
static const Float _hx_array_data_faea38d3_9[] = {
	(Float)0,
};
static const int _hx_array_data_faea38d3_10[] = {
	(int)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_4c95a0630eaf1443_274_update,"Alphabet","update",0xc3c1b444,"Alphabet.update","Alphabet.hx",274,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_4c95a0630eaf1443_288_resizeText,"Alphabet","resizeText",0x7343c47c,"Alphabet.resizeText","Alphabet.hx",288,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_4c95a0630eaf1443_306_moveTextToMidpoint,"Alphabet","moveTextToMidpoint",0x748e631c,"Alphabet.moveTextToMidpoint","Alphabet.hx",306,0xc2e40fcb)

void Alphabet_obj::__construct(Float x,Float y,::String __o_text, ::Dynamic __o_bold,::hx::Null< bool >  __o_typed,::hx::Null< bool >  __o_shouldMove,::hx::Null< Float >  __o_xScale,::hx::Null< Float >  __o_yScale){
            		::String text = __o_text;
            		if (::hx::IsNull(__o_text)) text = HX_("",00,00,00,00);
            		 ::Dynamic bold = __o_bold;
            		if (::hx::IsNull(__o_bold)) bold = false;
            		bool typed = __o_typed.Default(false);
            		bool shouldMove = __o_shouldMove.Default(false);
            		Float xScale = __o_xScale.Default(1);
            		Float yScale = __o_yScale.Default(1);
            	HX_GC_STACKFRAME(&_hx_pos_4c95a0630eaf1443_18_new)
HXLINE( 168)		this->personTalking = HX_("gf",1f,5a,00,00);
HXLINE(  49)		this->pastY = ((Float)0);
HXLINE(  48)		this->pastX = ((Float)0);
HXLINE(  46)		this->isBold = false;
HXLINE(  44)		this->splitWords = ::Array_obj< ::String >::__new(0);
HXLINE(  42)		this->listOAlphabets =  ::haxe::ds::List_obj::__alloc( HX_CTX );
HXLINE(  40)		this->lastWasSpace = false;
HXLINE(  39)		this->xPosResetted = false;
HXLINE(  34)		this->yMulti = ((Float)1);
HXLINE(  32)		this->widthOfWords = ( (Float)(::flixel::FlxG_obj::width) );
HXLINE(  30)		this->_curText = HX_("",00,00,00,00);
HXLINE(  29)		this->_finalText = HX_("",00,00,00,00);
HXLINE(  27)		this->text = HX_("",00,00,00,00);
HXLINE(  25)		this->isMenuItem = false;
HXLINE(  24)		this->targetY = ((Float)0);
HXLINE(  21)		this->paused = false;
HXLINE(  20)		this->delay = ((Float)0.05);
HXLINE(  58)		this->pastX = x;
HXLINE(  59)		this->pastY = y;
HXLINE(  62)		this->xScale = xScale;
HXLINE(  63)		this->yScale = yScale;
HXLINE(  65)		super::__construct(x,y,null());
HXLINE(  67)		this->_finalText = text;
HXLINE(  68)		this->text = text;
HXLINE(  69)		this->isBold = ( (bool)(bold) );
HXLINE(  71)		if ((text != HX_("",00,00,00,00))) {
HXLINE(  73)			if (typed) {
HXLINE(  75)				this->startTypedText();
            			}
            			else {
HXLINE(  79)				this->addText();
            			}
            		}
            	}

Dynamic Alphabet_obj::__CreateEmpty() { return new Alphabet_obj; }

void *Alphabet_obj::_hx_vtable = 0;

Dynamic Alphabet_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Alphabet_obj > _hx_result = new Alphabet_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _hx_result;
}

bool Alphabet_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x567b2b93) {
		if (inClassId<=(int)0x2c01639b) {
			if (inClassId<=(int)0x288ce903) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x288ce903;
			} else {
				return inClassId==(int)0x2c01639b;
			}
		} else {
			return inClassId==(int)0x567b2b93;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void Alphabet_obj::reType(::String text,::hx::Null< Float >  __o_xScale,::hx::Null< Float >  __o_yScale){
            		Float xScale = __o_xScale.Default(1);
            		Float yScale = __o_yScale.Default(1);
            	HX_STACKFRAME(&_hx_pos_4c95a0630eaf1443_86_reType)
HXLINE(  87)		{
HXLINE(  87)			 ::haxe::ds::_List::ListNode _g_head = this->listOAlphabets->h;
HXDLIN(  87)			while(::hx::IsNotNull( _g_head )){
HXLINE(  87)				 ::AlphaCharacter val = ( ( ::AlphaCharacter)(_g_head->item) );
HXDLIN(  87)				_g_head = _g_head->next;
HXDLIN(  87)				 ::AlphaCharacter i = val;
HXLINE(  88)				this->remove(i,null());
            			}
            		}
HXLINE(  89)		this->_finalText = text;
HXLINE(  90)		this->text = text;
HXLINE(  92)		this->lastSprite = null();
HXLINE(  94)		this->updateHitbox();
HXLINE(  96)		this->listOAlphabets->clear();
HXLINE(  97)		this->set_x(this->pastX);
HXLINE(  98)		this->set_y(this->pastY);
HXLINE( 100)		this->xScale = xScale;
HXLINE( 101)		this->yScale = yScale;
HXLINE( 103)		this->addText();
            	}


HX_DEFINE_DYNAMIC_FUNC3(Alphabet_obj,reType,(void))

void Alphabet_obj::addText(){
            	HX_GC_STACKFRAME(&_hx_pos_4c95a0630eaf1443_107_addText)
HXLINE( 108)		this->doSplitWords();
HXLINE( 110)		Float xPos = ( (Float)(0) );
HXLINE( 111)		{
HXLINE( 111)			int _g = 0;
HXDLIN( 111)			::Array< ::String > _g1 = this->splitWords;
HXDLIN( 111)			while((_g < _g1->length)){
HXLINE( 111)				::String character = _g1->__get(_g);
HXDLIN( 111)				_g = (_g + 1);
HXLINE( 117)				bool _hx_tmp;
HXDLIN( 117)				if ((character != HX_(" ",20,00,00,00))) {
HXLINE( 117)					_hx_tmp = (character == HX_("-",2d,00,00,00));
            				}
            				else {
HXLINE( 117)					_hx_tmp = true;
            				}
HXDLIN( 117)				if (_hx_tmp) {
HXLINE( 119)					this->lastWasSpace = true;
            				}
HXLINE( 122)				::String _hx_tmp1 = ::AlphaCharacter_obj::alphabet;
HXDLIN( 122)				if ((_hx_tmp1.indexOf(character.toLowerCase(),null()) != -1)) {
HXLINE( 125)					if (::hx::IsNotNull( this->lastSprite )) {
HXLINE( 128)						Float xPos1 = (this->lastSprite->x - this->pastX);
HXDLIN( 128)						xPos = (xPos1 + this->lastSprite->get_width());
            					}
HXLINE( 131)					if (this->lastWasSpace) {
HXLINE( 134)						xPos = (xPos + (( (Float)(40) ) * this->xScale));
HXLINE( 135)						this->lastWasSpace = false;
            					}
HXLINE( 139)					 ::AlphaCharacter letter =  ::AlphaCharacter_obj::__alloc( HX_CTX ,xPos,( (Float)(0) ));
HXLINE( 142)					letter->scale->set(this->xScale,this->yScale);
HXLINE( 143)					letter->updateHitbox();
HXLINE( 145)					this->listOAlphabets->add(letter);
HXLINE( 147)					if (this->isBold) {
HXLINE( 148)						letter->createBold(character);
            					}
            					else {
HXLINE( 151)						letter->createLetter(character);
            					}
HXLINE( 154)					this->add(letter);
HXLINE( 156)					this->lastSprite = letter;
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Alphabet_obj,addText,(void))

void Alphabet_obj::doSplitWords(){
            	HX_STACKFRAME(&_hx_pos_4c95a0630eaf1443_165_doSplitWords)
HXDLIN( 165)		this->splitWords = this->_finalText.split(HX_("",00,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Alphabet_obj,doSplitWords,(void))

void Alphabet_obj::startTypedText(){
            		HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_0, ::Alphabet,_gthis,::Array< Float >,xPos,::Array< int >,loopNum,::Array< int >,curRow) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer tmr){
            			HX_GC_STACKFRAME(&_hx_pos_4c95a0630eaf1443_184_startTypedText)
HXLINE( 186)			if ((_gthis->_finalText.cca(loopNum->__get(0)) == 10)) {
HXLINE( 188)				 ::Alphabet _gthis1 = _gthis;
HXDLIN( 188)				_gthis1->yMulti = (_gthis1->yMulti + 1);
HXLINE( 189)				_gthis->xPosResetted = true;
HXLINE( 190)				xPos[0] = ( (Float)(0) );
HXLINE( 191)				::Array< int > curRow1 = curRow;
HXDLIN( 191)				int _hx_tmp = 0;
HXDLIN( 191)				curRow1[_hx_tmp] = (curRow1->__get(_hx_tmp) + 1);
            			}
HXLINE( 194)			if ((_gthis->splitWords->__get(loopNum->__get(0)) == HX_(" ",20,00,00,00))) {
HXLINE( 196)				_gthis->lastWasSpace = true;
            			}
HXLINE( 200)			bool isNumber = (::AlphaCharacter_obj::numbers.indexOf(_gthis->splitWords->__get(loopNum->__get(0)),null()) != -1);
HXLINE( 201)			bool isSymbol = (::AlphaCharacter_obj::symbols.indexOf(_gthis->splitWords->__get(loopNum->__get(0)),null()) != -1);
HXLINE( 207)			bool _hx_tmp;
HXDLIN( 207)			bool _hx_tmp1;
HXDLIN( 207)			::String _hx_tmp2 = ::AlphaCharacter_obj::alphabet;
HXDLIN( 207)			if ((_hx_tmp2.indexOf(_gthis->splitWords->__get(loopNum->__get(0)).toLowerCase(),null()) == -1)) {
HXLINE( 207)				_hx_tmp1 = isNumber;
            			}
            			else {
HXLINE( 207)				_hx_tmp1 = true;
            			}
HXDLIN( 207)			if (!(_hx_tmp1)) {
HXLINE( 207)				_hx_tmp = isSymbol;
            			}
            			else {
HXLINE( 207)				_hx_tmp = true;
            			}
HXDLIN( 207)			if (_hx_tmp) {
HXLINE( 211)				bool _hx_tmp;
HXDLIN( 211)				if (::hx::IsNotNull( _gthis->lastSprite )) {
HXLINE( 211)					_hx_tmp = !(_gthis->xPosResetted);
            				}
            				else {
HXLINE( 211)					_hx_tmp = false;
            				}
HXDLIN( 211)				if (_hx_tmp) {
HXLINE( 213)					_gthis->lastSprite->updateHitbox();
HXLINE( 214)					::Array< Float > xPos1 = xPos;
HXDLIN( 214)					int _hx_tmp = 0;
HXDLIN( 214)					Float xPos2 = xPos1->__get(_hx_tmp);
HXDLIN( 214)					xPos1[_hx_tmp] = (xPos2 + (_gthis->lastSprite->get_width() + 3));
            				}
            				else {
HXLINE( 220)					_gthis->xPosResetted = false;
            				}
HXLINE( 223)				if (_gthis->lastWasSpace) {
HXLINE( 225)					::Array< Float > xPos1 = xPos;
HXDLIN( 225)					int _hx_tmp = 0;
HXDLIN( 225)					xPos1[_hx_tmp] = (xPos1->__get(_hx_tmp) + 20);
HXLINE( 226)					_gthis->lastWasSpace = false;
            				}
HXLINE( 231)				 ::AlphaCharacter letter =  ::AlphaCharacter_obj::__alloc( HX_CTX ,xPos->__get(0),(( (Float)(55) ) * _gthis->yMulti));
HXLINE( 232)				_gthis->listOAlphabets->add(letter);
HXLINE( 233)				letter->row = curRow->__get(0);
HXLINE( 234)				if (_gthis->isBold) {
HXLINE( 236)					letter->createBold(_gthis->splitWords->__get(loopNum->__get(0)));
            				}
            				else {
HXLINE( 240)					if (isNumber) {
HXLINE( 242)						letter->createNumber(_gthis->splitWords->__get(loopNum->__get(0)));
            					}
            					else {
HXLINE( 244)						if (isSymbol) {
HXLINE( 246)							letter->createSymbol(_gthis->splitWords->__get(loopNum->__get(0)));
            						}
            						else {
HXLINE( 250)							letter->createLetter(_gthis->splitWords->__get(loopNum->__get(0)));
            						}
            					}
HXLINE( 253)					{
HXLINE( 253)						 ::AlphaCharacter _g = letter;
HXDLIN( 253)						_g->set_x((_g->x + 90));
            					}
            				}
HXLINE( 256)				if ((::flixel::FlxG_obj::random->_hx_float(0,100,null()) < 40)) {
HXLINE( 258)					::String daSound = HX_("GF_",60,1d,36,00);
HXLINE( 259)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 259)					::String library = null();
HXDLIN( 259)					_hx_tmp->play(::Paths_obj::sound((daSound + ::flixel::FlxG_obj::random->_hx_int(1,4,null())),library),null(),null(),null(),null(),null());
            				}
HXLINE( 262)				_gthis->add(letter).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 264)				_gthis->lastSprite = letter;
            			}
HXLINE( 267)			::Array< int > loopNum1 = loopNum;
HXDLIN( 267)			int _hx_tmp3 = 0;
HXDLIN( 267)			loopNum1[_hx_tmp3] = (loopNum1->__get(_hx_tmp3) + 1);
HXLINE( 269)			tmr->time = ::flixel::FlxG_obj::random->_hx_float(((Float)0.04),((Float)0.09),null());
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_4c95a0630eaf1443_172_startTypedText)
HXLINE( 171)		 ::Alphabet _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 173)		this->_finalText = this->text;
HXLINE( 174)		this->doSplitWords();
HXLINE( 178)		::Array< int > loopNum = ::Array_obj< int >::fromData( _hx_array_data_faea38d3_8,1);
HXLINE( 180)		::Array< Float > xPos = ::Array_obj< Float >::fromData( _hx_array_data_faea38d3_9,1);
HXLINE( 181)		::Array< int > curRow = ::Array_obj< int >::fromData( _hx_array_data_faea38d3_10,1);
HXLINE( 183)		 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.05), ::Dynamic(new _hx_Closure_0(_gthis,xPos,loopNum,curRow)),this->splitWords->length);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Alphabet_obj,startTypedText,(void))

void Alphabet_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_4c95a0630eaf1443_274_update)
HXLINE( 275)		if (this->isMenuItem) {
HXLINE( 277)			Float scaledY = ::flixel::math::FlxMath_obj::remapToRange(this->targetY,( (Float)(0) ),( (Float)(1) ),( (Float)(0) ),((Float)1.3));
HXLINE( 279)			Float a = this->y;
HXDLIN( 279)			this->set_y((a + (((Float)0.30) * (((scaledY * ( (Float)(120) )) + (( (Float)(::flixel::FlxG_obj::height) ) * ((Float)0.48))) - a))));
HXLINE( 280)			Float a1 = this->x;
HXDLIN( 280)			this->set_x((a1 + (((Float)0.30) * (((this->targetY * ( (Float)(20) )) + 90) - a1))));
            		}
HXLINE( 283)		this->super::update(elapsed);
            	}


void Alphabet_obj::resizeText(Float xScale,Float yScale,::hx::Null< bool >  __o_xStaysCentered,::hx::Null< bool >  __o_yStaysCentered){
            		bool xStaysCentered = __o_xStaysCentered.Default(true);
            		bool yStaysCentered = __o_yStaysCentered.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_4c95a0630eaf1443_288_resizeText)
HXLINE( 289)		 ::flixel::math::FlxPoint oldMidpoint = this->getMidpoint(null());
HXLINE( 290)		this->reType(this->text,xScale,yScale);
HXLINE( 291)		bool _hx_tmp;
HXDLIN( 291)		if (xStaysCentered) {
HXLINE( 291)			_hx_tmp = yStaysCentered;
            		}
            		else {
HXLINE( 291)			_hx_tmp = false;
            		}
HXDLIN( 291)		if (!(_hx_tmp)) {
HXLINE( 292)			if (xStaysCentered) {
HXLINE( 294)				Float oldMidpoint1 = oldMidpoint->x;
HXDLIN( 294)				this->moveTextToMidpoint( ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,oldMidpoint1,this->getMidpoint(null())->y));
            			}
HXLINE( 296)			if (yStaysCentered) {
HXLINE( 297)				this->moveTextToMidpoint( ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,this->getMidpoint(null())->x,oldMidpoint->y));
            			}
            		}
            		else {
HXLINE( 300)			this->moveTextToMidpoint( ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,oldMidpoint->x,oldMidpoint->y));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(Alphabet_obj,resizeText,(void))

void Alphabet_obj::moveTextToMidpoint( ::flixel::math::FlxPoint midpoint){
            	HX_STACKFRAME(&_hx_pos_4c95a0630eaf1443_306_moveTextToMidpoint)
HXLINE( 312)		Float midpoint1 = midpoint->x;
HXDLIN( 312)		this->set_x((midpoint1 - (this->get_width() / ( (Float)(2) ))));
HXLINE( 313)		Float midpoint2 = midpoint->y;
HXDLIN( 313)		this->set_y((midpoint2 - (this->get_height() / ( (Float)(2) ))));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Alphabet_obj,moveTextToMidpoint,(void))


::hx::ObjectPtr< Alphabet_obj > Alphabet_obj::__new(Float x,Float y,::String __o_text, ::Dynamic __o_bold,::hx::Null< bool >  __o_typed,::hx::Null< bool >  __o_shouldMove,::hx::Null< Float >  __o_xScale,::hx::Null< Float >  __o_yScale) {
	::hx::ObjectPtr< Alphabet_obj > __this = new Alphabet_obj();
	__this->__construct(x,y,__o_text,__o_bold,__o_typed,__o_shouldMove,__o_xScale,__o_yScale);
	return __this;
}

::hx::ObjectPtr< Alphabet_obj > Alphabet_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y,::String __o_text, ::Dynamic __o_bold,::hx::Null< bool >  __o_typed,::hx::Null< bool >  __o_shouldMove,::hx::Null< Float >  __o_xScale,::hx::Null< Float >  __o_yScale) {
	Alphabet_obj *__this = (Alphabet_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Alphabet_obj), true, "Alphabet"));
	*(void **)__this = Alphabet_obj::_hx_vtable;
	__this->__construct(x,y,__o_text,__o_bold,__o_typed,__o_shouldMove,__o_xScale,__o_yScale);
	return __this;
}

Alphabet_obj::Alphabet_obj()
{
}

void Alphabet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Alphabet);
	HX_MARK_MEMBER_NAME(delay,"delay");
	HX_MARK_MEMBER_NAME(paused,"paused");
	HX_MARK_MEMBER_NAME(targetY,"targetY");
	HX_MARK_MEMBER_NAME(isMenuItem,"isMenuItem");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(_finalText,"_finalText");
	HX_MARK_MEMBER_NAME(_curText,"_curText");
	HX_MARK_MEMBER_NAME(widthOfWords,"widthOfWords");
	HX_MARK_MEMBER_NAME(yMulti,"yMulti");
	HX_MARK_MEMBER_NAME(lastSprite,"lastSprite");
	HX_MARK_MEMBER_NAME(xPosResetted,"xPosResetted");
	HX_MARK_MEMBER_NAME(lastWasSpace,"lastWasSpace");
	HX_MARK_MEMBER_NAME(listOAlphabets,"listOAlphabets");
	HX_MARK_MEMBER_NAME(splitWords,"splitWords");
	HX_MARK_MEMBER_NAME(isBold,"isBold");
	HX_MARK_MEMBER_NAME(pastX,"pastX");
	HX_MARK_MEMBER_NAME(pastY,"pastY");
	HX_MARK_MEMBER_NAME(xScale,"xScale");
	HX_MARK_MEMBER_NAME(yScale,"yScale");
	HX_MARK_MEMBER_NAME(personTalking,"personTalking");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Alphabet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(delay,"delay");
	HX_VISIT_MEMBER_NAME(paused,"paused");
	HX_VISIT_MEMBER_NAME(targetY,"targetY");
	HX_VISIT_MEMBER_NAME(isMenuItem,"isMenuItem");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(_finalText,"_finalText");
	HX_VISIT_MEMBER_NAME(_curText,"_curText");
	HX_VISIT_MEMBER_NAME(widthOfWords,"widthOfWords");
	HX_VISIT_MEMBER_NAME(yMulti,"yMulti");
	HX_VISIT_MEMBER_NAME(lastSprite,"lastSprite");
	HX_VISIT_MEMBER_NAME(xPosResetted,"xPosResetted");
	HX_VISIT_MEMBER_NAME(lastWasSpace,"lastWasSpace");
	HX_VISIT_MEMBER_NAME(listOAlphabets,"listOAlphabets");
	HX_VISIT_MEMBER_NAME(splitWords,"splitWords");
	HX_VISIT_MEMBER_NAME(isBold,"isBold");
	HX_VISIT_MEMBER_NAME(pastX,"pastX");
	HX_VISIT_MEMBER_NAME(pastY,"pastY");
	HX_VISIT_MEMBER_NAME(xScale,"xScale");
	HX_VISIT_MEMBER_NAME(yScale,"yScale");
	HX_VISIT_MEMBER_NAME(personTalking,"personTalking");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Alphabet_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return ::hx::Val( text ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { return ::hx::Val( delay ); }
		if (HX_FIELD_EQ(inName,"pastX") ) { return ::hx::Val( pastX ); }
		if (HX_FIELD_EQ(inName,"pastY") ) { return ::hx::Val( pastY ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { return ::hx::Val( paused ); }
		if (HX_FIELD_EQ(inName,"yMulti") ) { return ::hx::Val( yMulti ); }
		if (HX_FIELD_EQ(inName,"isBold") ) { return ::hx::Val( isBold ); }
		if (HX_FIELD_EQ(inName,"xScale") ) { return ::hx::Val( xScale ); }
		if (HX_FIELD_EQ(inName,"yScale") ) { return ::hx::Val( yScale ); }
		if (HX_FIELD_EQ(inName,"reType") ) { return ::hx::Val( reType_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"targetY") ) { return ::hx::Val( targetY ); }
		if (HX_FIELD_EQ(inName,"addText") ) { return ::hx::Val( addText_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_curText") ) { return ::hx::Val( _curText ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isMenuItem") ) { return ::hx::Val( isMenuItem ); }
		if (HX_FIELD_EQ(inName,"_finalText") ) { return ::hx::Val( _finalText ); }
		if (HX_FIELD_EQ(inName,"lastSprite") ) { return ::hx::Val( lastSprite ); }
		if (HX_FIELD_EQ(inName,"splitWords") ) { return ::hx::Val( splitWords ); }
		if (HX_FIELD_EQ(inName,"resizeText") ) { return ::hx::Val( resizeText_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"widthOfWords") ) { return ::hx::Val( widthOfWords ); }
		if (HX_FIELD_EQ(inName,"xPosResetted") ) { return ::hx::Val( xPosResetted ); }
		if (HX_FIELD_EQ(inName,"lastWasSpace") ) { return ::hx::Val( lastWasSpace ); }
		if (HX_FIELD_EQ(inName,"doSplitWords") ) { return ::hx::Val( doSplitWords_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"personTalking") ) { return ::hx::Val( personTalking ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"listOAlphabets") ) { return ::hx::Val( listOAlphabets ); }
		if (HX_FIELD_EQ(inName,"startTypedText") ) { return ::hx::Val( startTypedText_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"moveTextToMidpoint") ) { return ::hx::Val( moveTextToMidpoint_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Alphabet_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { delay=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pastX") ) { pastX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pastY") ) { pastY=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { paused=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yMulti") ) { yMulti=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isBold") ) { isBold=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xScale") ) { xScale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yScale") ) { yScale=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"targetY") ) { targetY=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_curText") ) { _curText=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isMenuItem") ) { isMenuItem=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_finalText") ) { _finalText=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastSprite") ) { lastSprite=inValue.Cast<  ::AlphaCharacter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"splitWords") ) { splitWords=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"widthOfWords") ) { widthOfWords=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xPosResetted") ) { xPosResetted=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastWasSpace") ) { lastWasSpace=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"personTalking") ) { personTalking=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"listOAlphabets") ) { listOAlphabets=inValue.Cast<  ::haxe::ds::List >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Alphabet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("delay",83,d7,26,d7));
	outFields->push(HX_("paused",ae,40,84,ef));
	outFields->push(HX_("targetY",e8,f3,67,88));
	outFields->push(HX_("isMenuItem",5c,04,de,c6));
	outFields->push(HX_("text",ad,cc,f9,4c));
	outFields->push(HX_("_finalText",04,c7,73,eb));
	outFields->push(HX_("_curText",ce,97,c7,f1));
	outFields->push(HX_("widthOfWords",6c,29,47,59));
	outFields->push(HX_("yMulti",40,a3,b1,04));
	outFields->push(HX_("lastSprite",fb,be,70,8e));
	outFields->push(HX_("xPosResetted",80,a7,a1,63));
	outFields->push(HX_("lastWasSpace",53,93,45,c9));
	outFields->push(HX_("listOAlphabets",ef,fb,db,93));
	outFields->push(HX_("splitWords",2f,7e,9f,9d));
	outFields->push(HX_("isBold",8f,46,82,5e));
	outFields->push(HX_("pastX",46,53,56,bd));
	outFields->push(HX_("pastY",47,53,56,bd));
	outFields->push(HX_("xScale",f2,8a,cf,06));
	outFields->push(HX_("yScale",51,e7,2a,6d));
	outFields->push(HX_("personTalking",21,d4,8f,27));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Alphabet_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Alphabet_obj,delay),HX_("delay",83,d7,26,d7)},
	{::hx::fsBool,(int)offsetof(Alphabet_obj,paused),HX_("paused",ae,40,84,ef)},
	{::hx::fsFloat,(int)offsetof(Alphabet_obj,targetY),HX_("targetY",e8,f3,67,88)},
	{::hx::fsBool,(int)offsetof(Alphabet_obj,isMenuItem),HX_("isMenuItem",5c,04,de,c6)},
	{::hx::fsString,(int)offsetof(Alphabet_obj,text),HX_("text",ad,cc,f9,4c)},
	{::hx::fsString,(int)offsetof(Alphabet_obj,_finalText),HX_("_finalText",04,c7,73,eb)},
	{::hx::fsString,(int)offsetof(Alphabet_obj,_curText),HX_("_curText",ce,97,c7,f1)},
	{::hx::fsFloat,(int)offsetof(Alphabet_obj,widthOfWords),HX_("widthOfWords",6c,29,47,59)},
	{::hx::fsFloat,(int)offsetof(Alphabet_obj,yMulti),HX_("yMulti",40,a3,b1,04)},
	{::hx::fsObject /*  ::AlphaCharacter */ ,(int)offsetof(Alphabet_obj,lastSprite),HX_("lastSprite",fb,be,70,8e)},
	{::hx::fsBool,(int)offsetof(Alphabet_obj,xPosResetted),HX_("xPosResetted",80,a7,a1,63)},
	{::hx::fsBool,(int)offsetof(Alphabet_obj,lastWasSpace),HX_("lastWasSpace",53,93,45,c9)},
	{::hx::fsObject /*  ::haxe::ds::List */ ,(int)offsetof(Alphabet_obj,listOAlphabets),HX_("listOAlphabets",ef,fb,db,93)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(Alphabet_obj,splitWords),HX_("splitWords",2f,7e,9f,9d)},
	{::hx::fsBool,(int)offsetof(Alphabet_obj,isBold),HX_("isBold",8f,46,82,5e)},
	{::hx::fsFloat,(int)offsetof(Alphabet_obj,pastX),HX_("pastX",46,53,56,bd)},
	{::hx::fsFloat,(int)offsetof(Alphabet_obj,pastY),HX_("pastY",47,53,56,bd)},
	{::hx::fsFloat,(int)offsetof(Alphabet_obj,xScale),HX_("xScale",f2,8a,cf,06)},
	{::hx::fsFloat,(int)offsetof(Alphabet_obj,yScale),HX_("yScale",51,e7,2a,6d)},
	{::hx::fsString,(int)offsetof(Alphabet_obj,personTalking),HX_("personTalking",21,d4,8f,27)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Alphabet_obj_sStaticStorageInfo = 0;
#endif

static ::String Alphabet_obj_sMemberFields[] = {
	HX_("delay",83,d7,26,d7),
	HX_("paused",ae,40,84,ef),
	HX_("targetY",e8,f3,67,88),
	HX_("isMenuItem",5c,04,de,c6),
	HX_("text",ad,cc,f9,4c),
	HX_("_finalText",04,c7,73,eb),
	HX_("_curText",ce,97,c7,f1),
	HX_("widthOfWords",6c,29,47,59),
	HX_("yMulti",40,a3,b1,04),
	HX_("lastSprite",fb,be,70,8e),
	HX_("xPosResetted",80,a7,a1,63),
	HX_("lastWasSpace",53,93,45,c9),
	HX_("listOAlphabets",ef,fb,db,93),
	HX_("splitWords",2f,7e,9f,9d),
	HX_("isBold",8f,46,82,5e),
	HX_("pastX",46,53,56,bd),
	HX_("pastY",47,53,56,bd),
	HX_("xScale",f2,8a,cf,06),
	HX_("yScale",51,e7,2a,6d),
	HX_("reType",0d,d8,09,f4),
	HX_("addText",6e,0f,37,89),
	HX_("doSplitWords",9a,d5,87,23),
	HX_("personTalking",21,d4,8f,27),
	HX_("startTypedText",75,b5,ca,1c),
	HX_("update",09,86,05,87),
	HX_("resizeText",c1,5c,34,c1),
	HX_("moveTextToMidpoint",61,48,e8,63),
	::String(null()) };

::hx::Class Alphabet_obj::__mClass;

void Alphabet_obj::__register()
{
	Alphabet_obj _hx_dummy;
	Alphabet_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Alphabet",d3,38,ea,fa);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Alphabet_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Alphabet_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Alphabet_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Alphabet_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

