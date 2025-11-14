// 函数: sub_433c10
// 地址: 0x433c10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5838
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_6c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_58 = 0
int32_t var_54 = 0
int32_t var_50 = 0
int32_t var_4 = 0
struct filesystem::CFile::VTable* const var_4c = &filesystem::CFile::`vftable'
int32_t var_48 = 0xffffffff
int32_t var_44 = 0
int32_t var_40 = 0
var_4.b = 1
bool cond:0 = sub_604a80(arg2, &var_58) == 0
var_4.b = 0
int32_t esi = var_58
void* ebx

if (cond:0 == 0)
    struct advengine::CTokenAnalyser::VTable* var_3c
    sub_4388f0(&var_3c, esi, var_54)
    var_4.b = 2
    sub_434990(arg1 + 0xc)
    
    if (sub_434a10(arg1 + 0xc, &var_3c) != 0)
        if (arg1 + 0x10 != arg2)
            sub_401ff0(arg1 + 0x10, arg2, 0, 0xffffffff)
        
        ebx.b = 1
    else
        sub_434990(arg1 + 0xc)
        ebx.b = 0
    
    sub_4389e0(&var_3c)
else
    ebx.b = 0

if (esi != 0)
    j__free(esi)

fsbase->NtTib.ExceptionList = ExceptionList
return ebx.b
