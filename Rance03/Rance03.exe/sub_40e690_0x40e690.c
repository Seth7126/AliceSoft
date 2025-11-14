// 函数: sub_40e690
// 地址: 0x40e690
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
*(arg1 + 0x70) = 0
int32_t* ebx_1 = *(arg2 + 0x10)
int32_t* eax

if (ebx_1 != 0)
    int32_t esi_1 = *ebx_1
    int32_t* ebp_1 = (*(esi_1 + 4))((*(esi_1 + 0x20))())
    
    if (ebp_1 != 0)
        eax = (*(*ebp_1 + 0x14))()
        int32_t arg_4
        int32_t esi_2 = arg_4
        
        if (eax s>= esi_2)
            int32_t eax_4 = (*(*ebp_1 + 0x18))()
            int32_t edx_1 = *(arg1 + 4)
            void* esi_3 = *(eax_4 + (esi_2 << 2))
            int32_t eax_13
            
            if (edx_1 == 0xa || edx_1 == 0x2f || edx_1 == 0xb)
                *(arg1 + 0x3c) = (*(*ebx_1 + 0x20))()
                *(arg1 + 0x40) = arg_4
                int32_t eax_29 = *(arg1 + 4)
                
                if (eax_29 == 0xa)
                    *(arg1 + 0x44) = esi_3
                    *(arg1 + 0x70) = 1
                else
                    if (eax_29 == 0xb)
                        *(arg1 + 0x70) = 1
                        int32_t eax_30
                        eax_30.b = *(arg1 + 0x70)
                        *(arg1 + 0x48) = esi_3
                        return eax_30
                    
                    if (eax_29 == 0x2f)
                        *(arg1 + 0x44) = esi_3
                        *(arg1 + 0x70) = 1
                
                eax_13.b = *(arg1 + 0x70)
                return eax_13
            
            if (sub_410000(arg1) == 0)
                if (edx_1 == 0xc || edx_1 == 0x14)
                    *(arg1 + 0x3c) = esi_3
                    char eax_25 = sub_40ec10(arg1 + 0x4c, (*(*ebx_1 + 4))(esi_3))
                    *(arg1 + 0x70) = eax_25
                    return eax_25
                
                if (edx_1 == 0xd || edx_1 == 0x15)
                    *(arg1 + 0x3c) = esi_3
                    char eax_22 =
                        sub_40ec90(arg2, arg1 + 0x64, arg1 + 0xc, *(arg2 + 0x14), ebx_1, esi_3)
                    *(arg1 + 0x70) = eax_22
                    return eax_22
                
                if (edx_1 == 0x3f || edx_1 == 0x43)
                    *(arg1 + 0x3c) = esi_3
                    char eax_20 = sub_40ec60(arg1 + 0x44, (*(*ebx_1 + 4))(esi_3))
                    *(arg1 + 0x70) = eax_20
                    return eax_20
                
                if (sub_421030(arg1 + 4).b == 0)
                    eax_13.b = *(arg1 + 0x70)
                    return eax_13
                
                *(arg1 + 0x3c) = esi_3
                *(arg1 + 8) = (*(*ebx_1 + 0x24))(esi_3)
                char eax_17 =
                    sub_40ee60(arg2, *(arg2 + 0x14), arg1 + 0x64, ebx_1, *(arg1 + 0x3c), arg1 + 4)
                *(arg1 + 0x70) = eax_17
                return eax_17
            
            if ((*(*ebp_1 + 0x14))() s>= arg_4 + 1)
                *(arg1 + 0x3c) = esi_3
                int32_t eax_9 = *((*(*ebp_1 + 0x18))() + (arg_4 << 2) + 4)
                int32_t var_1c_1 = *(arg1 + 0x3c)
                *(arg1 + 0x40) = eax_9
                int32_t* eax_11 = (*(*ebx_1 + 4))(var_1c_1)
                
                if (sub_40ebc0(eax_11, eax_11, &arg_4, eax_9).b != 0)
                    if (*(arg1 + 4) != 0x13)
                        *(arg1 + 0x44) = arg_4
                        *(arg1 + 0x70) = 1
                        int32_t eax_12
                        eax_12.b = *(arg1 + 0x70)
                        return eax_12
                    
                    int32_t xmm0 = arg_4
                    *(arg1 + 0x70) = 1
                    eax.b = *(arg1 + 0x70)
                    *(arg1 + 0x48) = xmm0
                    return eax

eax.b = 0
return eax
