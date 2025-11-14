// 函数: sub_627050
// 地址: 0x627050
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c
int32_t eax_1 = __security_cookie ^ &var_c
var_c = 0x474e5089
void* ecx = arg4
int32_t var_8 = 0xa1a0a0d

if (ecx u> 8)
    ecx = 8
label_627083:
    
    if (arg2 u<= 7)
        if (arg2 + ecx u> 8)
            ecx = 8 - arg2
        
        void* esi = &var_c + arg2
        int32_t* edx = arg2 + arg3
        void* i_1 = ecx - 4
        
        if (ecx u>= 4)
            void* i
            
            do
                if (*edx != *esi)
                    goto label_6270bb
                
                edx = &edx[1]
                esi += 4
                i = i_1
                i_1 -= 4
            while (i u>= 4)
        
        if (i_1 != 0xfffffffc)
        label_6270bb:
            int32_t eax_2
            eax_2.b = *edx
            char temp1_1 = *esi
            
            if (eax_2.b != temp1_1)
                sub_69a5bc(eax_1 ^ &var_c)
                return sbb.d(eax_2, eax_2, eax_2.b u< temp1_1) | 1
            
            if (i_1 != 0xfffffffd)
                eax_2.b = *(edx + 1)
                char temp3_1 = *(esi + 1)
                
                if (eax_2.b != temp3_1)
                    sub_69a5bc(eax_1 ^ &var_c)
                    return sbb.d(eax_2, eax_2, eax_2.b u< temp3_1) | 1
                
                if (i_1 != 0xfffffffe)
                    eax_2.b = *(edx + 2)
                    char temp4_1 = *(esi + 2)
                    
                    if (eax_2.b != temp4_1)
                        sub_69a5bc(eax_1 ^ &var_c)
                        return sbb.d(eax_2, eax_2, eax_2.b u< temp4_1) | 1
                    
                    if (i_1 != 0xffffffff)
                        eax_2.b = *(edx + 3)
                        char temp5_1 = *(esi + 3)
                        
                        if (eax_2.b != temp5_1)
                            sub_69a5bc(eax_1 ^ &var_c)
                            return sbb.d(eax_2, eax_2, eax_2.b u< temp5_1) | 1
        
        sub_69a5bc(eax_1 ^ &var_c)
        return 0
else if (ecx u>= 1)
    goto label_627083

sub_69a5bc(eax_1 ^ &var_c)
return 0xffffffff
