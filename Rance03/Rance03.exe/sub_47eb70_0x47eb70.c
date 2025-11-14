// 函数: sub_47eb70
// 地址: 0x47eb70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ba328
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 0
int32_t* i = *(arg1 + 0x28)

for (int32_t edi = *(arg1 + 0x2c); i != edi; i = &i[1])
    var_10 = *i
    
    if (arg2 == 0)
        sub_69a52d()
        noreturn
    
    result = (*(*arg2 + 8))(&var_10)

int32_t var_4_1 = 0xffffffff
void arg_4

if (arg2 != 0)
    result = (*(*arg2 + 0x10))(arg2 != &arg_4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
