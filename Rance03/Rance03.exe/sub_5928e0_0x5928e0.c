// 函数: sub_5928e0
// 地址: 0x5928e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0x288) != 0)
    int32_t* ecx = *(arg1 + 0xc)
    
    if (ecx != 0 && (*(*ecx + 0x38))() != 0)
        *(arg1 + 0x288) = 0

int32_t result = sub_52b110(arg1 + 0x1c)
int32_t* ecx_2 = *(arg1 + 0xc)

if (ecx_2 != 0)
    result = (*(*ecx_2 + 4))()
    *(arg1 + 0xc) = 0

int32_t* ecx_3 = *(arg1 + 0x294)

if (ecx_3 != 0)
    result = (*(*ecx_3 + 4))()
    *(arg1 + 0x294) = 0

int32_t* ecx_4 = *(arg1 + 0x290)

if (ecx_4 != 0)
    result = (*(*ecx_4 + 4))()
    *(arg1 + 0x290) = 0

int32_t* ecx_5 = *(arg1 + 0x28c)

if (ecx_5 != 0)
    result = (*(*ecx_5 + 4))()
    *(arg1 + 0x28c) = 0

int32_t* ecx_6 = *(arg1 + 0x2a0)

if (ecx_6 != 0)
    result = (*(*ecx_6 + 4))()
    *(arg1 + 0x2a0) = 0

*(arg1 + 0x2c4) = 0
*(arg1 + 0x18) = 0
*(arg1 + 8) = 0
return result
