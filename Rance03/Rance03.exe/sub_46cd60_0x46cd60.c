// 函数: sub_46cd60
// 地址: 0x46cd60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b938b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t arg_8
int32_t esi = arg_8
int32_t* ecx = *esi
var_10 = 0

if ((*(*ecx + 0xc))(ecx, arg2 + 4, &var_10, 0) s>= 0)
    int32_t eax_6 = sub_69adc6(0x24)
    arg_8 = eax_6
    int32_t var_4 = 0
    struct ibis::CJoystickDevice::VTable** eax_7
    
    if (eax_6 == 0)
        eax_7 = nullptr
    else
        eax_7 = sub_46d210(eax_6, var_10)
    
    int32_t var_4_1 = 0xffffffff
    arg_8 = eax_7
    sub_412de0(esi + 8, &arg_8)

fsbase->NtTib.ExceptionList = ExceptionList
return 1
