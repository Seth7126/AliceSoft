// 函数: sub_41b8e0
// 地址: 0x41b8e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7289c0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = arg2

if (result == 0x600)
    *(arg1 + 0xc) = arg3
else if (result == 0x601)
    *(arg1 + 0xc) = 0
else if (result == 0x602)
    struct fileimage::CFileImageMaker::VTable* var_4c = &fileimage::CFileImageMaker::`vftable'
    int32_t var_48_1 = 0
    int32_t var_44_1 = 0
    int32_t var_40_1 = 0
    int32_t var_8_1 = 0
    void* ecx = *(arg1 + 0x10)
    
    if (ecx != 0)
        sub_41b4a0(ecx, &var_4c)
    
    struct win32only::CFileMapping::VTable* var_3c = &win32only::CFileMapping::`vftable'
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c_1 = 0
    int32_t var_38_1 = 0
    int32_t var_34_1 = 0
    int32_t var_30_1 = 0
    var_8_1.b = 1
    
    if (sub_41ba10(&var_3c, &var_4c) != 0)
        SendMessageA(*(arg1 + 0xc), 0x602, 0, 0)
    
    sub_6cddb0(&var_3c)
    result = sub_6ca060(&var_4c)
else if (result == 0x603)
    int32_t* ecx_3 = *(arg1 + 0x10)
    
    if (ecx_3 != 0)
        result = (*(*ecx_3 + 0x10))(arg3)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
