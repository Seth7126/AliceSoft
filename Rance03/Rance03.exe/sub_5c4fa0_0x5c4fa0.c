// 函数: sub_5c4fa0
// 地址: 0x5c4fa0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b56d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_44
int32_t eax_2 = __security_cookie ^ &var_44
int32_t __saved_edi
int32_t var_54 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
int32_t var_4 = 0
int32_t result = sub_5cea10(arg1, &var_28, "STOI")

if (result.b != 0)
    int32_t var_2c_1 = 0xf
    int32_t var_30_1 = 0
    char var_40 = 0
    var_4.b = 1
    sub_5c5100(&var_28, &var_40)
    int32_t* var_58_1 = &var_44
    char* eax_5 = &var_40
    var_44 = 0
    
    if (var_2c_1 u>= 0x10)
        eax_5 = var_40.d
    
    sub_69b31c(eax_5, 0x6dcf3c)
    int32_t ecx_1 = *(arg1 + 0x22c)
    int32_t ebx_1 = var_44
    int32_t edi_3 = (*(arg1 + 0x234) - *(arg1 + 0x228)) s>> 2
    
    if (edi_3 + 1 u>= ecx_1)
        sub_64ad90(arg1 + 0x224, ecx_1 * 2)
        *(arg1 + 0x234) = *(arg1 + 0x228) + (edi_3 << 2)
    
    result = *(arg1 + 0x234)
    *result = ebx_1
    *(arg1 + 0x234) += 4
    
    if (var_2c_1 u>= 0x10)
        result = j__free(var_40.d)
    
    int32_t var_2c_2 = 0xf
    int32_t var_30_2 = 0
    var_40 = 0

if (var_14 u>= 0x10)
    result = j__free(var_28.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_44)
return result
