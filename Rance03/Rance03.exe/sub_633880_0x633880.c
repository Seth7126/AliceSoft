// 函数: sub_633880
// 地址: 0x633880
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result = arg6 - 1

if (result u> 3)
    return result

if (*(arg3 + 0x2cc) == 0)
    void* (* eax)(void* arg1, char* arg2, char* arg3) = sub_6337a0
    int32_t ecx_1 = zx.d(*(arg3 + 0x15a)) + 7
    *(arg3 + 0x2cc) = sub_6335b0
    *(arg3 + 0x2d0) = sub_6335f0
    *(arg3 + 0x2d4) = sub_633680
    
    if ((ecx_1 & 0xfffffff8) == 8)
        eax = sub_6336e0
    
    *(arg3 + 0x2d8) = eax

return (*(arg3 + (arg6 << 2) + 0x2c8))(arg2, arg4, arg5)
