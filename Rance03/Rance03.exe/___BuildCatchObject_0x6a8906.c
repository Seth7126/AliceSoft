// 函数: ___BuildCatchObject
// 地址: 0x6a8906
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t __saved_ebp_1 = 8
int32_t var_8 = 0x748190
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_69e8b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebx
int32_t var_20 = ebx
int32_t esi
int32_t var_24 = esi
int32_t edi
int32_t var_28 = edi
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x748190 ^ __security_cookie_1
int32_t __saved_ebp
void* var_2c = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_2c
void* const var_30 = &data_6a8912
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
void** edi_1

if ((*arg3 & 0x80000000) == 0)
    edi_1 = &arg2[3] + arg3[2]
else
    edi_1 = arg2

int32_t var_8_1 = 0
var_30 = arg4
int32_t eax = sub_6a8994(arg1, arg2, arg3, var_30)
void* const* esp = &var_2c
int32_t result

if (eax == 1)
    var_30 = arg4 + 8
    var_30 = ___AdjustPointer(*(arg1 + 0x18), var_30)
    result = sub_69e108(edi_1, *(arg4 + 0x18), var_30)
    esp = &var_2c
else
    result = eax - 2
    
    if (eax == 2)
        var_30 = 1
        void* eax_3 = ___AdjustPointer(*(arg1 + 0x18), arg4 + 8)
        result = sub_69e108(edi_1, *(arg4 + 0x18), eax_3)
        esp = &var_30

int32_t var_8_2 = 0xfffffffe
*(esp - 4) = &data_6a8986
fsbase->NtTib.ExceptionList = ExceptionList
esp[1]
esp[2]
esp[3]
int32_t __saved_ebp_2 = *(esp - 4)
return result
