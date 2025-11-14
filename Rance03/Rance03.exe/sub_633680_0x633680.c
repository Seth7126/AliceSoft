// 函数: sub_633680
// 地址: 0x633680
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result = arg1
char* ecx = arg2
int32_t i_4 = (zx.d(*(result + 0xb)) + 7) s>> 3
int32_t i_3 = *(result + 4) - i_4
char* esi = arg3

if (i_4 != 0)
    int32_t i_2 = i_4
    int32_t i
    
    do
        result.b = *esi
        esi = &esi[1]
        result.b u>>= 1
        *ecx += result.b
        ecx = &ecx[1]
        i = i_2
        i_2 -= 1
    while (i != 1)

if (i_3 != 0)
    void* edi_2 = ecx - i_4
    int32_t esi_1 = esi - ecx
    int32_t i_1
    
    do
        uint32_t edx_1 = zx.d(*edi_2)
        ecx = &ecx[1]
        edi_2 += 1
        int32_t eax_2
        int32_t edx_2
        edx_2:eax_2 = sx.q(zx.d(ecx[esi_1 - 1]) + edx_1)
        result = (eax_2 - edx_2) s>> 1
        ecx[0xffffffff] += result.b
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

return result
