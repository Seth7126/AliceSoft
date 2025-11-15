// 函数: sub_4dc130
// 地址: 0x4dc130
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* result = *(arg1 + 0x80)

if (result != 0)
    sub_4dec00(*(arg1 + 0x60), result)
    (*(**(arg1 + 0x80) + 4))()
    void* esi_1 = arg1 + 0x68
    *(arg1 + 0x80) = 0
    
    if (arg1 + 8 != esi_1)
        sub_403590(arg1 + 8, esi_1, 0, 0xffffffff)
    
    *(arg1 + 0x20) = 1
    bool cond:0_1 = *(esi_1 + 0x14) u< 0x10
    *(esi_1 + 0x10) = 0
    
    if (not(cond:0_1))
        esi_1 = *esi_1
    
    *esi_1 = 0

result.b = 1
return result
