// 函数: sub_522670
// 地址: 0x522670
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result

if (arg2 == 0)
    result.b = 0
    return result

int32_t* esi = *(arg1 + 8)
int32_t* ecx = *(arg2 + 8)

if (esi != 0 && ecx != 0)
    int32_t ebx
    ebx.b = (*(*ecx + 0x28))()
    return (*(*esi + 0x28))() == ebx.b

result.b = 0
return result
