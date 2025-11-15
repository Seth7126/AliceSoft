// 函数: sub_518040
// 地址: 0x518040
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
            int32_t __saved_esi_1 = *(eax_2 + 0x14)
            sub_4daf50(ecx_1)
            void* eax_5
            eax_5.b = 1
            return eax_5
        
        int32_t __saved_esi = 0xffffffff
        sub_4daf50(ecx_1)
        void* eax_3
        eax_3.b = 1
        return eax_3

eax_1.b = 0
return eax_1
