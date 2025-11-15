// 函数: sub_463fc0
// 地址: 0x463fc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72c448
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t arg_4
uint32_t eax_3 = arg_4
int32_t edx = *eax_3
char* result = *(eax_3 + 4)

if (edx != result)
    struct fileimage::CFileImageAnalyser::VTable* const var_1c =
        &fileimage::CFileImageAnalyser::`vftable'
    int32_t var_18_1 = edx
    void* var_14_1 = &result[0]
    int32_t var_8_1 = 0
    
    if (sub_464060(arg1, &var_1c, &arg_4).b != 0 && sub_4642c0(arg1, &var_1c, arg_4, arg2).b != 0)
        result.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return result

result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
