// 函数: sub_4c4910
// 地址: 0x4c4910
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6be603
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
*arg1 = &partsengine::CGUIMultiTextBoxView::`vftable'{for `partsengine::CGUIView'}
arg1[1] = &partsengine::CGUIMultiTextBoxView::`vftable'{for `partsengine::CEventObserverBase'}
arg1[0xb] = &partsengine::CGUIMultiTextBoxView::`vftable'{for `partsengine::IUpdateEvent'}
arg1[0xc] = 1
sub_47e6a0(&arg1[0xd], arg2, arg3, i_2)
var_4_1.b = 2
arg1[0x22] = sub_47e8b0(&arg1[0xd])
arg1[0x23] = sub_47e8b0(&arg1[0xd])
arg1[0x24] = sub_47e8b0(&arg1[0xd])
arg1[0x25] = sub_47e8b0(&arg1[0xd])
arg1[0x26] = sub_47e8b0(&arg1[0xd])
arg1[0x27] = 0x10
arg1[0x28] = 3
arg1[0x29].w = 0
*(arg1 + 0xa6) = 0
arg1[0x2a] = 0xffffffff
arg1[0x2b] = 0xffffffff
arg1[0x2c] = 0
arg1[0x2d] = 0
arg1[0x33] = 0xf
arg1[0x32] = 0
arg1[0x2e].b = 0
sub_402110(&arg1[0x2e], 0x6da4ae, nullptr)
var_4_1.b = 3
arg1[0x39] = 0xf
arg1[0x38] = 0
arg1[0x34].b = 0
sub_402110(&arg1[0x34], 0x6da4af, nullptr)
var_4_1.b = 4
arg1[0x3f] = 0xf
arg1[0x3e] = 0
arg1[0x3a].b = 0
sub_402110(&arg1[0x3a], 0x6da4d3, nullptr)
var_4_1.b = 5
sub_4c1b10(&arg1[0x40])
arg1[0x81] = i_1
arg1[0x82] = &partsengine::CSpriteEngineWrapper::`vftable'
arg1[0x83] = &partsengine::CIbisInputWrapper::`vftable'
arg1[0x84] = &partsengine::CInputStringWrapper::`vftable'
var_4_1.b = 9
arg1[0x85].w = 0
*(arg1[7] + 0x5c) = 1
arg1[7]->vFunc_20 = 1
arg1[7]->vFunc_22 = 1
arg1[0xd][1].__offset(0x0).d(&arg1[1])

if (arg1[0x80] != &arg1[0xb])
    arg1[0x80] = &arg1[0xb]
    
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
    int32_t* eax_14 = arg1[3]
    
    if (eax_14 == edx_1)
        sub_412de0(&arg1[3], &i_1)
    else
        while (*eax_14 != i)
            eax_14 = &eax_14[1]
            
            if (eax_14 == edx_1)
                break
        
        if (eax_14 == edx_1)
            sub_412de0(&arg1[3], &i_1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
