// 函数: sub_56ee30
// 地址: 0x56ee30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax_4 = *(arg1 + 0x30)
int32_t* esi = *(arg1 + 0x2c)
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
        result += (*(eax + 0x24) - *(eax + 0x20)) s/ 0x3c * 3
    while (ebp != edi_3)

return result
