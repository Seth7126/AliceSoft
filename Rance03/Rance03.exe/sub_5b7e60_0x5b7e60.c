// 函数: sub_5b7e60
// 地址: 0x5b7e60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_c = arg1
uint32_t eax

switch (arg2)
    case 0, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1b, 0x1f, 0x20, 0x33, 0x34, 0x3f, 
            0x43, 0x44
        eax.b = 1
        return eax
    case 0xa, 0xb, 0x2f
        *arg3 = arg4
        uint32_t eax_1
        eax_1.b = 1
        return eax_1
    case 0xc
        eax = sub_5b7f40(arg1, *arg3, arg4, arg5)
    label_5b7ea1:
        
        if (eax.b != 0)
            eax.b = 1
            return eax
    case 0xd
        eax = sub_5b8390(arg1, *arg3, arg4, arg5)
        goto label_5b7ea1
    case 0xe, 0xf, 0x10, 0x11, 0x1e, 0x32, 0x42
        if (arg4 s< 0)
            eax.b = 1
            return eax
        
        if (sub_5b8030(arg1, arg3, arg4, arg5).b != 0)
            eax.b = 1
            return eax

eax.b = 0
return eax
