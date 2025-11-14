// 函数: sub_455180
// 地址: 0x455180
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* ecx = *(arg3 + 4)

if (&ecx[4] u<= *(arg3 + 8))
    uint32_t ebx_7 = ((zx.d(ecx[3]) << 8 | zx.d(ecx[2])) << 8 | zx.d(ecx[1])) << 8 | zx.d(*ecx)
    *(arg3 + 4) = &ecx[4]
    
    if (sub_468d00(arg3, arg1 + 0x2c) != 0 && sub_468b20(arg3, arg1 + 0x48) != 0
            && sub_468b20(arg3, arg1 + 0x4c) != 0 && sub_468b20(arg3, arg1 + 0x50) != 0
            && sub_468b20(arg3, arg1 + 0x54) != 0 && sub_468b20(arg3, arg1 + 0x44) != 0
            && sub_454a60(arg1 + 8, arg3) != 0 && sub_468b20(arg3, arg1 + 0x58) != 0)
        *(arg1 + 4) = ebx_7
        
        if (arg2 s< 1)
            return 1
        
        if (sub_468b20(arg3, arg1 + 0x5c) != 0 && sub_468b20(arg3, arg1 + 0x60) != 0
                && sub_468bc0(arg3, arg1 + 0x64) != 0 && sub_468d00(arg3, arg1 + 0x68) != 0)
            return 1

return 0
