// 函数: sub_4a4700
// 地址: 0x4a4700
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b68b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_34 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_18 = nullptr
int32_t var_14 = 0
int32_t var_10 = 0
int32_t var_4 = 0
int32_t result = sub_4a6a50(arg1 + 0x4c, &var_18)
int32_t* edx = var_18
int32_t edi = 0
int32_t* esi = edx
uint32_t ecx_4 = (var_14 - edx + 3) u>> 2

if (edx u> var_14)
    ecx_4 = 0

if (ecx_4 != 0)
    do
        sub_4a30d0(*esi, arg2, arg3.b)
        *esi
        result = sub_4a4700(arg2, arg3)
        edi += 1
        esi = &esi[1]
    while (edi != ecx_4)
    
    edx = var_18

if (edx != 0)
    result = j__free(edx)

fsbase->NtTib.ExceptionList = ExceptionList
return result
