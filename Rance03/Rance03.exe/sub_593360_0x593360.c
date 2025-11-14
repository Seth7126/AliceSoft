// 函数: sub_593360
// 地址: 0x593360
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1

if (*(arg1 + 0x288) != 0)
    int32_t* ecx = *(arg1 + 0xc)
    
    if (ecx != 0 && (*(*ecx + 0x38))() != 0)
        int32_t* esi = *(arg1 + 0xc)
        *(arg1 + 0x288) = 0
        int32_t eax_6 = (*(*esi + 0x1c))((*(*esi + 0x20))())
        return sub_52b200(arg1 + 0x1c, *(arg1 + 4), *(arg1 + 0xc), eax_6) != 0

return 0
