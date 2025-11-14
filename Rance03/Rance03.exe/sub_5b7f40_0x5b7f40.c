// 函数: sub_5b7f40
// 地址: 0x5b7f40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_1c
int32_t eax_1 = __security_cookie ^ &var_1c

if (arg2 u< (*(arg4 + 0xc) - *(arg4 + 8)) s>> 2)
    void* edi_1 = *(*(arg4 + 8) + (arg2 << 2))
    
    if (edi_1 != 0)
        if (arg3 == 0x7fffffff)
            sub_401f60(&var_1c, 0x6da71d)
            void* ebx
            ebx.b = sub_5d3d20(edi_1, &var_1c) == 0
            int32_t var_8
            
            if (var_8 u>= 0x10)
                j__free(var_1c)
            
            sub_69a5bc(eax_1 ^ &var_1c)
            return ebx.b == 0
        
        if (arg3 s>= 0)
            int32_t eax_6
            int32_t edx_1
            edx_1:eax_6 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x20) - *(arg1 + 0x1c))
            int32_t edx_2 = edx_1 s>> 2
            
            if (arg3 s< (edx_2 u>> 0x1f) + edx_2)
                bool eax_11 = sub_5d3d20(edi_1, *(arg1 + 0x1c) + arg3 * 0x18) != 0
                sub_69a5bc(eax_1 ^ &var_1c)
                return eax_11

int32_t eax_4
eax_4.b = 0
sub_69a5bc(eax_1 ^ &var_1c)
return eax_4
