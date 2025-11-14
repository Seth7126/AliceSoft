// 函数: sub_5ccfb0
// 地址: 0x5ccfb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c5a18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_30
int32_t eax_2 = __security_cookie ^ &var_30
int32_t __saved_edi
int32_t var_3c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
arg1[0x8d] -= 4
int32_t var_28
sub_5cced0(arg1, &var_28, *arg1[0x8d])
int32_t var_4 = 0
int32_t* result_1
int32_t* eax_6
int32_t* ecx_1
int32_t edx
eax_6, ecx_1, edx = sub_5d62c0(&arg1[0x5b], &var_28, &result_1)
int32_t* result

if (eax_6.b != 0)
    int32_t ecx_2 = arg1[0x8b]
    int32_t edi_3 = (arg1[0x8d] - arg1[0x8a]) s>> 2
    
    if (edi_3 + 1 u>= ecx_2)
        sub_64ad90(&arg1[0x89], ecx_2 * 2)
        arg1[0x8d] = arg1[0x8a] + (edi_3 << 2)
    
    result = result_1
    *arg1[0x8d] = result
    arg1[0x8d] += 4
else
    result = sub_5c24e0(eax_6, edx, ecx_1, arg1, 0x6e96d0)

int32_t var_14

if (var_14 u>= 0x10)
    result = j__free(var_28)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_30)
return result
