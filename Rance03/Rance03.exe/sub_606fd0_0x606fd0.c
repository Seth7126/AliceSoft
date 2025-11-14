// 函数: sub_606fd0
// 地址: 0x606fd0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_20
int32_t eax_1 = __security_cookie ^ &var_20
int32_t ebp_2 = (arg2 - arg3) s/ 0x18
int32_t eax_4
int32_t edx_3
edx_3:eax_4 = sx.q(ebp_2)
int32_t result = eax_4 - edx_3
int32_t i = result s>> 1

if (i s> 0)
    int32_t* esi_3 = arg3 + ((i + ((i + 1) << 1)) << 3)
    
    do
        esi_3 = &esi_3[-6]
        int32_t var_8_1 = 0xf
        i -= 1
        int32_t var_c_1 = 0
        bool cond:0_1 = esi_3[1] u>= 0x10
        char var_1c = 0
        
        if (cond:0_1)
            var_1c.d = esi_3[-4]
            esi_3[-4] = 0
        else
            void* eax_5 = *esi_3
            
            if (eax_5 != 0xffffffff)
                _memcpy(&var_1c, &esi_3[-4], eax_5 + 1)
        
        int32_t var_c_2 = *esi_3
        int32_t eax_10 = esi_3[1]
        esi_3[1] = 0xf
        *esi_3 = 0
        esi_3[-4].b = 0
        result = sub_607730(&var_1c, i, arg3, ebp_2, &var_1c, arg4)
        
        if (eax_10 u>= 0x10)
            result = j__free(var_1c.d)
    while (i s> 0)

sub_69a5bc(eax_1 ^ &var_20)
return result
