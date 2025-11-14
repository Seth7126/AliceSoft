// 函数: sub_459f10
// 地址: 0x459f10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b8008
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_24 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t arg_4
uint32_t eax_3 = arg_4
int32_t edx = *eax_3
int32_t* result = *(eax_3 + 4)

if (edx != result)
    struct fileimage::CFileImageAnalyser::VTable* const var_18 =
        &fileimage::CFileImageAnalyser::`vftable'
    int32_t var_14_1 = edx
    void* result_1 = result
    int32_t var_4 = 0
    
    if (sub_459fc0(arg1, &var_18, &arg_4).b != 0 && sub_45a210(arg1, &var_18, arg_4, arg2).b != 0)
        result.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return result

result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
