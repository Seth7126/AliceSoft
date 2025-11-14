// 函数: sub_5c7a30
// 地址: 0x5c7a30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c9d20
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_48
int32_t eax_2 = __security_cookie ^ &var_48
int32_t __saved_edi
int32_t var_54 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x234) -= 4
int32_t edx = **(arg1 + 0x234)
*(arg1 + 0x234) -= 4
int32_t ecx = **(arg1 + 0x234)
int32_t eax_9 = (*(arg1 + 0x178) - *(arg1 + 0x174)) s>> 2
int32_t result

if (ecx u>= eax_9)
label_5c7b5e:
    int32_t var_58_6 = ecx
    int32_t var_5c_1 = 0x6e78c4
    result = sub_5c2400(eax_9, edx, ecx, arg1, "S_PUSHBACK2")
else
    eax_9 = *(arg1 + 0x174)
    void* edi_1 = *(eax_9 + (ecx << 2))
    
    if (edi_1 == 0)
        goto label_5c7b5e
    
    char var_44 = edx.b
    
    if (edx s<= 0xff)
        char var_43_2 = 0
    else
        char var_43_1 = (edx s>> 8).b
        char var_42_1 = 0
    
    char* eax_10
    
    if (*(edi_1 + 0xc) != 0)
        eax_10 = *(edi_1 + 8)
    else
        eax_10 = nullptr
    
    char var_40
    char* eax_11 = sub_401f60(&var_40, eax_10)
    int32_t var_4 = 0
    void* var_28
    sub_410a80(eax_11.b, eax_11, &var_28, &var_44)
    var_4.b = 2
    int32_t var_2c
    
    if (var_2c u>= 0x10)
        j__free(var_40.d)
    
    int32_t var_2c_1 = 0xf
    int32_t var_30_1 = 0
    var_40 = 0
    int32_t ecx_4
    int32_t edx_3
    result, ecx_4, edx_3 = sub_5d3d20(edi_1, &var_28)
    
    if (result.b == 0)
        int32_t var_58_4 = 0x6e78fc
        result = sub_5c2400(result, edx_3, ecx_4, arg1, "S_PUSHBACK2")
    
    int32_t var_14
    
    if (var_14 u>= 0x10)
        result = j__free(var_28)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_48)
return result
