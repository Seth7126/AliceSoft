// 函数: sub_4a4310
// 地址: 0x4a4310
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b8ba8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
(*(**(arg1 + 0x5c) + 0x1c))(0)
int32_t* var_18 = nullptr
int32_t var_14 = 0
int32_t var_10 = 0
int32_t var_4 = 0
int32_t result = sub_4a6a50(arg1 + 0x4c, &var_18)
int32_t* ebp = var_18
int32_t edi = 0
int32_t* esi_1 = ebp
uint32_t ebx_3 = (var_14 - ebp + 3) u>> 2

if (ebp u> var_14)
    ebx_3 = 0

if (ebx_3 != 0)
    do
        *esi_1
        result = sub_4a4310(eax_2)
        edi += 1
        esi_1 = &esi_1[1]
    while (edi != ebx_3)

if (ebp != 0)
    result = j__free(ebp)

fsbase->NtTib.ExceptionList = ExceptionList
return result
