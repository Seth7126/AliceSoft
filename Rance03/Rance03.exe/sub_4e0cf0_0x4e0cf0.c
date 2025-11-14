// 函数: sub_4e0cf0
// 地址: 0x4e0cf0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c020b
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
*arg1 = &partsengine::CGUIScrollbarView::`vftable'{for `partsengine::CGUIView'}
arg1[1] = &partsengine::CGUIScrollbarView::`vftable'{for `partsengine::CEventObserverBase'}
arg1[0xb] = &partsengine::CGUIScrollbarView::`vftable'{for `partsengine::IUpdateEvent'}
arg1[0xc].b = 1
arg1[0xd] = 1
sub_47e6a0(&arg1[0xe], arg2, arg3, i_2)
var_4_1.b = 2
arg1[0x23] = sub_47e8b0(&arg1[0xe])
arg1[0x24] = sub_47e8b0(&arg1[0xe])
arg1[0x25] = sub_47e8b0(&arg1[0xe])
arg1[0x26] = sub_47e8b0(&arg1[0xe])
arg1[0x27] = 0x10
__builtin_memset(&arg1[0x28], 0, 0x14)
sub_4aa570(&arg1[0x2d])
arg1[0x80] = i_1
arg1[0x81] = 0
arg1[0x82] = &partsengine::CSpriteEngineWrapper::`vftable'
arg1[0x83] = &partsengine::CIbisInputWrapper::`vftable'
arg1[0x84] = &partsengine::CGUIPlainCG::`vftable'{for `partsengine::IAddConstructionPartsProcess'}
arg1[0x85].b = 0
arg1[0x86] = 0
arg1[0x87] = 0xc8
arg1[0x88] = 0xc8
arg1[0x89] = 0xc8
arg1[0x8a] = &partsengine::CGUIPlainCG::`vftable'{for `partsengine::IAddConstructionPartsProcess'}
arg1[0x8b].b = 0
arg1[0x8c] = 0
arg1[0x8d] = 0xc8
arg1[0x8e] = 0xc8
arg1[0x8f] = 0xc8
arg1[0x90] = &partsengine::CGUIPlainCG::`vftable'{for `partsengine::IAddConstructionPartsProcess'}
arg1[0x91].b = 0
arg1[0x92] = 0
arg1[0x93] = 0xc8
arg1[0x94] = 0xc8
arg1[0x95] = 0xc8
arg1[0x96] = &partsengine::CGUIPlainCG::`vftable'{for `partsengine::IAddConstructionPartsProcess'}
arg1[0x97].b = 0
arg1[0x98] = 0
arg1[0x99] = 0xc8
arg1[0x9a] = 0xc8
arg1[0x9b] = 0xc8
arg1[0x9c] = &partsengine::CGUIPlainCG::`vftable'{for `partsengine::IAddConstructionPartsProcess'}
arg1[0x9d].b = 0
arg1[0x9e] = 0
arg1[0x9f] = 0xc8
arg1[0xa0] = 0xc8
arg1[0xa1] = 0xc8
arg1[0xa2] = &partsengine::CGUIPlainCG::`vftable'{for `partsengine::IAddConstructionPartsProcess'}
arg1[0xa3].b = 0
arg1[0xa4] = 0
arg1[0xa5] = 0xc8
arg1[0xa6] = 0xc8
arg1[0xa7] = 0xc8
arg1[0xa8] = &partsengine::CGUIPlainCG::`vftable'{for `partsengine::IAddConstructionPartsProcess'}
arg1[0xa9].b = 0
arg1[0xaa] = 0
arg1[0xab] = 0xc8
arg1[0xac] = 0xc8
arg1[0xad] = 0xc8
arg1[0xae] = &partsengine::CGUIPlainCG::`vftable'{for `partsengine::IAddConstructionPartsProcess'}
arg1[0xaf].b = 0
arg1[0xb0] = 0
arg1[0xb1] = 0xc8
arg1[0xb2] = 0xc8
arg1[0xb3] = 0xc8
var_4_1.b = 0xd
arg1[0xb4].w = 0
arg1[0xb5] = arg2
sub_4e11e0(arg1)
arg1[7]->vFunc_23 = 1
arg1[7]->vFunc_21 = 1
arg1[7]->vFunc_22 = 1
arg1[0xe][1].__offset(0x0).d(&arg1[1])

if (arg1[0x7f] != &arg1[0xb])
    arg1[0x7f] = &arg1[0xb]
    
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
