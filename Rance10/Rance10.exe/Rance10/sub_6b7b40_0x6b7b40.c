// 函数: sub_6b7b40
// 地址: 0x6b7b40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 == 0)
    return 

int32_t ebp_1 = arg1[1]
int32_t eax_1 = 0
void* edi_1 = *arg1
int32_t esi_1 = 0
*(edi_1 + 0x16) = 0

if (ebp_1 s> 0)
    do
        uint32_t edx_1 = zx.d(*(edi_1 + esi_1))
        esi_1 += 1
        eax_1 = eax_1 << 8 ^ *(((edx_1 ^ eax_1 u>> 0x18) << 2) + &data_774d30)
    while (esi_1 s< ebp_1)

int32_t ebp_2 = arg1[3]
int32_t esi_2 = 0

if (ebp_2 s> 0)
    do
        uint32_t edx_3 = zx.d(*(arg1[2] + esi_2))
        esi_2 += 1
        eax_1 = eax_1 << 8 ^ *(((edx_3 ^ eax_1 u>> 0x18) << 2) + &data_774d30)
    while (esi_2 s< ebp_2)

*(edi_1 + 0x16) = eax_1.b
*(edi_1 + 0x17) = (eax_1 u>> 8).b
*(edi_1 + 0x18) = (eax_1 u>> 0x10).b
*(edi_1 + 0x19) = (eax_1 u>> 0x18).b
