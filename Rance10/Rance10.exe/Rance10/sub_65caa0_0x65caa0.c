// 函数: sub_65caa0
// 地址: 0x65caa0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edi = arg1
int32_t* esi = edi[6]
int32_t ebx = esi[1]
char* ebp = *esi

if (ebx != 0)
    goto label_65cad1

if (esi[3](edi) != 0)
    ebp = *esi
    ebx = esi[1]
label_65cad1:
    void* ebp_1 = &ebp[1]
    uint32_t eax_4 = zx.d(*ebp) << 8
    int32_t ebx_1 = ebx - 1
    
    if (ebx != 1)
        goto label_65caf2
    
    if (esi[3](edi) != 0)
        ebp_1 = *esi
        ebx_1 = esi[1]
    label_65caf2:
        uint32_t edx = zx.d(*ebp_1)
        *(*edi + 0x14) = 0x5d
        uint32_t edx_1 = edx + eax_4 - 2
        *(*edi + 0x18) = edi[0x65]
        *(*edi + 0x1c) = edx_1
        (*(*edi + 4))(edi, 1)
        *esi = ebp_1 + 1
        esi[1] = ebx_1 - 1
        
        if (edx_1 s> 0)
            (*(edi[6] + 0x10))(edi, edx_1)
        
        int32_t result
        result.b = 1
        return result

return 0
