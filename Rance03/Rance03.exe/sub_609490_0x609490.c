// 函数: sub_609490
// 地址: 0x609490
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ecx = *(arg1 + 8)

if (ecx != 0)
    (*(*ecx + 4))()
    *(arg1 + 8) = 0

int32_t* ecx_1 = *(arg1 + 4)

if (ecx_1 != 0)
    (*(*ecx_1 + 4))()
    *(arg1 + 4) = 0

void* result = (*(*arg3 + 0xc))(0x100, 0x100, 0x20)
*(arg1 + 4) = result

if (result != 0 && sub_609520(*(arg1 + 0xc), result).b != 0)
    result = (*(*arg2 + 0x50))()
    *(arg1 + 8) = result
    
    if (result != 0)
        return (*(*result + 8))(*(arg1 + 4), 0) != 0

result.b = 0
return result
