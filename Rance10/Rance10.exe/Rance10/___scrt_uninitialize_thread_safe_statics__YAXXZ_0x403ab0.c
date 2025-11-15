// 函数: ?__scrt_uninitialize_thread_safe_statics@@YAXXZ
// 地址: 0x403ab0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726dc0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &common::CEXReader::`vftable'
int32_t* ecx = arg1[1]

if (ecx != 0)
    result = (*(*ecx + 4))(eax_2)

fsbase->NtTib.ExceptionList = ExceptionList
return result
