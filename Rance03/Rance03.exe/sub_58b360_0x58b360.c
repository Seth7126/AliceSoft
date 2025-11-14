// 函数: sub_58b360
// 地址: 0x58b360
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_c0
int32_t eax_1 = __security_cookie ^ &var_c0
void* ebp = arg3
void* edi = arg1
int32_t var_b8
int32_t* var_b4
int32_t* eax_2
void* ebx_1

if (*(edi + 0x304) != 0)
    ebx_1 = *(edi + 4)
    var_b8 = 2
    sub_42f3d0(ebx_1 + 0x16c, &var_b4, &var_b8)
    eax_2 = var_b4

char var_b9

if (*(edi + 0x304) == 0 || eax_2 == *(ebx_1 + 0x16c) || eax_2[5] s<= 0 || *(ebx_1 + 0x3c) == 0)
    var_b9 = 0
    
    if (sub_58b8f0(edi, edi).b != 0)
        goto label_58b415
    
    eax_2.b = 0
else
    int32_t* ecx_1 = *(edi + 0x2f0)
    var_b9 = 1
    
    if (ecx_1 == 0)
        eax_2.b = 0
    else if ((*(*ecx_1 + 0x34))().b == 0)
        eax_2.b = 0
    else
        int32_t* ecx_2 = *(edi + 8)
        int32_t* var_d4_2 = ecx_2
        (*(*ecx_2 + 0x64))(0, 0x3f800000)
    label_58b415:
        
        if (sub_5291f0(edi + 0x498, *(edi + 8)).b == 0)
            eax_2.b = 0
        else if (*(edi + 0x150) == 0)
        label_58b4fc:
            void* ebx_2 = edi + 0xc
            int32_t eax_15
            int32_t ecx_16
            int32_t edx_2
            eax_15, ecx_16, edx_2 = sub_5344a0(ebp, 0, ebx_2, *(edi + 8))
            
            if (eax_15.b != 0)
                void* esi_1 = *(edi + 4)
                var_b8 = 0
                sub_42f3d0(esi_1 + 0x16c, &var_b4, &var_b8)
                int32_t* eax_16 = var_b4
                
                if (eax_16 == *(esi_1 + 0x16c) || eax_16[5] s<= 0)
                    goto label_58b5ae
                
                int32_t* ecx_20 = *(edi + 8)
                *(edi + 0xe0) = 1
                (*(*ecx_20 + 0xd0))(1)
                eax_15, ecx_16, edx_2 = sub_5344a0(ebp, 1, ebx_2, *(edi + 8))
                
                if (eax_15.b != 0)
                    (*(**(edi + 8) + 0xd0))(2)
                    *(edi + 0xe0) = 0
                label_58b5ae:
                    
                    if (sub_58c780(ebx_2).b == 0)
                        eax_2.b = 0
                    else
                        void* ecx_24 = *(edi + 4)
                        
                        if (((*(ecx_24 + 0x1a4) - *(ecx_24 + 0x1a0)) & 0xfffffffc) s> 0x14)
                            eax_2 = *(*(ecx_24 + 0x1a0) + 0x14)
                        else
                            eax_2 = nullptr
                        
                        eax_2.b = eax_2 == 4
                        var_b8.b = eax_2.b
                        
                        if (*(edi + 0x3d0) == 0)
                            goto label_58b6cc
                        
                        int32_t xmm0_2 = (zx.o(0)).d
                        int32_t eax_24 = *(ecx_24 + 0x1bc) - *(ecx_24 + 0x1b8)
                        var_b4 = nullptr
                        int32_t xmm1_2
                        
                        if ((eax_24 & 0xfffffffc) s> 0)
                            xmm1_2 = **(ecx_24 + 0x1b8)
                        else
                            xmm1_2 = (zx.o(0)).d
                        
                        if (((*(ecx_24 + 0x1bc) - *(ecx_24 + 0x1b8)) & 0xfffffffc) s> 4)
                            xmm0_2 = *(*(ecx_24 + 0x1b8) + 4)
                        
                        if (((*(ecx_24 + 0x1bc) - *(ecx_24 + 0x1b8)) & 0xfffffffc) s> 8)
                            var_b4 = *(*(ecx_24 + 0x1b8) + 8)
                        
                        char var_d4_11 = var_b8.b
                        int32_t eax_34
                        int16_t x87control
                        int16_t x87control_1
                        int80_t st0_1
                        st0_1, eax_34, x87control_1 = sub_6b0e80(x87control, xmm1_2 f* 255f)
                        int32_t eax_35
                        int16_t x87control_2
                        int80_t st0_2
                        st0_2, eax_35, x87control_2 = sub_6b0e80(x87control_1, xmm0_2 f* 255f)
                        int32_t eax_36
                        int80_t st0_3
                        st0_3, eax_36 = sub_6b0e80(x87control_2, var_b4 f* 255f)
                        eax_2, ebx_2, ebp, edi = sub_59c2a0(edi + 0x3d4, *(edi + 8), 
                            (eax_34 << 8 | eax_35) << 8 | eax_36, var_d4_11, arg2.b)
                        
                        if (eax_2.b == 0)
                            eax_2.b = 0
                        else
                            eax_2.b = var_b8.b
                        label_58b6cc:
                            
                            if (eax_2.b != 0)
                            label_58b73e:
                                void* ecx_32 = *(edi + 4)
                                
                                if (((*(ecx_32 + 0x1a4) - *(ecx_32 + 0x1a0)) & 0xfffffffc) s<= 0x10
                                    || *(*(ecx_32 + 0x1a0) + 0x10) s<= 0)
                                label_58b79b:
                                    void* ecx_34 = *(edi + 4)
                                    
                                    if (((*(ecx_34 + 0x1a4) - *(ecx_34 + 0x1a0)) & 0xfffffffc) s> 4
                                            && *(*(ecx_34 + 0x1a0) + 4) != 0)
                                        eax_2 = (**(edi + 0x4f8))(6, ebx_2, *(edi + 8))
                                    
                                    if (((*(ecx_34 + 0x1a4) - *(ecx_34 + 0x1a0)) & 0xfffffffc) s> 4
                                            && *(*(ecx_34 + 0x1a0) + 4) != 0 && eax_2.b == 0)
                                        eax_2.b = 0
                                    else if (sub_58c780(ebx_2).b == 0)
                                        eax_2.b = 0
                                    else if (var_b9 == 0)
                                    label_58b8b4:
                                        int32_t* ecx_41 = *(edi + 0x2e8)
                                        
                                        if (ecx_41 == 0)
                                            eax_2.b = 0
                                        else
                                            eax_15, edx_2, ecx_16 = (*(*ecx_41 + 0xc))(arg2)
                                            
                                            if (eax_15.b != 0)
                                                eax_15.b = 1
                                            else
                                                sub_59f4e0(eax_15, edx_2, ecx_16, 0x6e58c4, arg2)
                                                eax_2.b = 0
                                    else if (sub_58d370(edi + 0x2ec).b == 0)
                                        eax_2.b = 0
                                    else if (sub_58b8f0(edi, edi).b == 0)
                                        eax_2.b = 0
                                    else
                                        void* ebx_3 = *(edi + 4)
                                        var_b8 = 2
                                        sub_42f3d0(ebx_3 + 0x16c, &var_b4, &var_b8)
                                        eax_2 = var_b4
                                        
                                        if (eax_2 == *(ebx_3 + 0x16c) || eax_2[5] s<= 0
                                                || *(edi + 0x3ac) == 0 || *(ebx_3 + 0x3c) == 0)
                                            goto label_58b8b4
                                        
                                        eax_2 = sub_5342e0(edi + 0x308, *(edi + 0x2f0), 
                                            *(edi + 0x3b8), *(edi + 8), *(ebx_3 + 0x140), 
                                            *(ebx_3 + 0x40), *(ebx_3 + 0x44), 
                                            *(ebx_3 + 0x48) * 0.00100000005f)
                                        
                                        if (eax_2.b != 0)
                                            goto label_58b8b4
                                        
                                        eax_2.b = 0
                                else
                                    int32_t* eax_43 = *(edi + 0x15c)
                                    
                                    if (eax_43 == *(edi + 0x160))
                                        goto label_58b79b
                                    
                                    int32_t* ebp_1 = *(edi + 8)
                                    int32_t* esi_7 = eax_43
                                    
                                    if (esi_7 == *(edi + 0x160))
                                        goto label_58b79b
                                    
                                    while (true)
                                        eax_15, ecx_16, edx_2 = sub_596ab0(*esi_7, ebp_1)
                                        
                                        if (eax_15.b == 0)
                                            break
                                        
                                        esi_7 = &esi_7[1]
                                        
                                        if (esi_7 == *(edi + 0x160))
                                            goto label_58b79b
                                    
                                    sub_59f4e0(eax_15, edx_2, ecx_16, 0x6e5910, arg2)
                                    eax_2.b = 0
                            else
                                (*(**(edi + 8) + 0xcc))(0)
                                
                                if (sub_5344a0(ebp, 2, ebx_2, *(edi + 8)).b == 0)
                                    eax_2.b = 0
                                else
                                    (*(**(edi + 8) + 0xcc))(1)
                                    
                                    if (sub_5344a0(ebp, 4, ebx_2, *(edi + 8)).b == 0)
                                        eax_2.b = 0
                                    else if (sub_5344a0(ebp, 5, ebx_2, *(edi + 8)).b == 0)
                                        eax_2.b = 0
                                    else
                                        eax_2 = sub_5344a0(ebp, 6, ebx_2, *(edi + 8))
                                        
                                        if (eax_2.b != 0)
                                            goto label_58b73e
                                        
                                        eax_2.b = 0
                else
                    sub_59f4e0(eax_15, edx_2, ecx_16, 0x6e593c, arg2)
                    eax_2.b = 0
            else
                sub_59f4e0(eax_15, edx_2, ecx_16, 0x6e5958, arg2)
                eax_2.b = 0
        else
            *(edi + 0xb8) = 1
            
            if (((*(edi + 0x160) - *(edi + 0x15c)) & 0xfffffffc) s<= 0)
                eax_2.b = 0
            else
                void* ecx_5 = **(edi + 0x15c)
                
                if (ecx_5 == 0)
                    eax_2.b = 0
                else
                    if ((*(**(ecx_5 + 0x48) + 0x2c))(5, 1, 0, 1).b != 0)
                        void* edx_1 = *(edi + 4)
                        int32_t* eax_11 = *(edx_1 + 0xa8)
                        int32_t xmm1_1
                        
                        if (((*(edx_1 + 0xac) - *(edx_1 + 0xa8)) & 0xfffffffc) s> 0)
                            xmm1_1 = *eax_11
                        else
                            xmm1_1 = eax_11[((*(edx_1 + 0xac) - eax_11) s>> 2) - 1]
                        
                        void* var_d4_4 = edx_1 + 0x60
                        var_b8 = *(edx_1 + 0x88)
                        float var_ac
                        float* eax_12
                        int32_t ecx_11
                        eax_12, ecx_11 = sub_59f780(edx_1 + 0x60, &var_ac)
                        int32_t var_dc_1 = ecx_11
                        void var_a0
                        int128_t* eax_13 = sub_59b770(edi + 0x158, &var_a0)
                        struct IRenderShadowParam::sealengine::CRenderShadowParam::VTable* var_60
                        sub_58cb30(edi + 0x10, sub_58d160(&var_60, var_b8, eax_13, eax_12, xmm1_1))
                        goto label_58b4fc
                    
                    eax_2.b = 0
sub_69a5bc(eax_1 ^ &var_c0)
