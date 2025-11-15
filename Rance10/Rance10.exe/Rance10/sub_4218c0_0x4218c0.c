// 函数: sub_4218c0
// 地址: 0x4218c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729078
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* ebx
void* var_24 = ebx
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_ebp
int32_t eax_5 = (*(**(arg1 + 0xc) + 0x14))(__security_cookie ^ &__saved_ebp)
void* var_20
sub_422370(&var_20, eax_5)
int32_t esi = 0
int32_t var_8_1 = 0

if (eax_5 s> 0)
    ebx = var_20
    
    do
        int32_t* eax_8 = (*(**(arg1 + 0xc) + 0x18))(esi)
        
        if (eax_8 != 0)
            *(ebx + (esi << 2)) = (**eax_8)()
        
        esi += 1
    while (esi s< eax_5)

char eax_10 = sub_421dc0(arg1, arg2, arg3, &var_20)
void* edx_2 = var_20
ebx.b = eax_10 != 0
int32_t var_18

if (edx_2 != 0)
    sub_403160(edx_2, (var_18 - edx_2) s>> 2, 4)
fsbase->NtTib.ExceptionList = ExceptionList
return ebx.b
