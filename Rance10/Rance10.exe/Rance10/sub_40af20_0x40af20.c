// 函数: sub_40af20
// 地址: 0x40af20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727638
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = nullptr
struct fileimage::CFileImageMaker::VTable* const var_68 = &fileimage::CFileImageMaker::`vftable'
void* var_64 = nullptr
int32_t var_60 = 0
int32_t var_5c = 0
WPARAM wParam_1 = arg2
int32_t var_8_1 = 0
WPARAM wParam = wParam_1

if (wParam_1 == 0xffffffff)
    wParam_1 = (*(**(arg1 + 0x1c) + 8))(eax_2)

int32_t eax_5 = (*(**(arg1 + 0x1c) + 0x10))(wParam_1)
void* ebx
uint32_t esi_1

if (eax_5 == 1)
    esi_1 = (*(**(arg1 + 0x20) + 8))((*(**(arg1 + 0x1c) + 0x14))(wParam_1))
    int32_t eax_20 = (*(**(arg1 + 0x1c) + 0x38))(wParam_1)
    
    if (eax_20 == 0xffffffff)
        goto label_40afa7
    
    sub_6ca100(&var_68, esi_1 + 1)
    sub_6ca100(&var_68, 0xd)
    var_8_1.b = 1
    void var_30
    sub_6ca1a0(&var_68, sub_4201d0(arg1 + 0x14, &var_30, eax_20))
    var_8_1.b = 0
    sub_403320(&var_30)
    sub_403360(&var_30, "this")
    var_8_1.b = 2
    sub_6ca1a0(&var_68, &var_30)
    var_8_1.b = 0
    sub_403320(&var_30)
    sub_6ca100(&var_68, eax_20)
    sub_403360(&var_30, 0x75cce6)
    var_8_1.b = 3
    sub_6ca1a0(&var_68, &var_30)
    var_8_1.b = 0
    sub_403320(&var_30)
label_40afb4:
    
    if (sub_40c050(arg1, &var_68, wParam_1, esi_1) != 0)
        struct win32only::CFileMapping::VTable* var_58 = &win32only::CFileMapping::`vftable'
        int32_t var_34_1 = 0xf
        int32_t var_38_1 = 0
        char var_48_1 = 0
        int32_t var_54_1 = 0
        int32_t var_50_1 = 0
        int32_t var_4c_1 = 0
        var_8_1.b = 4
        
        if (sub_40cb00(&var_58, &var_68) != 0)
            SendMessageA(*(arg1 + 8), 0x90c, wParam, 0)
            ebx.b = 1
        else
            ebx.b = 0
        
        sub_6cddb0(&var_58)
        esi = var_64
    else
        esi = var_64
        ebx.b = 0
else
    if (eax_5 == 3)
        int32_t* eax_13 = (*(**(arg1 + 0x1c) + 4))(wParam_1)
        
        if (eax_13 != 0)
            esi_1 = (*(*eax_13 + 0x14))(eax_2) u>> 2
        else
            esi_1 = 0
        
        goto label_40afa7
    
    if (eax_5 == 4)
        esi_1 = (*(**(arg1 + 0x20) + 0x20))((*(**(arg1 + 0x1c) + 0x18))(wParam_1))
    label_40afa7:
        sub_6ca100(&var_68, esi_1)
        goto label_40afb4
    
    ebx.b = 0

if (esi != 0)
    sub_403160(esi, var_5c - esi, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return ebx.b
