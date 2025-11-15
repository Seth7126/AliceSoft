// 函数: sub_4bd6b0
// 地址: 0x4bd6b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729300
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

for (struct common::CRect::VTable*** i = &arg1[8]; i != &i[2]; i = &i[1])
    struct common::CRect::VTable** ecx = *i
    
    if (ecx != 0)
        int32_t var_24_1 = 1
        result = sub_4bc7e0(ecx)

int32_t* ecx_1 = arg1[7]

if (ecx_1 != 0)
    result = (*(*ecx_1 + 4))(eax_2)

*arg1 = &common::CRect::`vftable'
arg1[4] = &common::CSize::`vftable'
arg1[1] = &common::CPoint::`vftable'
fsbase->NtTib.ExceptionList = ExceptionList
return result
