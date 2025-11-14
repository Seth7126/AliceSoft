// 函数: sub_5492d0
// 地址: 0x5492d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6c48ab
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_11c
int32_t eax_2 = __security_cookie ^ &var_11c
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_6
int32_t edx_2
edx_2:eax_6 = muls.dp.d(0x6bca1af3, *(arg1 + 0x2c) - *(arg1 + 0x28))
int32_t edx_3 = edx_2 s>> 5
int32_t* result

if ((edx_3 u>> 0x1f) + edx_3 s<= 0)
    result.b = 1
else
    void* edx_4 = *(arg1 + 4)
    
    if (edx_4 == 0)
        result.b = 1
    else if (*(arg1 + 0xd4) == 0)
    label_54936f:
        void var_100
        sub_535530(&var_100)
        int32_t var_c_1 = 0
        char var_b1
        char eax_9 = var_b1
        
        if (arg2 == 3)
            eax_9 = 1
        
        char var_b1_1 = eax_9
        int32_t* eax_11 = *(arg1 + 0xd4) + 8
        
        if (*(arg1 + 0x22) != 0)
            result = *(arg1 + 0xd8)
        
        int32_t var_114_1
        int32_t var_10c_1
        
        if (*(arg1 + 0x22) == 0 || result == 0)
            var_10c_1 = 0x3f800000
            var_114_1 = 0x3f800000
        else
            var_114_1 = result[2]
            var_10c_1 = result[3]
        
        if (*(arg1 + 0xd0) == 0)
            result.b = 0
        else
            int32_t* ecx_3 = *(arg1 + 0xcc)
            
            if (ecx_3 == 0)
                result.b = 0
            else if ((*(*ecx_3 + 0x2c))(eax_4).b == 0)
                result.b = 0
            else if ((*(**(arg1 + 0xd0) + 0x24))().b == 0)
                result.b = 0
            else if (sub_5497f0(arg1, &var_100, arg2).b == 0)
                result.b = 0
            else
                sub_549930(arg1, &var_100, arg2)
                void* ecx_7 = *(arg1 + 4)
                char var_8c_1 = *(ecx_7 + 0x27)
                char eax_16 = *(ecx_7 + 0x26)
                
                if (arg2 == 4 || arg2 == 5)
                    int32_t var_130_4
                    
                    if (*(ecx_7 + 0x6c) == 1)
                        var_130_4 = 3
                    else
                        var_130_4 = 1
                    
                    (*(*arg4 + 0xbc))(var_130_4)
                    int32_t var_90_1 = *(arg1 + 0xb0)
                else if (eax_16 == 0 || arg2 == 3)
                    (*(*arg4 + 0xbc))(0)
                else
                    (*(*arg4 + 0xc0))(1, 0xc0)
                
                (*(*arg4 + 0xc4))(1)
                int32_t ecx_12
                
                if (*(*(arg1 + 4) + 0x41) == 0 || arg2 == 4 || arg2 == 5)
                    ecx_12.b = 0
                else
                    ecx_12.b = 1
                
                (*(*arg4 + 0xc8))(ecx_12)
                int128_t* eax_24 = *(arg1 + 0xc0)
                char ecx_14 = *(arg1 + 0x58)
                int128_t var_fc_1 = *eax_24
                int128_t var_ec_1 = eax_24[1]
                int128_t var_dc_1 = eax_24[2]
                int128_t var_cc_1 = eax_24[3]
                
                if (ecx_14 != 0)
                    eax_24 = *(arg1 + 0xc8)
                    
                    if (eax_24 != 0)
                        char var_b4_1 = ecx_14
                        int128_t* var_bc_1 = eax_24
                
                if (*(arg1 + 0x21) == 0 || *(arg1 + 0xbc) == 0)
                    eax_24.b = 0
                else
                    eax_24.b = 1
                
                void* ecx_15 = *(arg1 + 4)
                char var_65_1 = eax_24.b
                eax_24.b = *(arg1 + 0x5b)
                int32_t var_64_1 = *(ecx_15 + 0x44)
                int32_t var_60_1 = *(ecx_15 + 0x48)
                char var_5c_1 = eax_24.b
                int32_t var_58_1 = *(arg1 + 0xdc)
                int32_t var_54_1 = *(arg1 + 0xe0)
                int32_t var_50_1 = *eax_11
                int32_t var_4c_1 = eax_11[1]
                int32_t var_48_1 = var_114_1
                int32_t var_44_1 = var_10c_1
                int128_t var_40_1 = *(ecx_15 + 0x54)
                int32_t var_30_1 = *(ecx_15 + 0x64)
                void* eax_30
                
                if (arg2 == 2 || arg2 == 3)
                    eax_30.b = 0
                else
                    eax_30.b = *(arg1 + 0x59)
                
                char var_b3_1 = eax_30.b
                
                if (*(arg1 + 0xbd) == 0 || *(ecx_15 + 0x40) == 0)
                    eax_30.b = 0
                else
                    eax_30.b = 1
                
                char var_b2_1 = eax_30.b
                
                if (*(arg1 + 0xbe) == 0 || *(ecx_15 + 0x41) == 0)
                    eax_30.b = 0
                else
                    eax_30.b = 1
                
                int32_t var_130_6 = *(arg1 + 0xd0)
                char var_2b_1 = eax_30.b
                void* var_134_3 = ecx_15
                
                if (sub_539820(arg1 + 0x24, ecx_15, arg3, &var_100).b == 0)
                    result.b = 0
                else
                    if (eax_16 != 0 && arg2 != 3)
                        (*(*arg4 + 0xc0))(0, 0)
                    
                    result.b = 1
    else if (sub_5491b0(arg1, arg2).b == 0)
        result.b = 1
    else
        result.b = *(edx_4 + 0x69)
        
        if (result.b == 0)
            goto label_54936f
        
        result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_11c)
return result
