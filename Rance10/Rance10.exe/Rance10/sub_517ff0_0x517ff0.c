// 函数: sub_517ff0
// 地址: 0x517ff0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = *(arg1 + 0x44)
sub_555e00(edi, 0x1a, arg2)
void* ecx_1 = *(*(*(edi + (arg2 << 2) + 0x7c) + 0x60) + 0x68)
void* eax_1

if (ecx_1 != 0)
    eax_1 = *(ecx_1 + 0xc)
    
    if (eax_1 != 0)
        void* eax_2 = *(eax_1 + 0x38)
        
        if (eax_2 != 0)
            int32_t eax_4
            eax_4.b = *(eax_2 + 0x14) == *(ecx_1 + 0x48)
            return eax_4
        
        int32_t eax_3
        eax_3.b = 0xffffffff == *(ecx_1 + 0x48)
        return eax_3

eax_1.b = 1
return eax_1
