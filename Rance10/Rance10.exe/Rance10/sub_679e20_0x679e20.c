// 函数: sub_679e20
// 地址: 0x679e20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebx = *(arg1 + 0x1c0)
void* var_4 = ebx
int32_t esi

if (*(arg1 + 0x4c) != 1)
    esi = 0
    *(ebx + 0x1c) = 0
else
    esi = 0x1fe
    *(ebx + 0x1c) = 1

int32_t var_14 = esi
int32_t i = 0
*(ebx + 0x18) = (*(*(arg1 + 4) + 8))(arg1, 1, esi + 0x100, *(arg1 + 0x64))
int32_t result = *(ebx + 0x14)
int32_t i_1 = 0

if (*(arg1 + 0x64) s> 0)
    do
        int32_t edi_1 = *(ebx + (i << 2) + 0x20)
        int32_t result_1 = divs.dp.d(sx.q(result), edi_1)
        int32_t var_18_1 = edi_1
        
        if (esi != 0)
            int32_t eax_5 = *(ebx + 0x18)
            *(eax_5 + (i << 2)) += 0xff
        
        int32_t ebx_1 = 0
        char* ebp_1 = *(*(ebx + 0x18) + (i << 2))
        char* j = nullptr
        int32_t edx_4 = divs.dp.d(sx.q(edi_1 + 0xfe), (edi_1 << 1) + 0xfffffffe)
        
        do
            if (j s> edx_4)
                int32_t ecx_4 = var_18_1 + 0xfe + ebx_1 * 0x1fe
                
                do
                    ecx_4 += 0x1fe
                    ebx_1 += 1
                    edx_4 = divs.dp.d(sx.q(ecx_4), (edi_1 << 1) + 0xfffffffe)
                while (j s> edx_4)
                
                edi_1 = var_18_1
            
            *(j + ebp_1) = result_1.b * ebx_1.b
            j = &j[1]
        while (j s<= 0xff)
        
        esi = var_14
        
        if (esi != 0)
            int32_t j_1 = 1
            void* edx_6 = &ebp_1[0xffffffff]
            
            do
                edx_6 -= 1
                *(edx_6 + 1) = *ebp_1
                ebp_1[j_1 + 0xff] = ebp_1[0xff]
                j_1 += 1
            while (j_1 s<= 0xff)
        
        ebx = var_4
        i = i_1 + 1
        i_1 = i
        result = result_1
    while (i s< *(arg1 + 0x64))

return result
