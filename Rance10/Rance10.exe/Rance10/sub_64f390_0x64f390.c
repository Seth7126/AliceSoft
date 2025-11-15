// 函数: sub_64f390
// 地址: 0x64f390
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = arg1
void* ebx = *(esi + 0x198)

if (*(esi + 0xe0) != 0)
    if (*(ebx + 0x24) == 0)
        int32_t i = 0
        
        if (*(esi + 0x114) s> 0)
            void* ecx_1 = ebx + 0x14
            
            do
                *ecx_1 = 0
                ecx_1 += 4
                i += 1
            while (i s< *(esi + 0x114))
        
        *(ebx + 0x24) = *(esi + 0xe0)
    
    *(ebx + 0x24) -= 1

int32_t i_1 = 0
void* result

if (*(esi + 0x130) s> 0)
    result = esi + 0x134
    arg1 = result
    
    do
        int32_t eax = *result
        void* edi_1 = ebx + (eax << 2)
        void* ecx_2 = *(esi + (eax << 2) + 0x118)
        int32_t eax_2 = *(ecx_2 + 0x14)
        sub_64f270(eax_2, *(arg2 + (i_1 << 2)), esi, *(edi_1 + 0x14), *(ebx + (eax_2 << 2) + 0x4c), 
            *(ebx + (*(ecx_2 + 0x18) << 2) + 0x5c))
        int16_t* eax_4 = *(arg2 + (i_1 << 2))
        i_1 += 1
        *(edi_1 + 0x14) = sx.d(*eax_4)
        result = arg1 + 4
        arg1 = result
    while (i_1 s< *(esi + 0x130))

result.b = 1
return result
