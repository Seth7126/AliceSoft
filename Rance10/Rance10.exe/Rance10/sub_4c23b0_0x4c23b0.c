// 函数: sub_4c23b0
// 地址: 0x4c23b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = *(sub_4efcc0(*(arg1 + 0xa0)) + 0x44)
sub_555e00(esi, 0x1a, 1)
void* ecx_1 = *(*(*(esi + 0x80) + 0x60) + 0x68)
void* eax_2

if (ecx_1 != 0)
    eax_2 = *(ecx_1 + 0xc)
    
    if (eax_2 != 0)
        void* eax_3 = *(eax_2 + 0x38)
        
        if (eax_3 != 0)
            int32_t __saved_esi_1 = *(eax_3 + 0x14)
            sub_4daf50(ecx_1)
            void* eax_6
            eax_6.b = 1
            return eax_6
        
        int32_t __saved_esi = 0xffffffff
        sub_4daf50(ecx_1)
        void* eax_4
        eax_4.b = 1
        return eax_4

eax_2.b = 0
return eax_2
