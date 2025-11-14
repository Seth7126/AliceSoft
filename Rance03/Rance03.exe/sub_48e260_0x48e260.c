// 函数: sub_48e260
// 地址: 0x48e260
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
int32_t result = *(arg1 + 0x1c)

if (result != 0 && *(arg1 + 0x28) != 0)
    return sub_48f850(result, arg2)

if (*(arg1 + 0x29) != 0)
    result = *(arg1 + 0x20)
    
    if (result != 0)
        return sub_490ea0(result, arg2)

if (*(arg1 + 0x2a) != 0)
    void* edi_1 = *(arg1 + 0x24)
    
    if (edi_1 != 0)
        for (void** i = *(edi_1 + 0x1c); i != *(edi_1 + 0x20); i = &i[1])
            result = sub_48f850(*i, arg2)

return result
