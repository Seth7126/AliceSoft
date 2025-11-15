// 函数: sub_5b93d0
// 地址: 0x5b93d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx = *(arg1 + 0x20)

if (ecx != 0)
    void* var_c_1 = arg1
    void* var_10_1 = ecx
    sub_5b5350(ecx, *(arg1 + 0x24))
    void* ecx_1 = *(arg1 + 0x20)
    sub_403160(ecx_1, (*(arg1 + 0x28) - ecx_1) s>> 6, 0x40)
    *(arg1 + 0x20) = 0
    *(arg1 + 0x24) = 0
    *(arg1 + 0x28) = 0

int32_t* ecx_2 = *(arg1 + 0x14)

if (ecx_2 != 0)
    int32_t* var_c_2 = ecx_2
    sub_5b51a0(ecx_2, *(arg1 + 0x18))
    void* ecx_3 = *(arg1 + 0x14)
    sub_403160(ecx_3, (*(arg1 + 0x1c) - ecx_3) s>> 2, 4)
    *(arg1 + 0x14) = 0
    *(arg1 + 0x18) = 0
    *(arg1 + 0x1c) = 0

return sub_5b4990(arg1 + 8) __tailcall
