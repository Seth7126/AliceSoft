// 函数: sub_608330
// 地址: 0x608330
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t eax
void* ecx

switch (arg1)
    case 0, 0x3f
        *arg3 = 0
        uint32_t* eax_1
        eax_1.b = 1
        return eax_1
    case 0xa, 0xb, 0x2f, 0x5c
        *arg3 = arg2
        uint32_t eax_2
        eax_2.b = 1
        return eax_2
    case 0xc
        char* eax_4 = arg2
        
        if (eax_4 s< 0)
            goto label_608370
        
        eax = sub_608750(ecx, eax_4, arg4)
    label_608391:
        *arg3 = eax
        
        if (eax s>= 0)
            eax.b = 1
            return eax
    case 0xd
        if (arg2 s< 0)
            goto label_608370
        
        eax = sub_608830(ecx, arg2, arg4)
        goto label_608391
    case 0x12, 0x13, 0x14, 0x15, 0x33, 0x43, 0x50, 0x59, 0x5d
    label_608370:
        *arg3 = 0xffffffff
        uint32_t* eax_3
        eax_3.b = 1
        return eax_3
    case 0x4f
        if (arg2 s< 0)
            goto label_608370
        
        eax = sub_608450(ecx, arg2, arg4)
        *arg3 = eax
        
        if (eax s>= 0)
            eax.b = 1
            return eax

eax.b = 0
return eax
