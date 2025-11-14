// 函数: sub_5ccdf0
// 地址: 0x5ccdf0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t** ebx_1 = *(arg1 + 0x208) - *(arg1 + 0x20c)
int32_t** var_8 = ebx_1
int32_t** var_4
sub_42f3d0(arg1 + 0x1268, &var_4, &var_8)

if (var_4 != *(arg1 + 0x1268))
    var_4 = ebx_1
    sub_42f3d0(arg1 + 0x1270, &var_8, &var_4)
    int32_t** esi_1 = var_8
    
    if (esi_1 != *(arg1 + 0x1270))
        int32_t i = 0
        int32_t eax_1
        int32_t edx
        edx:eax_1 = muls.dp.d(0x2aaaaaab, esi_1[6] - esi_1[5])
        int32_t edx_1 = edx s>> 2
        
        if ((edx_1 u>> 0x1f) + edx_1 s> 0)
            int32_t edi_1 = 0
            int32_t edx_4
            
            do
                if (sub_40c250(esi_1[5] + edi_1, arg2) != 0)
                    return 1
                
                i += 1
                int32_t eax_6
                int32_t edx_3
                edx_3:eax_6 = muls.dp.d(0x2aaaaaab, esi_1[6] - esi_1[5])
                edi_1 += 0x18
                edx_4 = edx_3 s>> 2
            while (i s< (edx_4 u>> 0x1f) + edx_4)
        
        int32_t eax_4
        eax_4.b = 0
        return eax_4

int32_t** eax
eax.b = 0
return eax
