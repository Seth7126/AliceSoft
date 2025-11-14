// 函数: sub_460d20
// 地址: 0x460d20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b8a88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_20 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
void** var_18 = nullptr
int32_t var_14 = 0
int32_t var_10 = 0
int32_t var_4 = 0
sub_460de0(arg2, &var_18)
void** eax_3 = var_18
void* const result

if (eax_3 == var_14)
    result = nullptr
else
    void* eax_4 = sub_4612f0(arg1, eax_3)
    
    if (eax_4 == 0 || *(eax_4 + 4) != 6)
        eax_3 = var_18
        result = nullptr
    else
        result = sub_4684c0(*(eax_4 + 0x5c), &var_18)
        eax_3 = var_18

if (eax_3 != 0)
    sub_4107c0(eax_3, var_14)
    j__free(var_18)

fsbase->NtTib.ExceptionList = ExceptionList
return result
