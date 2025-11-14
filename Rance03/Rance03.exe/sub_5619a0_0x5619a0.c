// 函数: sub_5619a0
// 地址: 0x5619a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6c57c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_3c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct fileimage::CFileImageMaker::VTable* const var_28 = &fileimage::CFileImageMaker::`vftable'
int32_t result_1 = 0
int32_t var_20 = 0
int32_t var_1c = 0
int32_t var_c_1 = 0
char eax_3 = sub_561a70(arg1, &var_28)
bool eax_5

if (eax_3 != 0)
    for (void* i = *(arg1 + 0x14); i != *(arg1 + 0x18); i += 0x26c)
        if (sub_561b80(&var_28, i) == 0)
            goto label_561a46
    
    eax_5 = sub_604d10(arg2, &result_1) == 0

int32_t ebx

if (eax_3 == 0 || eax_5 != 0)
label_561a46:
    ebx.b = 0
else
    ebx.b = 1

int32_t result = result_1

if (result != 0)
    j__free(result)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
