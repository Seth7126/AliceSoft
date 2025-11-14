// 函数: sub_487200
// 地址: 0x487200
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edi = *(arg1 + 0x3c)

if (edi == 0)
    return 0xffffffff

for (int32_t* i = *(edi + 8); i != *(edi + 0xc); i = &i[1])
    int32_t result = sub_48ec40(*i, arg2)
    
    if (result != 0xffffffff)
        return result

return 0xffffffff
