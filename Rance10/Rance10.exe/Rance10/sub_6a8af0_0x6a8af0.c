// 函数: sub_6a8af0
// 地址: 0x6a8af0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edx = arg1
int32_t esi = 0
uint32_t ebp = zx.d(*(edx + 0x150))
int32_t eax_1

if (ebp.w != 0)
    eax_1 = 0

if (ebp.w == 0 || ebp == 0)
label_6a8b28:
    *(edx + 0x7c) &= 0xff7fffff
    *(edx + 0x78) &= 0xffffdfff
    
    if (esi == 0)
        *(edx + 0x7c) &= 0xfffffe7f
else
    while (true)
        arg1.b = (*(edx + 0x1b4))[eax_1]
        
        if (arg1.b != 0xff)
            if (arg1.b != 0)
                break
            
            esi = 1
        
        eax_1 += 1
        
        if (eax_1 s>= ebp)
            goto label_6a8b28

int32_t esi_1 = *(edx + 0x7c)
uint32_t i = esi_1 & 0x1100

if (i == 0x1100)
    char* ecx_1 = zx.d(*(edx + 0x168)) * 3 + *(edx + 0x144)
    *(edx + 0x16a) = zx.w(*ecx_1)
    *(edx + 0x16c) = zx.w(ecx_1[1])
    i = zx.d(ecx_1[2])
    *(edx + 0x16e) = i.w
    
    if ((esi_1 & 0x2080000) == 0x80000)
        i = 0
        
        if (ebp != 0 && ebp u>= 0x20)
            int32_t ecx_2 = *(edx + 0x1b4)
            int32_t xmm2_1[0x4] = data_79ab30
            
            do
                *(ecx_2 + i) = _mm_sub_epi8(xmm2_1, *(ecx_2 + i))
                *(ecx_2 + i + 0x10) = _mm_sub_epi8(xmm2_1, *(ecx_2 + i + 0x10))
                i += 0x20
            while (i s< (ebp & 0xffffffe0))
        
        if (i s< ebp)
            int32_t edx_1 = *(edx + 0x1b4)
            
            do
                *(edx_1 + i) = not.b(*(edx_1 + i))
                i += 1
            while (i s< ebp)

return i
