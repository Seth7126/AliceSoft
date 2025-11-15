// 函数: sub_697c60
// 地址: 0x697c60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_74806e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg1
arg1 = esi
int32_t var_8_1 = 0
int32_t* ecx = *(esi + 0x24)

if (ecx == 0)
    sub_6d090a()
    noreturn

int32_t __saved_ebp
(*(*ecx + 8))(__security_cookie ^ &__saved_ebp)
int32_t var_8_2 = 1
int32_t* ecx_1 = *(esi + 0x24)

if (ecx_1 != 0)
    (*(*ecx_1 + 0x10))(ecx_1 != esi)
    *(esi + 0x24) = 0

int32_t var_1c_2 = 0x28
int32_t result = operator new(esi)
fsbase->NtTib.ExceptionList = ExceptionList
return result
