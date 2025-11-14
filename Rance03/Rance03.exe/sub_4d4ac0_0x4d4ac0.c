// 函数: sub_4d4ac0
// 地址: 0x4d4ac0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bf571
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IInterface::partsengine::CGUIView::VTable** var_14 = arg1
*arg1 = &partsengine::CGUIView::`vftable'{for `IInterface'}
arg1[1] = &partsengine::CEventObserverBase::`vftable'{for `IEventObserver'}
arg1[2] = &partsengine::CEventSubject::`vftable'
void* var_10 = &arg1[2]
arg1[3] = 0
arg1[4] = 0
arg1[5] = 0
int32_t var_4 = 0
arg1[6] = 0
sub_42f420(&arg1[7], 0x19)
arg1[0xa].b = 0
arg1[6] = &arg1[2]
int32_t var_4_1 = 1
arg1[0xb] = &partsengine::IUpdateEvent::`vftable'
*arg1 = &partsengine::CGUIRadioButtonBoxView::`vftable'{for `partsengine::CGUIView'}
arg1[1] = &partsengine::CGUIRadioButtonBoxView::`vftable'{for `partsengine::CEventObserverBase'}
arg1[0xb] = &partsengine::CGUIRadioButtonBoxView::`vftable'{for `partsengine::IUpdateEvent'}
arg1[0xc] = 1
arg1[0xd] = &partsengine::CGUIRadioButtonBoxModel::`vftable'
arg1[0xe] = 0
arg1[0xf] = 0
arg1[0x10] = 0
arg1[0x11] = 0
var_4_1.b = 2
arg1[0x13] = arg2
int32_t eax_4 = arg1[7]
int32_t i_1
int32_t i_2 = i_1
arg1[0x12] = i_2
arg1[0x14].w = 1
*(arg1 + 0x52) = 0
__builtin_memcpy(eax_4 + 4, 
    "\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x"
"01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01"
"00\x00\x00", 
    0x34)
arg1[7]
arg1[7]
arg1[7]
arg1[7]
arg1[7]
arg1[7]
arg1[7]
arg1[7]
arg1[7]
arg1[7]
arg1[7]
arg1[7]
arg1[7]->vFunc_14 = 1
arg1[7]->vFunc_15 = 1
arg1[7]->vFunc_16 = 1
arg1[7]->vFunc_17 = 1
arg1[7]->vFunc_18 = 1
arg1[7]->vFunc_19 = 1
arg1[7]->vFunc_20 = 1
arg1[7]->vFunc_21 = 1
arg1[7]->vFunc_23 = 1

if (arg1[0x11] != &arg1[0xb])
    arg1[0x11] = &arg1[0xb]
    
    if (arg1 != 0xffffffd4)
        arg1[0xb]->__offset(0x0).d(eax_2)

int32_t i

if (i_2 == 0)
    i = 0
else
    i = i_2 + 4

i_1 = i

if (i != 0)
    int32_t edx_1 = arg1[4]
    int32_t* eax_27 = arg1[3]
    
    if (eax_27 == edx_1)
        sub_412de0(&arg1[3], &i_1)
    else
        while (*eax_27 != i)
            eax_27 = &eax_27[1]
            
            if (eax_27 == edx_1)
                break
        
        if (eax_27 == edx_1)
            sub_412de0(&arg1[3], &i_1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
