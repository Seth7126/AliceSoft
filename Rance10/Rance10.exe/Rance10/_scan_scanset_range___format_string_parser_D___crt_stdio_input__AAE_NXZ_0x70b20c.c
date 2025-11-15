// 函数: ?scan_scanset_range@?$format_string_parser@D@__crt_stdio_input@@AAE_NXZ
// 地址: 0x70b20c
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = arg1
void* var_14 = esi
void* edx = esi + 0x2c
void* var_10 = edx
void* result

if (edx != 0)
    int32_t edi
    int32_t var_1c_1 = edi
    __builtin_memset(edx, 0, 0x20)
    char* eax = *(esi + 8)
    void* ecx
    ecx.b = *eax == 0x5e
    char var_5_1 = ecx.b
    
    if (ecx.b != 0)
        *(esi + 8) = &eax[1]
    
    char* eax_2 = *(esi + 8)
    
    if (*eax_2 == 0x5d)
        *(esi + 8) = &eax_2[1]
        *(esi + 0x37) |= 0x20
    
    char* edi_2 = *(esi + 8)
    
    if (*edi_2 != 0x5d)
        int32_t ebx
        int32_t var_20_1 = ebx
        
        do
            char* eax_4 = *(esi + 8)
            ecx.b = *eax_4
            
            if (ecx.b == 0)
                break
            
            if (ecx.b == 0x2d && eax_4 != edi_2)
                ebx:1.b = eax_4[1]
            
            if (ecx.b != 0x2d || eax_4 == edi_2 || ebx:1.b == 0x5d)
                __crt_stdio_input::scanset_buffer<uint8_t>::set(edx, ecx.b)
                edx = esi + 0x2c
            else
                ebx.b = eax_4[0xffffffff]
                
                if (ebx.b u> ebx:1.b)
                    eax_4.b = ebx.b
                    ebx.b = ebx:1.b
                    ebx:1.b = eax_4.b
                
                ebx:1.b += 1
                char var_9_1 = ebx.b
                
                if (ebx.b != ebx:1.b)
                    do
                        __crt_stdio_input::scanset_buffer<uint8_t>::set(var_10, var_9_1)
                        ebx.b += 1
                        var_9_1 = ebx.b
                    while (ebx.b != ebx:1.b)
                    
                    esi = var_14
                    edx = esi + 0x2c
            
            *(esi + 8) += 1
        while (**(esi + 8) != 0x5d)
        
        ecx.b = var_5_1
    
    if (**(esi + 8) == 0)
        *(esi + 0xc) = 0x16
        goto label_70b22d
    
    if (ecx.b != 0)
        __crt_stdio_input::scanset_buffer<uint8_t>::invert(edx)
    
    *(esi + 8) += 1
    result.b = 1
else
    *(esi + 0xc) = 0xc
label_70b22d:
    *(esi + 0x28) = 0
    *(esi + 0x24) = 0
    *(esi + 0x20) = 0
    *(esi + 0x1c) = 0
    *(esi + 0x18) = 0
    *(esi + 0x16) = 0
    *(esi + 0x14) = 0
    *(esi + 0x10) = 0
    result.b = 0

return result
