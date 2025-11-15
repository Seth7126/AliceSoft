// 函数: sub_57de00
// 地址: 0x57de00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_4_1 = arg1
int32_t esi = 0
int32_t ebx = 0
int32_t ebp = 0
int32_t edx = 2
int32_t var_4 = 0

do
    esi += arg1 s>> (edx.b - 2) & 1
    var_4 += arg1 s>> (edx.b - 1) & 1
    char ecx_3 = edx.b + 1
    int32_t eax_9 = arg1 s>> edx.b & 1
    edx += 4
    ebp += eax_9
    ebx += arg1 s>> ecx_3 & 1
while (edx - 2 s< 0x20)

return var_4 + ebx + ebp + esi
