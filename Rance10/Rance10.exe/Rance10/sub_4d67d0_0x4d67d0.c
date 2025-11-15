// 函数: sub_4d67d0
// 地址: 0x4d67d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ecx = *(arg1 + 0x24)
*(arg1 + 0x2c) = 0xffffffff
*(arg1 + 0x29) = 0
*(arg1 + 0x28) = 0

if (ecx != 0)
    int32_t esi_1 = ecx[1]
    ecx[1] -= 1
    (**ecx)(esi_1 - 1)
    *(arg1 + 0x24) = 0

int32_t* ecx_1 = *(arg1 + 0x20)

if (ecx_1 != 0)
    (*(*ecx_1 + 4))()
    *(arg1 + 0x20) = 0

int32_t* ecx_2 = *(arg1 + 0x1c)

if (ecx_2 != 0)
    (*(*ecx_2 + 4))()
    *(arg1 + 0x1c) = 0

int32_t* ecx_3 = *(arg1 + 0x10)

if (ecx_3 != 0)
    (*(*ecx_3 + 4))()
    *(arg1 + 0x10) = 0

int32_t* ecx_4 = *(arg1 + 0xc)

if (ecx_4 != 0)
    (*(*ecx_4 + 4))()
    *(arg1 + 0xc) = 0
