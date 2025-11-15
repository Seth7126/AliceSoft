// 函数: sub_55b8a0
// 地址: 0x55b8a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73b3c0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t var_4c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void var_38
sub_55bee0(&var_38, arg1 + 0xb4)
int32_t var_8_1 = 0
void var_2c
sub_55bee0(&var_2c, arg1 + 0xc0)
var_8_1.b = 1
void var_20
sub_55bee0(&var_20, arg1 + 0xcc)
int32_t ebx
ebx.b = arg2
void* i = &var_38
int32_t var_8_2 = 0xffffffff

do
    int32_t* ecx_3 = *i
    int32_t edx_1 = 0
    uint32_t esi_4 = (*(i + 4) - ecx_3 + 3) u>> 2
    
    if (ecx_3 u> *(i + 4))
        esi_4 = 0
    
    if (esi_4 != 0)
        do
            void* eax_7 = **ecx_3
            
            if (eax_7 != 0)
                *(eax_7 + 0x115) = ebx.b
            
            edx_1 += 1
            ecx_3 = &ecx_3[1]
        while (edx_1 != esi_4)
    
    i += 0xc
while (i != &var_14)

int32_t result = `eh vector vbase constructor iterator'(&var_38, 0xc, 3, sub_4043e0)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(var_14 ^ &__saved_ebp)
return result
