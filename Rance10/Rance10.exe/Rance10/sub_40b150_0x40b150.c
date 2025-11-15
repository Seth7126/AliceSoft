// 函数: sub_40b150
// 地址: 0x40b150
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7274d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = nullptr
struct fileimage::CFileImageMaker::VTable* const var_4c = &fileimage::CFileImageMaker::`vftable'
void* var_48 = nullptr
int32_t var_44 = 0
int32_t var_40 = 0
int32_t var_8_1 = 0
int32_t eax_4 = (*(**(arg1 + 0x1c) + 0x10))(arg2)
WPARAM ebx
uint32_t esi_1

if (eax_4 == 0)
label_40b1dd:
    esi_1 = 0
label_40b1e3:
    sub_6ca100(&var_4c, esi_1)
    char eax_7
    
    if (arg2 != 0)
        eax_7 = sub_40c050(arg1, &var_4c, arg2, esi_1)
    else
        eax_7 = sub_40be80(arg1, &var_4c, arg3)
    
    if (eax_7 != 0)
        struct win32only::CFileMapping::VTable* var_3c = &win32only::CFileMapping::`vftable'
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        char var_2c_1 = 0
        int32_t var_38_1 = 0
        int32_t var_34_1 = 0
        int32_t var_30_1 = 0
        var_8_1.b = 1
        
        if (sub_40cb00(&var_3c, &var_4c) != 0)
            SendMessageA(*(arg1 + 8), 0x90d, arg2, arg3)
            ebx.b = 1
        else
            ebx.b = 0
        
        sub_6cddb0(&var_3c)
        esi = var_48
    else
        esi = var_48
        ebx.b = 0
else
    if (eax_4 == 3)
        int32_t* eax_12 = (*(**(arg1 + 0x1c) + 4))(arg2)
        
        if (eax_12 == 0)
            goto label_40b1dd
        
        esi_1 = (*(*eax_12 + 0x14))(eax_2) u>> 2
        goto label_40b1e3
    
    if (eax_4 == 4)
        esi_1 = (*(**(arg1 + 0x20) + 0x20))((*(**(arg1 + 0x1c) + 0x18))(arg2))
        goto label_40b1e3
    
    ebx.b = 0

if (esi != 0)
    sub_403160(esi, var_40 - esi, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return ebx.b
