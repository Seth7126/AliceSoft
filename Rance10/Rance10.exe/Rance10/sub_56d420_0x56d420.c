// 函数: sub_56d420
// 地址: 0x56d420
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729896
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1 != arg2)
    void* esi_1 = arg1 + 0xc
    
    do
        *(esi_1 - 4) = &common::CRect::`vftable'
        *(esi_1 + 0xc) = &common::CSize::`vftable'
        *esi_1 = &common::CPoint::`vftable'
        __seterrormode(esi_1 - 8)
        int32_t var_8_1 = 0
        int32_t* ecx = *(esi_1 - 0xc)
        
        if (ecx != 0)
            *(esi_1 - 0xc) = 0
            (*(*ecx + 4))(eax_2)
        
        int32_t var_8_2 = 0xffffffff
        ___crtSetUnhandledExceptionFilter(esi_1 - 8)
        esi_1 += 0x24
        result = esi_1 - 0xc
    while (result != arg2)

fsbase->NtTib.ExceptionList = ExceptionList
return result
