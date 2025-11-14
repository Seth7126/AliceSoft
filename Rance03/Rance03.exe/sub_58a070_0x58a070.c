// 函数: sub_58a070
// 地址: 0x58a070
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* ecx = *(arg1 + 4)

if (&ecx[4] u> *(arg1 + 8))
    int32_t eax
    eax.b = 0
    return eax

uint32_t edi_6 = ((zx.d(ecx[3]) << 8 | zx.d(ecx[2])) << 8 | zx.d(ecx[1])) << 8 | zx.d(*ecx)
*(arg1 + 4) = &ecx[4]
sub_42f470(arg2, edi_6)
int32_t ebp = 0

if (edi_6 s> 0)
    int32_t* ebx_1 = arg2
    
    while (true)
        char* edx_1 = *(arg1 + 4)
        void* eax_5 = *ebx_1
        
        if (&edx_1[4] u> *(arg1 + 8))
            eax_5.b = 0
            return eax_5
        
        uint32_t ecx_8 =
            ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
        *(arg1 + 4) = &edx_1[4]
        *(eax_5 + (ebp << 2)) = ecx_8
        ebp += 1
        
        if (ebp s>= edi_6)
            break
        
        ebx_1 = arg2

void* eax_4
eax_4.b = 1
return eax_4
