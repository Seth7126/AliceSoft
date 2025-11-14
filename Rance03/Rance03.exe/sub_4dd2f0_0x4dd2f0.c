// 函数: sub_4dd2f0
// 地址: 0x4dd2f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bff13
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
int32_t i_1
int32_t i_2 = i_1
arg1[0xb] = &partsengine::IUpdateEvent::`vftable'
*arg1 = &partsengine::CGUITextBoxView::`vftable'{for `partsengine::CGUIView'}
arg1[1] = &partsengine::CGUITextBoxView::`vftable'{for `partsengine::CEventObserverBase'}
arg1[0xb] = &partsengine::CGUITextBoxView::`vftable'{for `partsengine::IUpdateEvent'}
arg1[0xc] = 1
sub_47e6a0(&arg1[0xd], arg2, arg3, i_2)
var_4_1.b = 2
arg1[0x22] = sub_47e8b0(&arg1[0xd])
arg1[0x23] = sub_47e8b0(&arg1[0xd])
arg1[0x24] = sub_47e8b0(&arg1[0xd])
arg1[0x25].w = 0
arg1[0x26] = 0xffffffff
arg1[0x27] = 0xffffffff
arg1[0x28] = 0
arg1[0x29] = 0
arg1[0x2f] = 0xf
arg1[0x2e] = 0
arg1[0x2a].b = 0
sub_402110(&arg1[0x2a], 0x6da566, nullptr)
var_4_1.b = 3
arg1[0x35] = 0xf
arg1[0x34] = 0
arg1[0x30].b = 0
sub_402110(&arg1[0x30], 0x6da55f, nullptr)
var_4_1.b = 4
arg1[0x3b] = 0xf
arg1[0x3a] = 0
arg1[0x36].b = 0
sub_402110(&arg1[0x36], 0x6da577, nullptr)
var_4_1.b = 5
arg1[0x3c] = 0
sub_4dad30(&arg1[0x3d])
arg1[0x6b] = i_1
arg1[0x6c] = &partsengine::CSpriteEngineWrapper::`vftable'
arg1[0x6d] = &partsengine::CIbisInputWrapper::`vftable'
arg1[0x6e] = &partsengine::CInputStringWrapper::`vftable'
var_4_1.b = 9
void* eax_7 = arg1[7]
arg1[0x6f] = 0
arg1[0x70].b = 0
*(eax_7 + 0x5c) = 1
arg1[7]->vFunc_20 = 1
arg1[7]->vFunc_22 = 1
arg1[0xd][1].__offset(0x0).d(&arg1[1])

if (arg1[0x6a] != &arg1[0xb])
    arg1[0x6a] = &arg1[0xb]
    
    if (arg1 != 0xffffffd4)
        arg1[0xb]->__offset(0x0).d(eax_2)

int32_t i_3 = i_1
int32_t i

if (i_3 == 0)
    i = 0
else
    i = i_3 + 4

i_1 = i

if (i != 0)
    int32_t edx_1 = arg1[4]
    int32_t* eax_12 = arg1[3]
    
    if (eax_12 == edx_1)
        sub_412de0(&arg1[3], &i_1)
    else
        while (*eax_12 != i)
            eax_12 = &eax_12[1]
            
            if (eax_12 == edx_1)
                break
        
        if (eax_12 == edx_1)
            sub_412de0(&arg1[3], &i_1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
