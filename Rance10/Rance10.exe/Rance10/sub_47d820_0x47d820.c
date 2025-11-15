// 函数: sub_47d820
// 地址: 0x47d820
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72e64f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_14 = arg1
int32_t esi
int32_t var_18 = esi
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct ibis::CJoystickDevice::VTable** arg_8
int32_t* esi_1 = arg_8
int32_t* ecx = *esi_1
var_14 = 0

if ((*(*ecx + 0xc))(ecx, arg2 + 4, &var_14, 0, eax_2) s>= 0)
    struct ibis::CJoystickDevice::VTable** eax_6 = sub_6e810c(0x24)
    arg_8 = eax_6
    int32_t var_8_1 = 0
    int32_t var_8_2 = 0xffffffff
    arg_8 = sub_47dd20(eax_6, var_14)
    sub_42ccf0(&esi_1[2], &arg_8)

fsbase->NtTib.ExceptionList = ExceptionList
return 1
