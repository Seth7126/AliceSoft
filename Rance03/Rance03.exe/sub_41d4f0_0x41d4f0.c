// 函数: sub_41d4f0
// 地址: 0x41d4f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b44b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_3c
int32_t eax_2 = __security_cookie ^ &var_3c
int32_t __saved_edi
int32_t var_4c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg1
var_3c = ebx
int32_t esi = 0
*(ebx + 0x10) = *(arg2 + 4)
*(arg2 + 8) = ebx
int32_t eax_6
int32_t edx_2
edx_2:eax_6 = muls.dp.d(0x2aaaaaab, data_75d5c8 - data_75d5c4)
int32_t edx_3 = edx_2 s>> 2
void** result

if ((edx_3 u>> 0x1f) + edx_3 s<= 0)
label_41d600:
    result.b = 1
else
    while (true)
        int32_t var_34
        char* edi_1 = sub_420a40(&var_34, esi)
        int32_t var_c_1 = 0
        int32_t edx_5
        
        if (esi s>= 0)
            edx_5 = data_75d5d0
        
        char* eax_9
        
        if (esi s< 0 || esi s>= (data_75d5d4 - edx_5) s>> 2)
            eax_9.b = 0
        else
            eax_9.b = *(edx_5 + (esi << 2)) != 0
        
        eax_9.b = eax_9.b == 0
        int32_t var_c_2 = 0xffffffff
        ebx.b = sub_41d730(ebx, edi_1, eax_9.b, arg2).b == 0
        int32_t var_20
        
        if (var_20 u>= 0x10)
            j__free(var_34)
        
        if (ebx.b != 0)
            result.b = 0
            break
        
        esi += 1
        ebx = var_3c
        int32_t eax_11
        int32_t edx_6
        edx_6:eax_11 = muls.dp.d(0x2aaaaaab, data_75d5c8 - data_75d5c4)
        int32_t edx_7 = edx_6 s>> 2
        
        if (esi s>= (edx_7 u>> 0x1f) + edx_7)
            goto label_41d600

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_3c)
return result
