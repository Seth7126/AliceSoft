// 函数: sub_6fd450
// 地址: 0x6fd450
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726f50
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
HANDLE hObject = arg1[3]
*arg1 = &Concurrency::details::ThreadProxy::`vftable'{for `Concurrency::IThreadProxy'}
CloseHandle(hObject)
Concurrency::details::platform::__CloseThreadHandle(arg1[2])
int32_t esi = *(arg1[1]->vFunc_0 + 0xc)
j_sub_4033e0()
int32_t result = esi(eax_2)
fsbase->NtTib.ExceptionList = ExceptionList
return result
