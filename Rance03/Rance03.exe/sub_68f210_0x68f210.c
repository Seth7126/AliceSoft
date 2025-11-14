// 函数: sub_68f210
// 地址: 0x68f210
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4_1 = arg3
void* esi = arg4
void* edi = arg3
void* ebp_1 = arg6

if (edi != arg2 && esi != arg5)
    bool cond:1_1
    
    do
        void* ebx_1 = ebp_1
        ebp_1 += 0x44
        int32_t eax
        
        if (*(esi + 8) s>= *(edi + 8))
            eax.b = *(edi + 4)
            *(ebx_1 + 4) = eax.b
            *(ebx_1 + 8) = *(edi + 8)
            
            if (ebx_1 + 0xc != edi + 0xc)
                sub_401ff0(ebx_1 + 0xc, edi + 0xc, 0, 0xffffffff)
            
            *(ebx_1 + 0x24) = *(edi + 0x24)
            sub_4a6db0(ebx_1 + 0x28, edi + 0x28)
            *(ebx_1 + 0x34) = *(edi + 0x34)
            *(ebx_1 + 0x38) = *(edi + 0x38)
            *(ebx_1 + 0x3c) = *(edi + 0x3c)
            arg1 = *(edi + 0x40)
            edi += 0x44
            cond:1_1 = edi != arg2
        else
            eax.b = *(esi + 4)
            *(ebx_1 + 4) = eax.b
            *(ebx_1 + 8) = *(esi + 8)
            
            if (ebx_1 + 0xc != esi + 0xc)
                sub_401ff0(ebx_1 + 0xc, esi + 0xc, 0, 0xffffffff)
            
            *(ebx_1 + 0x24) = *(esi + 0x24)
            sub_4a6db0(ebx_1 + 0x28, esi + 0x28)
            *(ebx_1 + 0x34) = *(esi + 0x34)
            *(ebx_1 + 0x38) = *(esi + 0x38)
            *(ebx_1 + 0x3c) = *(esi + 0x3c)
            arg1 = *(esi + 0x40)
            esi += 0x44
            cond:1_1 = esi != arg5
        *(ebx_1 + 0x40) = arg1
    while (cond:1_1)

int32_t var_18_3 = arg2
void* eax_15 = sub_68cec0(arg1, arg2, edi, ebp_1)
int32_t var_20_3 = arg2
return sub_68cec0(eax_15, arg5, esi, eax_15)
