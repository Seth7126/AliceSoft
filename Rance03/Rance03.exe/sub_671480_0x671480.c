// 函数: sub_671480
// 地址: 0x671480
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_30
int32_t eax_1 = __security_cookie ^ &var_30
int32_t ebx = 0
int32_t var_24 = 0
(*(*(arg1 + 0x18) + 0x10))()
int32_t eax_4 = (*(*(arg1 + 0x18) + 0x14))()
void* ecx_2 = arg1
int32_t ebp = *(ecx_2 + 0x4c)
int32_t eax_6
int32_t edx
edx:eax_6 = sx.q(*(ecx_2 + 0x58))
int32_t eax_8 = (eax_6 - edx) s>> 1
int32_t eax_11 = (*(ecx_2 + 8) - *(ecx_2 + 4)) s>> 5

if (eax_11 != 0)
    int32_t esi_1 = 0
    int32_t result = 0
    
    while (true)
        void* ecx_4 = *(ecx_2 + 4) + esi_1
        
        if (*(ecx_4 + 0x1c) != 0)
            char var_2d_1
            int32_t var_1c
            
            if (arg4 s>= eax_4)
                var_2d_1 = 0
            else
                ebx |= 1
                int32_t ecx_6 = arg3 + arg2
                
                if (*(sub_456bd0(ecx_4, &var_1c) + 0x10) * eax_8 + ebp u<= ecx_6)
                    var_2d_1 = 0
                else
                    var_2d_1 = 1
                    
                    if (ebp u>= ecx_6)
                        var_2d_1 = 0
            
            int32_t var_8
            
            if ((ebx.b & 1) != 0)
                ebx &= 0xfffffffe
                
                if (var_8 u>= 0x10)
                    j__free(var_1c)
            
            if (var_2d_1 != 0)
                *(arg1 + 0x7c) = result
                sub_69a5bc(eax_1 ^ &var_30)
                return result
            
            ebp += *(sub_456bd0(*(arg1 + 4) + esi_1, &var_1c) + 0x10) * eax_8
            
            if (var_8 u>= 0x10)
                j__free(var_1c)
        
        result += 1
        esi_1 += 0x20
        
        if (result u>= eax_11)
            break
        
        ecx_2 = arg1

sub_69a5bc(eax_1 ^ &var_30)
return 0xffffffff
