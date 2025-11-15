// 函数: sub_47fb60
// 地址: 0x47fb60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72e79f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void** result_1
void** arg_4
sub_42eb70(arg1 + 0xc, &result_1, &arg_4)
void** result_2 = result_1

if (result_2 != *(arg1 + 0xc))
    fsbase->NtTib.ExceptionList = ExceptionList
    return result_2[5]

void** result_3 = sub_6e810c(0x20)
result_1 = result_3
int32_t var_8_1 = 0
struct kiwi::CMultiChannelSet::VTable** result = sub_480d40(result_3, *(arg1 + 4))
int32_t var_8_2 = 0xffffffff
char edx = *(arg1 + 0x20)
result[2] = *(arg1 + 0x1c)
void** var_1c = arg_4
result[3].b = edx
result_1 = result
int32_t* eax_4
void* ecx_7
eax_4, ecx_7 = sub_435660(&var_1c)
int32_t* var_34_3 = eax_4
void* var_38_1 = &eax_4[4]
sub_42f0e0(arg1 + 0xc, &var_1c, ecx_7)
fsbase->NtTib.ExceptionList = ExceptionList
return result
