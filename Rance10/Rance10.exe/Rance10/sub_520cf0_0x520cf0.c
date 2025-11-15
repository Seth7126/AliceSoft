// 函数: sub_520cf0
// 地址: 0x520cf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7392a4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct 
    common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIScrollbarView::VTable**
     var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
arg1[1] = 1
arg1[2] = &partsengine::IEventObserver::`vftable'
*arg1 = &partsengine::CGUIScrollbarView::`vftable'{for `common::SuicideRefCounter<class partsengine::CGUIView>'}
arg1[2] = &partsengine::CGUIScrollbarView::`vftable'{for `partsengine::IEventObserver'}
arg1[3].b = 1
arg1[4] = &partsengine::CEventSubject::`vftable'
arg1[5] = 0
arg1[6] = 0
arg1[7] = 0
arg1[8] = &arg1[3]
__builtin_memset(&arg1[9], 0, 0x20)
int32_t var_8_1 = 0
void* arg_4
void* i_1
sub_4c2740(&arg1[0x11], arg_4, arg2, i_1)
var_8_1.b = 1
arg1[0x29] = sub_4c2920(&arg1[0x11])
arg1[0x2a] = sub_4c2920(&arg1[0x11])
arg1[0x2b] = sub_4c2920(&arg1[0x11])
arg1[0x2c] = sub_4c2920(&arg1[0x11])
arg1[0x2d] = 0x10
__builtin_memset(&arg1[0x2e], 0, 0x14)
sub_4f76e0(&arg1[0x33])
arg1[0x88] = i_1
arg1[0x89] = arg2
arg1[0x8a] = 0
arg1[0x8b] = &partsengine::CGUIPlainCG::`vftable'{for `partsengine::IAddConstructionPartsProcess'}
arg1[0x8c].b = 0
arg1[0x8d] = 0
arg1[0x8e] = 0xc8
arg1[0x8f] = 0xc8
arg1[0x90] = 0xc8
arg1[0x91] = &partsengine::CGUIPlainCG::`vftable'{for `partsengine::IAddConstructionPartsProcess'}
arg1[0x92].b = 0
arg1[0x93] = 0
arg1[0x94] = 0xc8
arg1[0x95] = 0xc8
arg1[0x96] = 0xc8
arg1[0x97] = &partsengine::CGUIPlainCG::`vftable'{for `partsengine::IAddConstructionPartsProcess'}
arg1[0x98].b = 0
arg1[0x99] = 0
arg1[0x9a] = 0xc8
arg1[0x9b] = 0xc8
arg1[0x9c] = 0xc8
arg1[0x9d] = &partsengine::CGUIPlainCG::`vftable'{for `partsengine::IAddConstructionPartsProcess'}
arg1[0x9e].b = 0
arg1[0x9f] = 0
arg1[0xa0] = 0xc8
arg1[0xa1] = 0xc8
arg1[0xa2] = 0xc8
arg1[0xa3] = &partsengine::CGUIPlainCG::`vftable'{for `partsengine::IAddConstructionPartsProcess'}
arg1[0xa4].b = 0
arg1[0xa5] = 0
arg1[0xa6] = 0xc8
arg1[0xa7] = 0xc8
arg1[0xa8] = 0xc8
arg1[0xa9] = &partsengine::CGUIPlainCG::`vftable'{for `partsengine::IAddConstructionPartsProcess'}
arg1[0xaa].b = 0
arg1[0xab] = 0
arg1[0xac] = 0xc8
arg1[0xad] = 0xc8
arg1[0xae] = 0xc8
arg1[0xaf] = &partsengine::CGUIPlainCG::`vftable'{for `partsengine::IAddConstructionPartsProcess'}
arg1[0xb0].b = 0
arg1[0xb1] = 0
arg1[0xb2] = 0xc8
arg1[0xb3] = 0xc8
arg1[0xb4] = 0xc8
arg1[0xb5] = &partsengine::CGUIPlainCG::`vftable'{for `partsengine::IAddConstructionPartsProcess'}
arg1[0xb6].b = 0
arg1[0xb7] = 0
arg1[0xb8] = 0xc8
arg1[0xb9] = 0xc8
arg1[0xba] = 0xc8
var_8_1.b = 0xa
arg1[0xbb] = arg_4
sub_521180(arg1)
*(arg1 + 0x3e) = 1
*(arg1 + 0x3b) = 0x101
arg_4 = &arg1[2]

if (arg1 != 0xfffffff8)
    int32_t eax_10 = arg1[0x14]
    int32_t* edx_1 = arg1[0x13]
    
    if (edx_1 == eax_10)
        sub_42ccf0(&arg1[0x13], &arg_4)
    else
        while (*edx_1 != &arg1[2])
            edx_1 = &edx_1[1]
            
            if (edx_1 == eax_10)
                break
        
        if (edx_1 == eax_10)
            sub_42ccf0(&arg1[0x13], &arg_4)

void* i_2 = i_1
void* i

if (i_2 == 0)
    i = nullptr
else
    i = i_2 + 8

i_1 = i

if (i != 0)
    int32_t eax_11 = arg1[6]
    int32_t* edx_2 = arg1[5]
    
    if (edx_2 == eax_11)
        sub_42ccf0(&arg1[5], &i_1)
    else
        while (*edx_2 != i)
            edx_2 = &edx_2[1]
            
            if (edx_2 == eax_11)
                break
        
        if (edx_2 == eax_11)
            sub_42ccf0(&arg1[5], &i_1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
