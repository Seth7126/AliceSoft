// 函数: sub_65c090
// 地址: 0x65c090
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t var_4 = arg1
int32_t* esi = arg1[6]
int32_t edi = esi[1]
char* ebx = *esi

if (edi != 0)
    goto label_65c0c0

if (esi[3](arg1) != 0)
    ebx = *esi
    edi = esi[1]
label_65c0c0:
    void* ebx_1 = &ebx[1]
    var_4 = zx.d(*ebx) << 8
    int32_t edi_1 = edi - 1
    
    if (edi != 1)
        goto label_65c0e2
    
    if (esi[3](arg1) != 0)
        ebx_1 = *esi
        edi_1 = esi[1]
    label_65c0e2:
        int32_t edi_2 = edi_1 - 1
        void* ebx_2 = ebx_1 + 1
        
        if (zx.d(*ebx_1) + var_4 != 4)
            *(*arg1 + 0x14) = 0xc
            (**arg1)(arg1)
        
        if (edi_2 != 0)
            goto label_65c11b
        
        if (esi[3](arg1) != 0)
            ebx_2 = *esi
            edi_2 = esi[1]
        label_65c11b:
            void* ebx_3 = ebx_2 + 1
            uint32_t ecx_2 = zx.d(*ebx_2) << 8
            int32_t edi_3 = edi_2 - 1
            
            if (edi_2 != 1)
                goto label_65c145
            
            if (esi[3](arg1) != 0)
                ebx_3 = *esi
                edi_3 = esi[1]
            label_65c145:
                uint32_t ecx_3 = ecx_2 + zx.d(*ebx_3)
                *(*arg1 + 0x14) = 0x54
                *(*arg1 + 0x18) = ecx_3
                (*(*arg1 + 4))(arg1, 1)
                arg1[0x3f] = ecx_3
                *esi = ebx_3 + 1
                esi[1] = edi_3 - 1
                int32_t result
                result.b = 1
                return result

return 0
