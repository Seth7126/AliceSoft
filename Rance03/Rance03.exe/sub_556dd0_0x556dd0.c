// 函数: sub_556dd0
// 地址: 0x556dd0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c5073
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_90
int32_t eax_2 = __security_cookie ^ &var_90
int32_t __saved_edi
int32_t var_a4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_5571c0(arg1)
int32_t result

if (arg3 s< 0)
    result.b = 0
else
    int32_t eax_5
    int32_t edx_1
    edx_1:eax_5 = muls.dp.d(0x1a6d01a7, *(arg2 + 0x18) - *(arg2 + 0x14))
    int32_t edx_2 = edx_1 s>> 6
    
    if (arg3 s>= (edx_2 u>> 0x1f) + edx_2)
        result.b = 0
    else
        int32_t esi_1 = arg3 * 0x26c
        void* esi_2 = esi_1 + *(arg2 + 0x14)
        
        if (esi_1 == neg.d(*(arg2 + 0x14)))
            result.b = 0
        else
            *(arg1 + 8) = *(esi_2 + 0x180)
            *(arg1 + 0xc) = *(esi_2 + 0x170)
            void** var_8c = nullptr
            int32_t var_88_1 = 0
            int32_t var_84_1 = 0
            int32_t var_4 = 0
            int32_t var_5c_1 = 0xf
            int32_t var_60_1 = 0
            char var_70 = 0
            sub_402110(&var_70, ".bmp", 4)
            var_4.b = 1
            sub_412d60(&var_8c, &var_70)
            var_4.b = 0
            
            if (var_5c_1 u>= 0x10)
                j__free(var_70.d)
            
            int32_t var_5c_2 = 0xf
            int32_t var_60_2 = 0
            var_70 = 0
            sub_402110(&var_70, ".tga", 4)
            var_4.b = 2
            sub_412d60(&var_8c, &var_70)
            var_4.b = 0
            
            if (var_5c_2 u>= 0x10)
                j__free(var_70.d)
            
            int32_t var_5c_3 = 0xf
            int32_t var_60_3 = 0
            var_70 = 0
            sub_402110(&var_70, ".png", 4)
            var_4.b = 3
            sub_412d60(&var_8c, &var_70)
            var_4.b = 0
            
            if (var_5c_3 u>= 0x10)
                j__free(var_70.d)
            
            int32_t ebx_1 = 0
            void** esi_3 = var_8c
            int32_t eax_9
            int32_t edx_3
            edx_3:eax_9 = muls.dp.d(0x2aaaaaab, *(esi_2 + 0x178) - *(esi_2 + 0x174))
            int32_t edx_4 = edx_3 s>> 2
            result = (edx_4 u>> 0x1f) + edx_4
            int32_t result_1 = result
            
            if (result s> 0)
                do
                    int32_t edx_5
                    result, edx_5 = sub_5375b0(esi_2, &var_70, ebx_1)
                    var_4.b = 4
                    
                    if (var_60_3 != 0)
                        if (var_8c == var_88_1)
                        label_557126:
                            char* ecx_15 = &var_70
                            
                            if (var_5c_3 u>= 0x10)
                                ecx_15 = var_70.d
                            
                            void* eax_17 = arg2 + 0x2c
                            
                            if (*(eax_17 + 0x14) u>= 0x10)
                                eax_17 = *eax_17
                            
                            char* var_a8_16 = ecx_15
                            sub_59f4e0(eax_17, edx_5, ecx_15, 0x6e3ee0, eax_17)
                        else
                            void* eax_13 = arg2 + 0x2c
                            void* var_78_1 = eax_13
                            int32_t var_28
                            int32_t var_14
                            
                            while (true)
                                char var_58[0x10]
                                char* eax_14 = sub_4028a0(&var_58, eax_13)
                                var_4.b = 5
                                char var_40
                                char* eax_15 = sub_410ad0(eax_14, eax_14, &var_40, &var_70)
                                var_4.b = 6
                                sub_410ad0(eax_15, eax_15, &var_28, esi_3)
                                int32_t var_2c
                                
                                if (var_2c u>= 0x10)
                                    j__free(var_40.d)
                                
                                var_2c = 0xf
                                int32_t var_30_1 = 0
                                var_40 = 0
                                var_4.b = 9
                                int32_t var_44
                                
                                if (var_44 u>= 0x10)
                                    j__free(var_58[0].d)
                                
                                var_44 = 0xf
                                int32_t var_48_1 = 0
                                var_58[0] = 0
                                result, edx_5 = sub_557220(arg1, &var_28)
                                var_4.b = 4
                                
                                if (result.b != 0)
                                    break
                                
                                if (var_14 u>= 0x10)
                                    edx_5 = j__free(var_28)
                                
                                eax_13 = var_78_1
                                esi_3 = &esi_3[6]
                                
                                if (esi_3 == var_88_1)
                                    goto label_557126
                            
                            if (var_14 u>= 0x10)
                                result, edx_5 = j__free(var_28)
                            
                            if (esi_3 == var_88_1)
                                goto label_557126
                        
                        var_4.b = 0
                        
                        if (var_5c_3 u>= 0x10)
                            j__free(var_70.d)
                        
                        esi_3 = var_8c
                    else
                        var_4.b = 0
                        
                        if (var_5c_3 u>= 0x10)
                            j__free(var_70.d)
                    
                    ebx_1 += 1
                while (ebx_1 s< result_1)
            
            if (esi_3 != 0)
                sub_4107c0(esi_3, var_88_1)
                j__free(esi_3)
            
            result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_90)
return result
