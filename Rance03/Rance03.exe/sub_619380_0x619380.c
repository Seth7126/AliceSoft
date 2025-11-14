// 函数: sub_619380
// 地址: 0x619380
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_14 = 0xffffffff
int32_t (* var_18)(void* arg1) = sub_6cdd7e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_e8
int32_t eax_2 = __security_cookie ^ &var_e8
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_edi
(*(*arg1 + 0xc))(__security_cookie ^ &__saved_edi)
int32_t* result

if (sub_43aa00(0x6ec380, 0x6dcf50).b == 0)
    result.b = 0
else
    result = data_75d4dc
    
    if (result == 0)
        result.b = 0
    else
        int32_t eax_8 = (*(*arg2 + 0x10))()
        int32_t eax_9 = (*(*arg2 + 0x14))()
        char edx_3
        
        if (arg3 == 0)
            edx_3 = 0
        else if ((*(*arg1[2] + 0xf4))() == 0)
            edx_3 = 0
        else
            edx_3 = 1
        
        struct ISurface::graphengined3d11::CSurface::VTable* var_80
        struct ISurface::graphengined3d11::CSurface::VTable** ecx_3 = &var_80
        char var_e5_1 = edx_3
        sub_618fe0(ecx_3)
        int32_t var_14_1 = 0
        
        if (edx_3 == 0)
            goto label_61948e
        
        char eax_11 = sub_619270(ecx_3, arg2)
        char var_e5_2
        
        if (eax_11 != 0)
            int32_t var_78
            int32_t var_74
            (*(*result + 0x2c))(&var_80, 0, 0, var_78, var_74, 0, 0, 0xff)
            edx_3 = var_e5_1
        label_61948e:
            int32_t* edi_1 = &var_80
            
            if (edx_3 == 0)
                edi_1 = arg2
            
            int32_t* var_cc_1 = edi_1
            int32_t* var_d8_1
            int32_t* esi_1
            
            if (arg3 != 0)
                int32_t* eax_13 = sub_619a50(eax_8, eax_9)
                esi_1 = eax_13
                var_d8_1 = eax_13
            else
                esi_1 = 1
                var_d8_1 = 1
            
            int32_t* var_bc
            sub_619b10(&var_bc, esi_1)
            var_14_1.b = 1
            void* var_c8
            sub_619b60(&var_c8, esi_1)
            int32_t esi_2 = 0
            var_14_1.b = 2
            int32_t* edi_8
            
            if (var_d8_1 s<= 0)
            label_61961c:
                int32_t var_50
                _memset(&var_50, 0, 0x2c)
                edi_8 = var_bc
                var_50 = eax_8
                int32_t var_4c_1 = eax_9
                int32_t var_44_1 = 1
                int32_t var_40_1 = 0x1c
                int32_t var_3c_1 = 1
                int32_t var_38_1 = 0
                int32_t var_34_1 = 1
                int32_t var_30_1 = 8
                int32_t var_2c_1 = 0
                int32_t var_28_1 = 0
                int32_t* ecx_23 = *(arg1[2] + 0x34)
                
                if ((*(*ecx_23 + 0x14))(ecx_23, &var_50, edi_8, &arg1[3]) s< 0)
                    var_e5_2 = 0
                else
                    int128_t var_a0
                    __builtin_memset(&var_a0, 0, 0x18)
                    var_a0:0xc.d = var_d8_1
                    var_a0.d = 0x1c
                    var_a0:4.d = 4
                    var_a0:8.d = 0
                    int32_t* ecx_24 = *(arg1[2] + 0x34)
                    
                    if ((*(*ecx_24 + 0x1c))(ecx_24, arg1[3], &var_a0, &arg1[4]) s< 0)
                        var_e5_2 = 0
                    else
                        arg1[5] = arg2
                        (**arg2)()
                        arg1[6] = eax_8
                        arg1[7] = eax_9
                        arg1[8].b = (*(*arg2 + 0x24))()
                        *(arg1 + 0x21) = (*(*arg2 + 0x28))()
                        *(arg1 + 0x22) = arg3
                        int32_t eax_63 = (eax_9 * eax_8) << 2
                        arg1[9] = eax_63
                        
                        if (arg3 != 0)
                            int32_t eax_65
                            int32_t edx_14
                            edx_14:eax_65 = sx.q(eax_63 * 3)
                            arg1[9] = (eax_65 - edx_14) s>> 1
                        
                        var_e5_2 = 1
            else
                while (true)
                    if (esi_2 != 0)
                        int32_t* edi_4 = var_c8 - 0x30 + esi_2 * 0x30
                        char ecx_12 = esi_2.b
                        
                        if (sub_619120(edi_4, eax_8 s>> ecx_12, eax_9 s>> ecx_12) == 0)
                            edi_8 = var_bc
                            break
                        
                        if (var_e5_1 == 0)
                            int32_t* edx_8
                            
                            if (esi_2 != 1)
                                edx_8 = (esi_2 - 2) * 0x30 + var_c8
                            else
                                edx_8 = var_cc_1
                            
                            if (sub_619870(edi_4, edx_8) == 0)
                                edi_8 = var_bc
                                break
                                break
                        else
                            int32_t var_b0
                            int32_t var_ac
                            int32_t var_a8
                            sub_619aa0(&var_a8, &var_ac, esi_2, &var_a8, &var_b0)
                            (*(*result + 0x2c))(arg2, 0, 0, 
                                (*(*var_d8_1 + 0x10))((*(*edi_4 + 0x14))(var_ac, var_a8, var_b0)))
                        
                        void* edi_7 = &var_bc[esi_2 * 3]
                        *edi_7 = (*(*edi_4 + 8))(0, 0)
                        *(edi_7 + 4) = (*(*edi_4 + 0x1c))()
                        *(edi_7 + 8) = 0
                        edi_1 = var_cc_1
                    else
                        *var_bc = (*(*edi_1 + 8))(esi_2, esi_2)
                        int32_t eax_19 = (*(*edi_1 + 0x1c))()
                        int32_t* ecx_11 = var_bc
                        ecx_11[1] = eax_19
                        ecx_11[2] = esi_2
                    
                    esi_2 += 1
                    
                    if (esi_2 s>= var_d8_1)
                        goto label_61961c
                
                var_e5_2 = 0
            
            var_14_1.b = 1
            void* eax_68 = var_c8
            
            if (eax_68 != 0)
                void* esi_4 = eax_68
                int32_t var_c4
                
                if (eax_68 != var_c4)
                    do
                        (*(*esi_4 + 0x2c))(0)
                        esi_4 += 0x30
                    while (esi_4 != var_c4)
                    
                    eax_68 = var_c8
                
                j__free(eax_68)
            
            if (edi_8 != 0)
                j__free(edi_8)
        else
            var_e5_2 = eax_11
        
        var_80 = &graphengined3d11::CSurface::`vftable'{for `ISurface'}
        int32_t* var_60
        
        if (var_60 != 0)
            j__free(var_60)
        
        result.b = var_e5_2

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_e8)
return result
