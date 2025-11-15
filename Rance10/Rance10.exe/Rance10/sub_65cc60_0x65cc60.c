// 函数: sub_65cc60
// 地址: 0x65cc60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t var_4 = arg1
int32_t* ebp = arg1
int32_t* esi = ebp[6]
int32_t edi = esi[1]
char* ebx = *esi

if (edi != 0)
    goto label_65cc8d

if (esi[3](ebp) != 0)
    ebx = *esi
    edi = esi[1]
label_65cc8d:
    uint32_t edx_1 = zx.d(*ebx)
    void* ebx_1 = &ebx[1]
    int32_t edi_1 = edi - 1
    
    if (edi != 1)
        goto label_65ccb0
    
    if (esi[3](ebp) != 0)
        ebx_1 = *esi
        edi_1 = esi[1]
    label_65ccb0:
        uint32_t ecx_1 = zx.d(*ebx_1)
        
        if (edx_1 != 0xff || ecx_1 != 0xd8)
            *(*ebp + 0x14) = 0x37
            *(*ebp + 0x18) = edx_1
            *(*ebp + 0x1c) = ecx_1
            (**ebp)(ebp)
        
        ebp[0x65] = ecx_1
        esi[1] = edi_1 - 1
        *esi = ebx_1 + 1
        return 1

return 0
