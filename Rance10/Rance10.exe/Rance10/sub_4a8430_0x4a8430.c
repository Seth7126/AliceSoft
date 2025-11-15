// 函数: sub_4a8430
// 地址: 0x4a8430
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_a4 = 0xffffffff
int32_t (* var_a8)(void* arg1) = sub_731677
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_a0
int32_t eax_2 = __security_cookie ^ &var_a0
int32_t var_e4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t var_b8 = 0
void* result = *(arg1 + 0x10)

if (result != *(arg1 + 0x14))
    uint32_t var_b0 = arg1 + 0x34
    int32_t var_a4_1 = 0
    void* var_50
    bool cond:0_1 =
        (*(**(arg1 + 4) + 0x10))(sub_4079d0(result, arg1 + 0x34, &var_50, arg1 + 0x1c)) == 0
    int32_t var_a4_2 = 0xffffffff
    void* result_2
    result = result_2
    
    if (result u>= 0x10)
        result = sub_403160(var_50, result + 1, 1)
    
    if (cond:0_1 != 0)
        result.b = 1
    else
        void* result_1 = nullptr
        int32_t var_c0_1 = 0
        int32_t var_bc_1 = 0
        int32_t var_a4_3 = 1
        char var_38
        int32_t* eax_8 = sub_4079d0(result, arg1 + 0x34, &var_38, arg1 + 0x1c)
        var_a4_3.b = 2
        int32_t* ecx_3 = *(arg1 + 4)
        var_b8 = 1
        char eax_11 = (*(*ecx_3 + 0xc))(eax_8, &result_1)
        void* eax_12
        
        if (eax_11 != 0)
            eax_12.b = result_1 == var_c0_1
        
        int32_t* ebx_2
        
        if (eax_11 == 0 || eax_12.b != 0)
            ebx_2.b = 1
        else
            ebx_2.b = 0
        
        int32_t var_a4_4 = 1
        char* eax_13 = sub_403320(&var_38)
        
        if (ebx_2.b == 0)
            void* result_3 = result_1
            struct fileimage::CFileImageAnalyser::VTable* const var_14 =
                &fileimage::CFileImageAnalyser::`vftable'
            void* var_c_1 = var_c0_1
            int32_t var_6c_1 = 0xf
            int32_t var_70_1 = 0
            char var_80 = 0
            var_a4_4.b = 7
            
            if (sub_61ed80(&var_14, &var_80) == 0)
                ebx_2.b = 0
            else if (sub_407560(&var_80, 0x76158c) == 0)
                ebx_2.b = 0
            else if (sub_61ec90(&var_14, &var_b0) == 0 || var_b0 != 0)
                ebx_2.b = 0
            else
                int32_t var_54_1 = 0xf
                int32_t var_58_1 = 0
                char var_68 = 0
                var_a4_4.b = 8
                
                if (sub_61ed80(&var_14, &var_68) == 0)
                    ebx_2.b = 0
                    sub_403320(&var_68)
                else
                    if (arg1 + 0x4c != &var_68)
                        sub_403590(arg1 + 0x4c, &var_68, 0, 0xffffffff)
                    
                    if (sub_61ec90(&var_14, &var_b8) == 0)
                        ebx_2.b = 0
                        sub_403320(&var_68)
                    else if (sub_6c92b0(&var_14, &var_b0) == 0)
                        ebx_2.b = 0
                        sub_403320(&var_68)
                    else
                        uint32_t eax_25 = var_b0
                        
                        if (eax_25 == 0)
                            ebx_2.b = 0
                            sub_403320(&var_68)
                        else
                            int32_t* var_44
                            sub_431b80(&var_44, eax_25)
                            var_a4_4.b = 9
                            ebx_2 = var_44
                            int32_t var_40
                            void* edi_3 = var_40 - ebx_2
                            
                            if (sub_6c9430(&var_14, ebx_2, edi_3) == 0)
                            label_4a882a:
                                ebx_2.b = 0
                                sub_4059a0(&var_44)
                                sub_403320(&var_68)
                            else
                                _memset(*(arg1 + 0x10), 0, *(arg1 + 0x14) - *(arg1 + 0x10))
                                uint32_t ecx_23 = *(arg1 + 0xc)
                                
                                if (var_b8 s< ecx_23)
                                    ecx_23 = var_b8
                                
                                int32_t eax_30
                                int32_t edx_6
                                edx_6:eax_30 = sx.q(ecx_23 + 7)
                                void* eax_32 = (eax_30 + (edx_6 & 7)) s>> 3
                                
                                if (eax_32 u> *(arg1 + 0x14) - *(arg1 + 0x10) || eax_32 u< edi_3)
                                    goto label_4a882a
                                
                                sub_700660(*(arg1 + 0x10), ebx_2, eax_32)
                                sub_4a8890(arg1 + 0x64)
                                
                                if (sub_61ec90(&var_14, &var_b0) == 0)
                                    goto label_4a882a
                                
                                ebx_2 = var_b0
                                int32_t esi_1 = 0
                                
                                if (ebx_2 s> 0)
                                    while (true)
                                        int32_t var_24_1 = 0xf
                                        int32_t var_28_1 = 0
                                        var_38 = 0
                                        var_a4_4.b = 0xa
                                        
                                        if (sub_61ed80(&var_14, &var_38) != 0
                                                && sub_61ec90(&var_14, &var_b0) != 0
                                                && sub_61ec90(&var_14, &var_b8) != 0)
                                            uint32_t ecx_31 = var_b8
                                            uint32_t var_cc = var_b0
                                            uint32_t var_c8_1 = ecx_31
                                            var_a4_4.b = 0xb
                                            int32_t* eax_40
                                            void* ecx_34
                                            eax_40, ecx_34 = sub_4a8fa0(sub_4a8f50(&var_cc, 
                                                &var_38, &var_a0, &var_cc))
                                            int32_t* var_e8_22 = eax_40
                                            void* var_ec_5 = &eax_40[4]
                                            void** var_d4
                                            sub_4a8ff0(arg1 + 0x64, &var_d4, ecx_34)
                                            sub_403320(&var_a0)
                                            var_a4_4.b = 9
                                            sub_403320(&var_38)
                                            esi_1 += 1
                                            
                                            if (esi_1 s>= ebx_2)
                                                goto label_4a880e
                                            
                                            continue
                                        
                                        sub_403320(&var_38)
                                        break
                                    
                                    goto label_4a882a
                                
                            label_4a880e:
                                ebx_2.b = 1
                                sub_4059a0(&var_44)
                                sub_403320(&var_68)
            
            sub_403320(&var_80)
        else
            void var_20
            int32_t* eax_14 = sub_4079d0(eax_13, var_b0, &var_20, arg1 + 0x1c)
            var_a4_4.b = 3
            
            if (eax_14[5] u>= 0x10)
                eax_14 = *eax_14
            
            var_b0 = eax_14
            sub_403360(&var_38, 0x761590)
            var_a4_4.b = 4
            var_a4_4.b = 5
            sub_6c52e0(sub_409240(&var_b0, &var_38, &var_50, &var_b0))
            sub_403320(&var_50)
            sub_403320(&var_38)
            sub_403320(&var_20)
            ebx_2.b = 0
        
        result = result_1
        
        if (result != 0)
            sub_403160(result, var_bc_1 - result, 1)
        
        result.b = ebx_2.b
else
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &var_a0)
return result
