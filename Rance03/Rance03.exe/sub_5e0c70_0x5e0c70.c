// 函数: sub_5e0c70
// 地址: 0x5e0c70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edi = 0
int32_t result = *(arg1 + 8) - *(arg1 + 4)

if ((result & 0xfffffffc) s> 0)
    do
        int32_t* ecx = *(*(arg1 + 4) + (edi << 2))
        
        if (ecx != 0)
            (*(*ecx + 0x10))()
            (*(**(*(arg1 + 4) + (edi << 2)) + 4))()
            *(*(arg1 + 4) + (edi << 2)) = 0
        
        edi += 1
        result = (*(arg1 + 8) - *(arg1 + 4)) s>> 2
    while (edi s< result)

return result
