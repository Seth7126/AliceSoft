// 函数: sub_48e2e0
// 地址: 0x48e2e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = *(arg1 + 0x4c)

if (eax != 0)
    _free(eax)

int32_t result = *(arg1 + 0x38)

if (result != 0)
    result = _free(result)

void* ecx = *(arg1 + 0x14)

if (ecx != 0)
    result = sub_403160(ecx, (*(arg1 + 0x1c) - ecx) s>> 2, 4)
    *(arg1 + 0x14) = 0
    *(arg1 + 0x18) = 0
    *(arg1 + 0x1c) = 0

void* ecx_1 = *(arg1 + 8)

if (ecx_1 != 0)
    result = sub_403160(ecx_1, (*(arg1 + 0x10) - ecx_1) s>> 2, 4)
    *(arg1 + 8) = 0
    *(arg1 + 0xc) = 0
    *(arg1 + 0x10) = 0

return result
