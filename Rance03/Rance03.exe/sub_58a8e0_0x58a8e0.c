// 函数: sub_58a8e0
// 地址: 0x58a8e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c7ab8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
char result

if (*(arg1 + 4) == 0)
    result = 1
else
    int32_t* ecx = *(arg1 + 8)
    int32_t __saved_edi
    
    if (ecx == 0)
        result = 1
    else if ((*(*ecx + 0x10))(__security_cookie ^ &__saved_edi) == 0)
        result = 1
    else
        sub_58ae00(arg1)
        int32_t var_144_1 = *(*(arg1 + 4) + 0x1ac)
        
        if (sub_53be30(*(arg1 + 0x514)) == 0)
            result = 0
        else
            void* eax_6 = *(arg1 + 4)
            void* ecx_4 = arg1 + 0x130
            int32_t eax_8
            int32_t edx_2
            eax_8, edx_2 = sub_5470c0(ecx_4, eax_6 + 4, eax_6 + 0x19c, arg1 + 0x518, *(arg1 + 8))
            
            if (eax_8.b != 0)
                struct sealengine::CSQT::VTable* var_5c
                sub_52d4f0(*(arg1 + 4) + 0x24, &var_5c)
                int32_t var_4 = 0
                void* ecx_9 = *(arg1 + 4)
                
                if (((*(ecx_9 + 0x1a4) - *(ecx_9 + 0x1a0)) & 0xfffffffc) s<= 0xc
                        || *(*(ecx_9 + 0x1a0) + 0xc) == 0)
                    ecx_4 = arg1 + 0x130
                    eax_8, edx_2 = sub_5472a0(ecx_4, arg1 + 0x130, ecx_9 + 4, &var_5c)
                
                if ((((*(ecx_9 + 0x1a4) - *(ecx_9 + 0x1a0)) & 0xfffffffc) s> 0xc
                        && *(*(ecx_9 + 0x1a0) + 0xc) != 0) || eax_8.b != 0)
                    int32_t var_58
                    int32_t var_3c = var_58 ^ 0x80000000
                    int32_t var_54
                    float var_38 = var_54 ^ 0x80000000
                    int32_t var_50
                    int32_t var_34_1 = var_50 ^ 0x80000000
                    int32_t var_4c
                    int32_t var_30_1 = var_4c
                    float var_b4[0x10]
                    sub_47c420(&var_3c, &var_b4)
                    float var_1c = 0f
                    int32_t var_18_1 = 0x3f800000
                    int32_t var_14_1 = 0
                    float var_74
                    sub_47b190(&var_1c, &var_74, &var_b4)
                    var_1c = 1f
                    int32_t var_18_2 = 0
                    int32_t var_14_2 = 0
                    float var_68
                    sub_47b190(&var_1c, &var_68, &var_b4)
                    var_1c = 0f
                    int32_t var_18_3 = 0
                    int32_t var_14_3 = 0x3f800000
                    float* eax_14 = sub_47b190(&var_1c, &var_38, &var_b4)
                    *(arg1 + 0x25c) = *eax_14
                    int32_t eax_15 = eax_14[2]
                    int64_t var_48
                    *(arg1 + 0x250) = var_48
                    *(arg1 + 0x264) = eax_15
                    var_3c.o = var_58.o
                    int32_t var_40
                    *(arg1 + 0x258) = var_40
                    var_1c = var_48.d ^ 0x80000000
                    int32_t var_18_4 = var_48:4.d ^ 0x80000000
                    int32_t var_14_4 = var_40 ^ 0x80000000
                    int32_t* eax_17 = sub_47c420(&var_3c, &var_b4)
                    void var_f4
                    int32_t* eax_18 = sub_5b0b20(&var_f4, &var_1c)
                    float var_134[0x10]
                    float* eax_19 = sub_52d060(eax_18, eax_18, &var_134, eax_17)
                    *(arg1 + 0x268) = *eax_19
                    *(arg1 + 0x278) = *(eax_19 + 0x10)
                    int32_t var_144_12 = *(arg1 + 0x154)
                    *(arg1 + 0x288) = *(eax_19 + 0x20)
                    int32_t var_148_6 = *(arg1 + 8)
                    *(arg1 + 0x298) = *(eax_19 + 0x30)
                    void* ecx_17 = *(arg1 + 4)
                    *(arg1 + 0x2a8) = *(ecx_17 + 0xf4)
                    *(arg1 + 0x2b8) = *(ecx_17 + 0x104)
                    *(arg1 + 0x2c8) = *(ecx_17 + 0x114)
                    *(arg1 + 0x2d8) = *(ecx_17 + 0x124)
                    eax_8, ecx_4, edx_2 = sub_5471a0(arg1 + 0x130, ecx_17 + 4, arg1 + 0x250, 
                        &var_74, &var_68, arg1 + 0x268, arg1 + 0x2a8, ecx_17 + 0x19c, arg2, 
                        ecx_17 + 4, var_148_6)
                    
                    if (eax_8.b != 0)
                        sub_59cb50(arg1 + 0x518)
                        void* esi_2 = arg1
                        
                        if (*(esi_2 + 0x50d) == 0)
                            arg2.b = 1
                        
                        if (*(esi_2 + 0x50d) != 0 || *(esi_2 + 0x50c) == 0)
                            arg2.b = 0
                        
                        eax_8, ecx_4, edx_2 = sub_59cc90(arg1 + 0x518, *(esi_2 + 8), arg2.b)
                        
                        if (eax_8.b != 0)
                            int32_t eax_22 = *(esi_2 + 0x248)
                            int32_t* edi_6 = *(esi_2 + 0x244)
                            
                            if (edi_6 != eax_22)
                                do
                                    (**edi_6)(0)
                                    edi_6 = &edi_6[5]
                                while (edi_6 != eax_22)
                                
                                esi_2 = arg1
                            
                            *(esi_2 + 0x248) = *(esi_2 + 0x244)
                            sub_547240(esi_2 + 0x130, esi_2 + 0x240)
                            
                            if (sub_58b980(esi_2, edi_6) == 0)
                                result = 0
                            else if (sub_58ba80(esi_2) == 0)
                                result = 0
                            else if (sub_58bbf0(esi_2) == 0)
                                result = 0
                            else if (sub_58bd20(esi_2) == 0)
                                result = 0
                            else if (sub_58b240(esi_2) == 0)
                                result = 0
                            else
                                var_1c = 0f
                                int32_t var_18_5 = 0
                                int32_t var_14_5 = 0
                                
                                if (sub_58bec0(esi_2, &var_1c) == 0)
                                    result = 0
                                else if (sub_58bf00(esi_2) == 0)
                                    result = 0
                                else
                                    result = 1
                        else
                            sub_59f4e0(eax_8, edx_2, ecx_4, 0x6e59ac)
                            result = 0
                    else
                        sub_59f4e0(eax_8, edx_2, ecx_4, 0x6e59d8)
                        result = 0
                else
                    sub_59f4e0(eax_8, edx_2, ecx_4, 0x6e5a08)
                    result = 0
            else
                sub_59f4e0(eax_8, edx_2, ecx_4, 0x6e5a40)
                result = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
