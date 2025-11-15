// 函数: sub_6a4030
// 地址: 0x6a4030
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebx = arg2

if ((*(arg3 + 0x11c) & 0x20000000) != 0)
    int32_t ecx
    ecx.b = (*(arg3 + 0x78) & 0x300) != 0x300
    
    if (ecx != 0)
        goto label_6a4064
else if ((*(arg3 + 0x78) & 0x800) == 0)
label_6a4064:
    void* edi_1 = arg4
    
    if (edi_1 != 0)
        arg1 = *(arg3 + 0x140)
        void* esi_1
        void* temp0_1
        
        do
            esi_1 = edi_1
            
            if (edi_1 == 0)
                esi_1 = 0xffffffff
            
            if (ebx != 0)
                arg1 = sub_69dc30(arg1, ebx, arg1, esi_1)
            else
                arg1 = 0
            
            ebx += esi_1
            temp0_1 = edi_1
            edi_1 -= esi_1
        while (temp0_1 != esi_1)
        *(arg3 + 0x140) = arg1
