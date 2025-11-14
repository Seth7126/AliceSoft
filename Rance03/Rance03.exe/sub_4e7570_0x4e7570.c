// 函数: sub_4e7570
// 地址: 0x4e7570
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c082b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CPartsList::VTable** result = arg1
struct partsengine::CPartsList::VTable** result_1 = result
*result = &partsengine::CPartsList::`vftable'
int32_t var_4 = 0
sub_4e7a00(arg1)
result[8] = 0
int32_t eax_3 = result[3]

if (eax_3 != 0)
    j__free(eax_3)
    result[3] = 0
    result[4] = 0
    result[5] = 0

if ((arg2 & 1) != 0)
    j__free(result)

fsbase->NtTib.ExceptionList = ExceptionList
return result
