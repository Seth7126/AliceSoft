// 函数: sub_481d00
// 地址: 0x481d00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ecx = *(arg1 + 8)

if (ecx != 0)
    (*(*ecx + 4))()
    *(arg1 + 8) = 0

int32_t* ecx_1 = *(arg1 + 0xc)

if (ecx_1 != 0)
    (*(*ecx_1 + 4))()
    *(arg1 + 0xc) = 0

int32_t* esi = *(arg1 + 0x10)
int32_t edi = 0
uint32_t ebp_3 = (*(arg1 + 0x14) - esi + 3) u>> 2

if (esi u> *(arg1 + 0x14))
    ebp_3 = 0

if (ebp_3 != 0)
    do
        (*(**esi + 4))()
        edi += 1
        esi = &esi[1]
    while (edi != ebp_3)

*(arg1 + 0x14) = *(arg1 + 0x10)
int32_t result
result.b = 1
return result
