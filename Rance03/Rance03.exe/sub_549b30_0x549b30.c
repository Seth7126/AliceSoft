// 函数: sub_549b30
// 地址: 0x549b30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6c49b3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg1
void* var_4c = edi
void* eax_3 = edi + 0x10
sub_59e430(eax_3)
int32_t* i = *(edi + 4)
void* ebx = edi + 4

for (; i != *(edi + 8); i = &i[1])
    int32_t* ecx_1 = *i
    
    if (ecx_1 != 0)
        (*(*ecx_1 + 0x10))(1)

void* edx = arg2
int32_t ecx_2 = 0
*(ebx + 4) = *ebx
int32_t var_50 = 0
int32_t eax_8 = (*(edx + 0x50) - *(edx + 0x4c)) s>> 2
int32_t var_2c = eax_8
int32_t var_48 = 0

if (eax_8 s> 0)
    while (true)
        if (ecx_2 s>= 0)
            eax_8 = (*(edx + 0x50) - *(edx + 0x4c)) s>> 2
            
            if (ecx_2 s< eax_8)
                eax_8 = *(edx + 0x4c)
                void* esi = *(eax_8 + (ecx_2 << 2))
                void* var_58_1 = esi
                
                if (esi != 0)
                    int32_t ecx_3 = *(esi + 0x2c)
                    eax_8 = *(esi + 0x28)
                    
                    if (eax_8 != ecx_3)
                        int32_t var_24
                        sub_54aa70(&var_24, (ecx_3 - eax_8) s/ 0xbc)
                        int32_t var_c_1 = 0
                        int32_t ebx_1 = var_24
                        int32_t var_20
                        int32_t i_4 = (var_20 - ebx_1) s/ 0x4c
                        
                        if (i_4 s> 0)
                            void* edx_6 = ebx_1 + 8
                            int32_t esi_1 = 0
                            int32_t i_3 = i_4
                            int32_t i_1
                            
                            do
                                int32_t ecx_8 = *(var_58_1 + 0x28)
                                edx_6 += 0x4c
                                *(edx_6 - 0x4c) = ecx_8 + 4 + esi_1
                                *(edx_6 - 0x38) = ecx_8 + 0x40 + esi_1
                                int32_t eax_23 = ecx_8 + 0x7c + esi_1
                                esi_1 += 0xbc
                                *(edx_6 - 0x24) = eax_23
                                i_1 = i_3
                                i_3 -= 1
                            while (i_1 != 1)
                            esi = var_58_1
                        
                        void** eax_24 = *(esi + 0x20)
                        struct sealengine::CDrawInstance::sealengine::CMesh::VTable** ebx_3 =
                            *(esi + 0x1c)
                        struct sealengine::CDrawInstance::sealengine::CMesh::VTable** var_38 = ebx_3
                        void** eax_25 = *(arg3 + 4)
                        void** edx_7 = eax_25
                        void** ecx_9 = eax_25[1]
                        
                        while (*(ecx_9 + 0xd) == 0)
                            if (ecx_9[4] s>= ebx_3)
                                edx_7 = ecx_9
                                ecx_9 = *ecx_9
                            else
                                ecx_9 = ecx_9[2]
                        
                        void** eax_26
                        
                        if (edx_7 == eax_25 || ebx_3 s< edx_7[4])
                            void** var_40 = eax_25
                            eax_26 = &var_40
                        else
                            void** var_44 = edx_7
                            eax_26 = &var_44
                        
                        void* eax_27 = *eax_26
                        int32_t esi_3 = *(arg3 + 4)
                        void* const edi_2
                        
                        if (eax_27 != esi_3)
                            edi_2 = *(eax_27 + 0x14)
                            
                            if (edi_2 != 0)
                                eax_27.b = *(edi_2 + 4)
                                
                                if (eax_27.b != 0
                                        && ((*(edi_2 + 0x38) - *(edi_2 + 0x34)) & 0xfffffffc) s> 0)
                                    ecx_9 = eax_24
                                    void* eax_34
                                    
                                    if (ecx_9 s>= 0
                                            && ecx_9 s< (*(edi_2 + 0x38) - *(edi_2 + 0x34)) s>> 2)
                                        eax_34 = *(*(edi_2 + 0x34) + (ecx_9 << 2))
                                    
                                    if (ecx_9 s>= 0
                                            && ecx_9 s< (*(edi_2 + 0x38) - *(edi_2 + 0x34)) s>> 2
                                            && eax_34 != 0)
                                        edi_2 = eax_34
                                    else if (((*(edi_2 + 0x38) - *(edi_2 + 0x34)) & 0xfffffffc)
                                            s> 0)
                                        eax_34 = **(edi_2 + 0x34)
                                        
                                        if (eax_34 != 0)
                                            edi_2 = eax_34
                        else
                            edi_2 = nullptr
                        
                        int32_t ebx_4 = 0
                        edx_7.b = *(var_58_1 + 0x25)
                        
                        if (edx_7.b == 0)
                            goto label_549df6
                        
                        void* eax_38
                        
                        if (edi_2 != 0)
                            eax_38.b = *(edi_2 + 4)
                        
                        void** eax_47
                        
                        if (edi_2 != 0 && eax_38.b == 0)
                            var_38 = var_38
                            int32_t* var_34
                            ecx_9, edx_7 = sub_42f3d0(arg3 + 4, &var_34, &var_38)
                            int32_t* eax_40 = var_34
                            
                            if (eax_40 == esi_3)
                                goto label_54a006
                            
                            ecx_9 = eax_40[5]
                            
                            if (ecx_9 == 0)
                                goto label_54a006
                            
                            if (((ecx_9[0xe] - ecx_9[0xd]) & 0xfffffffc) s> 4)
                                ebx_4 = *(ecx_9[0xd] + 4)
                            
                            if (((ecx_9[0xe] - ecx_9[0xd]) & 0xfffffffc) s<= 0)
                                goto label_54a006
                            
                            eax_47 = ecx_9[0xd]
                        label_549df4:
                            edi_2 = *eax_47
                        else if (edx_7.b != 0)
                            if (edi_2 == 0)
                                goto label_54a006
                            
                            eax_38.b = *(edi_2 + 4)
                            
                            if (eax_38.b != 0
                                    && ((*(edi_2 + 0x38) - *(edi_2 + 0x34)) & 0xfffffffc) s> 0)
                                if (((*(edi_2 + 0x38) - *(edi_2 + 0x34)) & 0xfffffffc) s> 4)
                                    ebx_4 = *(*(edi_2 + 0x34) + 4)
                                else
                                    ebx_4 = 0
                                
                                if (((*(edi_2 + 0x38) - *(edi_2 + 0x34)) & 0xfffffffc) s<= 0)
                                    goto label_54a006
                                
                                eax_47 = *(edi_2 + 0x34)
                                goto label_549df4
                    label_549df6:
                        
                        if (edi_2 == 0)
                        label_54a006:
                            void* eax_79 = var_58_1 + 4
                            
                            if (*(eax_79 + 0x14) u>= 0x10)
                                eax_79 = *eax_79
                            
                            sub_59f4e0(eax_79, edx_7, ecx_9, 0x6e3d08, eax_79)
                        label_54a01f:
                            int32_t var_c_3 = 0xffffffff
                            int32_t ebx_6 = var_24
                            
                            if (ebx_6 == 0)
                                goto label_54a082
                            
                            int32_t esi_10 = ebx_6
                            
                            if (ebx_6 != var_20)
                                do
                                    (**esi_10)(0)
                                    esi_10 += 0x4c
                                while (esi_10 != var_20)
                            
                            j__free(ebx_6)
                            int32_t eax_81
                            eax_81.b = 0
                            fsbase->NtTib.ExceptionList = ExceptionList
                            return eax_81
                        
                        struct sealengine::CDrawInstance::sealengine::CMesh::VTable** eax_56 =
                            sub_69adc6(0xe8)
                        var_38 = eax_56
                        var_c_1.b = 1
                        struct sealengine::CDrawInstance::sealengine::CMesh::VTable** esi_4
                        
                        if (eax_56 == 0)
                            esi_4 = nullptr
                        else
                            esi_4 = sub_548ca0(eax_56)
                        
                        var_c_1.b = 0
                        struct sealengine::CDrawInstance::sealengine::CMesh::VTable** var_54 = esi_4
                        char* eax_58
                        int32_t ecx_14
                        int32_t edx_8
                        eax_58, ecx_14, edx_8 = sub_548f00(esi_4, edi_2, edi_2, ebx_4, &var_24, 
                            var_50, arg2, arg4, var_58_1)
                        
                        if (eax_58.b == 0)
                            sub_59f4e0(eax_58, edx_8, ecx_14, 0x6e3cc8, eax_2)
                            
                            if (esi_4 != 0)
                                (*esi_4)->vFunc_4(1)
                            
                            goto label_54a01f
                        
                        edi = var_4c
                        struct sealengine::CDrawInstance::sealengine::CMesh::VTable*** ecx_15 =
                            &var_54
                        int32_t eax_59 = *(edi + 8)
                        ebx = edi + 4
                        
                        if (&var_54 u< eax_59)
                            ecx_15 = *ebx
                        
                        if (&var_54 u>= eax_59 || ecx_15 u> &var_54)
                            if (eax_59 == *(ebx + 8))
                                struct sealengine::CDrawInstance::sealengine::CMesh::VTable*** 
                                    var_70_5 = ecx_15
                                sub_412f20(ebx)
                            
                            struct sealengine::CDrawInstance::sealengine::CMesh::VTable*** eax_62 =
                                *(ebx + 4)
                            
                            if (eax_62 != 0)
                                *eax_62 = esi_4
                        else
                            if (eax_59 == *(ebx + 8))
                                struct sealengine::CDrawInstance::sealengine::CMesh::VTable*** 
                                    var_70_4 = ecx_15
                                sub_412f20(ebx)
                            
                            int32_t* ecx_17 = *(ebx + 4)
                            
                            if (ecx_17 != 0)
                                *ecx_17 = *(*ebx + ((&var_54 - ecx_15) s>> 2 << 2))
                        
                        *(ebx + 4) += 4
                        int32_t var_c_2 = 0xffffffff
                        eax_8 = var_24
                        var_50 += i_4 * 3
                        
                        if (eax_8 != 0)
                            int32_t esi_8 = eax_8
                            
                            if (eax_8 != var_20)
                                do
                                    (**esi_8)(0)
                                    esi_8 += 0x4c
                                while (esi_8 != var_20)
                                
                                eax_8 = var_24
                            
                            eax_8 = j__free(eax_8)
                            edi = var_4c
                            var_24 = 0
                            var_20 = 0
                            int32_t var_1c_1 = 0
                        
                        edx = arg2
                    
                    ecx_2 = var_48 + 1
                    var_48 = ecx_2
                    
                    if (ecx_2 s>= var_2c)
                        break
                    
                    continue
        
        sub_59f4e0(eax_8, edx, ecx_2, 0x6e3ce8, eax_2)
        goto label_54a082

if (arg5 != 0 && sub_54a0a0(edi, edx) == 0)
label_54a082:
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0

int32_t* esi_9 = *(edi + 0x14)
void* ecx_23 = edi + 0x10
int32_t edi_4 = *(ecx_23 + 8)

if (esi_9 != edi_4)
    do
        (**esi_9)(0)
        esi_9 = &esi_9[5]
    while (esi_9 != edi_4)
    
    ecx_23 = eax_3

void* edi_5 = ecx_23 + 0x10
*(ecx_23 + 8) = *(ecx_23 + 4)
sub_59e970(*(*edi_5 + 4))
void* eax_70 = *edi_5
*(eax_70 + 4) = eax_70
int32_t* eax_71 = *edi_5
*eax_71 = eax_71
void* eax_72 = *edi_5
*(eax_72 + 8) = eax_72
*(edi_5 + 4) = 0

for (void** i_2 = *ebx; i_2 != *(var_4c + 8); i_2 = &i_2[1])
    sub_539690(*i_2 + 0x24, var_4c + 0x10)

sub_59e970(*(*edi_5 + 4))
void* eax_74 = *edi_5
*(eax_74 + 4) = eax_74
int32_t* eax_75 = *edi_5
*eax_75 = eax_75
void* eax_76 = *edi_5
*(eax_76 + 8) = eax_76
eax_76.b = 1
*(edi_5 + 4) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_76
