// 函数: sub_5c78c0
// 地址: 0x5c78c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b2a38
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_30
int32_t eax_2 = __security_cookie ^ &var_30
int32_t __saved_edi
int32_t var_44 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_5 = *(arg1 + 0x234)
int32_t edx = *(eax_5 - 8)
void* ecx = *(eax_5 - 4)
void* var_2c = ecx
int32_t edi = *(eax_5 - 0xc)
*(arg1 + 0x234) = eax_5 - 0xc

if (edx s< 0)
    edx = 0

int32_t eax_9 = (*(arg1 + 0x178) - *(arg1 + 0x174)) s>> 2
int32_t result

if (edi u>= eax_9)
label_5c79f0:
    int32_t var_48_7 = edi
    int32_t var_4c_2 = 0x6e7838
    result = sub_5c2400(eax_9, edx, ecx, arg1, "S_GETPART")
else
    eax_9 = *(arg1 + 0x174)
    ecx = *(eax_9 + (edi << 2))
    
    if (ecx == 0)
        goto label_5c79f0
    
    int32_t var_4 = 0
    char var_28
    int32_t* eax_11
    int32_t ecx_2
    int32_t edx_1
    eax_11, ecx_2, edx_1 = sub_5d62c0(arg1 + 0x16c, sub_5d3f70(ecx, &var_28, edx, var_2c), &var_2c)
    int32_t var_4_1 = 0xffffffff
    eax_11.b = eax_11.b == 0
    char var_2d_1 = eax_11.b
    int32_t var_14
    
    if (var_14 u>= 0x10)
        eax_11, ecx_2, edx_1 = j__free(var_28.d)
        eax_11.b = var_2d_1
    
    int32_t var_14_1 = 0xf
    int32_t var_18_1 = 0
    var_28 = 0
    
    if (eax_11.b == 0)
        sub_5ddf10(arg1 + 0x220, var_2c)
        int32_t ecx_5
        int32_t edx_2
        result, ecx_5, edx_2 = sub_5d5e80(arg1 + 0x16c, edi)
        
        if (result.b == 0)
            int32_t var_48_6 = 0x6e7888
            result = sub_5c2400(result, edx_2, ecx_5, arg1, "S_GETPART")
    else
        int32_t var_48_3 = 0x6e7860
        result = sub_5c2400(eax_11, edx_1, ecx_2, arg1, "S_GETPART")

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_30)
return result
