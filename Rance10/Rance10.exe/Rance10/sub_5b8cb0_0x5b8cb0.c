// 函数: sub_5b8cb0
// 地址: 0x5b8cb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73f676
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = (*(*arg2 + 0x24))(0x76a124)
struct common::CEXTreeReader::VTable* const var_100 = &common::CEXTreeReader::`vftable'
int32_t* result_2 = result
int32_t var_8_1 = 0

if (result != 0)
    result = (*(*result + 0x14))(eax_2)
    int32_t ebx_1 = 0
    int32_t* result_1 = result
    int32_t var_f8_1 = 0
    
    if (result s> 0)
        do
            void* var_d0
            sub_403dc0(&var_100, &var_d0, ebx_1)
            var_8_1.b = 1
            void* var_60
            char* ecx_4 = sub_403dc0(&var_100, &var_60, ebx_1)
            var_8_1.b = 2
            char* esi_1
            
            if (result_2 != 0)
                if (*(ecx_4 + 0x14) u>= 0x10)
                    ecx_4 = *ecx_4
                
                esi_1 = (*(*result_2 + 0x24))(ecx_4)
            else
                esi_1 = nullptr
            
            int32_t var_4c
            
            if (var_4c u>= 0x10)
                sub_403160(var_60, var_4c + 1, 1)
            
            struct common::CEXTreeReader::VTable* const var_f0 = &common::CEXTreeReader::`vftable'
            int32_t var_34_1 = 0xf
            int32_t var_38_1 = 0
            char var_48 = 0
            var_8_1.b = 4
            float var_e0_1 = 0f
            float var_d8_1 = 0f
            float var_e4_1 = 0f
            int32_t var_dc_1 = 0
            char var_d1_1 = 0
            int32_t eax_7
            
            if (esi_1 != 0)
                eax_7 = (*(*esi_1 + 0x18))()
            else
                eax_7 = 0
            
            int32_t ebx_2 = 0
            int32_t* eax_19
            
            if (eax_7 s> 0)
                do
                    void** var_30
                    sub_403e80(&var_f0, &var_30, ebx_2)
                    var_8_1.b = 5
                    void** ecx_10 = &var_30
                    int32_t var_1c
                    int32_t edi_1 = var_1c
                    int32_t eax_9 = 0xc
                    
                    if (edi_1 u>= 0x10)
                        ecx_10 = var_30
                    
                    int32_t var_20
                    
                    if (var_20 u< 0xc)
                        eax_9 = var_20
                    
                    int32_t eax_10 = sub_406ac0(eax_9, 0x769f64, ecx_10, eax_9)
                    void* eax_11
                    
                    if (eax_10 == 0)
                        if (var_20 u>= 0xc)
                            eax_11 = neg.d(sbb.d(0xc, 0xc, 0xc u< var_20))
                        else
                            eax_11 = 0xffffffff
                    
                    if (eax_10 != 0 || eax_11 != 0)
                        void** ecx_14 = &var_30
                        int32_t eax_20 = 8
                        
                        if (edi_1 u>= 0x10)
                            ecx_14 = var_30
                        
                        if (var_20 u< 8)
                            eax_20 = var_20
                        
                        int16_t top
                        
                        if (sub_406ac0(eax_20, 0x769f58, ecx_14, eax_20) != 0 || var_20 u< 8
                                || var_20 u> 8)
                            void** ecx_19 = &var_30
                            int32_t eax_26 = 0xe
                            
                            if (edi_1 u>= 0x10)
                                ecx_19 = var_30
                            
                            if (var_20 u< 0xe)
                                eax_26 = var_20
                            
                            if (sub_406ac0(eax_26, 0x769f48, ecx_19, eax_26) == 0 && var_20 u>= 0xe
                                    && var_20 u<= 0xe)
                                char* ecx_20 = esi_1
                                int32_t* esi_5
                                
                                if (ecx_20 != 0)
                                    void** edx_4 = &var_30
                                    
                                    if (edi_1 u>= 0x10)
                                        edx_4 = var_30
                                    
                                    eax_19, ecx_20 = (*(*ecx_20 + 0x2c))(edx_4)
                                    edi_1 = var_1c
                                    esi_5 = eax_19
                                else
                                    esi_5 = nullptr
                                
                                struct common::CEXArrayReader::VTable* const var_118_1 =
                                    &common::CEXArrayReader::`vftable'
                                int32_t* var_114_1 = esi_5
                                var_8_1.b = 9
                                int32_t xmm0_3
                                
                                if (esi_5 != 0)
                                    char* var_12c_15 = ecx_20
                                    int32_t var_12c_16 = (*(*esi_5 + 0x10))(0, 0)
                                    float var_e8_2 =
                                        fconvert.s(unimplemented  {fstp dword [ebp-0xe4], st0})
                                    unimplemented  {fstp dword [ebp-0xe4], st0}
                                    (*(*esi_5 + 0x10))(1, 0)
                                    edi_1 = var_1c
                                    float var_dc_2 =
                                        fconvert.s(unimplemented  {fstp dword [ebp-0xd8], st0})
                                    unimplemented  {fstp dword [ebp-0xd8], st0}
                                    top += 2
                                    var_e4_1 = var_e8_2
                                    xmm0_3 = var_dc_2
                                else
                                    xmm0_3 = (zx.o(0)).d
                                    var_e4_1 = 0f
                                
                                var_dc_1 = xmm0_3
                                var_d1_1 = 1
                                struct common::CEXArrayReader::VTable* const var_118_2 =
                                    &common::CEXArrayReader::`vftable'
                        else
                            char* ecx_15 = esi_1
                            int32_t* esi_4
                            
                            if (ecx_15 != 0)
                                void** edx_3 = &var_30
                                
                                if (edi_1 u>= 0x10)
                                    edx_3 = var_30
                                
                                eax_19, ecx_15 = (*(*ecx_15 + 0x2c))(edx_3)
                                edi_1 = var_1c
                                esi_4 = eax_19
                            else
                                esi_4 = nullptr
                            
                            struct common::CEXArrayReader::VTable* const var_110_1 =
                                &common::CEXArrayReader::`vftable'
                            int32_t* var_10c_1 = esi_4
                            var_8_1.b = 8
                            
                            if (esi_4 != 0)
                                char* var_12c_11 = ecx_15
                                int32_t var_12c_12 = (*(*esi_4 + 0x10))(0, 0)
                                float var_d8_2 =
                                    fconvert.s(unimplemented  {fstp dword [ebp-0xd4], st0})
                                unimplemented  {fstp dword [ebp-0xd4], st0}
                                (*(*esi_4 + 0x10))(1, 0)
                                edi_1 = var_1c
                                float var_e8_1 =
                                    fconvert.s(unimplemented  {fstp dword [ebp-0xe4], st0})
                                unimplemented  {fstp dword [ebp-0xe4], st0}
                                top += 2
                                var_e0_1 = var_d8_2
                                var_d8_1 = var_e8_1
                                struct common::CEXArrayReader::VTable* const var_110_3 =
                                    &common::CEXArrayReader::`vftable'
                            else
                                struct common::CEXArrayReader::VTable* const var_110_2 =
                                    &common::CEXArrayReader::`vftable'
                                var_e0_1 = 0f
                                var_d8_1 = 0f
                    else
                        int32_t* var_a4_1 = 0xf
                        void* var_a8_1 = eax_11
                        char var_b8 = eax_11.b
                        sub_403490(&var_b8, 0x75d55b, eax_11)
                        var_8_1.b = 6
                        char* eax_13 = sub_403cd0(&var_f0, &var_60, &var_30, &var_b8)
                        
                        if (&var_48 != eax_13)
                            if (var_34_1 u>= 0x10)
                                sub_403160(var_48.d, var_34_1 + 1, 1)
                            
                            var_34_1 = 0xf
                            int32_t var_38_2 = 0
                            var_48 = 0
                            sub_4056a0(&var_48, eax_13)
                        
                        if (var_4c u>= 0x10)
                            sub_403160(var_60, var_4c + 1, 1)
                        
                        var_4c = 0xf
                        int32_t var_50_1 = 0
                        var_60.b = 0
                        
                        if (var_a4_1 u>= 0x10)
                            sub_403160(var_b8.d, var_a4_1 + 1, 1)
                        
                        edi_1 = var_1c
                    
                    var_8_1.b = 4
                    
                    if (edi_1 u>= 0x10)
                        sub_403160(var_30, edi_1 + 1, 1)
                    
                    ebx_2 += 1
                while (ebx_2 s< eax_7)
                
                eax_19.b = var_d1_1
            
            if (eax_7 s<= 0 || eax_19.b == 0)
                var_e4_1 = var_e0_1
                var_dc_1 = var_d8_1
            
            int32_t var_8c_1 = 0xf
            int32_t var_90_1 = 0
            char var_a0 = 0
            sub_403590(&var_a0, &var_d0, 0, 0xffffffff)
            var_8_1.b = 0xa
            int32_t var_74_1 = 0xf
            int32_t var_78_1 = 0
            char var_88 = 0
            sub_403590(&var_88, &var_48, 0, 0xffffffff)
            float var_70_1 = var_e0_1
            float var_6c_1 = var_d8_1
            float var_68_1 = var_e4_1
            int32_t var_64_1 = var_dc_1
            var_8_1.b = 0xb
            sub_595240(arg1 + 0x38, &var_a0)
            
            if (var_74_1 u>= 0x10)
                sub_403160(var_88.d, var_74_1 + 1, 1)
            
            int32_t var_74_2 = 0xf
            int32_t var_78_2 = 0
            var_88 = 0
            
            if (var_8c_1 u>= 0x10)
                sub_403160(var_a0.d, var_8c_1 + 1, 1)
            
            if (var_34_1 u>= 0x10)
                sub_403160(var_48.d, var_34_1 + 1, 1)
            
            var_8_1.b = 0
            int32_t* result_3
            result = result_3
            int32_t var_34_2 = 0xf
            int32_t var_38_3 = 0
            var_48 = 0
            var_f0 = &common::CEXTreeReader::`vftable'
            
            if (result u>= 0x10)
                result = sub_403160(var_d0, result + 1, 1)
            
            ebx_1 = var_f8_1 + 1
            var_f8_1 = ebx_1
        while (ebx_1 s< result_1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
