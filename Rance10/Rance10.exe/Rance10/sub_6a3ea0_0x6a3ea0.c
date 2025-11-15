// 函数: sub_6a3ea0
// 地址: 0x6a3ea0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_c
int32_t eax_1 = __security_cookie ^ &var_c
var_c = 0x474e5089
int32_t ecx = arg4
int32_t var_8 = 0xa1a0a0d

if (ecx u> 8)
    ecx = 8
label_6a3ed6:
    
    if (arg2 u<= 7)
        int32_t esi = 8 - arg2
        
        if (arg2 + ecx u<= 8)
            esi = ecx
        
        void* edx = &var_c + arg2
        int32_t* ecx_1 = arg3 + arg2
        int32_t i_1 = esi - 4
        
        if (esi u>= 4)
            int32_t i
            
            do
                if (*ecx_1 != *edx)
                    goto label_6a3f16
                
                ecx_1 = &ecx_1[1]
                edx += 4
                i = i_1
                i_1 -= 4
            while (i u>= 4)
        
        if (i_1 != 0xfffffffc)
        label_6a3f16:
            int32_t eax_2
            eax_2.b = *ecx_1
            char temp1_1 = *edx
            
            if (eax_2.b != temp1_1)
                @__security_check_cookie@4(eax_1 ^ &var_c)
                return sbb.d(eax_2, eax_2, eax_2.b u< temp1_1) | 1
            
            if (i_1 != 0xfffffffd)
                eax_2.b = *(ecx_1 + 1)
                char temp3_1 = *(edx + 1)
                
                if (eax_2.b != temp3_1)
                    @__security_check_cookie@4(eax_1 ^ &var_c)
                    return sbb.d(eax_2, eax_2, eax_2.b u< temp3_1) | 1
                
                if (i_1 != 0xfffffffe)
                    eax_2.b = *(ecx_1 + 2)
                    char temp4_1 = *(edx + 2)
                    
                    if (eax_2.b != temp4_1)
                        @__security_check_cookie@4(eax_1 ^ &var_c)
                        return sbb.d(eax_2, eax_2, eax_2.b u< temp4_1) | 1
                    
                    if (i_1 != 0xffffffff)
                        eax_2.b = *(ecx_1 + 3)
                        char temp5_1 = *(edx + 3)
                        
                        if (eax_2.b != temp5_1)
                            @__security_check_cookie@4(eax_1 ^ &var_c)
                            return sbb.d(eax_2, eax_2, eax_2.b u< temp5_1) | 1
        
        @__security_check_cookie@4(eax_1 ^ &var_c)
        return 0
else if (ecx u>= 1)
    goto label_6a3ed6

@__security_check_cookie@4(eax_1 ^ &var_c)
return 0xffffffff
