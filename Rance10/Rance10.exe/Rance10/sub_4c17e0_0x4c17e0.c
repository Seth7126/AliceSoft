// 函数: sub_4c17e0
// 地址: 0x4c17e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_733068
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = sub_4efcc0(*(arg1 + 0xa0))
void* ecx_2 = *(*(arg1 + 0x1d4) + 8)

if (ecx_2 != 0 && sub_4d62f0(ecx_2, arg1 + 0xe4) != 0)
    void* esi_1 = *(eax_3 + 0x44)
    sub_555e00(esi_1, 0x1a, 1)
    int32_t eax_6 = sub_4dbf90(*(esi_1 + 0x80), arg1 + 0xe4)
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_6

char* eax_7

if (*(arg1 + 0xe0) u< 0x10)
    eax_7 = arg1 + 0xcc
else
    eax_7 = *(arg1 + 0xcc)

if (sub_44c4e0(eax_7) != 0)
    void* esi_2 = *(eax_3 + 0x44)
    sub_555e00(esi_2, 0x11, 1)
    int32_t* eax_9 = sub_547af0(*(esi_2 + 0x80), arg1 + 0xcc, nullptr)
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_9

char var_28 = 0
int32_t var_24 = 0
int32_t var_20 = 0xc8
int32_t var_1c = 0xc8
int32_t var_18 = 0xc8
int32_t var_8_1 = 0
char var_28_1 = 1
int32_t (__stdcall* var_24_1)(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4) = sub_519270
void* esi_3 = *(eax_3 + 0x44)
sub_555e00(esi_3, 0x18, 1)
sub_54b7a0(*(esi_3 + 0x80))
void* esi_4 = *(eax_3 + 0x44)
sub_555e00(esi_4, 0x18, 1)
sub_54b880(*(esi_4 + 0x80), 0x400, 0x100)
sub_518a20(*(eax_3 + 0x44), 0x400, 0x100, 1)
void* esi_5 = *(eax_3 + 0x44)
sub_555e00(esi_5, 0x18, 1)
int32_t* eax_10 = sub_54c110(*(esi_5 + 0x80))
fsbase->NtTib.ExceptionList = ExceptionList
return eax_10
