// 函数: sub_421980
// 地址: 0x421980
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7290a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_5 = (*(**(arg1 + 0xc) + 8))((*(**(arg1 + 8) + 0x14))(arg2))
void* var_1c
sub_422370(&var_1c, eax_5)
int32_t esi = 0
int32_t var_8_1 = 0

if (eax_5 s> 0)
    do
        int32_t* eax_8 = (*(**(arg1 + 0xc) + 0xc))((*(**(arg1 + 8) + 0x14))(arg2), esi)
        
        if (eax_8 != 0)
            *(var_1c + (esi << 2)) = (**eax_8)(eax_2)
        
        esi += 1
    while (esi s< eax_5)

char eax_10 = sub_421dc0(arg1, arg2, arg3, &var_1c)
void* edx_3 = var_1c
void* ebx
ebx.b = eax_10 != 0
int32_t var_14

if (edx_3 != 0)
    sub_403160(edx_3, (var_14 - edx_3) s>> 2, 4)
fsbase->NtTib.ExceptionList = ExceptionList
return ebx.b
