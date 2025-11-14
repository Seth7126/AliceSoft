// 函数: sub_54aa10
// 地址: 0x54aa10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax_4 = *(arg1 + 8)
int32_t* esi = *(arg1 + 4)
int32_t result = 0
int32_t ebp = 0
uint32_t edi_3 = (eax_4 - esi + 3) u>> 2

if (esi u> eax_4)
    edi_3 = 0

if (edi_3 != 0)
    do
        void* eax = *esi
        esi = &esi[1]
        ebp += 1
        int32_t eax_1
        int32_t edx_1
        edx_1:eax_1 = muls.dp.d(0x6bca1af3, *(eax + 0x2c) - *(eax + 0x28))
        int32_t edx_2 = edx_1 s>> 5
        result += ((edx_2 u>> 0x1f) + edx_2) * 3
    while (ebp != edi_3)

return result
