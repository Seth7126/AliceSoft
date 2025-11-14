// 函数: sub_4a69b0
// 地址: 0x4a69b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b8ba8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_2c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_18
int32_t* result = sub_453d80(&var_18, *(arg1 + 0xc) + 0x94)
int32_t var_4 = 0
int32_t* ecx_1 = var_18
int32_t edi = 0
int32_t* esi = ecx_1
int32_t var_14
uint32_t ebx_3 = (var_14 - ecx_1 + 3) u>> 2

if (ecx_1 u> var_14)
    ebx_3 = 0

if (ebx_3 != 0)
    do
        result = sub_4a6910(arg1, *esi)
        edi += 1
        esi = &esi[1]
    while (edi != ebx_3)
    
    ecx_1 = var_18

if (ecx_1 != 0)
    result = j__free(ecx_1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
