// 函数: sub_58bbe0
// 地址: 0x58bbe0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73da8c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi_1 = &arg2[0xa]
int32_t* var_40 = arg1 + 0x18
int32_t* var_18 = edi_1
void* var_44 = arg1
int32_t esi_2 = (edi_1[1] - *edi_1) s>> 3
Concurrency::details::Etw::Etw(*(arg1 + 0x18), *(arg1 + 0x1c))
*(arg1 + 0x1c) = *(arg1 + 0x18)
int32_t* result = sub_5872a0(arg1 + 0x18, esi_2)
int32_t ebx_1 = 0

if (esi_2 s> 0)
    do
        int32_t* var_20
        sub_57e3e0(edi_1, &var_20, ebx_1)
        int32_t var_8_1 = 0
        int32_t* edi_2 = var_20
        result.b = edi_2 != 0
        
        if (result.b != 0)
            int32_t ecx_3 = edi_2[0xc]
            int32_t eax_4 = 0
            
            if (ecx_3 + edi_2[0xb] s>= 0)
                eax_4 = ecx_3 + edi_2[0xb]
            
            void* esi_3
            int32_t edi_3
            
            if (eax_4 s<= 0)
                esi_3 = &edi_2[1]
                __Smtx_lock_shared(esi_3)
                edi_3 = *edi_2
            else
                esi_3 = &edi_2[3]
                __Smtx_lock_shared(esi_3)
                edi_3 = edi_2[2]
            
            result = __Smtx_unlock_shared(esi_3)
            
            if (edi_3 != 0)
                int32_t var_40_6 = edi_3
                int32_t var_28
                sub_5dd5b0(arg3, &var_28)
                result.b = var_28 != 0
                int32_t* var_24
                
                if (result.b != 0)
                    result = sub_57f5d0(*(arg1 + 0x18) + (ebx_1 << 3), &var_28)
                    var_8_1.b = 5
                    
                    if (var_24 != 0)
                        bool cond:2_1 = var_24[1] != 1
                        result = var_24[1]
                        var_24[1] -= 1
                        
                        if (not(cond:2_1))
                            (**var_24)(eax_2)
                            bool cond:4_1 = var_24[2] != 1
                            result = var_24[2]
                            var_24[2] -= 1
                            
                            if (not(cond:4_1))
                                result = (*(*var_24 + 4))()
                    
                    int32_t var_8_5 = 6
                else
                    var_8_1.b = 3
                    
                    if (var_24 != 0)
                        int32_t eax_5 = result | 0xffffffff
                        bool cond:3_1 = var_24[1] != neg.d(eax_5)
                        result = var_24[1]
                        var_24[1] += eax_5
                        
                        if (not(cond:3_1))
                            (**var_24)(eax_2)
                            bool cond:5_1 = var_24[2] != 1
                            result = var_24[2]
                            var_24[2] -= 1
                            
                            if (not(cond:5_1))
                                result = (*(*var_24 + 4))()
                    
                    int32_t var_8_4 = 4
            else
                int32_t var_8_3 = 2
        else
            int32_t var_8_2 = 1
        
        int32_t* var_1c
        
        if (var_1c != 0)
            bool cond:0_1 = var_1c[1] != 1
            result = var_1c[1]
            var_1c[1] -= 1
            
            if (not(cond:0_1))
                (**var_1c)(eax_2)
                bool cond:1_1 = var_1c[2] != 1
                result = var_1c[2]
                var_1c[2] -= 1
                
                if (not(cond:1_1))
                    result = (*(*var_1c + 4))()
        
        edi_1 = var_18
        ebx_1 += 1
        int32_t var_8_6 = 0xffffffff
    while (ebx_1 s< esi_2)

fsbase->NtTib.ExceptionList = ExceptionList
return result
