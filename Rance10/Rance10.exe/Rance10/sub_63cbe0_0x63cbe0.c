// 函数: sub_63cbe0
// 地址: 0x63cbe0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_745fb2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_14 = ecx
int32_t __saved_ebp
int32_t var_18 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx_1 = data_7fcbbc

if (ecx_1 != 0)
    (**ecx_1)(1)
    data_7fcbbc = 0

struct systemservice::CApp::VTable** eax_4 = sub_6e810c(0x84)
struct systemservice::CApp::VTable** var_14_1 = eax_4
int32_t var_8_1 = 0
data_7fcbbc = sub_63bec0(eax_4)
struct systemservice::CApp::VTable** result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
