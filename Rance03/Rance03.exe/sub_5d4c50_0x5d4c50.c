// 函数: sub_5d4c50
// 地址: 0x5d4c50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx = arg2
void* edi = arg1
void* var_8 = edi
uint32_t esi_1 = *(edi + 0xc) u>> 2
uint32_t eax

if (ebx s> 0)
    void* ebp_1 = edi + 4
    int32_t ecx_1
    eax, ecx_1 = sub_64aeb0(ebp_1, ebx << 2)
    
    if (eax.b != 0)
        switch (*(edi + 0x3c) - 0xe)
            case 0, 1, 0x10, 0x24
                if (esi_1 s>= ebx)
                    eax.b = 1
                    return eax
                
                int32_t eax_3
                
                do
                    if (*(ebp_1 + 8) != 0)
                        eax_3 = *(ebp_1 + 4)
                    else
                        eax_3 = 0
                    
                    *(eax_3 + (esi_1 << 2)) = 0
                    esi_1 += 1
                while (esi_1 s< ebx)
                
                eax_3.b = 1
                return eax_3
            case 2, 0xa
                if (esi_1 s>= ebx)
                    eax.b = 1
                    return eax
                
                while (true)
                    int32_t ebx_1 = *(edi + 0x1c)
                    int32_t eax_4 = sub_5d5dc0(ebx_1)
                    *(*(ebx_1 + 8) + (eax_4 << 2)) = sub_5d5920(ebx_1 + 0x1c)
                    
                    if (eax_4 s< 0)
                        break
                    
                    int32_t eax_5
                    
                    if (*(ebp_1 + 8) != 0)
                        eax_5 = *(ebp_1 + 4)
                    else
                        eax_5 = 0
                    
                    edi = var_8
                    *(eax_5 + (esi_1 << 2)) = eax_4
                    esi_1 += 1
                    
                    if (esi_1 s>= arg2)
                        eax_5.b = 1
                        return eax_5
            case 3, 0xb
                eax = *(edi + 0x40)
                uint32_t var_4_2 = eax
                
                if (esi_1 s>= ebx)
                    eax.b = 1
                    return eax
                
                while (sub_5d6c90(*(edi + 0x1c), eax, &arg2, 1).b != 0)
                    int32_t ecx_8
                    
                    if (*(ebp_1 + 8) != 0)
                        ecx_8 = *(ebp_1 + 4)
                    else
                        ecx_8 = 0
                    
                    *(ecx_8 + (esi_1 << 2)) = arg2
                    esi_1 += 1
                    eax = var_4_2
                    
                    if (esi_1 s>= ebx)
                        eax.b = 1
                        return eax
            case 0x34, 0x36
                if (esi_1 s< ebx)
                    do
                        int32_t ebx_2 = *(edi + 0x1c)
                        int32_t eax_7 = sub_5d5dc0(ebx_2)
                        *(*(ebx_2 + 8) + (eax_7 << 2)) = sub_5d5ae0(ebx_2 + 0x1c)
                        
                        if (eax_7 s< 0)
                            goto label_5d4dd5
                        
                        if (*(ebp_1 + 8) != 0)
                            eax = *(ebp_1 + 4)
                        else
                            eax = 0
                        
                        edi = var_8
                        *(eax + (esi_1 << 2)) = eax_7
                        esi_1 += 1
                    while (esi_1 s< arg2)
                
                eax.b = 1
                return eax

label_5d4dd5:
eax.b = 0
return eax
