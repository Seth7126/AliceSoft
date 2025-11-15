// 函数: sub_42e9d0
// 地址: 0x42e9d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729fef
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void** var_14
void arg_4
sub_42eb70(arg1 + 8, &var_14, &arg_4)
void* var_18

if (var_14 == *(arg1 + 8))
    void** eax_4 = sub_6e810c(0x2c)
    var_14 = eax_4
    int32_t var_8_1 = 0
    struct common::SuicideRefCounter<class IAFAFile>::afafactory::CAFAFile::VTable** eax_5 =
        sub_42f200(eax_4)
    int32_t var_8_2 = 0xffffffff
    sub_42ebc0(arg1 + 8, &var_18, &arg_4)
    *(var_18 + 0x14) = eax_5

sub_42ebc0(arg1 + 8, &var_18, &arg_4)
int32_t** result = sub_42f400(*(var_18 + 0x14), arg2)
fsbase->NtTib.ExceptionList = ExceptionList
return result
