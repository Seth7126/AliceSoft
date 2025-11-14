// 函数: sub_5d4b70
// 地址: 0x5d4b70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t esi_1 = *(arg1 + 0xc) u>> 2
int32_t esi_2 = esi_1 - 1

if (esi_1 - 1 s>= 0)
    int32_t temp1_1
    
    do
        int32_t eax_1
        
        if (*(arg1 + 0xc) != 0)
            eax_1 = *(arg1 + 8)
        else
            eax_1 = 0
        
        int32_t ebx_1 = *(eax_1 + (esi_2 << 2))
        void* ebp_1 = *(arg1 + 0x1c)
        
        if (sub_5d6570(ebp_1, ebx_1) == 0)
            return 0
        
        if (sub_5d6460(ebp_1, ebx_1) == 0)
            return 0
        
        temp1_1 = esi_2
        esi_2 -= 1
    while (temp1_1 - 1 s>= 0)

return 1
