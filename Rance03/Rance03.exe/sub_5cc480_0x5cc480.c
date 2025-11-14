// 函数: sub_5cc480
// 地址: 0x5cc480
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5658
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_28
int32_t eax_2 = __security_cookie ^ &var_28
int32_t __saved_edi
int32_t var_34 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14 = 0xf
int32_t var_18 = 0
var_28 = 0
int32_t var_4 = 0
int32_t result = sub_5cea10(arg1, &var_28, "system.ExistFunc")

if (result.b != 0)
    char* edx_1 = &var_28
    
    if (var_14 u>= 0x10)
        edx_1 = var_28.d
    
    int32_t eax_6 = (*(*(arg1 + 0x154) + 8))(edx_1)
    int32_t ecx_1 = *(arg1 + 0x22c)
    int32_t edi_3 = (*(arg1 + 0x234) - *(arg1 + 0x228)) s>> 2
    
    if (eax_6 == 0xffffffff)
        if (edi_3 + 1 u>= ecx_1)
            sub_64ad90(arg1 + 0x224, ecx_1 * 2)
            *(arg1 + 0x234) = *(arg1 + 0x228) + (edi_3 << 2)
        
        result = *(arg1 + 0x234)
        *result = 0
    else
        if (edi_3 + 1 u>= ecx_1)
            sub_64ad90(arg1 + 0x224, ecx_1 * 2)
            *(arg1 + 0x234) = *(arg1 + 0x228) + (edi_3 << 2)
        
        result = *(arg1 + 0x234)
        *result = 1
    
    *(arg1 + 0x234) += 4

if (var_14 u>= 0x10)
    result = j__free(var_28.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_28)
return result
