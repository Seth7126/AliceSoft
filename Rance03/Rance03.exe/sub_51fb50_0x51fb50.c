// 函数: sub_51fb50
// 地址: 0x51fb50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b495b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void arg_4
sub_42f3d0(&arg1[1], &var_10, &arg_4)
int32_t* eax_3 = var_10

if (eax_3 != arg1[1])
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3[5]

int32_t* eax_5 = sub_69adc6(0x30)
var_10 = eax_5
int32_t var_4 = 0
struct passregister::CPassRegister::VTable** result

if (eax_5 == 0)
    result = nullptr
else
    result = sub_51fc00(eax_5)

int32_t var_4_1 = 0xffffffff
*sub_42f350(&arg1[1], &arg_4) = result
fsbase->NtTib.ExceptionList = ExceptionList
return result
