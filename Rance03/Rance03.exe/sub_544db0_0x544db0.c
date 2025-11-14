// 函数: sub_544db0
// 地址: 0x544db0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ecx = *(arg1 + 0x58)

if (ecx != 0)
    (*(*ecx + 0x10))(1)
    *(arg1 + 0x58) = 0

if (*(arg1 + 0x4c) != 0)
    sub_5f4ad0(*(arg1 + 0x5c))
    *(arg1 + 0x4c) = 0

int32_t* ecx_2 = *(arg1 + 0x48)

if (ecx_2 != 0)
    sub_529c30(ecx_2)
    void* ecx_3 = *(arg1 + 0x68)
    *(arg1 + 0x48) = 0
    sub_53b520(ecx_3)

int32_t* ecx_4 = *(arg1 + 0x50)

if (ecx_4 != 0)
    sub_53a360(ecx_4)
    *(arg1 + 0x50) = 0

int32_t* ecx_5 = *(arg1 + 0x54)

if (ecx_5 != 0)
    sub_53a360(ecx_5)
    *(arg1 + 0x54) = 0

if (*(arg1 + 0x28) != 0)
    sub_5f4ad0(*(arg1 + 0x5c))
    *(arg1 + 0x28) = 0

int32_t* ecx_7 = *(arg1 + 0x24)

if (ecx_7 != 0)
    sub_529c30(ecx_7)
    void* ecx_8 = *(arg1 + 0x68)
    *(arg1 + 0x24) = 0
    sub_53b520(ecx_8)

bool cond:0 = *(arg1 + 0x40) u< 0x10
void* result = arg1 + 0x2c
*(result + 0x10) = 0

if (not(cond:0))
    result = *result

*result = 0
*(arg1 + 0x44) = 0

if (*(arg1 + 0x1c) != 0)
    result = sub_5f4ad0(*(arg1 + 0x5c))
    *(arg1 + 0x1c) = 0

int32_t* ecx_10 = *(arg1 + 0x20)

if (ecx_10 != 0)
    result = (*(*ecx_10 + 0x10))(1)
    *(arg1 + 0x20) = 0

int32_t* ecx_11 = *(arg1 + 0x18)

if (ecx_11 != 0)
    sub_529c30(ecx_11)
    void* ecx_12 = *(arg1 + 0x68)
    *(arg1 + 0x18) = 0
    result = sub_53b520(ecx_12)

if (*(arg1 + 0x10) != 0)
    result = sub_5f4ad0(*(arg1 + 0x5c))
    *(arg1 + 0x10) = 0

int32_t* ecx_14 = *(arg1 + 0xc)

if (ecx_14 != 0)
    sub_529c30(ecx_14)
    void* ecx_15 = *(arg1 + 0x68)
    *(arg1 + 0xc) = 0
    result = sub_53b520(ecx_15)

int32_t* ecx_16 = *(arg1 + 0x14)

if (ecx_16 != 0)
    result = sub_54c280(ecx_16)
    *(arg1 + 0x14) = 0

*(arg1 + 8) = 0
*(arg1 + 4) = 0
return result
