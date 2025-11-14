// 函数: sub_45ff70
// 地址: 0x45ff70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edx = *(arg1 + 0xc)
char* ecx = *(arg1 + 4)

if (edx u> ecx)
    char eax = *ecx
    
    if (eax != 0x20 && eax != 0x22 && eax != 0x27 && eax != 0xd && eax != 0xa && eax != 9
            && eax != 0x28 && eax != 0x29 && eax != 0x2c && eax != 0x3b && eax != 0x5b
            && eax != 0x5d && eax != 0x7b && eax != 0x7d && eax != 0x2b && eax != 0x2d
            && eax != 0x2a && eax != 0x2f && eax != 0x3c && eax != 0x3e && eax != 0x25
            && eax != 0x26 && eax != 0x7c && eax != 0x7e && eax != 0x5e && eax != 0x3d
            && eax != 0x40 && (edx u<= &ecx[1] || eax != 0x81 || ecx[1] != 0x40))
        return 0

return 1
