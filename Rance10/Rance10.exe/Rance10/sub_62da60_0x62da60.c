// 函数: sub_62da60
// 地址: 0x62da60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* edi = arg3
int32_t ebp = arg2
void* ecx = arg4

if (*(ecx + 8) == 0)
    return ebp

void* ebx = edi

if (edi != ebp)
    int32_t esi_1 = *(ecx + 4)
    
    do
        arg2.b = *edi
        int32_t eax_4
        uint32_t var_c
        
        if ((arg2.b u< 0x81 || arg2.b u> 0x9f) && arg2.b + 0x20 u> 0xf)
            var_c = zx.d(arg2.b)
            int32_t var_4
            sub_630e60(ecx, &var_4, &var_c)
            
            if (var_4 == esi_1)
                ebx = &edi[1]
            
            eax_4 = 1
        else
            ecx.w = sx.w(edi[1])
            ecx.w &= 0xff
            ecx.w |= sx.w(arg2.b) << 8
            var_c = zx.d(ecx.w)
            void* var_8
            sub_630e60(arg4, &var_8, &var_c)
            
            if (var_8 == esi_1)
                ebx = &edi[2]
            
            eax_4 = 2
        ecx = arg4
        edi = &edi[eax_4]
    while (edi != ebp)

return ebx
