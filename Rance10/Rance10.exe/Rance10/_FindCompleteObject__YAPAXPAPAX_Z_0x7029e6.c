// 函数: ?FindCompleteObject@@YAPAXPAPAX@Z
// 地址: 0x7029e6
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx = *(*arg1 - 4)
void* result = arg1 - *(ecx + 4)

if (*(ecx + 8) == 0)
    return result

return result - *(arg1 - *(ecx + 8))
