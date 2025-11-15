// 函数: sub_55bb70
// 地址: 0x55bb70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73b383
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t var_4c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0xf8) = 1
void var_38
sub_55bee0(&var_38, arg1 + 0xb4)
int32_t var_8_1 = 0
void var_2c
sub_55bee0(&var_2c, arg1 + 0xc0)
var_8_1.b = 1
void var_20
sub_55bee0(&var_20, arg1 + 0xcc)
void* i = &var_38
int32_t var_8_2 = 2
void* i_1 = &var_38

do
    int32_t* esi_1 = *i
    int32_t eax_6 = *(i + 4)
    int32_t edi_1 = 0
    uint32_t ebx_4 = (eax_6 - esi_1 + 3) u>> 2
    
    if (esi_1 u> eax_6)
        ebx_4 = 0
    
    if (ebx_4 != 0)
        do
            int32_t* eax_7 = *esi_1
            void* ecx_3 = *eax_7
            eax_7[0xd].b = 1
            
            if (ecx_3 != 0)
                sub_451b40(ecx_3)
            
            edi_1 += 1
            esi_1 = &esi_1[1]
        while (edi_1 != ebx_4)
    
    i = i_1 + 0xc
    i_1 = i
while (i != &var_14)

int32_t var_8_3 = 0xffffffff
int32_t result = `eh vector vbase constructor iterator'(&var_38, 0xc, 3, sub_4043e0)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(var_14 ^ &__saved_ebp)
return result
