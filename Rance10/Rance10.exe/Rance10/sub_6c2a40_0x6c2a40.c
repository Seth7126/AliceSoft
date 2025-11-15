// 函数: sub_6c2a40
// 地址: 0x6c2a40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
int32_t eax = *(arg1 + 0x58)

if (eax s<= 3)
    if (eax s< 3)
        return 0xffffff7f
    
    void* var_10_1 = arg1
    uint32_t edx_3
    
    if (*(arg1 + 4) == 0)
        edx_3 = *(arg1 + 0x48)
    else
        edx_3 = (*(arg1 + 0x60) << 5) + *(arg1 + 0x48)
    
    if (sub_6b31b0(arg1 + 0x1e0, edx_3) != 0)
        sub_6b3540(arg1 + 0x1e0)
        return 0xffffff77
    
    sub_6b37d0(arg1 + 0x1e0)
    sub_6b2fb0(arg1 + 0x1e0, arg1 + 0x250)
    *(arg1 + 0x58) = 4
    *(arg1 + 0x68) = zx.o(0)

return 0
