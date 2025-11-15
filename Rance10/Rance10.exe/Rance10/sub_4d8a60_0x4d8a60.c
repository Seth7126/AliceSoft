// 函数: sub_4d8a60
// 地址: 0x4d8a60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7345e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_58 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3
int32_t edx_2
edx_2:eax_3 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x20) - *(arg1 + 0x1c))
int32_t result_2 = 0
int32_t edx_3 = edx_2 s>> 2
int32_t result = (edx_3 u>> 0x1f) + edx_3
int32_t result_1 = result

if (result s> 0)
    int32_t* esi_1 = arg2
    int32_t edx_4 = 0
    int32_t var_1c_1 = 0
    
    do
        int32_t* ecx_1 = *(arg1 + 0x1c) + edx_4
        
        if (esi_1[5] u< 0x10)
            arg2 = esi_1
        else
            arg2 = *esi_1
        
        int32_t* eax_7 = &ecx_1[4]
        
        if (ecx_1[5] u>= 0x10)
            ecx_1 = *ecx_1
        
        int32_t edx_5 = *eax_7
        int32_t ebx_1 = esi_1[4]
        int32_t eax_8 = ebx_1
        
        if (edx_5 u< ebx_1)
            eax_8 = edx_5
        
        if (sub_406ac0(eax_8, arg2, ecx_1, eax_8) == 0)
            int32_t eax_10 = *eax_7
            bool c_1 = ebx_1 u< eax_10
            int32_t eax_11
            
            if (ebx_1 == eax_10 || c_1)
                eax_11 = neg.d(sbb.d(eax_10, eax_10, c_1))
            else
                eax_11 = 0xffffffff
            
            if (eax_11 == 0)
                int32_t* eax_13 = sub_4dd5b0(*(arg1 + 0xc), esi_1)
                arg2 = eax_13
                
                if (eax_13 == 0)
                    arg2 = sub_4ce060(*(arg1 + 8), esi_1)
                
                int32_t eax_16 = result_2 << 2
                void** ebx_2 = *(eax_16 + *(arg1 + 0x10))
                
                if (*ebx_2 == 0)
                    sub_54d770(ebx_2)
                
                sub_450940(*ebx_2, arg2)
                *(ebx_2 + 0x16) = 0
                struct common::CRect::VTable* const var_48 = &common::CRect::`vftable'
                struct common::CPoint::VTable* const var_44_1 = &common::CPoint::`vftable'
                int32_t var_40_1 = 0
                int32_t var_3c_1 = 0
                struct common::CSize::VTable* const var_38_1 = &common::CSize::`vftable'
                int32_t var_34_1 = 0
                int32_t var_30_1 = 0
                int32_t var_8_1 = 0
                
                if (sub_4dd530(*(arg1 + 0xc), esi_1) == 0
                        && sub_4ce540(*(arg1 + 8), esi_1, &var_48) != 0)
                    void* var_2c
                    sub_4d9510(arg1 + 0x28, &var_2c, *(arg1 + 0x10) + eax_16)
                    void* ecx_11 = var_2c
                    *(ecx_11 + 0x1c) = var_40_1
                    *(ecx_11 + 0x20) = var_3c_1
                    *(ecx_11 + 0x28) = var_34_1
                    *(ecx_11 + 0x2c) = var_30_1
                
                int32_t var_8_2 = 0xffffffff
        
        result = result_2 + 1
        edx_4 = var_1c_1 + 0x18
        result_2 = result
        var_1c_1 = edx_4
    while (result s< result_1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
