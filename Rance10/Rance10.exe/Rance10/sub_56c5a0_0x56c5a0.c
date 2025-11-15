// 函数: sub_56c5a0
// 地址: 0x56c5a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?_RunAndWait@_StructuredTaskCollection@details@Concurrency@@QAG?AW4_TaskCollectionStatus@23@PAV_UnrealizedChore@23@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
SRWLOCK var_1c = arg1

if (*(arg1 + 0x1c) == *(arg1 + 0x20))
label_56c60d:
    int32_t* esi_1 = *(arg1 + 0x1c)
    int32_t edi_1 = *(arg1 + 0x20)
    
    if (esi_1 != edi_1)
        SRWLOCK* eax_9 = &esi_1[1]
        SRWLOCK* var_18_1 = eax_9
        
        do
            __Smtx_lock_shared(eax_9)
            int32_t ebx_2 = *esi_1
            __Smtx_unlock_shared(var_18_1)
            
            if (ebx_2 == arg2)
                goto label_56c5ee
            
            esi_1 = &esi_1[9]
            eax_9 = &var_18_1[9]
            var_18_1 = eax_9
        while (esi_1 != edi_1)
    
    struct common::CRect::VTable* const var_48 = &common::CRect::`vftable'
    struct common::CPoint::VTable* const var_44_1 = &common::CPoint::`vftable'
    int32_t var_40_1 = 0
    int32_t var_3c_1 = 0
    struct common::CSize::VTable* const var_38_1 = &common::CSize::`vftable'
    int32_t var_34_1 = 0
    int32_t var_30_1 = 0
    int32_t var_8_1 = 0
    int32_t eax_12 = (*(*arg2 + 0x14))(eax_2)
    int32_t eax_13 = (*(*arg2 + 0x10))()
    struct common::CSize::VTable* const var_2c = &common::CSize::`vftable'
    int32_t var_28_1 = eax_13
    int32_t var_24_1 = eax_12
    var_8_1.b = 1
    SRWLOCK edi_2 = var_1c
    var_8_1.b = 0
    
    if (sub_56c900(edi_2, &var_2c, &var_48) != 0)
        if (*(edi_2 + 0x1c) == *(edi_2 + 0x20))
            *(edi_2 + 0xc) = (*(*arg2 + 0x24))()
            *(edi_2 + 0xd) = (*(*arg2 + 0x28))()
        
        int32_t* var_20
        int32_t* eax_21 = sub_44cfc0(&var_20, arg2)
        int32_t* var_6c = nullptr
        SRWLOCK var_68
        __builtin_memset(&var_68, 0, 4)
        sub_4323a0(&var_6c, eax_21)
        __seterrormode(&var_1c)
        var_8_1.b = 2
        int32_t* ecx_11 = var_20
        
        if (ecx_11 != 0)
            var_20 = nullptr
            (*(*ecx_11 + 4))()
        
        ___crtSetUnhandledExceptionFilter(&var_1c)
        int32_t var_5c = var_40_1
        int32_t var_58 = var_3c_1
        int32_t var_50 = var_34_1
        struct common::CRect::VTable* const var_64 = &common::CRect::`vftable'
        struct common::CPoint::VTable* const var_60 = &common::CPoint::`vftable'
        struct common::CSize::VTable* const var_54 = &common::CSize::`vftable'
        int32_t var_4c = var_30_1
        var_8_1.b = 3
        sub_56cec0(edi_2 + 0x1c, &var_6c)
        struct common::CRect::VTable* const var_64_1 = &common::CRect::`vftable'
        struct common::CSize::VTable* const var_54_1 = &common::CSize::`vftable'
        struct common::CPoint::VTable* const var_60_1 = &common::CPoint::`vftable'
        __seterrormode(&var_68)
        var_8_1.b = 4
        int32_t* ecx_13 = var_6c
        
        if (ecx_13 != 0)
            var_6c = nullptr
            (*(*ecx_13 + 4))()
        
        ___crtSetUnhandledExceptionFilter(&var_68)
        int32_t result
        result.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
else
    bool eax_6 = (*(*arg2 + 0x24))(eax_2)
    
    if (*(arg1 + 0xc) == eax_6)
        eax_6 = (*(*arg2 + 0x28))()
        
        if (*(arg1 + 0xd) == eax_6)
            goto label_56c60d

label_56c5ee:
fsbase->NtTib.ExceptionList = ExceptionList
return false
