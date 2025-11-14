// 函数: sub_46e550
// 地址: 0x46e550
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = data_75d4e0

if (sub_46cb80(esi) != 0)
    int32_t* ecx_1 = *(esi + 8)
    
    if (ecx_1 != 0)
        if (*(esi + 0x24) != 0)
            return (*(**(esi + 8) + 0x10))(arg1, arg2)
        
        if ((*(*ecx_1 + 8))() != 0)
            *(esi + 0x24) = 1
            return (*(**(esi + 8) + 0x10))(arg1, arg2)

return 0
