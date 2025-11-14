// 函数: sub_44eaf0
// 地址: 0x44eaf0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ecx = *(arg1 + 0xd8)

if (ecx != 0)
    (*(*ecx + 4))()
    *(arg1 + 0xd8) = 0

*(arg1 + 0xd8) = arg2

if (arg2 != 0)
    (**arg2)()

int32_t* ecx_2 = *(arg1 + 0xd8)

if (ecx_2 == 0)
    *(arg1 + 0x18) = 0
    *(arg1 + 0x1c) = 0
    return 

int32_t eax_4 = (*(*ecx_2 + 0x10))()
int32_t* ecx_3 = *(arg1 + 0xd8)
*(arg1 + 0x18) = eax_4
*(arg1 + 0x1c) = (*(*ecx_3 + 0x14))()
