// 函数: ??0locale@std@@QAE@ABV01@@Z
// 地址: 0x6d11da
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729300
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = *(arg2 + 4)
*(arg1 + 4) = edi
int32_t esi = *(*edi + 4)
j_sub_4033e0()
esi(eax_2)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
