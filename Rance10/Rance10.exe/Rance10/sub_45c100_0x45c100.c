// 函数: sub_45c100
// 地址: 0x45c100
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int16_t* esi = (*(*arg3 + 8))(0, 0)
int32_t edi_1 = arg4
int32_t i_1 = arg5
int32_t result = (*(*arg3 + 0x1c))() - (edi_1 << 2)
arg4 = result

if (i_1 s> 0)
    int32_t edx = 0
    int32_t i
    
    do
        int32_t ecx_2 = 0
        
        if (edi_1 s> 0)
            do
                *esi = 0xffff
                esi[1].b = 0xff
                char* eax_5 = *arg2 + (ecx_2 << 1)
                ecx_2 += 1
                eax_5.b = eax_5[edx]
                *(esi + 3) = eax_5.b
                esi = &esi[2]
            while (ecx_2 s< edi_1)
            
            result = arg4
        
        edx += arg6
        esi += result
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
