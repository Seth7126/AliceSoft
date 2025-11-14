// 函数: sub_468d00
// 地址: 0x468d00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_20
void* var_4 = __security_cookie ^ &var_20
int32_t* edx = *(arg1 + 4)
int32_t i = *(arg1 + 8)

if (edx u< i)
    char* eax_2
    
    do
        eax_2 = *(arg1 + 4)
        
        if (*eax_2 == 0)
            int32_t var_8 = 0xf
            int32_t var_c = 0
            char var_1c = 0
            
            if (edx != eax_2)
                sub_402110(&var_1c, edx, eax_2 - edx)
            
            if (arg2 != &var_1c)
                if (arg2[5] u>= 0x10)
                    j__free(*arg2)
                
                arg2[5] = 0xf
                arg2[4] = 0
                *arg2 = 0
                sub_4030b0(arg2, &var_1c)
            
            if (var_8 u>= 0x10)
                j__free(var_1c.d)
            
            *(arg1 + 4) += 1
            char* eax_4
            eax_4.b = 1
            sub_69a5bc(var_4 ^ &var_20)
            return eax_4
        
        *(arg1 + 4) = &eax_2[1]
    while (&eax_2[1] u< i)

void* eax_1
eax_1.b = 0
sub_69a5bc(var_4 ^ &var_20)
return eax_1
