// 函数: sub_58c3c0
// 地址: 0x58c3c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6c7b48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 4) != 0 && *(arg1 + 0x510) != 0 && sub_58a8e0(arg1, 0) != 0)
    void* eax_4 = *(arg1 + 4)
    struct sealengine::CRenderTarget::VTable* var_34 = &sealengine::CRenderTarget::`vftable'
    int32_t* var_30 = nullptr
    int32_t var_2c = 0
    int32_t j_3 = *(eax_4 + 0x160)
    int32_t i_1 = *(eax_4 + 0x164)
    int32_t var_28 = 0
    char var_24 = 0
    int32_t var_20 = 0
    char var_1c = 0
    int32_t var_c_1 = 0
    
    if (sub_58d270(&var_34, j_3, j_3, i_1, 1, 0, 1, *(arg1 + 8)) == 0)
        i_1.b = 0
    else if ((*(**(arg1 + 8) + 0x6c))(eax_2) == 0)
        i_1.b = 0
    else if (sub_58d350(&var_34) == 0)
        i_1.b = 0
    else
        int32_t* ecx_5 = *(arg1 + 8)
        int32_t* var_50_1 = ecx_5
        
        if ((*(*ecx_5 + 0x64))(0, 0x3f800000) == 0)
            i_1.b = 0
        else
            char eax_13
            int80_t st0_1
            st0_1, eax_13 = sub_58ae40(arg1)
            
            if (eax_13 == 0)
                i_1.b = 0
            else if (sub_58d370(&var_34) == 0)
                i_1.b = 0
            else if ((*(**(arg1 + 8) + 0x74))() == 0)
                i_1.b = 0
            else
                int32_t* edi = sub_58f3f0(*(arg1 + 0x510), j_3, i_1)
                
                if (edi == 0)
                    i_1.b = 0
                else if (var_30 != 0)
                    bool cond:0_1 = (*(*var_30 + 0x40))(edi) != 0
                    int32_t eax_22 = *edi
                    
                    if (cond:0_1)
                        char* esi_1 = (*(eax_22 + 8))(0, 0)
                        int32_t j_2 = j_3
                        int32_t edx_4 = (*(*edi + 0x1c))() - (j_2 << 2)
                        int32_t var_38_1 = edx_4
                        
                        if (i_1 s> 0)
                            int32_t i
                            
                            do
                                if (j_2 s> 0)
                                    int32_t j_1 = j_2
                                    int32_t j
                                    
                                    do
                                        uint32_t eax_25 = zx.d(*esi_1)
                                        *(arg2 + (eax_25 << 2)) += 1
                                        uint32_t eax_26 = zx.d(esi_1[1])
                                        *(arg2 + (eax_26 << 2)) += 1
                                        uint32_t eax_27 = zx.d(esi_1[2])
                                        esi_1 = &esi_1[4]
                                        *(arg2 + (eax_27 << 2)) += 1
                                        j = j_1
                                        j_1 -= 1
                                    while (j != 1)
                                    j_2 = j_3
                                    edx_4 = var_38_1
                                
                                esi_1 = &esi_1[edx_4]
                                i = i_1
                                i_1 -= 1
                            while (i != 1)
                        
                        (*(*edi + 4))()
                        i_1.b = 1
                    else
                        (*(eax_22 + 4))()
                        i_1.b = 0
                else
                    (*(*edi + 4))()
                    i_1.b = 0
    
    int32_t var_c_2 = 0xffffffff
    sub_58d230(&var_34)
    int32_t result
    result.b = i_1.b
    fsbase->NtTib.ExceptionList = ExceptionList
    return result

fsbase->NtTib.ExceptionList = ExceptionList
return 0
