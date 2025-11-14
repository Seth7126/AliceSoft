// 函数: sub_5cc770
// 地址: 0x5cc770
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b6928
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_28
int32_t eax_2 = __security_cookie ^ &var_28
int32_t var_2c = __security_cookie ^ &var_28
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14 = 0xf
int32_t var_18 = 0
var_28 = 0
int32_t var_4 = 0
int32_t result
void* ecx
int32_t ecx_1
result, ecx_1 = sub_5cea10(ecx, &var_28, "system.OpenWeb")

if (result.b != 0 && data_75d534 != 0)
    int32_t var_30_1 = ecx_1
    result = sub_6203f0()
    
    if (result != 0)
        result = (**result)(0x6ea820)
        
        if (result != 0)
            char* ecx_3 = &var_28
            
            if (var_14 u>= 0x10)
                ecx_3 = var_28.d
            
            result = (**result)(ecx_3)

if (var_14 u>= 0x10)
    result = j__free(var_28.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_28)
return result
