// 函数: sub_63f2b0
// 地址: 0x63f2b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7461a0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_63f400(arg1)
uint32_t arg_4
char result = sub_5f21b0(arg1 + 4, arg_4)

if (result == 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result

int32_t* ecx_3 = *(arg1 + 0x28)

if (ecx_3 != 0)
    (*(*ecx_3 + 4))(eax_2)
    *(arg1 + 0x28) = 0

uint32_t eax_4 = sub_6e810c(8)
arg_4 = eax_4
*eax_4 = 0
*(eax_4 + 4) = 1
*eax_4 = &nutria::CZlibDecompressor::`vftable'{for `common::SuicideRefCounter<class IDecompressor>'}
*(arg1 + 0x28) = eax_4
uint8_t* var_1c
sub_431b80(&var_1c, 0x10)
int32_t var_8_1 = 0
uint8_t* esi = var_1c
int32_t var_18
void* ebx

if (sub_5f2320(arg1 + 4, esi, var_18 - esi) == 0)
    ebx.b = 0
else if (sub_63f0d0(&var_1c, &arg_4) == 0)
    esi = var_1c
    ebx.b = 0
else
    uint8_t* var_28
    sub_431b80(&var_28, arg_4)
    var_8_1.b = 1
    uint8_t* edx_1 = var_28
    int32_t var_24
    char eax_10 = sub_5f2320(arg1 + 4, edx_1, var_24 - edx_1)
    char eax_11
    
    if (eax_10 != 0)
        eax_11 = sub_63f1e0(arg1, &var_28)
    
    if (eax_10 == 0 || eax_11 == 0)
        ebx.b = 0
        sub_4059a0(&var_28)
        esi = var_1c
    else
        ebx.b = 1
        sub_4059a0(&var_28)
        esi = var_1c

int32_t var_14

if (esi != 0)
    sub_403160(esi, var_14 - esi, 1)
fsbase->NtTib.ExceptionList = ExceptionList
return ebx.b
