// 函数: sub_653550
// 地址: 0x653550
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t (** result)(int32_t* arg1, int32_t arg2) = (**(arg1 + 4))(arg1, 1, 0x40)
*(arg1 + 0x180) = result
*result = sub_652f80

if (*(*(arg1 + 0x190) + 8) != 0)
    result[1] = sub_6531e0
    return sub_653400(arg1) __tailcall

result[1] = sub_652fd0
int32_t i = 0

if (*(arg1 + 0x4c) s> 0)
    void* edi_1 = *(arg1 + 0x54) + 8
    int32_t (*** ebp_1)(int32_t* arg1, int32_t arg2) = &result[2]
    
    do
        *edi_1
        result = (*(*(arg1 + 4) + 8))(arg1, 1, 
            divs.dp.d(sx.q(*(edi_1 + 0x14) * *(arg1 + 0x108) * *(arg1 + 0x100)), *edi_1), 
            *(arg1 + 0x104))
        *ebp_1 = result
        ebp_1 = &ebp_1[1]
        i += 1
        edi_1 += 0x58
    while (i s< *(arg1 + 0x4c))

return result
