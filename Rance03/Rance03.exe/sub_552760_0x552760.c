// 函数: sub_552760
// 地址: 0x552760
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result = arg2
int32_t result_1 = result

if (arg1 != result)
    int32_t* esi_1 = &arg1[5]
    
    if (esi_1 != result)
        do
            int32_t edi_1 = *esi_1
            int32_t* edx = esi_1
            int32_t xmm0_1 = esi_1[3]
            int32_t result_2 = esi_1[4]
            int32_t ebp_1 = esi_1[1]
            
            if (edi_1 s>= *arg1)
                int32_t eax_1 = esi_1[-5]
                int32_t* ecx_1 = &esi_1[-5]
                
                while (edi_1 s< eax_1)
                    *edx = eax_1
                    edx[1] = ecx_1[1]
                    edx[3] = ecx_1[3]
                    edx[4] = ecx_1[4]
                    edx = ecx_1
                    eax_1 = ecx_1[-5]
                    ecx_1 -= 0x14
                
                result = result_2
                *edx = edi_1
                edx[1] = ebp_1
                edx[3] = xmm0_1
                edx[4] = result
            else
                int32_t result_3 = result_1
                sub_553080(&esi_1[5], edx, arg1, &esi_1[5])
                result = result_2
                *arg1 = edi_1
                arg1[1] = ebp_1
                arg1[3] = xmm0_1
                arg1[4] = result
            
            esi_1 = &esi_1[5]
        while (esi_1 != result_1)

return result
