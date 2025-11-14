// 函数: sub_5cb4a0
// 地址: 0x5cb4a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* eax = arg1[0x82]
int32_t edi = *eax
arg1[0x82] = &eax[1]
arg1[0x8d] -= 4
int32_t* ecx_1 = arg1[0x40] - arg1[0x3f]
int32_t eax_3
int32_t edx
edx:eax_3 = muls.dp.d(0x2aaaaaab, ecx_1)
int32_t eax_6 = ecx_1 s/ 0x18

if (edi u< eax_6)
    eax_6 = arg1[0x3f]
    ecx_1 = edi * 3
    int32_t* edi_1 = eax_6 + (ecx_1 << 3)
    
    if (edi_1 != 0)
        bool cond:0_1 = edi_1[5] != 2
        int32_t var_8 = *arg1[0x8d]
        
        if (not(cond:0_1))
            int32_t* var_4
            sub_42f3d0(edi_1, &var_4, &var_8)
            eax_6 = var_4
            
            if (eax_6 != *edi_1)
                int32_t eax_8 = arg1[0x83] + *(eax_6 + 0x14)
                arg1[0x82] = eax_8
                return eax_8
            
            int32_t ecx_4 = edi_1[4]
            
            if (ecx_4 != 0xffffffff)
                int32_t eax_10 = arg1[0x83] + ecx_4
                arg1[0x82] = eax_10
                return eax_10
        
        return eax_6

return sub_5c24e0(eax_6, edx s>> 2, ecx_1, arg1, 0x6e9228)
