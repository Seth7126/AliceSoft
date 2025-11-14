// 函数: sub_552a30
// 地址: 0x552a30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result = arg2
int32_t result_1 = result

if (arg1 != result)
    int32_t* esi_1 = &arg1[5]
    
    if (esi_1 != result)
        do
            int32_t eax = esi_1[3]
            int32_t* edx = esi_1
            int32_t edi_1 = *esi_1
            int32_t ebp_1 = esi_1[1]
            int32_t result_2 = esi_1[4]
            
            if (edi_1 s>= *arg1)
                int32_t ecx_1 = esi_1[-5]
                void* eax_3 = &esi_1[-5]
                
                while (edi_1 s< ecx_1)
                    *edx = ecx_1
                    edx[1] = *(eax_3 + 4)
                    edx[3] = *(eax_3 + 0xc)
                    edx[4] = *(eax_3 + 0x10)
                    edx = eax_3
                    ecx_1 = *(eax_3 - 0x14)
                    eax_3 -= 0x14
                
                *edx = edi_1
                edx[1] = ebp_1
                edx[3] = eax
                result = result_2
                edx[4] = result
            else
                int32_t result_3 = result_1
                sub_553080(&esi_1[5], edx, arg1, &esi_1[5])
                *arg1 = edi_1
                arg1[1] = ebp_1
                arg1[3] = eax
                result = result_2
                arg1[4] = result
            
            esi_1 = &esi_1[5]
        while (esi_1 != result_1)

return result
