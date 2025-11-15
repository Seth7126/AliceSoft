// 函数: sub_56b360
// 地址: 0x56b360
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728322
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD*** var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = arg1[1]
int128_t* edi = arg2

if (edi u< ecx)
    result = *arg1

if (edi u>= ecx || result u> edi)
    if (ecx == arg1[2])
        int32_t var_24_2 = ecx
        result = sub_56b450(arg1)
    
    int128_t* ecx_7 = arg1[1]
    arg2 = ecx_7
    int128_t* var_14_2 = ecx_7
    int32_t var_8_2 = 1
    
    if (ecx_7 != 0)
        *ecx_7 = *edi
        ecx_7[1] = edi[1]
        ecx_7[2].d = edi[2].d
        result = sub_4275f0(ecx_7 + 0x24, edi + 0x24)
else
    int32_t edx_1
    edx_1:result = muls.dp.d(0x2aaaaaab, edi - result)
    int32_t edx_2 = edx_1 s>> 3
    
    if (ecx == arg1[2])
        int32_t var_24_1 = ecx
        result = sub_56b450(arg1)
    
    int128_t* edx_3 = arg1[1]
    void* ecx_4 = &(*arg1)[((edx_2 u>> 0x1f) + edx_2) * 0xc]
    arg2 = edx_3
    int128_t* var_14_1 = edx_3
    int32_t var_8_1 = 0
    
    if (edx_3 != 0)
        *edx_3 = *ecx_4
        edx_3[1] = *(ecx_4 + 0x10)
        edx_3[2].d = *(ecx_4 + 0x20)
        result = sub_4275f0(edx_3 + 0x24, ecx_4 + 0x24)

arg1[1] = &arg1[1][0xc]
fsbase->NtTib.ExceptionList = ExceptionList
return result
