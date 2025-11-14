// 函数: sub_516250
// 地址: 0x516250
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c24f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_24 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_18 = nullptr
int32_t var_14 = 0
int32_t var_10 = 0
int32_t var_4 = 0
sub_515f90(&var_18, arg1)
int32_t* edi = var_18

if (edi != 0)
    sub_4107c0(edi, var_14)
    j__free(edi)

fsbase->NtTib.ExceptionList = ExceptionList
return (var_14 - edi) s/ 0x18
