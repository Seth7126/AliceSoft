// 函数: sub_5312f0
// 地址: 0x5312f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edx = arg5

if (edx s> arg6)
    return 

int32_t ecx = arg4
int32_t esi_1 = arg3

do
    int32_t ebp_1 = esi_1
    
    if (esi_1 s<= ecx)
        do
            int32_t ecx_2 = *(arg1 + 0x2c) * edx
            int32_t ecx_3 = ecx_2 + ebp_1
            
            if (ecx_2 + ebp_1 s>= 0)
                int32_t eax_1
                int32_t edx_3
                edx_3:eax_1 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x14) - *(arg1 + 0x10))
                int32_t edx_4 = edx_3 s>> 1
                
                if (ecx_3 s< (edx_4 u>> 0x1f) + edx_4)
                    int32_t eax = *(arg1 + 0x10)
                    int32_t edi_1 = ecx_3 * 3
                    int32_t i = *(eax + (edi_1 << 2))
                    
                    if (i != *(eax + (edi_1 << 2) + 4))
                        do
                            uint32_t var_1c_1 = zx.d(data_75dd2d)
                            int32_t i_1 = i
                            int32_t** var_8
                            ecx_3 = sub_4a6ee0(arg2, &var_8, ecx_3)
                            i += 4
                        while (i != *(*(arg1 + 0x10) + (edi_1 << 2) + 4))
                
                edx = arg5
            
            ecx = arg4
            ebp_1 += 1
        while (ebp_1 s<= ecx)
        
        esi_1 = arg3
    
    edx += 1
    arg5 = edx
while (edx s<= arg6)
