// 函数: sub_58f250
// 地址: 0x58f250
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73dc48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct fileimage::CFileImageAnalyser::VTable* const var_1c =
    &fileimage::CFileImageAnalyser::`vftable'
int32_t var_8_1 = 0

if (sub_58f310(arg1, &var_1c) != 0 && &arg2[4] u<= arg3 + arg2)
    void* var_18_1 = &arg2[4]
    arg1[2] = ((zx.d(arg2[3]) << 8 | zx.d(arg2[2])) << 8 | zx.d(arg2[1])) << 8 | zx.d(*arg2)
    
    if (sub_58f3d0(arg1, &var_1c) != 0)
        fsbase->NtTib.ExceptionList = ExceptionList
        return 1

fsbase->NtTib.ExceptionList = ExceptionList
return 0
