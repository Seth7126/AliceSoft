// 函数: sub_68fd30
// 地址: 0x68fd30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = arg6
void** eax = arg3
void* ebx = arg2
void** var_8 = eax
void* edi = arg5
int32_t var_4

if (eax != ebx && arg4 != edi)
    char* var_18_1 = esi + 0xc
    int32_t* var_1c_1 = esi + 0x28
    eax = edi + 0xc
    void* ebp_1 = ebx + 0xc
    
    while (true)
        int32_t edx = *(ebp_1 - 0x34)
        ebp_1 -= 0x44
        void** eax_2 = eax - 0x44
        ebx -= 0x44
        edi -= 0x44
        void** var_14_1 = eax_2
        int32_t* var_10_1
        
        if (*(ebp_1 + 0x14) u< 0x10)
            var_10_1 = ebp_1
        else
            var_10_1 = *ebp_1
        
        int32_t ecx_3 = eax_2[4]
        var_4 = ecx_3
        
        if (eax_2[5] u>= 0x10)
            eax_2 = *eax_2
        
        int32_t eax_3 = edx
        
        if (ecx_3 u< edx)
            eax_3 = ecx_3
        
        int32_t eax_4 = sub_405190(eax_3, var_10_1, eax_2, eax_3)
        bool cond:2_1 = eax_4 s< 0
        
        if (eax_4 != 0)
            goto label_68fdd7
        
        int32_t edx_2 = *(ebp_1 + 0x10)
        
        if (var_4 u>= edx_2)
            eax_4.b = var_4 != edx_2
            cond:2_1 = eax_4 s< 0
        label_68fdd7:
            
            if (not(cond:2_1))
                eax_4.b = *(edi + 4)
                esi -= 0x44
                var_1c_1 -= 0x44
                void* ecx_7 = var_18_1 - 0x44
                var_18_1 = ecx_7
                *(esi + 4) = eax_4.b
                *(esi + 8) = *(edi + 8)
                
                if (ecx_7 != var_14_1)
                    sub_401ff0(ecx_7, var_14_1, 0, 0xffffffff)
                
                *(esi + 0x24) = *(edi + 0x24)
                sub_4a6db0(var_1c_1, edi + 0x28)
                ebx += 0x44
                *(esi + 0x34) = *(edi + 0x34)
                ebp_1 += 0x44
                *(esi + 0x38) = *(edi + 0x38)
                *(esi + 0x3c) = *(edi + 0x3c)
                eax = *(edi + 0x40)
                *(esi + 0x40) = eax
                
                if (arg4 == edi)
                    break
                
                eax = var_14_1
                continue
        
        esi -= 0x44
        eax_4.b = *(ebx + 4)
        char* ecx_10 = var_18_1 - 0x44
        var_1c_1 -= 0x44
        var_18_1 = ecx_10
        *(esi + 4) = eax_4.b
        *(esi + 8) = *(ebx + 8)
        
        if (ecx_10 != ebp_1)
            sub_401ff0(ecx_10, ebp_1, 0, 0xffffffff)
        
        *(esi + 0x24) = *(ebx + 0x24)
        sub_4a6db0(var_1c_1, ebx + 0x28)
        edi += 0x44
        *(esi + 0x34) = *(ebx + 0x34)
        *(esi + 0x38) = *(ebx + 0x38)
        *(esi + 0x3c) = *(ebx + 0x3c)
        *(esi + 0x40) = *(ebx + 0x40)
        eax = &var_14_1[0x11]
        
        if (var_8 == ebx)
            break

int32_t var_30_4 = var_4
void* eax_20 = sub_6937f0(eax, edi, arg4, esi)
int32_t var_38_3 = var_4
return sub_6937f0(eax_20, ebx, var_8, eax_20)
