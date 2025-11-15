// 函数: sub_62a060
// 地址: 0x62a060
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebp = *(arg1 + 0x38)

if (ebp == 0)
    return 

int32_t esi_2 = *(ebp + 0x30) - *(ebp + 0x2c)
uint32_t eax
int32_t edx_1
edx_1:eax = muls.dp.d(0x92492493, esi_2)
int32_t edx_3 = (edx_1 + esi_2) s>> 6
int32_t esi_6 = (edx_3 u>> 0x1f) - 1 + edx_3

if ((edx_3 u>> 0x1f) - 1 + edx_3 s< 0)
    return 

int32_t ebx_1 = esi_6 * 0x70
int32_t temp1_1

do
    int32_t eax_1
    
    if (*(arg1 + 0x14) != 0)
        eax_1 = *(arg1 + 0x10)
    else
        eax_1 = 0
    
    int32_t ecx = *(eax_1 + (esi_6 << 2))
    
    switch (*(ebx_1 + *(ebp + 0x2c) + 0x34) - 0x12)
        case 0, 1, 2, 3, 0x21, 0x31, 0x3e, 0x47, 0x4b
            if (ecx != 0xffffffff)
                if (esi_6 u< *(arg1 + 0x14) u>> 2)
                    *(*(arg1 + 0x10) + (esi_6 << 2)) = 0xffffffff
                
                sub_621db0(*(arg1 + 0x24), ecx)
    
    ebx_1 -= 0x70
    temp1_1 = esi_6
    esi_6 -= 1
while (temp1_1 - 1 s>= 0)
