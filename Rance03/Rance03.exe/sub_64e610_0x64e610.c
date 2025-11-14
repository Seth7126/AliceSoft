// 函数: sub_64e610
// 地址: 0x64e610
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6ceb2b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_2c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = sub_69adc6(0x128)
int32_t var_1c = eax_3
int32_t var_c_1 = 0
int32_t esi

if (eax_3 == 0)
    esi = 0
else
    esi = sub_64c460(eax_3)

int32_t var_c_2 = 0xffffffff
var_1c = esi
void* ecx_1

if (*arg2 != 0)
    char* ecx_2 = arg2
    
    do
        eax_3.b = *ecx_2
        ecx_2 = &ecx_2[1]
    while (eax_3.b != 0)
    
    ecx_1 = ecx_2 - &ecx_2[1]
else
    ecx_1 = nullptr

sub_402110(esi + 0xc8, arg2, ecx_1)

if (**(arg1 + 0x10) != 0)
    char eax_6
    int32_t ecx_5
    eax_6, ecx_5 = sub_650740(esi, **(arg1 + 0x20), *(arg1 + 0x14))
    
    if (eax_6 == 0)
        if (esi != 0)
            (*(*esi + 0x48))(1)
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0xffffffff
    
    int32_t var_30_2 = ecx_5
    sub_6510c0(esi)
    int32_t var_30_3 = sub_650f80(esi, 0, 0)
    sub_6502c0(arg1 + 0x18, **(esi + 8), arg2)

sub_412de0(arg1 + 0x140, &var_1c)
fsbase->NtTib.ExceptionList = ExceptionList
return ((*(arg1 + 0x144) - *(arg1 + 0x140)) s>> 2) - 1
