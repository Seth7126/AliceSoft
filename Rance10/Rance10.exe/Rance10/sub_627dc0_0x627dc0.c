// 函数: sub_627dc0
// 地址: 0x627dc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4 = arg1
uint32_t result

if (*(arg2 + 0x2c) != arg1[0xb] || *(arg2 + 0x34) != arg1[0xd])
label_627dd3:
    result.b = 0
    return result

(*(*arg1 + 4))()
uint32_t edi_3 = (arg3[1] - *arg3) s>> 2
sub_627910(arg1, edi_3, 0)
uint32_t esi_1 = 0

if (edi_3 s> 0)
    do
        if (sub_627e30(arg1, esi_1, arg2, *(*arg3 + (esi_1 << 2))).b == 0)
            goto label_627dd3
        
        esi_1 += 1
    while (esi_1 s< edi_3)

result.b = 1
return result
