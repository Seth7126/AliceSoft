// 函数: sub_56a090
// 地址: 0x56a090
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c6029
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_860
int32_t eax_2 = __security_cookie ^ &var_860
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg2
void* var_85c = esi
sub_56a400(arg1)
int32_t* ecx = *(arg1 + 0x4c)

if (ecx != 0)
    (*(*ecx + 4))(eax_4)
    *(arg1 + 0x4c) = 0

int32_t eax_7
int32_t edx
edx:eax_7 = muls.dp.d(0x1a6d01a7, *(esi + 0x18) - *(esi + 0x14))
var_860 = 0
int32_t edx_1 = edx s>> 6
int32_t result = (edx_1 u>> 0x1f) + edx_1
int32_t result_1 = result

if (result s<= 0)
label_56a29f:
    int32_t* ecx_14 = *(arg1 + 0x5c)
    
    if (ecx_14 != 0)
        (*(*ecx_14 + 4))(eax_4)
        *(arg1 + 0x5c) = 0
    
    *(arg1 + 0x60) = 0x7f7fffff
    int32_t* ecx_15 = *(esi + 0x28)
    
    if (ecx_15 != 0)
        *(arg1 + 0x5c) = ecx_15
        (**ecx_15)(eax_4)
    
    if (arg1 + 0x14 != esi + 0x2c)
        sub_401ff0(arg1 + 0x14, esi + 0x2c, 0, 0xffffffff)
    
    *(arg1 + 0x2c) = *(esi + 0x10)
    result.b = 1
else
    int32_t edi_1 = 0
    int32_t var_854_1 = 0
    int32_t ebx_1 = 0
    
    while (true)
        if (ebx_1 s>= 0)
            int32_t eax_10
            int32_t edx_2
            edx_2:eax_10 = muls.dp.d(0x1a6d01a7, *(esi + 0x18) - *(esi + 0x14))
            int32_t edx_3 = edx_2 s>> 6
            
            if (ebx_1 s< (edx_3 u>> 0x1f) + edx_3)
                void* esi_1 = *(esi + 0x14)
                void* esi_2 = esi_1 + edi_1
                
                if (esi_1 != neg.d(edi_1))
                    struct math::CMRand::VTable* const var_840 = &math::CMRand::`vftable'
                    sub_47cb30(&var_840, 0)
                    int32_t var_4 = 0
                    sub_47cb30(&var_840, *(esi_2 + 0x200))
                    float esi_3 = *(esi_2 + 0x2c)
                    float ebx_2 = 0f
                    float var_848_1 = esi_3
                    
                    if (esi_3 s> 0)
                        do
                            struct sealengine::CParticleObjectView::VTable** eax_13
                            void* ecx_7
                            eax_13, ecx_7 = sub_69adc6(0x388)
                            struct sealengine::CParticleObjectView::VTable** var_844_1 = eax_13
                            var_4.b = 1
                            struct sealengine::CParticleObjectView::VTable** edi_2
                            
                            if (eax_13 == 0)
                                edi_2 = nullptr
                            else
                                struct sealengine::CParticleObjectView::VTable** eax_14
                                eax_14, ecx_7 = sub_570350(eax_13)
                                edi_2 = eax_14
                            
                            int32_t var_878_2 = arg3
                            var_4.b = 0
                            edi_2[0xe0] = *(arg1 + 0x68)
                            edi_2[0xe1] = *(arg1 + 0x6c)
                            int32_t var_88c_1 = var_860
                            struct sealengine::CParticleObjectView::VTable** var_858 = edi_2
                            
                            if (sub_570600(edi_2, var_85c, var_88c_1, ecx_7, ebx_2, esi_3, &var_840)
                                    == 0)
                                (*edi_2)->vFunc_0(1)
                                goto label_56a315
                            
                            int32_t eax_18 = *(arg1 + 0x34)
                            struct sealengine::CParticleObjectView::VTable*** ecx_10 = &var_858
                            
                            if (&var_858 u< eax_18)
                                ecx_10 = *(arg1 + 0x30)
                            
                            if (&var_858 u>= eax_18 || ecx_10 u> &var_858)
                                if (eax_18 == *(arg1 + 0x38))
                                    struct sealengine::CParticleObjectView::VTable*** var_878_4 =
                                        ecx_10
                                    sub_412f20(arg1 + 0x30)
                                
                                result = *(arg1 + 0x34)
                                
                                if (result != 0)
                                    *result = edi_2
                            else
                                if (eax_18 == *(arg1 + 0x38))
                                    struct sealengine::CParticleObjectView::VTable*** var_878_3 =
                                        ecx_10
                                    sub_412f20(arg1 + 0x30)
                                
                                int32_t* ecx_12 = *(arg1 + 0x34)
                                
                                if (ecx_12 != 0)
                                    *ecx_12 = *(*(arg1 + 0x30) + ((&var_858 - ecx_10) s>> 2 << 2))
                            
                            *(arg1 + 0x34) += 4
                            ebx_2 += 1
                            esi_3 = var_848_1
                        while (ebx_2 s< esi_3)
                        
                        edi_1 = var_854_1
                    
                    edi_1 += 0x26c
                    esi = var_85c
                    ebx_1 = var_860 + 1
                    int32_t var_4_1 = 0xffffffff
                    var_860 = ebx_1
                    var_854_1 = edi_1
                    
                    if (ebx_1 s>= result_1)
                        goto label_56a29f
                    
                    continue
        
    label_56a315:
        result.b = 0
        break

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_860)
return result
