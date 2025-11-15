// 函数: sub_4bd7b0
// 地址: 0x4bd7b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_732ac0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14 = 0
int32_t* edi = arg2

if (edi != 0)
    int32_t __saved_ebp
    void* eax_5 = (*(*edi + 0x10))(__security_cookie ^ &__saved_ebp)
    int32_t eax_6 = (*(*edi + 0x14))()
    int32_t edx_2 = *(arg1 + 0x14)
    
    if (edx_2 == eax_5 + 2 && *(arg1 + 0x18) == eax_6 + 2)
        *(arg1 + 0x1c) = edi
        int32_t eax_8 = (**edi)()
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_8
    
    struct common::CRect::VTable* const var_38
    
    if (edx_2 - (eax_5 + 2) s<= *(arg1 + 0x18) - (eax_6 + 2))
        struct common::CRect::VTable** eax_17 = sub_6e810c(0x28)
        arg2 = eax_17
        int32_t var_8_4 = 6
        int32_t var_30_3 = *(arg1 + 8)
        struct common::CPoint::VTable* const var_34_3 = &common::CPoint::`vftable'
        int32_t var_2c_3 = *(arg1 + 0xc)
        struct common::CSize::VTable* const var_28_3 = &common::CSize::`vftable'
        int32_t var_24_3 = *(arg1 + 0x14)
        int32_t var_20_3 = eax_6 + 2
        var_38 = &common::CRect::`vftable'
        var_8_4.b = 7
        int32_t var_14_3 = 4
        *(arg1 + 0x20) = sub_4bd620(eax_17, &var_38, edi)
        int32_t var_8_5 = 0xffffffff
        struct common::CRect::VTable** eax_19 = sub_6e810c(0x28)
        arg2 = eax_19
        int32_t var_8_6 = 9
        struct common::CPoint::VTable* const var_50_1 = &common::CPoint::`vftable'
        struct common::CSize::VTable* const var_44_1 = &common::CSize::`vftable'
        int32_t var_4c_1 = *(arg1 + 8)
        int32_t var_48_1 = eax_6 + 2 + *(arg1 + 0xc)
        int32_t var_40_1 = *(arg1 + 0x14)
        int32_t var_3c_1 = *(arg1 + 0x18) - (eax_6 + 2)
        struct common::CRect::VTable* const var_54 = &common::CRect::`vftable'
        var_8_6.b = 0xa
        int32_t var_14_4 = 8
        eax_3 = sub_4bd620(eax_19, &var_54, nullptr)
    else
        struct common::CRect::VTable** eax_11 = sub_6e810c(0x28)
        struct common::CRect::VTable** var_1c_2 = eax_11
        int32_t var_8_1 = 0
        int32_t var_30_1 = *(arg1 + 8)
        struct common::CPoint::VTable* const var_34_1 = &common::CPoint::`vftable'
        int32_t var_2c_1 = *(arg1 + 0xc)
        struct common::CSize::VTable* const var_28_1 = &common::CSize::`vftable'
        struct common::CRect::VTable** var_24_1 = eax_5 + 2
        int32_t var_20_1 = *(arg1 + 0x18)
        var_38 = &common::CRect::`vftable'
        var_8_1.b = 1
        int32_t var_14_1 = 1
        *(arg1 + 0x20) = sub_4bd620(eax_11, &var_38, edi)
        int32_t var_8_2 = 0xffffffff
        struct common::CRect::VTable** eax_13 = sub_6e810c(0x28)
        struct common::CRect::VTable** var_1c_3 = eax_13
        int32_t var_8_3 = 3
        struct common::CPoint::VTable* const var_34_2 = &common::CPoint::`vftable'
        struct common::CSize::VTable* const var_28_2 = &common::CSize::`vftable'
        int32_t var_2c_2 = *(arg1 + 0xc)
        void* var_30_2 = eax_5 + 2 + *(arg1 + 8)
        void* var_24_2 = *(arg1 + 0x14) - (eax_5 + 2)
        int32_t var_20_2 = *(arg1 + 0x18)
        var_38 = &common::CRect::`vftable'
        var_8_3.b = 4
        int32_t var_14_2 = 2
        eax_3 = sub_4bd620(eax_13, &var_38, nullptr)
    *(arg1 + 0x24) = eax_3

fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
