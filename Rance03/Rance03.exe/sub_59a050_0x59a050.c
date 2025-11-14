// 函数: sub_59a050
// 地址: 0x59a050
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
int32_t* ecx = *(arg1 + 0x10)

if (ecx != 0)
    (*(*ecx + 4))()
    *(arg1 + 0x10) = 0

int32_t* ecx_1 = *(arg1 + 0xc)

if (ecx_1 != 0)
    (*(*ecx_1 + 4))()
    *(arg1 + 0xc) = 0

int32_t* var_c = arg2
*(arg1 + 0x14) = 0
*(arg1 + 4) = 0x10
*(arg1 + 8) = 0x10

if (sub_59a0e0(arg1) != 0 && sub_59a290(arg1) != 0 && sub_59a760(arg1, arg2) != 0
        && sub_59a7c0(arg1) != 0)
    *(arg1 + 0x14) = 1
    return true

return false
