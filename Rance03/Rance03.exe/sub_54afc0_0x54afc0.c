// 函数: sub_54afc0
// 地址: 0x54afc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b8008
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_24 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct fileimage::CFileImageAnalyser::VTable* const var_18 =
    &fileimage::CFileImageAnalyser::`vftable'
int32_t var_4 = 0

if (sub_54b090(arg1, &var_18) != 0 && &arg2[4] u<= arg3 + arg2)
    void* var_14_1 = &arg2[4]
    *(arg1 + 0xc) = ((zx.d(arg2[3]) << 8 | zx.d(arg2[2])) << 8 | zx.d(arg2[1])) << 8 | zx.d(*arg2)
    
    if (sub_54b170(arg1, &var_18) != 0)
        fsbase->NtTib.ExceptionList = ExceptionList
        return 1

fsbase->NtTib.ExceptionList = ExceptionList
return 0
