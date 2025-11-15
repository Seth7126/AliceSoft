// 函数: sub_553710
// 地址: 0x553710
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73a93f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_5536a0(arg1)
*(arg1 + 0x2d0) = 0
*(arg1 + 0x2d4) = 0
int32_t* var_60 = nullptr
int32_t var_5c = 0
int32_t var_58 = 0
int32_t var_8_1 = 0
sub_553b70(arg1, &var_60)
void* const eax_3 = 0x38
int32_t* edx = var_60
int32_t ebx = var_5c

if (*(arg1 + 0x2ac) != 0)
    eax_3 = 0x158

int32_t* esi = edx

if (edx != ebx)
    do
        int32_t ecx_1 = *esi
        int32_t eax_5 = 0
        
        if (ecx_1 s< 0xc)
            eax_5 = ecx_1
        
        int32_t var_50 = eax_5
        int32_t* eax_6 = sub_6e810c(0x6c)
        int32_t* var_6c_1 = eax_6
        var_8_1.b = 1
        void** ebx_1 = sub_54d5a0(eax_6)
        var_8_1.b = 0
        bool cond:2_1 = *(arg1 + 0x2f5) == 0
        void** var_64_1 = ebx_1
        void** var_54 = ebx_1
        
        if (not(cond:2_1))
            void* ecx_3 = *ebx_1
            ebx_1[0xd].b = 1
            
            if (ecx_3 != 0)
                sub_451b40(ecx_3)
        
        int32_t eax_8 = *(arg1 + 0x28)
        struct common::CPoint::VTable* const var_2c
        int32_t var_18
        
        if (eax_8 == 0)
            void* edx_1 = arg1 + 0x10
            
            if (*(arg1 + 0x24) u>= 0x10)
                edx_1 = *edx_1
            
            int32_t var_34_1 = 0xf
            int32_t var_38_1 = 0
            char var_48 = 0
            void* ecx_4
            
            if (*edx_1 != 0)
                void* ecx_5 = edx_1
                void* var_4c_2 = ecx_5 + 1
                void* eax_9
                
                do
                    eax_9.b = *ecx_5
                    ecx_5 += 1
                while (eax_9.b != 0)
                ecx_4 = ecx_5 - var_4c_2
            else
                ecx_4 = nullptr
            
            sub_403490(&var_48, edx_1, ecx_4)
            var_8_1.b = 2
            var_8_1.b = 3
            sub_54d7d0(ebx_1, sub_409350(&var_50, &var_48, &var_2c, &var_50))
            
            if (var_18 u>= 0x10)
                sub_403160(var_2c, var_18 + 1, 1)
            
            var_8_1.b = 0
            var_18 = 0xf
            int32_t var_1c_1 = 0
            var_2c.b = 0
            
            if (var_34_1 u>= 0x10)
                sub_403160(var_48.d, var_34_1 + 1, 1)
        else if (eax_8 == 1)
            int32_t i = 0
            int32_t edx_3 = 0
            
            if (var_50 s> 0)
                while (i s< (*(arg1 + 0x30) - *(arg1 + 0x2c)) s>> 2)
                    edx_3 += *(*(arg1 + 0x2c) + (i << 2))
                    i += 1
                    
                    if (i s>= var_50)
                        break
                
                ebx_1 = var_64_1
            
            int32_t ecx_9 = 0
            
            if (ecx_1 s< (*(arg1 + 0x30) - *(arg1 + 0x2c)) s>> 2)
                ecx_9 = *(*(arg1 + 0x2c) + (var_50 << 2))
            
            var_2c = &common::CPoint::`vftable'
            int32_t var_28_1 = edx_3
            int32_t var_24_1 = 0
            struct common::CSize::VTable* const var_20_1 = &common::CSize::`vftable'
            int32_t var_1c_2 = ecx_9
            var_18 = 0xffff
            struct common::CRect::VTable* const var_30 = &common::CRect::`vftable'
            var_8_1.b = 4
            sub_54db70(ebx_1, arg1 + 0x10, &var_30, 0)
            var_8_1.b = 0
        else if (eax_8 == 2)
            ebx_1[0xf] = *(arg1 + 0x27c)
            ebx_1[0x10] = *(arg1 + 0x280)
            *(ebx_1 + 0x44) = *(arg1 + 0x284)
            ebx_1[0x15] = *(arg1 + 0x294)
            ebx_1[0x16] = *(arg1 + 0x298)
            *(ebx_1 + 0x5c) = *(arg1 + 0x29c)
            int32_t* eax_32 = sub_641870(&ebx_1[0xe], eax_3 + arg1 + var_50 * 0x18)
            int32_t* var_4c_3 = eax_32
            
            if (eax_32 != 0)
                if (*ebx_1 == 0)
                    sub_54d770(ebx_1)
                    eax_32 = var_4c_3
                
                sub_450940(*ebx_1, eax_32)
                *(ebx_1 + 0x16) = 0
                (*(*var_4c_3 + 4))(eax_2)
        void* ecx_16 = *ebx_1
        int32_t eax_34
        
        if (ecx_16 == 0)
            eax_34 = 0
        else if (*(ebx_1 + 0x16) == 0)
            int32_t* ecx_17 = *(ecx_16 + 0x118)
            
            if (ecx_17 != 0)
                eax_34 = (*(*ecx_17 + 0x10))(eax_2)
            else
                eax_34 = 0
        else
            eax_34 = ebx_1[0xb]
        
        *(arg1 + 0x2d0) += eax_34
        void* ecx_18 = *ebx_1
        int32_t eax_36
        
        if (ecx_18 == 0)
            eax_36 = 0
        else if (*(ebx_1 + 0x16) == 0)
            int32_t* ecx_19 = *(ecx_18 + 0x118)
            
            if (ecx_19 != 0)
                eax_36 = (*(*ecx_19 + 0x14))(eax_2)
            else
                eax_36 = 0
        else
            eax_36 = ebx_1[0xc]
        
        int32_t ecx_20 = *(arg1 + 0x2d4)
        
        if (ecx_20 s< eax_36)
            ecx_20 = eax_36
        
        *(arg1 + 0x2d4) = ecx_20
        void* ecx_21 = arg1 + 0x2c4
        int32_t eax_38 = *(ecx_21 + 4)
        int32_t edx_5
        
        if (&var_54 u< eax_38)
            edx_5 = *ecx_21
            ebx_1 = var_64_1
        
        if (&var_54 u>= eax_38 || edx_5 u> &var_54)
            if (eax_38 == *(ecx_21 + 8))
                void* var_80_7 = ecx_21
                sub_42cd50(ecx_21)
                ecx_21 = arg1 + 0x2c4
            
            void*** eax_41 = *(ecx_21 + 4)
            
            if (eax_41 != 0)
                *eax_41 = ebx_1
        else
            if (eax_38 == *(ecx_21 + 8))
                void* var_80_6 = ecx_21
                sub_42cd50(ecx_21)
                ecx_21 = arg1 + 0x2c4
            
            int32_t* edx_6 = *(ecx_21 + 4)
            
            if (edx_6 != 0)
                *edx_6 = *(*ecx_21 + ((&var_54 - edx_5) s>> 2 << 2))
        
        *(ecx_21 + 4) += 4
        esi = &esi[1]
        ebx = var_5c
    while (esi != ebx)
    
    edx = var_60

int32_t ecx_22 = 0
int32_t ebx_6 = (ebx - edx) s>> 2
*(arg1 + 0x2d0) += (((*(arg1 + 0x2c8) - *(arg1 + 0x2c4)) s>> 2) - 1) * *(arg1 + 0x2b8)

if (ebx_6 != 0)
    do
        int32_t eax_47 = edx[ecx_22]
        
        if (eax_47 != 0 && eax_47 != *(arg1 + 0xc))
            break
        
        int32_t* edx_7 = *(*(arg1 + 0x2c4) + (ecx_22 << 2))
        void* esi_1 = *edx_7
        
        if (esi_1 != 0)
            int32_t eax_48
            eax_48.b = *(arg1 + 0x2c0)
            edx_7[5].b = eax_48.b
            *(esi_1 + 0x18) = eax_48.b
        
        edx = var_60
        ecx_22 += 1
    while (ecx_22 u< ebx_6)

int32_t* result = *(arg1 + 0x2c4)

if (result != *(arg1 + 0x2c8))
    result = result[((*(arg1 + 0x2c8) - result) s>> 2) - 1]
    void* ecx_26 = *result
    
    if (ecx_26 != 0)
        result[5].b = 1
        *(ecx_26 + 0x18) = 1

*(arg1 + 0x2f4) = 1

if (edx != 0)
    result = sub_403160(edx, (var_58 - edx) s>> 2, 4)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
