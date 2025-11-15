// 函数: sub_67add0
// 地址: 0x67add0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx = arg2[3]
int32_t ebx = 0
int32_t esi = arg2[1]
int32_t ebp = 0
int32_t edi = arg2[2]
int32_t eax_3 = arg2[4]
int32_t eax_4 = arg2[5]
int32_t eax_5 = *arg2
int32_t var_2c = 0
int32_t var_28 = 0
int32_t var_8 = edi
int32_t var_18 = ecx
int32_t var_10 = eax_5

if (eax_5 s<= esi)
    int32_t edx = esi
    void* esi_1 = (eax_5 << 3) + 4
    void* var_30_1 = esi_1
    
    do
        if (edi s<= ecx)
            void* edx_1 = (edi << 2) + 2
            int32_t esi_2 = eax_3
            void* var_34_1 = edx_1
            int16_t* eax_9 =
                *(*(*(arg3 + 0x1c0) + 0x18) + (eax_5 << 2)) + (((edi << 5) + esi_2) << 1)
            int16_t* var_20_1 = eax_9
            int32_t i_1 = var_18 - edi + 1
            int32_t i_2 = i_1
            int32_t i
            
            do
                int16_t* edi_1 = eax_9
                
                if (esi_2 s<= eax_4)
                    void* edx_2 = (esi_2 << 3) + 4
                    int32_t j_1 = eax_4 - eax_3 + 1
                    int32_t j
                    
                    do
                        uint32_t eax_10 = zx.d(*edi_1)
                        edi_1 = &edi_1[1]
                        
                        if (eax_10 != 0)
                            ebx += eax_10
                            ebp += var_30_1 * eax_10
                            var_2c += var_34_1 * eax_10
                            var_28 += edx_2 * eax_10
                        
                        edx_2 += 8
                        j = j_1
                        j_1 -= 1
                    while (j != 1)
                    edx_1 = var_34_1
                    eax_9 = var_20_1
                    i_1 = i_2
                    esi_2 = eax_3
                
                eax_9 = &eax_9[0x20]
                edx_1 += 4
                i = i_1
                i_1 -= 1
                var_20_1 = eax_9
                var_34_1 = edx_1
                i_2 = i_1
            while (i != 1)
            esi_1 = var_30_1
            eax_5 = var_10
            edi = var_8
            ecx = var_18
            edx = esi
        
        eax_5 += 1
        esi_1 += 8
        var_10 = eax_5
        var_30_1 = esi_1
    while (eax_5 s<= edx)

int32_t edi_3 = ebx s>> 1
arg4[**(arg3 + 0x74)] = (divs.dp.d(sx.q(edi_3 + ebp), ebx)).b
arg4[*(*(arg3 + 0x74) + 4)] = (divs.dp.d(sx.q(var_2c + edi_3), ebx)).b
char result = (divs.dp.d(sx.q(var_28 + edi_3), ebx)).b
arg4[*(*(arg3 + 0x74) + 8)] = result
return result
