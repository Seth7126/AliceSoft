// 函数: sub_64fcb0
// 地址: 0x64fcb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void (** result)(int32_t* arg1, int32_t arg2) = (**(arg1 + 4))(arg1, 1, 0x40)
*(arg1 + 0x17c) = result
*result = sub_64fbb0

if (*(arg1 + 0xd0) == 0)
    int32_t i = 0
    
    if (*(arg1 + 0x4c) s> 0)
        void* edi_2 = *(arg1 + 0x54) + 0xc
        void (*** ebp_1)(int32_t* arg1, int32_t arg2) = &result[6]
        
        do
            result = (*(*(arg1 + 4) + 8))(arg1, 1, *(edi_2 + 0x18) * *(edi_2 + 0x10), 
                *(edi_2 + 0x1c) * *edi_2)
            *ebp_1 = result
            ebp_1 = &ebp_1[1]
            i += 1
            edi_2 += 0x58
        while (i s< *(arg1 + 0x4c))

return result
