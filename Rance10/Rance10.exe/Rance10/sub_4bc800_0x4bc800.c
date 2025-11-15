// 函数: sub_4bc800
// 地址: 0x4bc800
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7329c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14 = 0

if (*(arg1 + 8) != 0)
    char eax_5 = (*(*arg2 + 0x28))(eax_2)
    
    if (*(arg1 + 0xc) == eax_5)
        struct _EXCEPTION_REGISTRATION_RECORD** result = sub_4bd730(*(arg1 + 8), arg2)
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
else
    struct common::CRect::VTable** eax_3 = sub_6e810c(0x28)
    struct common::CRect::VTable** var_18_1 = eax_3
    int32_t var_8_1 = 0
    int32_t ecx = *(arg1 + 4)
    struct common::CPoint::VTable* const var_30_1 = &common::CPoint::`vftable'
    int32_t var_2c_1 = 0
    int32_t var_28_1 = 0
    struct common::CSize::VTable* const var_24_1 = &common::CSize::`vftable'
    int32_t var_20_1 = ecx
    int32_t var_1c_1 = ecx
    struct common::CRect::VTable* const var_34 = &common::CRect::`vftable'
    var_8_1.b = 1
    int32_t var_14_1 = 1
    struct common::CRect::VTable** eax_4 = sub_4bd620(eax_3, &var_34, nullptr)
    *(arg1 + 8) = eax_4
    int32_t var_8_2 = 0xffffffff
    
    if (sub_4bd730(eax_4, arg2) != 0)
        *(arg1 + 0xc) = (*(*arg2 + 0x28))(eax_2)
        fsbase->NtTib.ExceptionList = ExceptionList
        return 1
    
    struct common::CRect::VTable** edi_1 = *(arg1 + 8)
    
    if (edi_1 != 0)
        sub_4bd6b0(edi_1)
        int32_t var_44_2 = 0x28
        operator new(edi_1)
    
    *(arg1 + 8) = 0

fsbase->NtTib.ExceptionList = ExceptionList
return 0
