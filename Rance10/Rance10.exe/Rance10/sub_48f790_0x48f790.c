// 函数: sub_48f790
// 地址: 0x48f790
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx = nullptr
int32_t result = 0x811c9dc5

if (arg2 != 0)
    do
        uint32_t eax_1 = zx.d(*(ecx + arg1))
        ecx += 1
        result = (eax_1 ^ result) * 0x1000193
    while (ecx u< arg2)

return result
