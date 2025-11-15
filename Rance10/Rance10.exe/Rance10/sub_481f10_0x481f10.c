// 函数: sub_481f10
// 地址: 0x481f10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ecx = *(arg1 + 8)

if (ecx == 0)
    return 0xffffffff

int32_t eax_2 = (*(*ecx + 0x24))()
int32_t ecx_1
ecx_1.b = *(arg1 + 0x1c) != 0
return eax_2 * (ecx_1 + 1)
