// 函数: sub_4b26e0
// 地址: 0x4b26e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bd5a9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
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
*arg1 = &partsengine::CGUIListBoxView::`vftable'{for `partsengine::CGUIView'}
arg1[0xb] = &partsengine::CGUIListBoxView::`vftable'{for `partsengine::IUpdateEvent'}
arg1[0xc] = 1
arg1[0xd] = 0xffffffff
arg1[0xe] = 0xffffffff
arg1[1] = &partsengine::CGUIListBoxView::`vftable'{for `partsengine::CEventObserverBase'}
sub_47e6a0(&arg1[0xf], arg2, arg3, i_2)
var_4_1.b = 2
arg1[0x24] = sub_47e8b0(&arg1[0xf])
arg1[0x25] = sub_47e8b0(&arg1[0xf])
arg1[0x26] = sub_47e8b0(&arg1[0xf])
arg1[0x27] = sub_47e8b0(&arg1[0xf])
arg1[0x28] = 0
arg1[0x29] = 0
arg1[0x2a] = 0
var_4_1.b = 3
sub_4afea0(&arg1[0x2b])
arg1[0x5e] = i_1
arg1[0x5f] = &partsengine::CIbisInputWrapper::`vftable'
arg1[0x60] = &partsengine::CSpriteEngineWrapper::`vftable'
var_4_1.b = 6
arg1[0x61] = arg2
void* eax_8 = arg1[7]
arg1[0x62] = arg3
arg1[0x63].w = 0
*(arg1 + 0x18e) = 0
*(eax_8 + 0x50) = 1
arg1[7]->vFunc_21 = 1
arg1[7]->vFunc_22 = 1
arg1[0xf][1].__offset(0x0).d(&arg1[1])

if (arg1[0x5d] != &arg1[0xb])
    arg1[0x5d] = &arg1[0xb]
    
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
    int32_t* eax_13 = arg1[3]
    
    if (eax_13 == edx_1)
        sub_412de0(&arg1[3], &i_1)
    else
        while (*eax_13 != i)
            eax_13 = &eax_13[1]
            
            if (eax_13 == edx_1)
                break
        
        if (eax_13 == edx_1)
            sub_412de0(&arg1[3], &i_1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
