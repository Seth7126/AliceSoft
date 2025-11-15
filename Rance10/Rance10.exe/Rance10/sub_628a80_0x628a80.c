// 函数: sub_628a80
// 地址: 0x628a80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_1 = arg1
*(arg1 + 0x28) = arg2
int32_t esi_1 = arg2[1] - *arg2
*(arg1 + 0x14) = 0
int32_t ebp_2 = esi_1 s/ 0x70
char result = sub_405df0(arg1 + 0xc, ebp_2 << 2)

if (result == 0)
    return result

int32_t* edi_1

if (*(arg1 + 0x14) != 0)
    edi_1 = *(arg1 + 0x10)
else
    edi_1 = nullptr

int32_t esi_2 = 0

if (ebp_2 s> 0)
    int32_t ebx_1 = 0
    
    do
        if (sub_600a10(arg1, *arg2 + ebx_1, edi_1, *(arg1 + 0x24), 1) == 0)
            return 0
        
        esi_2 += 1
        ebx_1 += 0x70
        edi_1 = &edi_1[1]
    while (esi_2 s< ebp_2)

return 1
