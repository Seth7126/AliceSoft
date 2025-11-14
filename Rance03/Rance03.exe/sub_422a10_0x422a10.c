// 函数: sub_422a10
// 地址: 0x422a10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_2c
int32_t eax_1 = __security_cookie ^ &var_2c
COLORREF esi = arg1

if (*(esi + 0x114) != *(esi + 0x118))
    int32_t arg_c
    
    if (arg3 s>= 2)
        int32_t edx_1 = *(*(esi + 0x118) - 0x24)
        
        switch ((*(**(*(esi + 0xe0) + 8) + 0x14))(edx_1) - 1)
            case 0
                int32_t var_3c_6 = edx_1
                int32_t eax_12 = sub_422bb0(esi, arg2, arg3, arg_c, arg4)
                sub_69a5bc(eax_1 ^ &var_2c)
                return eax_12
            case 2
                int32_t var_3c_7 = edx_1
                int32_t eax_13 = sub_4230a0(esi, arg2, arg3, arg_c, arg4)
                sub_69a5bc(eax_1 ^ &var_2c)
                return eax_13
            case 3
                int32_t var_3c_8 = edx_1
                int32_t eax_14 = sub_422e20(esi, arg2, arg3, arg_c, arg4)
                sub_69a5bc(eax_1 ^ &var_2c)
                return eax_14
            case 4
                int32_t var_3c_9 = edx_1
                int32_t eax_15 = sub_423200(esi, arg2, arg3, arg_c, arg4)
                sub_69a5bc(eax_1 ^ &var_2c)
                return eax_15
    else
        if (arg3 == 0)
            int32_t var_24
            int32_t eax_4 = sub_430d20(esi, arg2, &arg_c, arg4, sub_424270(arg1, &var_24), arg3)
            int32_t var_10
            
            if (var_10 u>= 0x10)
                j__free(var_24)
            
            sub_69a5bc(eax_1 ^ &var_2c)
            return eax_4
        
        if (arg3 == 1)
            int32_t eax_6 = sub_431240(arg1, arg2, arg4)
            sub_69a5bc(eax_1 ^ &var_2c)
            return eax_6

sub_69a5bc(eax_1 ^ &var_2c)
return 0
