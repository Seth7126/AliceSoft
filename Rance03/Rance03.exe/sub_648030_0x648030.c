// 函数: sub_648030
// 地址: 0x648030
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
int32_t eax = *(arg1 + 0x58)

if (eax s<= 3)
    if (eax s< 3)
        return 0xffffff7f
    
    void* var_10_1 = arg1
    void* edx_3
    
    if (*(arg1 + 4) == 0)
        edx_3 = *(arg1 + 0x48)
    else
        edx_3 = (*(arg1 + 0x60) << 5) + *(arg1 + 0x48)
    
    if (sub_638400(arg1 + 0x1e0, edx_3) != 0)
        sub_638740(arg1 + 0x1e0)
        return 0xffffff77
    
    sub_6389d0(arg1 + 0x1e0)
    sub_638200(arg1 + 0x1e0, arg1 + 0x250)
    *(arg1 + 0x58) = 4
    *(arg1 + 0x68) = zx.o(0)

return 0
