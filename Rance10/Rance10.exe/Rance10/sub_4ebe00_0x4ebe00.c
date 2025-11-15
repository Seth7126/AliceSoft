// 函数: sub_4ebe00
// 地址: 0x4ebe00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7359ee
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIComboBoxView::VTable
    ** var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIComboBoxView::VTable
    ** var_14_1 = arg1
arg1[1] = 1
arg1[2] = &partsengine::IEventObserver::`vftable'
*arg1 = &partsengine::CGUIComboBoxView::`vftable'{for `common::SuicideRefCounter<class partsengine::CGUIView>'}
arg1[2] = &partsengine::CGUIComboBoxView::`vftable'{for `partsengine::IEventObserver'}
arg1[3] = &partsengine::CEventSubject::`vftable'
arg1[4] = 0
arg1[5] = 0
arg1[6] = 0
arg1[7] = &arg1[3]
__builtin_memset(&arg1[8], 0, 0x20)
int32_t var_8_1 = 0
void* arg_8
int32_t i_1
sub_4c2740(&arg1[0x10], arg2, arg_8, i_1)
var_8_1.b = 1
arg1[0x28] = sub_4c2920(&arg1[0x10])
arg1[0x29] = sub_4c2920(&arg1[0x10])
arg1[0x2a] = sub_4c2920(&arg1[0x10])
arg1[0x2b] = sub_4c2920(&arg1[0x10])
sub_4e8720(&arg1[0x2c])
arg1[0x76] = i_1
arg1[0x77] = &partsengine::CGUIPlainCG::`vftable'{for `partsengine::IAddConstructionPartsProcess'}
arg1[0x78].b = 0
arg1[0x79] = 0
arg1[0x7a] = 0xc8
arg1[0x7b] = 0xc8
arg1[0x7c] = 0xc8
arg1[0x7d] = &partsengine::CGUIPlainCG::`vftable'{for `partsengine::IAddConstructionPartsProcess'}
arg1[0x7e].b = 0
arg1[0x7f] = 0
arg1[0x80] = 0xc8
arg1[0x81] = 0xc8
arg1[0x82] = 0xc8
arg1[0x83] = &partsengine::CGUIPlainCG::`vftable'{for `partsengine::IAddConstructionPartsProcess'}
arg1[0x84].b = 0
arg1[0x85] = 0
arg1[0x86] = 0xc8
arg1[0x87] = 0xc8
arg1[0x88] = 0xc8
var_8_1.b = 5
*(arg1 + 0x36) = 0x101
arg1[0xe].b = 1

if (arg1[0x79] != sub_518c40)
    arg1[0x78].b = 1
    arg1[0x79] = sub_518c40

if (arg1[0x7f] != sub_518cc0)
    arg1[0x7e].b = 1
    arg1[0x7f] = sub_518cc0

if (arg1[0x85] != sub_518d40)
    arg1[0x84].b = 1
    arg1[0x85] = sub_518d40

arg_8 = &arg1[2]

if (arg1 != 0xfffffff8)
    int32_t eax_9 = arg1[0x13]
    int32_t* edx_1 = arg1[0x12]
    
    if (edx_1 == eax_9)
        sub_42ccf0(&arg1[0x12], &arg_8)
    else
        while (*edx_1 != &arg1[2])
            edx_1 = &edx_1[1]
            
            if (edx_1 == eax_9)
                break
        
        if (edx_1 == eax_9)
            sub_42ccf0(&arg1[0x12], &arg_8)

*(arg1[0x2b] + 0xaa) = 0
int32_t i_2 = i_1
int32_t i

if (i_2 == 0)
    i = 0
else
    i = i_2 + 8

i_1 = i

if (i != 0)
    int32_t eax_11 = arg1[5]
    int32_t* edx_2 = arg1[4]
    
    if (edx_2 == eax_11)
        sub_42ccf0(&arg1[4], &i_1)
    else
        while (*edx_2 != i)
            edx_2 = &edx_2[1]
            
            if (edx_2 == eax_11)
                break
        
        if (edx_2 == eax_11)
            sub_42ccf0(&arg1[4], &i_1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
