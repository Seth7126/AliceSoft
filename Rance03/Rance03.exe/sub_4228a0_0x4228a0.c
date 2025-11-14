// 函数: sub_4228a0
// 地址: 0x4228a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0x114) == *(arg1 + 0x118))
    return 0

int32_t ebx = *(*(arg1 + 0x118) - 0x24)

switch ((*(**(*(arg1 + 0xe0) + 8) + 0x14))(ebx) - 1)
    case 0
        void* esi = *(arg1 + 0xe0)
        return (*(**(esi + 0xc) + 8))((*(**(esi + 8) + 0x18))(ebx)) + 2
    case 2
        return sub_42dd40(*(arg1 + 0xe0), ebx) + 2
    case 3
        void* esi_1 = *(arg1 + 0xe0)
        int32_t eax_15 = (*(**(esi_1 + 0xc) + 0x20))((*(**(esi_1 + 8) + 0x1c))(ebx))
        return eax_15 - sub_423e80(arg1, ebx, eax_15) + 2
    case 4
        return sub_42de80(*(arg1 + 0xe0), ebx) + 2

return 0
