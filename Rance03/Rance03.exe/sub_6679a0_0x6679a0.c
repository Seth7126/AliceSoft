// 函数: sub_6679a0
// 地址: 0x6679a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cfe41
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_3c
int32_t eax_2 = __security_cookie ^ &var_3c
int32_t __saved_edi
int32_t var_50 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_38 = 0
int32_t* var_30 = arg1
var_3c = arg2
*arg1 = 0
arg1[1] = 0
arg1[2] = 0
int32_t var_4 = 0
int32_t eax_6
int32_t edx
edx:eax_6 = muls.dp.d(0x66666667, arg2[1] - *arg2)
int32_t edx_1 = edx s>> 4
int32_t ecx_2 = arg3
int32_t i = (edx_1 u>> 0x1f) + edx_1
int32_t var_38_1 = 1
int32_t ebx = divs.dp.d(sx.q(arg5), arg4) + 1

if (ebx + ecx_2 u> i)
    ebx = i - ecx_2

int32_t esi_2 = 0

if (ebx != 0)
    int32_t edi_2 = ecx_2 * 0x28
    
    while (i u> esi_2 + ecx_2)
        int32_t var_4_1 = 1
        int32_t var_2c
        sub_412d60(arg1, sub_6666e0(*var_3c + edi_2, &var_2c))
        var_4_1.b = 0
        int32_t var_18
        
        if (var_18 u>= 0x10)
            j__free(var_2c)
        
        ecx_2 = arg3
        esi_2 += 1
        edi_2 += 0x28
        
        if (esi_2 u>= ebx)
            break

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_3c)
return arg1
