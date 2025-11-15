// 函数: sub_5437c0
// 地址: 0x5437c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7290a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* result = sub_4f4e40(data_7fcba4 + 0x124, arg3)

if (result != 0)
    int32_t* var_1c = nullptr
    int32_t var_18_1 = 0
    int32_t var_14_1 = 0
    int32_t var_8_1 = 0
    void* edi_1 = *(result + 0x44)
    sub_555e00(edi_1, 0x16, arg15)
    sub_4274a0(&var_1c, *(edi_1 + (arg15 << 2) + 0x7c) + 0x2c)
    int32_t* edx = var_1c
    *arg2 = *edx
    *arg4 = edx[1]
    *arg5 = edx[2]
    *arg6 = edx[3]
    *arg7 = edx[4]
    *arg8 = edx[5]
    *arg9 = edx[6]
    *arg10 = edx[7]
    *arg11 = edx[8]
    *arg12 = edx[9]
    *arg13 = edx[0xa]
    *arg14 = edx[0xb]
    result = sub_403160(edx, (var_14_1 - edx) s>> 2, 4)

fsbase->NtTib.ExceptionList = ExceptionList
return result
