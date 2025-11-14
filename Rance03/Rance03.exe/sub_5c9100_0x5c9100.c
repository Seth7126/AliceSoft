// 函数: sub_5c9100
// 地址: 0x5c9100
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_1c
int32_t eax_1 = __security_cookie ^ &var_1c
*(arg1 + 0x234) -= 4
int32_t edx = **(arg1 + 0x234)
*(arg1 + 0x234) -= 4
void* ecx = **(arg1 + 0x234)
int32_t eax_6 = (*(arg1 + 0x178) - *(arg1 + 0x174)) s>> 2
char const* const var_2c
int32_t var_28_5

if (ecx u>= eax_6)
    var_28_5 = 0x6e8984
    var_2c = "A_EMPTY"
else
    eax_6 = *(arg1 + 0x174)
    ecx = *(eax_6 + (ecx << 2))
    
    if (ecx == 0)
        var_28_5 = 0x6e8984
        var_2c = "A_EMPTY"
    else
        eax_6 = *(ecx + 0xc) u>> 2
        
        if (edx u>= eax_6)
            int32_t var_28_4 = 0x6e89a4
            var_2c = "A_EMPTY"
        else
            int32_t eax_8
            
            if (*(ecx + 0xc) != 0)
                eax_8 = *(ecx + 8)
            else
                eax_8 = 0
            
            ecx = *(eax_8 + (edx << 2))
            eax_6 = (*(arg1 + 0x178) - *(arg1 + 0x174)) s>> 2
            int32_t var_28_3
            
            if (ecx u>= eax_6)
                var_28_3 = 0x6e89cc
                var_2c = "A_EMPTY"
            else
                eax_6 = *(arg1 + 0x174)
                ecx = *(eax_6 + (ecx << 2))
                
                if (ecx == 0)
                    var_28_3 = 0x6e89cc
                    var_2c = "A_EMPTY"
                else
                    if (*(ecx + 0x48) == 0)
                        int32_t eax_11 = sub_5ddf10(arg1 + 0x220, 1)
                        sub_69a5bc(eax_1 ^ &var_1c)
                        return eax_11
                    
                    int32_t var_18
                    eax_6, ecx, edx = sub_5d46f0(ecx, &var_18)
                    
                    if (eax_6.b != 0)
                        int32_t eax_12
                        eax_12.b = var_18 == 0
                        int32_t eax_13 = sub_5ddf10(arg1 + 0x220, eax_12)
                        sub_69a5bc(eax_1 ^ &var_1c)
                        return eax_13
                    
                    int32_t var_28_1 = 0x6e89f0
                    var_2c = "A_EMPTY"
int32_t eax_14 = sub_5c2400(eax_6, edx, ecx, arg1, var_2c)
sub_69a5bc(eax_1 ^ &var_1c)
return eax_14
