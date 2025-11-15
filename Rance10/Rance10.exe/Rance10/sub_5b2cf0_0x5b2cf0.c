// 函数: sub_5b2cf0
// 地址: 0x5b2cf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73f2f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_4c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t var_14 = arg1
uint32_t arg_8
uint32_t ebx = arg_8
uint32_t arg_4
uint32_t edi = arg_4
struct _EXCEPTION_REGISTRATION_RECORD** eax_3

if (sub_61ed80(edi, ebx).b != 0)
    char* edx_1 = *(edi + 4)
    
    if (&edx_1[4] u<= *(edi + 8))
        *(ebx + 0x18) =
            ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
        *(edi + 4) += 4
        
        if (sub_5b2f40(arg1, edi, ebx).b != 0)
            char* edx_2 = *(edi + 4)
            
            if (&edx_2[4] u<= *(edi + 8))
                uint32_t ecx_15 =
                    ((zx.d(edx_2[3]) << 8 | zx.d(edx_2[2])) << 8 | zx.d(edx_2[1])) << 8
                    | zx.d(*edx_2)
                *(edi + 4) = &edx_2[4]
                arg_8 = ecx_15
                
                if (sub_5b3580(sub_5864d0(ebx + 0x28, ecx_15), ebx + 0x28, edi, 0, arg_8).b != 0)
                    uint32_t esi_2 = arg_8
                    arg_4 = 0
                    
                    if (sub_5b3640(var_14, edi, &arg_4, esi_2, ebx).b != 0)
                        uint32_t var_54_3 = arg_4
                        arg_8 = 0
                        int32_t ecx_20
                        eax_3, ecx_20 = sub_5b36d0(var_14, edi, &arg_8, esi_2, var_54_3, ebx)
                        
                        if (eax_3.b != 0)
                            int32_t var_38 = 0
                            int32_t var_34 = 0
                            int32_t var_30 = 0
                            int32_t var_50_6 = ecx_20
                            int32_t var_8_1 = 0
                            char eax_11
                            int32_t ecx_22
                            int80_t st0
                            st0, eax_11, ecx_22 = sub_5b3760(var_14, edi, &var_38)
                            
                            if (eax_11 == 0)
                                sub_4043e0(&var_38)
                                int32_t eax_12
                                eax_12.b = 0
                                fsbase->NtTib.ExceptionList = ExceptionList
                                return eax_12
                            
                            int32_t var_2c = 0
                            int32_t var_28 = 0
                            int32_t var_24 = 0
                            int32_t var_50_7 = ecx_22
                            var_8_1.b = 1
                            
                            if (sub_5b3920(var_14, edi, &var_2c) != 0)
                                int32_t var_20 = 0
                                int32_t var_1c_1 = 0
                                int32_t var_18_1 = 0
                                var_8_1.b = 2
                                char eax_14 = sub_5b39c0(var_14, edi, &var_20, arg_8, ebx)
                                char eax_15
                                int32_t ecx_28
                                
                                if (eax_14 != 0)
                                    eax_15, ecx_28 = sub_5b3a90(edi, arg_4, arg_8, &var_38, 
                                        &var_2c, &var_20, ebx)
                                
                                if (eax_14 == 0 || eax_15 == 0)
                                    ebx.b = 0
                                else
                                    int32_t edi_1 = *(ebx + 0x20)
                                    
                                    for (void* i = *(ebx + 0x1c); i != edi_1; i += 0x18)
                                        int32_t var_50_10 = ecx_28
                                        ecx_28 = sub_5b6300(i)
                                    
                                    ebx.b = 1
                                
                                sub_4059a0(&var_20)
                            else
                                ebx.b = 0
                            
                            sub_4059a0(&var_2c)
                            sub_4043e0(&var_38)
                            int32_t eax_16
                            eax_16.b = ebx.b
                            fsbase->NtTib.ExceptionList = ExceptionList
                            return eax_16

eax_3.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
