// 函数: sub_5cc360
// 地址: 0x5cc360
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5750
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_44
int32_t eax_2 = __security_cookie ^ &var_44
int32_t __saved_edi
int32_t var_54 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_2c = 0xf
int32_t var_30 = 0
char var_40 = 0
int32_t var_4 = 0
int32_t result = sub_5cea10(arg1, &var_40, "system.DeleteSaveFile")

if (result.b != 0)
    var_4.b = 1
    int32_t var_28
    int32_t ebx
    ebx.b = sub_5daf90(arg1 + 0x1e0, sub_5c0db0(arg1, &var_28), &var_40)
    int32_t var_14
    
    if (var_14 u>= 0x10)
        j__free(var_28)
    
    int32_t ecx_2 = *(arg1 + 0x22c)
    int32_t edi_3 = (*(arg1 + 0x234) - *(arg1 + 0x228)) s>> 2
    
    if (edi_3 + 1 u>= ecx_2)
        sub_64ad90(arg1 + 0x224, ecx_2 * 2)
        *(arg1 + 0x234) = *(arg1 + 0x228) + (edi_3 << 2)
    
    result = *(arg1 + 0x234)
    int32_t ecx_4
    ecx_4.b = ebx.b != 0
    *result = ecx_4
    *(arg1 + 0x234) += 4

if (var_2c u>= 0x10)
    result = j__free(var_40.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_44)
return result
