// 函数: sub_46b790
// 地址: 0x46b790
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_4 = arg1
void* ecx = arg2

if ((((*(ecx + 8) - *(ecx + 4)) ^ (*(arg1 + 8) - *(arg1 + 4))) & 0xfffffffc) != 0)
    int32_t eax_1
    eax_1.b = 0
    return eax_1

arg2 = nullptr

if ((*(arg1 + 8) - *(arg1 + 4)) s>> 2 != 0)
    void** ebx_1 = *(arg1 + 4)
    int32_t eax_6 = *(ecx + 4) - ebx_1
    var_4 = eax_6
    
    while (true)
        void* edi_1 = *ebx_1
        void* esi_1 = *(eax_6 + ebx_1)
        eax_6.b = *(edi_1 + 4)
        
        if (eax_6.b != *(esi_1 + 4))
            eax_6.b = 0
            return eax_6
        
        eax_6.b = *(edi_1 + 5)
        
        if (eax_6.b != *(esi_1 + 5) || *(edi_1 + 8) != *(esi_1 + 8))
            eax_6.b = 0
            return eax_6
        
        if (sub_4090e0(edi_1 + 0xc, esi_1 + 0xc).b != 0 || *(edi_1 + 0x24) != *(esi_1 + 0x24))
            eax_6.b = 0
            return eax_6
        
        float xmm0_1 = *(edi_1 + 0x28)
        float temp1_1 = *(esi_1 + 0x28)
        xmm0_1 - temp1_1
        eax_6:1.b = (xmm0_1 == temp1_1 ? 1 : 0) << 6
            | (is_unordered.d(xmm0_1, temp1_1) ? 1 : 0) << 2 | (xmm0_1 < temp1_1 ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (p_2)
            eax_6.b = 0
            return eax_6
        
        if (sub_4090e0(edi_1 + 0x2c, esi_1 + 0x2c).b != 0)
            eax_6.b = 0
            return eax_6
        
        ebx_1 = &ebx_1[1]
        void* ecx_5 = arg2 + 1
        arg2 = ecx_5
        
        if (ecx_5 u>= (*(arg1 + 8) - *(arg1 + 4)) s>> 2)
            break
        
        eax_6 = var_4

int32_t eax_4
eax_4.b = 1
return eax_4
