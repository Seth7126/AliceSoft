// 函数: sub_526100
// 地址: 0x526100
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729078
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_20 = nullptr
int32_t var_1c = 0
int32_t var_18 = 0
int32_t var_8_1 = 0
void* result = sub_522f90(&arg1[2], &var_20)
int32_t* ecx_1 = var_20
int32_t edi = 0
int32_t* esi = ecx_1
uint32_t ebx_3 = (var_1c - ecx_1 + 3) u>> 2

if (ecx_1 u> var_1c)
    ebx_3 = 0

if (ebx_3 != 0)
    do
        result = sub_5261c0(arg1, *esi)
        edi += 1
        esi = &esi[1]
    while (edi != ebx_3)
    
    ecx_1 = var_20

if (ecx_1 != 0)
    result = sub_403160(ecx_1, (var_18 - ecx_1) s>> 2, 4)

fsbase->NtTib.ExceptionList = ExceptionList
return result
