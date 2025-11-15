// 函数: sub_6b10f0
// 地址: 0x6b10f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax_1 = arg1
char* ecx = arg2
uint32_t edx_2 = (zx.d(*(eax_1 + 0xb)) + 7) u>> 3
void* ebp = &ecx[edx_2]
int32_t esi = 0
int32_t edi_1 = ebp - ecx

if (ecx u> ebp)
    edi_1 = 0

char* ebx = arg3

if (edi_1 != 0)
    do
        esi += 1
        *ecx += *ebx
        ebx = &ebx[1]
        ecx = &ecx[1]
    while (esi u< edi_1)
    
    eax_1 = arg1

void* result = *(eax_1 + 4) - edx_2
void* ebp_1 = ebp + result

if (ecx u< ebp_1)
    result = ecx - edx_2
    void* ebp_3 = ebx - edx_2
    arg1 = result
    
    do
        uint32_t esi_1 = zx.d(*result)
        ebx = &ebx[1]
        uint32_t edx_3 = zx.d(*ebp_3)
        uint32_t eax_4 = zx.d(ebx[0xffffffff])
        uint32_t edi_3 = eax_4 - edx_3
        uint32_t esi_2 = esi_1 - edx_3
        int32_t eax_6
        int32_t edx_4
        edx_4:eax_6 = sx.q(edi_3)
        char* ebp_7 = (eax_6 ^ edx_4) - edx_4
        int32_t eax_8
        int32_t edx_5
        edx_5:eax_8 = sx.q(esi_2)
        char* eax_10 = (eax_8 ^ edx_5) - edx_5
        int32_t eax_12
        int32_t edx_6
        edx_6:eax_12 = sx.q(esi_2 + edi_3)
        char eax_14
        
        if (eax_10 s>= ebp_7)
            eax_14 = esi_1.b
        else
            ebp_7 = eax_10
            eax_14 = eax_4.b
        
        ebp_3 += 1
        
        if ((eax_12 ^ edx_6) - edx_6 s< ebp_7)
            eax_14 = edx_3.b
        
        *ecx += eax_14
        ecx = &ecx[1]
        result = arg1 + 1
        arg1 = result
    while (ecx u< ebp_1)

return result
