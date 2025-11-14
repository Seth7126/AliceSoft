// 函数: sub_453c00
// 地址: 0x453c00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6b7851
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
void* i = arg3
struct debugfile::CAddressMap::VTable** result = arg4
struct debugfile::CAddressMap::VTable** result_2 = result
int32_t var_8_1 = 0

for (; i != arg2; i += 0x18)
    struct debugfile::CAddressMap::VTable** result_1 = result
    var_8_1.b = 1
    
    if (result != 0)
        *result = &debugfile::CAddressMap::`vftable'
        sub_453d80(&result[1], i + 4)
        result[4] = *(i + 0x10)
        result[5] = *(i + 0x14)
    
    result = &result[6]
    var_8_1.b = 0
    arg4 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
