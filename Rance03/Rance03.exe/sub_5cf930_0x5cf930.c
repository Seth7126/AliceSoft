// 函数: sub_5cf930
// 地址: 0x5cf930
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5378
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_2c
int32_t eax_2 = __security_cookie ^ &var_2c
int32_t __saved_edi
int32_t var_3c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x234) -= 4
int32_t ebx = **(arg1 + 0x234)
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
int32_t var_4 = 0
int32_t result = sub_5cea10(arg1, &var_28, "DG_STR_TO_METHOD")

if (result.b != 0)
    char eax_6 = sub_5bd940(arg1 + 0x48, &var_28, &var_2c)
    char eax_7
    int32_t edi_1
    
    if (eax_6 != 0)
        edi_1 = var_2c
        eax_7 = sub_5c4ac0(arg1, ebx, edi_1)
    
    if (eax_6 == 0 || eax_7 == 0)
        edi_1 = 0
    
    int32_t ecx_2 = *(arg1 + 0x22c)
    int32_t ebx_3 = (*(arg1 + 0x234) - *(arg1 + 0x228)) s>> 2
    
    if (ebx_3 + 1 u>= ecx_2)
        sub_64ad90(arg1 + 0x224, ecx_2 * 2)
        *(arg1 + 0x234) = *(arg1 + 0x228) + (ebx_3 << 2)
    
    result = *(arg1 + 0x234)
    *result = edi_1
    *(arg1 + 0x234) += 4

if (var_14 u>= 0x10)
    result = j__free(var_28.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_2c)
return result
