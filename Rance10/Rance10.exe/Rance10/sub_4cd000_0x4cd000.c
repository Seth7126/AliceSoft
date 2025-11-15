// 函数: sub_4cd000
// 地址: 0x4cd000
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?SetTaskExecutionResources@ResourceManager@details@Concurrency@@SAXGPAU_GROUP_AFFINITY@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg2
void* var_84 = ebx
int32_t* var_6c = arg3
char* edx = *(ebx + 4)
int32_t ecx = *(ebx + 8)
uint32_t result

if (&edx[4] u> ecx)
labelid_8:
    result.b = 0
else
    uint32_t esi_7 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *(ebx + 4) = &edx[4]
    
    if (esi_7 s< 0)
    labelid_8:
        result.b = 0
    else
        int32_t* var_68 = nullptr
        
        if (esi_7 == 0)
            goto label_4cd115
        
        if (&edx[4 + esi_7] u> ecx)
        label_4cd266:
            result.b = 0
        else
            char* var_7c
            sub_431b80(&var_7c, esi_7)
            int32_t var_8_1 = 0
            char* edi_1 = var_7c
            
            if (sub_6c9430(ebx, edi_1, esi_7) == 0)
            label_4cd261:
                sub_4059a0(&var_7c)
            label_4cd266_1:
                result.b = 0
            else
                if (sub_6c9230(ebx, ((esi_7 + 3) & 0xfffffffc) - esi_7) == 0)
                    goto label_4cd261
                
                int32_t* eax_11 = (*(*var_6c + 8))(edi_1, esi_7)
                var_68 = eax_11
                
                if (eax_11 == 0)
                    goto label_4cd261
                
                void* var_9c
                sub_4cfa60(arg1 + 0x4c, &var_9c, &var_68)
                int32_t var_8_2 = 0xffffffff
                *(var_9c + 0x14) = 1
                sub_4059a0(&var_7c)
            label_4cd115:
                uint32_t var_70 = 0
                
                if (sub_61ec90(ebx, &var_70).b == 0)
                label_4cd266_2:
                    result.b = 0
                else
                    int32_t var_6c_1 = 0
                    
                    if (var_70 s> 0)
                        while (true)
                            if (*(ebx + 4) + 4 u> *(ebx + 8))
                                goto label_4cd266_2
                            
                            char* ecx_9 = *(ebx + 4)
                            uint32_t esi_14 =
                                ((zx.d(ecx_9[3]) << 8 | zx.d(ecx_9[2])) << 8 | zx.d(ecx_9[1])) << 8
                                | zx.d(*ecx_9)
                            *(ebx + 4) = &ecx_9[4]
                            sub_431b80(&var_7c, esi_14)
                            int32_t var_8_3 = 1
                            char* ecx_11 = *(ebx + 4)
                            char* edi_2 = var_7c
                            
                            if (&ecx_11[esi_14] u<= *(ebx + 8))
                                sub_700660(edi_2, ecx_11, esi_14)
                                *(ebx + 4) += esi_14
                                int32_t var_78
                                void* ecx_13 = var_78 - edi_2
                                int32_t eax_18 = 0
                                
                                if (ecx_13 s> 0)
                                    do
                                        edi_2[eax_18] ^= 0x55
                                        eax_18 += 1
                                    while (eax_18 s< ecx_13)
                                
                                void* var_f8_9 = ecx_13
                                void var_64
                                sub_47cdd0(&var_64, edi_2, var_78)
                                var_8_3.b = 2
                                int32_t eax_20 = *(ebx + 4) + ((esi_14 + 3) & 0xfffffffc) - esi_14
                                
                                if (eax_20 u<= *(ebx + 8))
                                    *(ebx + 4) = eax_20
                                    uint32_t var_94
                                    uint32_t var_90
                                    uint32_t var_8c
                                    uint32_t var_88
                                    
                                    if (sub_61ec90(ebx, &var_94) != 0
                                            && sub_61ec90(ebx, &var_90) != 0
                                            && sub_61ec90(ebx, &var_8c) != 0
                                            && sub_61ec90(ebx, &var_88) != 0)
                                        if (var_68 != 0)
                                            struct common::CRect::VTable* var_d8
                                            sub_4049d0(&var_d8, var_94, var_90, var_8c, var_88)
                                            struct common::CRect::VTable* const var_b8_1 =
                                                &common::CRect::`vftable'
                                            struct common::CPoint::VTable* const var_b4_1 =
                                                &common::CPoint::`vftable'
                                            int32_t var_b0_1 = 0
                                            int32_t var_ac_1 = 0
                                            struct common::CSize::VTable* const var_a8_1 =
                                                &common::CSize::`vftable'
                                            int32_t var_a4_1 = 0
                                            int32_t var_a0_1 = 0
                                            var_8_3.b = 4
                                            int32_t* ecx_29 = var_68
                                            int32_t* var_bc_1 = ecx_29
                                            (**ecx_29)(eax_2)
                                            int32_t var_d0
                                            int32_t var_b0_2 = var_d0
                                            int32_t var_cc
                                            int32_t var_ac_2 = var_cc
                                            int32_t var_c4
                                            int32_t var_a4_2 = var_c4
                                            int32_t var_c0
                                            int32_t var_a0_2 = var_c0
                                            var_8_3.b = 5
                                            int32_t var_38_1 = 0xf
                                            int32_t var_3c_1 = 0
                                            char var_4c = 0
                                            int32_t* var_34_1 = ecx_29
                                            struct common::CRect::VTable* const var_30_1 =
                                                &common::CRect::`vftable'
                                            struct common::CPoint::VTable* const var_2c_1 =
                                                &common::CPoint::`vftable'
                                            int32_t var_28_1 = var_d0
                                            int32_t var_24_1 = var_cc
                                            struct common::CSize::VTable* const var_20_1 =
                                                &common::CSize::`vftable'
                                            int32_t var_1c_1 = var_c4
                                            int32_t var_18_1 = var_c0
                                            var_8_3.b = 6
                                            void* var_f8_15 = var_84
                                            char* var_fc_7 = &var_4c
                                            void* var_e0
                                            sub_4cf690(arg1 + 0x3c, &var_e0, 
                                                sub_403590(&var_4c, &var_64, 0, 0xffffffff))
                                            sub_4cc890(&var_4c)
                                            sub_403320(&var_64)
                                            int32_t var_8_5 = 0xffffffff
                                            sub_4059a0(&var_7c)
                                            ebx = var_84
                                        else
                                            sub_403320(&var_64)
                                            int32_t var_8_4 = 0xffffffff
                                            sub_4059a0(&var_7c)
                                        
                                        int32_t ecx_38 = var_6c_1 + 1
                                        var_6c_1 = ecx_38
                                        
                                        if (ecx_38 s>= var_70)
                                            break
                                        
                                        continue
                                
                                sub_403320(&var_64)
                            
                            if (edi_2 == 0)
                                goto label_4cd266_2
                            
                            int32_t var_74
                            sub_403160(edi_2, var_74 - edi_2, 1)
                            goto label_4cd266_2
                    
                    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
