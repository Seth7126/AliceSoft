// 函数: sub_658a00
// 地址: 0x658a00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cf5f1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* result_1
int32_t eax_2 = __security_cookie ^ &result_1
int32_t __saved_edi
int32_t var_58 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_34 = 0
result_1 = arg2
int32_t* var_30 = arg2
*arg2 = 0
arg2[1] = 0
arg2[2] = 0
int32_t var_4 = 0
int32_t eax_6
int32_t edx
edx:eax_6 = muls.dp.d(0x2aaaaaab, arg3[1] - *arg3)
int32_t edx_1 = edx s>> 5
int32_t i = (edx_1 u>> 0x1f) + edx_1
int32_t var_34_1 = 1
int32_t i_1 = i
int32_t ebx = divs.dp.d(sx.q(arg6), arg5) + 1

if (ebx + arg4 u> i)
    ebx = i - arg4

int32_t esi = 0
int32_t* result

if (ebx == 0)
    result = arg2
else
    int32_t edi_3 = arg4 * 0xc0
    
    while (i u> esi + arg4)
        sub_6541d0(*arg3 + 0xa4 + edi_3, arg1 + 0x450)
        int32_t var_2c
        char* eax_16 = sub_654990(*arg3 + edi_3, &var_2c)
        int32_t var_4_1 = 1
        sub_412d60(result_1, eax_16)
        var_4_1.b = 0
        int32_t var_18
        
        if (var_18 u>= 0x10)
            j__free(var_2c)
        
        i = i_1
        esi += 1
        edi_3 += 0xc0
        
        if (esi u>= ebx)
            break
    
    result = result_1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &result_1)
return result
