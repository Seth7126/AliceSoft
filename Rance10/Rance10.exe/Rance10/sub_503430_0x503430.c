// 函数: sub_503430
// 地址: 0x503430
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73705c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebx
int32_t var_38 = ebx
int32_t esi
int32_t var_3c = esi
int32_t edi
int32_t var_40 = edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14 = 0
int32_t __saved_ebp
void* ecx_8
struct partsengine::CGUIMessage::VTable** arg_4

if ((*(*arg2 + 4))(__security_cookie ^ &__saved_ebp) != 0)
    struct partsengine::CGUIMessage::VTable** eax_10 = sub_6e810c(0x1c)
    struct partsengine::CGUIMessage::VTable** var_1c_1 = eax_10
    int32_t var_8_4 = 4
    void var_34
    int32_t* eax_11 = (**arg2)(&var_34)
    var_8_4.b = 5
    struct partsengine::CGUIMessage::VTable** ecx_10 = arg_4
    int32_t var_14_2 = 2
    int32_t ebx_2
    
    if (ecx_10 != 0)
        ebx_2 = ecx_10[0x1f]
        arg_4 = ecx_10[0xd]
    else
        ebx_2 = 0xffffffff
        arg_4 = ecx_10
    
    int32_t eax_14 = (*(*arg2 + 4))()
    eax_10[1] = arg_4
    *eax_10 = &partsengine::CGUIMessage::`vftable'
    eax_10[2] = ebx_2
    eax_10[3] = eax_14
    sub_503120(&eax_10[4], eax_11)
    int32_t var_8_5 = 6
    arg_4 = eax_10
    sub_42ccf0(arg1 + 4, &arg_4)
    int32_t var_8_6 = 7
    ecx_8 = &var_34
else
    struct partsengine::CGUIMessage::VTable** eax_5 = sub_6e810c(0x1c)
    struct partsengine::CGUIMessage::VTable** var_1c = eax_5
    int32_t var_8_1 = 0
    void var_28
    int32_t* eax_6 = (**arg2)(&var_28)
    var_8_1.b = 1
    struct partsengine::CGUIMessage::VTable** ecx_2 = arg_4
    int32_t var_14_1 = 1
    int32_t ebx_1
    
    if (ecx_2 != 0)
        ebx_1 = ecx_2[0x1f]
        arg_4 = ecx_2[0xd]
    else
        ebx_1 = 0xffffffff
        arg_4 = ecx_2
    
    int32_t eax_9 = (*(*arg2 + 4))()
    eax_5[1] = arg_4
    *eax_5 = &partsengine::CGUIMessage::`vftable'
    eax_5[2] = ebx_1
    eax_5[3] = eax_9
    sub_503120(&eax_5[4], eax_6)
    int32_t var_8_2 = 2
    arg_4 = eax_5
    sub_42ccf0(arg1 + 0x10, &arg_4)
    int32_t var_8_3 = 3
    ecx_8 = &var_28
int32_t result = sub_4adfc0(ecx_8)
fsbase->NtTib.ExceptionList = ExceptionList
return result
