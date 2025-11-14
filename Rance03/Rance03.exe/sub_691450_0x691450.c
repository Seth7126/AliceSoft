// 函数: sub_691450
// 地址: 0x691450
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = arg6
int32_t* eax = arg3
void* ebx = arg2
int32_t* var_4 = eax
void* edi = arg5

if (eax != ebx && arg4 != edi)
    eax = esi + 0x28
    void* ebp_1 = esi + 0xc
    void* ecx = edi + 0xc
    void** edx = ebx + 0xc
    
    while (true)
        int32_t xmm0_1 = *(ebx - 0xc)
        ebx -= 0x44
        edi -= 0x44
        esi -= 0x44
        int32_t* var_10_1 = eax - 0x44
        ebp_1 -= 0x44
        void* eax_1
        
        if (xmm0_1 f<= *(edi + 0x38))
            eax_1.b = *(edi + 4)
            *(esi + 4) = eax_1.b
            *(esi + 8) = *(edi + 8)
            
            if (ebp_1 != ecx - 0x44)
                sub_401ff0(ebp_1, ecx - 0x44, 0, 0xffffffff)
            
            *(esi + 0x24) = *(edi + 0x24)
            sub_4a6db0(var_10_1, edi + 0x28)
            ebx += 0x44
            ecx -= 0x44
            *(esi + 0x34) = *(edi + 0x34)
            *(esi + 0x38) = *(edi + 0x38)
            *(esi + 0x3c) = *(edi + 0x3c)
            *(esi + 0x40) = *(edi + 0x40)
            eax = var_10_1
            
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
            eax = var_10_1

int32_t* var_24_3 = var_4
void* eax_15 = sub_6937f0(eax, edi, arg4, esi)
int32_t* var_2c_3 = var_4
return sub_6937f0(eax_15, ebx, var_4, eax_15)
