// 函数: sub_5bb240
// 地址: 0x5bb240
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t eax
void* ecx

switch (arg1)
    case 0, 0x1b, 0x3f
        *arg3 = 0
        uint32_t* eax_1
        eax_1.b = 1
        return eax_1
    case 0xa, 0xb, 0x2f
        *arg3 = arg2
        uint32_t eax_2
        eax_2.b = 1
        return eax_2
    case 0xc
        if (arg2 s< 0)
            goto label_5bb280
        
        eax = sub_5bb610(ecx, arg2, arg4)
    label_5bb2a1:
        *arg3 = eax
        
        if (eax s>= 0)
            eax.b = 1
            return eax
    case 0xd
        if (arg2 s< 0)
            goto label_5bb280
        
        void* var_c_2 = arg4
        eax = sub_5bb6f0(ecx, arg2, ecx)
        goto label_5bb2a1
    case 0xe, 0xf, 0x10, 0x11, 0x1e, 0x32, 0x42
        if (arg2 s< 0)
            goto label_5bb280
        
        eax = sub_5bb350(ecx, arg2, arg4)
        *arg3 = eax
        
        if (eax s>= 0)
            eax.b = 1
            return eax
    case 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1f, 0x20, 0x33, 0x34, 0x43, 0x44
    label_5bb280:
        *arg3 = 0xffffffff
        uint32_t* eax_3
        eax_3.b = 1
        return eax_3

eax.b = 0
return eax
