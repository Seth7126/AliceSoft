// 函数: sub_5691d0
// 地址: 0x5691d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73c2b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg2
int32_t ebx = 0
int32_t* var_ec = esi
int32_t var_d8 = 0
void* var_108 = arg1
void* var_10c = arg1
Concurrency::details::Etw::Etw(*(arg1 + 0x38), *(arg1 + 0x3c))
*(arg1 + 0x3c) = *(arg1 + 0x38)
int32_t result = 0
int32_t result_1 = 0

if (arg3 s<= 0)
label_5695cb:
    result.b = 1
else
    while (true)
        char* var_e8_1
        char var_bc
        char var_44
        int32_t var_30
        char var_2c
        int32_t var_18
        
        if (result s<= 0)
            var_18 = 0xf
            int32_t var_1c_1 = 0
            var_2c = 0
            sub_403490(&var_2c, ".png", 4)
            int32_t var_8_3 = 2
            var_e8_1 = &var_2c
            ebx |= 4
        else
            var_30 = 0xf
            int32_t var_34_1 = 0
            var_44 = 0
            sub_403490(&var_44, "[%d].png", 8)
            int32_t var_8_1 = 0
            int32_t ebx_1 = ebx | 1
            int32_t var_d8_1 = ebx_1
            var_e8_1 = sub_409350(&result_1, &var_44, &var_bc, &result_1)
            int32_t var_8_2 = 1
            ebx = ebx_1 | 2
        
        int32_t var_d8_2 = ebx
        char var_a4
        int32_t* eax_7 = sub_405130(&var_a4, esi)
        int32_t var_8_4 = 3
        char var_8c
        char* eax_8 = sub_404f20(&var_8c, var_ec)
        var_8_4.b = 4
        char var_74[0x10]
        void* eax_9 = sub_4177a0(eax_8, eax_8, &var_74, eax_7)
        var_8_4.b = 5
        void* var_d4
        sub_4177a0(eax_9, eax_9, &var_d4, var_e8_1)
        int32_t var_60
        
        if (var_60 u>= 0x10)
            sub_403160(var_74[0].d, var_60 + 1, 1)
        
        var_60 = 0xf
        int32_t var_64_1 = 0
        var_74[0] = 0
        int32_t var_78
        
        if (var_78 u>= 0x10)
            sub_403160(var_8c.d, var_78 + 1, 1)
        
        var_78 = 0xf
        int32_t var_7c_1 = 0
        var_8c = 0
        int32_t var_90
        
        if (var_90 u>= 0x10)
            sub_403160(var_a4.d, var_90 + 1, 1)
        
        var_90 = 0xf
        int32_t var_94_1 = 0
        var_a4 = 0
        
        if ((ebx.b & 4) != 0)
            ebx &= 0xfffffffb
            int32_t var_d8_3 = ebx
            
            if (var_18 u>= 0x10)
                sub_403160(var_2c.d, var_18 + 1, 1)
            
            var_18 = 0xf
            int32_t var_1c_2 = 0
            var_2c = 0
        
        if ((ebx.b & 2) != 0)
            ebx &= 0xfffffffd
            int32_t var_d8_4 = ebx
            int32_t var_a8
            
            if (var_a8 u>= 0x10)
                sub_403160(var_bc.d, var_a8 + 1, 1)
            
            var_a8 = 0xf
            int32_t var_ac_1 = 0
            var_bc = 0
        
        var_8_4.b = 0xc
        
        if ((ebx.b & 1) != 0)
            ebx &= 0xfffffffe
            int32_t var_d8_5 = ebx
            
            if (var_30 u>= 0x10)
                sub_403160(var_44.d, var_30 + 1, 1)
            
            var_30 = 0xf
            int32_t var_34_2 = 0
            var_44 = 0
        
        int32_t var_48_1 = 0xf
        int32_t var_4c_1 = 0
        char var_5c = 0
        int32_t var_108_4 = sub_403490(&var_5c, 0x75d4b7, nullptr)
        var_8_4.b = 0xd
        int32_t var_e4
        sub_57ea50(*(arg1 + 0x7c), &var_e4, &var_d4, &var_5c)
        var_8_4.b = 0xf
        
        if (var_48_1 u>= 0x10)
            sub_403160(var_5c.d, var_48_1 + 1, 1)
        
        int32_t var_48_2 = 0xf
        int32_t eax_23
        eax_23.b = var_e4 == 0
        int32_t var_4c_2 = 0
        var_5c = 0
        int32_t* var_e0
        int32_t var_c0
        
        if (eax_23.b != 0)
            var_8_4.b = 0x10
            
            if (var_e0 != 0)
                bool cond:1_1 = var_e0[1] != 1
                var_e0[1]
                var_e0[1] -= 1
                
                if (not(cond:1_1))
                    (**var_e0)(eax_2)
                    int32_t ebx_2 = var_e0[2]
                    var_e0[2] -= 1
                    
                    if (ebx_2 == 1)
                        (*(*var_e0 + 4))()
            
            if (var_c0 u>= 0x10)
                sub_403160(var_d4, var_c0 + 1, 1)
            
            result.b = 0
            break
        
        int32_t eax_25 = *(arg1 + 0x3c)
        int32_t* ecx_11 = &var_e4
        
        if (&var_e4 u< eax_25)
            ecx_11 = *(arg1 + 0x38)
        
        int32_t* ecx_13
        
        if (&var_e4 u>= eax_25 || ecx_11 u> &var_e4)
            if (eax_25 == *(arg1 + 0x40))
                int32_t* var_108_6 = ecx_11
                sub_56a2c0(arg1 + 0x38)
            
            ecx_13 = *(arg1 + 0x3c)
            
            if (ecx_13 != 0)
                std::basic_string<uint16_t,struct std::char_traits<uint16_t>,class std::allocator<uint16_t> >::basic_string<uint16_t,struct std::char_traits<uint16_t>,class std::allocator<uint16_t> >(
                    ecx_13, &var_e4)
        else
            if (eax_25 == *(arg1 + 0x40))
                int32_t* var_108_5 = ecx_11
                sub_56a2c0(arg1 + 0x38)
            
            ecx_13 = *(arg1 + 0x3c)
            
            if (ecx_13 != 0)
                std::basic_string<uint16_t,struct std::char_traits<uint16_t>,class std::allocator<uint16_t> >::basic_string<uint16_t,struct std::char_traits<uint16_t>,class std::allocator<uint16_t> >(
                    ecx_13, *(arg1 + 0x38) + ((&var_e4 - ecx_11) s>> 3 << 3))
        *(arg1 + 0x3c) += 8
        var_8_4.b = 0x11
        
        if (var_e0 != 0)
            bool cond:2_1 = var_e0[1] != 1
            var_e0[1]
            var_e0[1] -= 1
            
            if (not(cond:2_1))
                (**var_e0)(eax_2)
                bool cond:3_1 = var_e0[2] != 1
                var_e0[2]
                var_e0[2] -= 1
                
                if (not(cond:3_1))
                    (*(*var_e0 + 4))()
        
        int32_t var_8_5 = 0xffffffff
        
        if (var_c0 u>= 0x10)
            sub_403160(var_d4, var_c0 + 1, 1)
        
        esi = var_ec
        result = result_1 + 1
        result_1 = result
        
        if (result s>= arg3)
            goto label_5695cb

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
