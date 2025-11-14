// 函数: sub_691bd0
// 地址: 0x691bd0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = arg6
int32_t eax = arg3
void* ebx = arg2
int32_t var_4 = eax
void* edi = arg5

if (eax != ebx && arg4 != edi)
    int32_t* var_10_1 = esi + 0x28
    char* ebp_1 = esi + 0xc
    void* ecx_1 = edi + 0xc
    void** edx = ebx + 0xc
    
    while (true)
        int32_t eax_1 = *(edi - 8)
        edi -= 0x44
        var_10_1 -= 0x44
        ebx -= 0x44
        esi -= 0x44
        ebp_1 -= 0x44
        
        if (eax_1 s>= *(ebx + 0x3c))
            eax_1.b = *(edi + 4)
            *(esi + 4) = eax_1.b
            *(esi + 8) = *(edi + 8)
            
            if (ebp_1 != ecx_1 - 0x44)
                sub_401ff0(ebp_1, ecx_1 - 0x44, 0, 0xffffffff)
            
            *(esi + 0x24) = *(edi + 0x24)
            sub_4a6db0(var_10_1, edi + 0x28)
            ebx += 0x44
            ecx_1 -= 0x44
            *(esi + 0x34) = *(edi + 0x34)
            *(esi + 0x38) = *(edi + 0x38)
            *(esi + 0x3c) = *(edi + 0x3c)
            eax = *(edi + 0x40)
            *(esi + 0x40) = eax
            
            if (arg4 == edi)
                break
        else
            eax_1.b = *(ebx + 4)
            *(esi + 4) = eax_1.b
            *(esi + 8) = *(ebx + 8)
            
            if (ebp_1 != edx - 0x44)
                sub_401ff0(ebp_1, edx - 0x44, 0, 0xffffffff)
            
            *(esi + 0x24) = *(ebx + 0x24)
            sub_4a6db0(var_10_1, ebx + 0x28)
            edi += 0x44
            *(esi + 0x34) = *(ebx + 0x34)
            *(esi + 0x38) = *(ebx + 0x38)
            *(esi + 0x3c) = *(ebx + 0x3c)
            eax = *(ebx + 0x40)
            *(esi + 0x40) = eax
            
            if (var_4 == ebx)
                break
            
            edx -= 0x44

int32_t var_24_3 = var_4
void* eax_14 = sub_6937f0(eax, edi, arg4, esi)
int32_t var_2c_3 = var_4
return sub_6937f0(eax_14, ebx, var_4, eax_14)
