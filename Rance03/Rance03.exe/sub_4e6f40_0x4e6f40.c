// 函数: sub_4e6f40
// 地址: 0x4e6f40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
void* esi = arg1
arg1.b = *(esi + 0x61)

if (arg1.b != 0)
label_4e6fa4:
    void* eax_8 = *(*(arg2 + 4) + 0x40)
    void* ecx_7 = *(eax_8 + 0x64)
    int32_t eax_9
    
    if (ecx_7 != 0)
        eax_9 = sub_4a44a0(ecx_7)
    else
        eax_9 = *(eax_8 + 0x2c)
    
    sub_485a30(esi + 0x64, eax_9, arg3, arg4, 0)
else
    if (arg2 != 0)
        void* eax_2 = *(*(arg2 + 4) + 0x40)
        void* ecx = *(eax_2 + 0x64)
        
        if (ecx != 0)
            sub_4859e0(esi + 0x64, sub_4a44a0(ecx), 0)
            *(esi + 0x61) = 1
            return sub_4e6db0(esi)
        
        sub_4859e0(esi + 0x64, *(eax_2 + 0x2c), ecx)
        *(esi + 0x61) = 1
        return sub_4e6db0(esi)
    
    if (arg1.b != 0)
        goto label_4e6fa4

*(esi + 0x61) = 1
return sub_4e6db0(esi)
