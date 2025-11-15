// 函数: sub_648fc0
// 地址: 0x648fc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73a6bc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &viewtrans::CDXTransitionType::`vftable'
int32_t var_8_1 = 0
int32_t* ecx = arg1[0xc]
arg1[0xb] = &viewtrans::CVertexBuffer::`vftable'

if (ecx != 0)
    result = (*(*ecx + 4))(eax_2)
    __builtin_memset(&arg1[0xc], 0, 0x14)

int32_t var_8_2 = 1
int32_t* ecx_1 = arg1[6]
arg1[5] = &viewtrans::CVertexBuffer::`vftable'

if (ecx_1 != 0)
    result = (*(*ecx_1 + 4))(eax_2)
    __builtin_memset(&arg1[6], 0, 0x14)

fsbase->NtTib.ExceptionList = ExceptionList
return result
