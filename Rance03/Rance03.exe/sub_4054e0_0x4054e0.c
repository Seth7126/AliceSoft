// 函数: sub_4054e0
// 地址: 0x4054e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
int32_t* eax

if (arg1 + 0x18 != arg2)
    eax = sub_401ff0(arg1 + 0x18, arg2, 0, 0xffffffff)

int32_t* ecx_1 = *(arg1 + 0x4c)

if (ecx_1 != 0)
    eax = (*(*ecx_1 + 8))(1)
    *(arg1 + 0x4c) = 0

if (sub_406a30(eax, arg2, arg1 + 0x4c, 0) u< arg2[4])
    int32_t* ecx_3 = *(arg1 + 0x4c)
    
    if (ecx_3 != 0)
        (*(*ecx_3 + 8))(1)
        *(arg1 + 0x4c) = 0

if (*(arg1 + 0x4c) != 0)
    *(arg1 + 0x50) = 0
    return sub_4053a0(arg1)

int32_t* ecx_6 = *(arg1 + 0x4c)

if (ecx_6 != 0)
    (*(*ecx_6 + 8))(1)
    *(arg1 + 0x4c) = 0

return sub_4053a0(arg1)
