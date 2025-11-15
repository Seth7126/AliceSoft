// 函数: sub_6f6f08
// 地址: 0x6f6f08
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729300
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = *arg1

if (ebx != 0)
    int32_t esi_1 = *(*ebx + 0x18)
    j_sub_4033e0()
    esi_1(eax_2)

int32_t* ebx_1 = arg1[1]

if (ebx_1 != 0)
    int32_t esi_2 = *(*ebx_1 + 0x18)
    j_sub_4033e0()
    esi_2(eax_2)

Concurrency::details::platform::__TlsFree(arg1[2])
int32_t result = sub_6ea7d7(&arg1[3])
fsbase->NtTib.ExceptionList = ExceptionList
return result
