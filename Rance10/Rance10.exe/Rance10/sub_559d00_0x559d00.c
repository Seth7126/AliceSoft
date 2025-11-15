// 函数: sub_559d00
// 地址: 0x559d00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73b1c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct common::CPoint::VTable* const var_2c = &common::CPoint::`vftable'
int32_t var_28 = 0
int32_t var_24 = 0
int32_t var_8_1 = 0
void** i = *(arg2 + 8)

for (int32_t edi = *(arg2 + 0xc); i != edi; i = &i[1])
    void* ebx_1 = *i
    void* ecx = *(ebx_1 + 8)
    
    if (ecx != 0 && sub_4bdbb0(ecx, arg4, &var_2c) != 0)
        int32_t* eax_4 = *(ebx_1 + 0x10)
        int32_t eax_6 = (*(*arg4 + 0x14))(eax_2)
        int32_t eax_7 = (*(*arg4 + 0x10))()
        struct common::CSize::VTable* const var_38 = &common::CSize::`vftable'
        int32_t var_34 = eax_7
        int32_t var_30 = eax_6
        int32_t var_4c = var_28
        struct common::CRect::VTable* const var_54 = &common::CRect::`vftable'
        struct common::CPoint::VTable* const var_50 = &common::CPoint::`vftable'
        int32_t var_48 = var_24
        struct common::CSize::VTable* const var_44 = &common::CSize::`vftable'
        int32_t var_40 = eax_7
        int32_t var_3c = eax_6
        var_8_1.b = 2
        
        if (*arg3 == 0)
            sub_54d770(arg3)
        
        sub_450940(*arg3, eax_4)
        *(arg3 + 0x16) = 1
        arg3[8] = var_28
        arg3[9] = var_24
        int32_t result
        result.b = 1
        arg3[0xb] = eax_7
        arg3[0xc] = eax_6
        fsbase->NtTib.ExceptionList = ExceptionList
        return result

fsbase->NtTib.ExceptionList = ExceptionList
return 0
