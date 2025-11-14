// 函数: sub_638200
// 地址: 0x638200
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* eax
int32_t ecx
int32_t edx
eax, ecx, edx = _memset(arg2, 0, 0x70)
*(arg2 + 0x40) = arg1
*(arg2 + 0x4c) = 0
*(arg2 + 0x44) = 0

if (*arg1 != 0)
    char* eax_1
    int32_t ecx_1
    int32_t edx_1
    eax_1, ecx_1, edx_1 = sub_69cb1c(eax, edx, ecx, 1, 0x48)
    char* ebx_1 = eax_1
    *(arg2 + 0x68) = ebx_1
    int32_t i = 0
    *(ebx_1 + 4) = 0xc61c3c00
    
    do
        if (i != 7)
            *(ebx_1 + (i << 2) + 0xc) = sub_69cb1c(eax_1, edx_1, ecx_1, 1, 0x14)
        else
            *(ebx_1 + 0x28) = &arg2[4]
        
        void* esi_1 = *(ebx_1 + (i << 2) + 0xc)
        __builtin_memset(esi_1, 0, 0x14)
        eax_1, ecx_1, edx_1 = _malloc(0x100)
        i += 1
        *(esi_1 + 8) = eax_1
        *(esi_1 + 0xc) = eax_1
        *eax_1 = 0
        *(esi_1 + 0x10) = 0x100
    while (i s< 0xf)

return 0
