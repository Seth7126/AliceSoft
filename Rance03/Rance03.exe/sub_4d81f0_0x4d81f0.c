// 函数: sub_4d81f0
// 地址: 0x4d81f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t var_4 = arg1
sub_4a8230(arg1 + 0x100)
sub_4b51e0(arg1 + 0xc0)
sub_4b51e0(arg1 + 0xcc)
bool cond:0 = data_75d534 == 0
*(arg1 + 0xc) = *(arg1 + 8)
*(arg1 + 0x2c) = *(arg1 + 0x28)
*(arg1 + 0x38) = *(arg1 + 0x34)
*(arg1 + 4) = 0

if (not(cond:0))
    void* var_18_2 = arg1 + 0x34
    int32_t* eax_5 = sub_6203f0()
    
    if (eax_5 != 0)
        int32_t* eax_6 = (**eax_5)(0x6e194c)
        
        if (eax_6 != 0)
            (*(*eax_6 + 0xf8))()
            (*(*eax_6 + 4))()

uint32_t arg_8
void* esi_2 = arg_8
char* ecx_5 = *(esi_2 + 4)
void* result

if (&ecx_5[1] u<= *(esi_2 + 8))
    result.b = *ecx_5 == 1
    *(arg1 + 4) = result.b
    *(esi_2 + 4) += 1
    char* edx_4 = *(esi_2 + 4)
    
    if (&edx_4[4] u<= *(esi_2 + 8))
        *(arg1 + 0x20) =
            ((zx.d(edx_4[3]) << 8 | zx.d(edx_4[2])) << 8 | zx.d(edx_4[1])) << 8 | zx.d(*edx_4)
        *(esi_2 + 4) += 4
        void* ecx_14
        result, ecx_14 = sub_468b20(esi_2, arg1 + 0x24)
        
        if (result.b != 0)
            void* var_18_4 = esi_2
            void* ecx_16
            result, ecx_16 = sub_4bdee0(arg1 + 0x40, ecx_14)
            
            if (result.b != 0)
                void* var_18_5 = esi_2
                
                if (sub_4bdee0(arg1 + 0x5c, ecx_16).b != 0
                        && sub_4d8f60(arg1 + 0x90, arg2, esi_2).b != 0)
                    if (arg2 s< 7)
                    label_4d835d:
                        
                        if (sub_468b20(esi_2, &arg_8).b != 0)
                            uint32_t ebp_3 = arg_8
                            int32_t edi_2 = 0
                            
                            if (ebp_3 s> 0)
                                do
                                    if (sub_468b20(esi_2, &var_4).b == 0)
                                        goto label_4d843b
                                    
                                    sub_4158d0(arg1 + 0x28, &var_4)
                                    edi_2 += 1
                                while (edi_2 s< ebp_3)
                            
                            int32_t ecx_26
                            result, ecx_26 = sub_468b20(esi_2, &arg_8)
                            
                            if (result.b != 0)
                                uint32_t ebp_4 = arg_8
                                int32_t edi_3 = 0
                                
                                if (ebp_4 s> 0)
                                    do
                                        if (sub_468b20(esi_2, &arg_8).b == 0)
                                            goto label_4d843b
                                        
                                        ecx_26 = sub_4158d0(arg1 + 0x34, &arg_8)
                                        edi_3 += 1
                                    while (edi_3 s< ebp_4)
                                
                                if (*(arg1 + 4) != 0)
                                    int32_t var_18_16 = ecx_26
                                    sub_50c2b0(arg1 + 0xac, *(arg1 + 0x20), arg1 + 0x90)
                                
                                if (sub_4a9180(arg1 + 0x100, arg2, esi_2).b != 0
                                        && sub_4b63e0(arg1 + 0xbc, arg2, esi_2).b != 0)
                                    void* var_18_19 = esi_2
                                    return sub_4d0080(arg1 + 0xf0, arg1 + 0xbc) != 0
                    else if (sub_468b20(esi_2, &arg_8).b != 0)
                        uint32_t ebp_2 = arg_8
                        int32_t edi_1 = 0
                        
                        if (ebp_2 s> 0)
                            do
                                if (sub_468b20(esi_2, &var_4).b == 0)
                                    goto label_4d843b
                                
                                sub_4158d0(arg1 + 8, &var_4)
                                edi_1 += 1
                            while (edi_1 s< ebp_2)
                        
                        goto label_4d835d

label_4d843b:
result.b = 0
return result
