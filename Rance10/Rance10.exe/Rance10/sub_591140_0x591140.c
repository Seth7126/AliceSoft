// 函数: sub_591140
// 地址: 0x591140
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73dee4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg1
int32_t* var_c4 = ebx
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg2 != 0)
    int32_t var_1ac_1 = 1
    char var_ac = 0x2f
    void* var_a8
    sub_405480(&ebx[2], &var_a8, sub_42cb30(&ebx[2], &var_ac, arg1) + 1, 0xffffffff)
    int32_t var_8_1 = 0
    void** var_78
    sub_419600(&var_a8, 0x7684e4, &var_78, &var_a8)
    var_8_1.b = 1
    void** edx_1 = &var_78
    struct _EXCEPTION_REGISTRATION_RECORD** var_64
    
    if (var_64 u>= 0x10)
        edx_1 = var_78
    
    int32_t* eax_7 = (*(*arg2 + 0x24))(edx_1)
    struct common::CEXTreeReader::VTable* const var_f0 = &common::CEXTreeReader::`vftable'
    int32_t* var_ec_1 = eax_7
    var_8_1.b = 2
    void* var_bc
    
    if (eax_7 == 0)
    label_591e6f:
        char var_b0
        eax_7.b = var_b0
        int32_t* ecx_98 = ebx[0xd]
        void* edx_9 = ebx[0xe] - ecx_98
        var_ac = eax_7.b
        int32_t eax_123 = edx_9 s/ 0x18
        sub_593940(eax_123, ebx[0xe], ecx_98, eax_123, &var_ac)
        int32_t* ecx_99 = ebx[0x10]
        void* edx_14 = ebx[0x11] - ecx_99
        var_ac = var_b0
        int32_t eax_128 = edx_14 s/ 0x18
        sub_593940(eax_128, ebx[0x11], ecx_99, eax_128, &var_ac)
        int32_t* ecx_100 = ebx[0x13]
        void* edx_19 = ebx[0x14] - ecx_100
        var_ac = var_b0
        int32_t eax_133 = edx_19 s/ 0xc
        sub_5935f0(eax_133, ebx[0x14], ecx_100, eax_133, &var_ac)
        int32_t* edi_7 = ebx[0x16]
        void* eax_134 = *edi_7
        var_bc = eax_134
        
        if (eax_134 != edi_7)
            ebx.b = var_b0
            
            do
                int32_t* esi_15 = *(eax_134 + 0x2c)
                int32_t* ecx_101 = *(eax_134 + 0x28)
                var_ac = ebx.b
                int32_t eax_138 = (esi_15 - ecx_101) s/ 0x18
                sub_593940(eax_138, esi_15, ecx_101, eax_138, &var_ac)
                sub_429080(&var_bc)
                eax_134 = var_bc
            while (eax_134 != edi_7)
            
            ebx = var_c4
        
        int32_t* edi_8 = ebx[0x18]
        void* eax_139 = *edi_8
        var_bc = eax_139
        
        if (eax_139 != edi_8)
            ebx.b = var_b0
            
            do
                int32_t* esi_16 = *(eax_139 + 0x2c)
                int32_t* ecx_103 = *(eax_139 + 0x28)
                var_ac = ebx.b
                int32_t eax_143 = (esi_16 - ecx_103) s/ 0x18
                sub_593940(eax_143, esi_16, ecx_103, eax_143, &var_ac)
                sub_429080(&var_bc)
                eax_139 = var_bc
            while (eax_139 != edi_8)
            
            ebx = var_c4
        
        int32_t* edi_9 = ebx[0x1a]
        void* eax_144 = *edi_9
        var_bc = eax_144
        
        if (eax_144 != edi_9)
            ebx.b = var_b0
            
            do
                char* esi_17 = *(eax_144 + 0x2c)
                int32_t* ecx_105 = *(eax_144 + 0x28)
                var_ac = ebx.b
                int32_t eax_148 = (esi_17 - ecx_105) s/ 0xc
                sub_5935f0(eax_148, esi_17, ecx_105, eax_148, &var_ac)
                sub_429080(&var_bc)
                eax_144 = var_bc
            while (eax_144 != edi_9)
            
            ebx = var_c4
        
        void** edi_10 = ebx[0x1c]
        void* eax_149 = *edi_10
        var_bc = eax_149
        
        if (eax_149 != edi_10)
            ebx.b = var_b0
            
            do
                char* esi_18 = *(eax_149 + 0x2c)
                int32_t* ecx_107 = *(eax_149 + 0x28)
                var_b0 = ebx.b
                int32_t eax_153 = (esi_18 - ecx_107) s/ 0xc
                sub_5935f0(eax_153, esi_18, ecx_107, eax_153, &var_b0)
                sub_429080(&var_bc)
                eax_149 = var_bc
            while (eax_149 != edi_10)
        
        ebx.b = 1
    else
        eax_7 = (*(*eax_7 + 0x14))(eax_2)
        void* esi_1 = nullptr
        int32_t* var_10c_1 = eax_7
        var_bc = nullptr
        
        if (eax_7 s<= 0)
            goto label_591e6f
        
        struct common::CEXTreeReader::VTable* const var_188_1 = &common::CEXTreeReader::`vftable'
        
        while (true)
            char var_90
            char* ecx_6 = sub_403dc0(&var_f0, &var_90, esi_1)
            var_8_1.b = 3
            int32_t* var_d0_1
            int32_t* edi_1
            
            if (var_ec_1 != 0)
                if (*(ecx_6 + 0x14) u>= 0x10)
                    ecx_6 = *ecx_6
                
                int32_t* eax_10 = (*(*var_ec_1 + 0x24))(ecx_6)
                edi_1 = eax_10
                var_d0_1 = eax_10
            else
                edi_1 = nullptr
                var_d0_1 = nullptr
            
            int32_t var_7c
            
            if (var_7c u>= 0x10)
                sub_403160(var_90.d, var_7c + 1, 1)
            
            var_7c = 0xf
            int32_t var_80_1 = 0
            var_90 = 0
            int32_t* var_184_1 = edi_1
            var_8_1.b = 4
            void* var_60
            char* eax_11 = sub_403dc0(&var_f0, &var_60, esi_1)
            
            if (*(eax_11 + 0x14) u>= 0x10)
                eax_11 = *eax_11
            
            void* var_c8
            int32_t* var_1ac_7 = &var_c8
            ebx.b = sub_6ca310(eax_11, 0x7942e0) == 1
            int32_t var_4c
            
            if (var_4c u>= 0x10)
                sub_403160(var_60, var_4c + 1, 1)
            
            char var_48
            
            if (ebx.b == 0)
                int32_t var_34_1 = 0xf
                int32_t var_38_1 = 0
                var_48 = 0
                sub_403490(&var_48, 0x768544, 0x20)
                var_8_1.b = 5
                sub_5e01e0(&var_48)
                
                if (var_34_1 u>= 0x10)
                    sub_403160(var_48.d, var_34_1 + 1, 1)
                
                ebx.b = 0
                break
            
            int32_t var_1c_1 = 0xf
            int32_t var_20_1 = 0
            char var_30 = 0
            sub_403490(&var_30, 0x768568, 0x22)
            var_8_1.b = 6
            int32_t* esi_2
            
            if (edi_1 != 0)
                char* ecx_12 = &var_30
                
                if (var_1c_1 u>= 0x10)
                    ecx_12 = var_30.d
                
                esi_2 = (*(*edi_1 + 0x2c))(ecx_12)
            else
                esi_2 = nullptr
            
            var_8_1.b = 4
            int32_t ecx_14 = var_1c_1
            
            if (ecx_14 u>= 0x10)
                ecx_14 = sub_403160(var_30.d, ecx_14 + 1, 1)
            
            int32_t* ebx_1
            int16_t top
            
            if (esi_2 == 0)
                ebx_1 = var_c4
            else
                struct common::CEXArrayReader::VTable* const var_114_1 =
                    &common::CEXArrayReader::`vftable'
                int32_t* var_110_1 = esi_2
                var_8_1.b = 7
                int32_t var_1ac_9 = ecx_14
                int32_t var_1ac_10 = (*(*esi_2 + 0x10))(2, 0)
                float var_c0_1 = fconvert.s(unimplemented  {fstp dword [ebp-0xbc], st0})
                unimplemented  {fstp dword [ebp-0xbc], st0}
                int32_t var_1ac_11 = (*(*esi_2 + 0x10))(1, 0)
                float var_cc_1 = fconvert.s(unimplemented  {fstp dword [ebp-0xc8], st0})
                unimplemented  {fstp dword [ebp-0xc8], st0}
                (*(*esi_2 + 0x10))(0, 0)
                ebx_1 = var_c4
                float var_b8_1 = fconvert.s(unimplemented  {fstp dword [ebp-0xb4], st0})
                unimplemented  {fstp dword [ebp-0xb4], st0}
                top += 3
                float var_14c_1 = var_cc_1
                float var_148_1 = var_c0_1
                int32_t var_144_1 = 0
                var_48.d = var_c8
                int32_t var_44_1 = 1
                int128_t var_40_1 = var_b8_1.o
                sub_592490(&ebx_1[0xd], &var_48)
                var_8_1.b = 4
                struct common::CEXArrayReader::VTable* const var_114_2 =
                    &common::CEXArrayReader::`vftable'
            
            int32_t var_1c_2 = 0xf
            int32_t var_20_2 = 0
            var_30 = 0
            sub_403490(&var_30, 0x768500, 0x22)
            var_8_1.b = 8
            int32_t* esi_3
            
            if (edi_1 != 0)
                char* ecx_23 = &var_30
                
                if (var_1c_2 u>= 0x10)
                    ecx_23 = var_30.d
                
                esi_3 = (*(*edi_1 + 0x2c))(ecx_23)
            else
                esi_3 = nullptr
            
            var_8_1.b = 4
            int32_t ecx_25 = var_1c_2
            
            if (ecx_25 u>= 0x10)
                ecx_25 = sub_403160(var_30.d, ecx_25 + 1, 1)
            
            if (esi_3 != 0)
                struct common::CEXArrayReader::VTable* const var_11c_1 =
                    &common::CEXArrayReader::`vftable'
                int32_t* var_118_1 = esi_3
                var_8_1.b = 9
                int32_t var_1ac_14 = ecx_25
                int32_t var_1ac_15 = (*(*esi_3 + 0x10))(2, 0)
                float var_b8_2 = fconvert.s(unimplemented  {fstp dword [ebp-0xb4], st0})
                unimplemented  {fstp dword [ebp-0xb4], st0}
                int32_t var_1ac_16 = (*(*esi_3 + 0x10))(1, 0)
                float var_cc_2 = fconvert.s(unimplemented  {fstp dword [ebp-0xc8], st0})
                unimplemented  {fstp dword [ebp-0xc8], st0}
                (*(*esi_3 + 0x10))(0, 0)
                float var_c0_2 = fconvert.s(unimplemented  {fstp dword [ebp-0xbc], st0})
                unimplemented  {fstp dword [ebp-0xbc], st0}
                top += 3
                float var_15c_1 = var_cc_2
                float var_158_1 = var_b8_2
                int32_t var_154_1 = 0
                var_48.d = var_c8
                int32_t var_44_2 = 1
                int128_t var_40_2 = var_c0_2.o
                sub_592490(&ebx_1[0x10], &var_48)
                var_8_1.b = 4
                struct common::CEXArrayReader::VTable* const var_11c_2 =
                    &common::CEXArrayReader::`vftable'
            
            int32_t var_1c_3 = 0xf
            int32_t var_20_3 = 0
            var_30 = 0
            sub_403490(&var_30, 0x768524, 0x1e)
            var_8_1.b = 0xa
            
            if (edi_1 != 0)
                char* ecx_34 = &var_30
                
                if (var_1c_3 u>= 0x10)
                    ecx_34 = var_30.d
                
                ebx_1.b = (*(*edi_1 + 4))(ecx_34)
            else
                ebx_1.b = 0
            
            var_8_1.b = 4
            
            if (var_1c_3 u>= 0x10)
                sub_403160(var_30.d, var_1c_3 + 1, 1)
            
            if (ebx_1.b != 0)
                int32_t var_1c_4 = 0xf
                int32_t var_20_4 = 0
                var_30 = 0
                sub_403490(&var_30, 0x7685c8, 0x1e)
                var_8_1.b = 0xb
                int32_t xmm0_9
                
                if (edi_1 != 0)
                    char* ecx_39 = &var_30
                    
                    if (var_1c_4 u>= 0x10)
                        ecx_39 = var_30.d
                    
                    char* var_1ac_19 = ecx_39
                    (*(*edi_1 + 0xc))(ecx_39, 0)
                    int32_t var_c0_3 = fconvert.s(unimplemented  {fstp dword [ebp-0xbc], st0})
                    unimplemented  {fstp dword [ebp-0xbc], st0}
                    top += 1
                    xmm0_9 = var_c0_3
                else
                    xmm0_9 = (zx.o(0)).d
                
                void* var_128 = var_c8
                int32_t var_120_1 = xmm0_9
                int32_t var_124_1 = 1
                sub_592380(&var_c4[0x13], &var_128)
                var_8_1.b = 4
                
                if (var_1c_4 u>= 0x10)
                    sub_403160(var_30.d, var_1c_4 + 1, 1)
            
            int32_t var_1c_5 = 0xf
            int32_t var_20_5 = 0
            var_30 = 0
            sub_403490(&var_30, 0x7685e8, 0x1e)
            var_8_1.b = 0xc
            int32_t* esi_4
            
            if (edi_1 != 0)
                char* ecx_44 = &var_30
                
                if (var_1c_5 u>= 0x10)
                    ecx_44 = var_30.d
                
                esi_4 = (*(*edi_1 + 0x24))(ecx_44)
            else
                esi_4 = nullptr
            
            struct common::CEXTreeReader::VTable* const var_e8 = &common::CEXTreeReader::`vftable'
            var_8_1.b = 0xe
            
            if (var_1c_5 u>= 0x10)
                sub_403160(var_30.d, var_1c_5 + 1, 1)
            
            int32_t var_1c_6 = 0xf
            int32_t var_20_6 = 0
            var_30 = 0
            int32_t eax_46
            
            if (esi_4 != 0)
                eax_46 = (*(*esi_4 + 0x18))()
            else
                eax_46 = 0
            
            int32_t ebx_2 = 0
            char* var_b4
            int32_t* var_34
            
            if (eax_46 s> 0)
                int32_t var_164_1 = 0
                struct common::CEXArrayReader::VTable* const var_190_1 =
                    &common::CEXArrayReader::`vftable'
                
                do
                    sub_403e80(&var_e8, &var_48, ebx_2)
                    var_8_1.b = 0xf
                    int32_t* ecx_48 = esi_4
                    int32_t* esi_5
                    
                    if (ecx_48 != 0)
                        char* edx_4 = &var_48
                        
                        if (var_34 u>= 0x10)
                            edx_4 = var_48.d
                        
                        int32_t* eax_51
                        eax_51, ecx_48 = (*(*ecx_48 + 0x2c))(edx_4)
                        esi_5 = eax_51
                    else
                        esi_5 = nullptr
                    
                    int32_t* var_18c_1 = esi_5
                    var_8_1.b = 0x10
                    int32_t xmm0_10
                    int32_t xmm1_1
                    int32_t xmm2_1
                    
                    if (esi_5 != 0)
                        int32_t* var_1ac_24 = ecx_48
                        int32_t var_1ac_25 = (*(*esi_5 + 0x10))(2, 0)
                        int32_t var_cc_3 = fconvert.s(unimplemented  {fstp dword [ebp-0xc8], st0})
                        unimplemented  {fstp dword [ebp-0xc8], st0}
                        int32_t var_1ac_26 = (*(*esi_5 + 0x10))(1, 0)
                        int32_t var_c0_5 = fconvert.s(unimplemented  {fstp dword [ebp-0xbc], st0})
                        unimplemented  {fstp dword [ebp-0xbc], st0}
                        (*(*esi_5 + 0x10))(0, 0)
                        xmm1_1 = var_c0_5
                        xmm0_10 = var_cc_3
                        var_b4 = fconvert.s(unimplemented  {fstp dword [ebp-0xb0], st0})
                        unimplemented  {fstp dword [ebp-0xb0], st0}
                        top += 3
                        xmm2_1 = var_b4
                    else
                        xmm0_10 = (zx.o(0)).d
                        xmm1_1 = (zx.o(0)).d
                        xmm2_1 = (zx.o(0)).d
                    
                    int32_t var_16c_1 = xmm1_1
                    int32_t var_168_1 = xmm0_10
                    var_60 = var_c8
                    int32_t var_5c_1 = 1
                    int128_t var_58_1 = xmm2_1.o
                    void** eax_59
                    int32_t ecx_55
                    eax_59, ecx_55 = sub_432330(&var_c4[0x16], &var_48)
                    void** esi_6 = eax_59
                    
                    if (esi_6 == var_c4[0x16])
                    label_591849:
                        int32_t var_1ac_29 = ecx_55
                        var_b4 = &var_48
                        char** var_1b0_15 = &var_b4
                        int32_t* eax_62 = sub_593330(ecx_55)
                        void** var_fc
                        sub_593700(&var_c4[0x16], &var_fc, esi_6, &eax_62[4], eax_62)
                        esi_6 = var_fc
                    else
                        char eax_61
                        eax_61, ecx_55 = sub_412ca0(&var_48, &esi_6[4])
                        
                        if (eax_61 != 0)
                            goto label_591849
                    
                    sub_592490(&esi_6[0xa], &var_60)
                    var_8_1.b = 0xe
                    
                    if (var_34 u>= 0x10)
                        sub_403160(var_48.d, var_34 + 1, 1)
                    
                    ebx_2 += 1
                while (ebx_2 s< eax_46)
                
                edi_1 = var_d0_1
            
            var_8_1.b = 4
            var_e8 = &common::CEXTreeReader::`vftable'
            int32_t var_1c_7 = 0xf
            int32_t var_20_7 = 0
            var_30 = 0
            sub_403490(&var_30, 0x76858c, 0x1e)
            var_8_1.b = 0x11
            int32_t* esi_7
            
            if (edi_1 != 0)
                char* ecx_60 = &var_30
                
                if (var_1c_7 u>= 0x10)
                    ecx_60 = var_30.d
                
                esi_7 = (*(*edi_1 + 0x24))(ecx_60)
            else
                esi_7 = nullptr
            
            struct common::CEXTreeReader::VTable* const var_e0 = &common::CEXTreeReader::`vftable'
            var_8_1.b = 0x13
            
            if (var_1c_7 u>= 0x10)
                sub_403160(var_30.d, var_1c_7 + 1, 1)
            
            int32_t var_1c_8 = 0xf
            int32_t var_20_8 = 0
            var_30 = 0
            int32_t eax_70
            
            if (esi_7 != 0)
                eax_70 = (*(*esi_7 + 0x18))()
            else
                eax_70 = 0
            
            int32_t ebx_3 = 0
            
            if (eax_70 s> 0)
                int32_t var_174_1 = 0
                struct common::CEXArrayReader::VTable* const var_198_1 =
                    &common::CEXArrayReader::`vftable'
                
                do
                    sub_403e80(&var_e0, &var_48, ebx_3)
                    var_8_1.b = 0x14
                    int32_t* ecx_64 = esi_7
                    int32_t* esi_8
                    
                    if (ecx_64 != 0)
                        char* edx_5 = &var_48
                        
                        if (var_34 u>= 0x10)
                            edx_5 = var_48.d
                        
                        int32_t* eax_75
                        eax_75, ecx_64 = (*(*ecx_64 + 0x2c))(edx_5)
                        esi_8 = eax_75
                    else
                        esi_8 = nullptr
                    
                    int32_t* var_194_1 = esi_8
                    var_8_1.b = 0x15
                    int32_t xmm0_12
                    char* xmm1_2
                    int32_t xmm2_2
                    
                    if (esi_8 != 0)
                        int32_t* var_1ac_35 = ecx_64
                        int32_t var_1ac_36 = (*(*esi_8 + 0x10))(2, 0)
                        int32_t var_c0_6 = fconvert.s(unimplemented  {fstp dword [ebp-0xbc], st0})
                        unimplemented  {fstp dword [ebp-0xbc], st0}
                        int32_t ecx_68 = (*(*esi_8 + 0x10))(1, 0)
                        void* eax_80 = *esi_8
                        int32_t var_1ac_37 = ecx_68
                        var_b4 = fconvert.s(unimplemented  {fstp dword [ebp-0xb0], st0})
                        unimplemented  {fstp dword [ebp-0xb0], st0}
                        (*(eax_80 + 0x10))(0, 0)
                        xmm1_2 = var_b4
                        xmm0_12 = var_c0_6
                        int32_t var_cc_4 = fconvert.s(unimplemented  {fstp dword [ebp-0xc8], st0})
                        unimplemented  {fstp dword [ebp-0xc8], st0}
                        top += 3
                        xmm2_2 = var_cc_4
                    else
                        xmm0_12 = (zx.o(0)).d
                        xmm1_2 = (zx.o(0)).d
                        xmm2_2 = (zx.o(0)).d
                    
                    char* var_17c_1 = xmm1_2
                    int32_t var_178_1 = xmm0_12
                    var_60 = var_c8
                    int32_t var_5c_2 = 1
                    int128_t var_58_2 = xmm2_2.o
                    void** eax_83
                    int32_t ecx_71
                    eax_83, ecx_71 = sub_432330(&var_c4[0x18], &var_48)
                    void** esi_9 = eax_83
                    
                    if (esi_9 == var_c4[0x18])
                    label_591a89:
                        int32_t var_1ac_40 = ecx_71
                        var_b4 = &var_48
                        char** var_1b0_21 = &var_b4
                        int32_t* eax_86 = sub_593330(ecx_71)
                        void** var_100
                        sub_593700(&var_c4[0x18], &var_100, esi_9, &eax_86[4], eax_86)
                        esi_9 = var_100
                    else
                        char eax_85
                        eax_85, ecx_71 = sub_412ca0(&var_48, &esi_9[4])
                        
                        if (eax_85 != 0)
                            goto label_591a89
                    
                    sub_592490(&esi_9[0xa], &var_60)
                    var_8_1.b = 0x13
                    
                    if (var_34 u>= 0x10)
                        sub_403160(var_48.d, var_34 + 1, 1)
                    
                    ebx_3 += 1
                while (ebx_3 s< eax_70)
                
                edi_1 = var_d0_1
            
            var_8_1.b = 4
            var_e0 = &common::CEXTreeReader::`vftable'
            int32_t var_1c_9 = 0xf
            int32_t var_20_9 = 0
            var_30 = 0
            sub_403490(&var_30, 0x7685ac, 0x1a)
            var_8_1.b = 0x16
            int32_t* esi_10
            
            if (edi_1 != 0)
                char* ecx_76 = &var_30
                
                if (var_1c_9 u>= 0x10)
                    ecx_76 = var_30.d
                
                esi_10 = (*(*edi_1 + 0x24))(ecx_76)
            else
                esi_10 = nullptr
            
            struct common::CEXTreeReader::VTable* const var_d8 = &common::CEXTreeReader::`vftable'
            var_8_1.b = 0x18
            
            if (var_1c_9 u>= 0x10)
                sub_403160(var_30.d, var_1c_9 + 1, 1)
            
            int32_t var_1c_10 = 0xf
            int32_t var_20_10 = 0
            var_30 = 0
            int32_t eax_94
            
            if (esi_10 != 0)
                eax_94 = (*(*esi_10 + 0x18))()
            else
                eax_94 = 0
            
            ebx = nullptr
            
            if (eax_94 s> 0)
                do
                    sub_403e80(&var_d8, &var_48, ebx)
                    var_8_1.b = 0x19
                    char* xmm0_14
                    
                    if (esi_10 != 0)
                        char* edx_6 = &var_48
                        
                        if (var_34 u>= 0x10)
                            edx_6 = var_48.d
                        
                        int32_t* var_1ac_45 = esi_10
                        (*(*esi_10 + 0xc))(edx_6, 0)
                        var_b4 = fconvert.s(unimplemented  {fstp dword [ebp-0xb0], st0})
                        unimplemented  {fstp dword [ebp-0xb0], st0}
                        top += 1
                        xmm0_14 = var_b4
                    else
                        xmm0_14 = (zx.o(0)).d
                    
                    void* var_134 = var_c8
                    var_b4 = xmm0_14
                    char* var_12c_1 = var_b4
                    int32_t var_130_1 = 1
                    void** eax_100
                    int32_t ecx_82
                    eax_100, ecx_82 = sub_432330(&var_c4[0x1a], &var_48)
                    void** esi_11 = eax_100
                    
                    if (esi_11 == var_c4[0x1a])
                    label_591c43:
                        int32_t var_1ac_48 = ecx_82
                        var_b4 = &var_48
                        char** var_1b0_28 = &var_b4
                        int32_t* eax_103 = sub_593330(ecx_82)
                        void** var_104
                        sub_5933b0(&var_c4[0x1a], &var_104, esi_11, &eax_103[4], eax_103)
                        esi_11 = var_104
                    else
                        char eax_102
                        eax_102, ecx_82 = sub_412ca0(&var_48, &esi_11[4])
                        
                        if (eax_102 != 0)
                            goto label_591c43
                    
                    sub_592380(&esi_11[0xa], &var_134)
                    var_8_1.b = 0x18
                    
                    if (var_34 u>= 0x10)
                        sub_403160(var_48.d, var_34 + 1, 1)
                    
                    ebx += 1
                while (ebx s< eax_94)
                
                edi_1 = var_d0_1
            
            var_8_1.b = 4
            var_d8 = &common::CEXTreeReader::`vftable'
            int32_t var_1c_11 = 0xf
            int32_t var_20_11 = 0
            var_30 = 0
            sub_403490(&var_30, 0x768608, 0x20)
            var_8_1.b = 0x1a
            int32_t* esi_12
            
            if (edi_1 != 0)
                char* ecx_87 = &var_30
                
                if (var_1c_11 u>= 0x10)
                    ecx_87 = var_30.d
                
                esi_12 = (*(*edi_1 + 0x24))(ecx_87)
            else
                esi_12 = nullptr
            
            struct common::CEXTreeReader::VTable* const var_f8 = &common::CEXTreeReader::`vftable'
            var_8_1.b = 0x1c
            
            if (var_1c_11 u>= 0x10)
                sub_403160(var_30.d, var_1c_11 + 1, 1)
            
            int32_t var_1c_12 = 0xf
            int32_t var_20_12 = 0
            var_30 = 0
            
            if (esi_12 != 0)
                eax_7 = (*(*esi_12 + 0x18))()
            else
                eax_7 = nullptr
            
            int32_t edi_6 = 0
            
            if (eax_7 s> 0)
                do
                    sub_403e80(&var_f8, &var_48, edi_6)
                    var_8_1.b = 0x1d
                    int32_t eax_112
                    
                    if (esi_12 != 0)
                        char* edx_7 = &var_48
                        
                        if (var_34 u>= 0x10)
                            edx_7 = var_48.d
                        
                        eax_112 = (*(*esi_12 + 8))(edx_7, 0)
                    else
                        eax_112 = 0
                    
                    int32_t var_138_1 = eax_112
                    void* var_140 = var_c8
                    int32_t var_13c_1 = 0
                    void** eax_114
                    int32_t ecx_94
                    eax_114, ecx_94 = sub_432330(&var_c4[0x1c], &var_48)
                    void** esi_13 = eax_114
                    
                    if (esi_13 == var_c4[0x1c])
                    label_591ddb:
                        int32_t var_1ac_55 = ecx_94
                        var_b4 = &var_48
                        char** var_1b0_35 = &var_b4
                        int32_t* eax_117 = sub_593330(ecx_94)
                        void** var_108
                        sub_5933b0(&var_c4[0x1c], &var_108, esi_13, &eax_117[4], eax_117)
                        esi_13 = var_108
                    else
                        char eax_116
                        eax_116, ecx_94 = sub_412ca0(&var_48, &esi_13[4])
                        
                        if (eax_116 != 0)
                            goto label_591ddb
                    
                    sub_592380(&esi_13[0xa], &var_140)
                    var_8_1.b = 0x1c
                    
                    if (var_34 u>= 0x10)
                        sub_403160(var_48.d, var_34 + 1, 1)
                    
                    edi_6 += 1
                while (edi_6 s< eax_7)
            
            var_8_1.b = 2
            esi_1 = var_bc + 1
            var_f8 = &common::CEXTreeReader::`vftable'
            var_bc = esi_1
            
            if (esi_1 s>= var_10c_1)
                ebx = var_c4
                goto label_591e6f
    
    if (var_64 u>= 0x10)
        sub_403160(var_78, var_64 + 1, 1)
    
    int32_t var_64_1 = 0xf
    int32_t var_68_1 = 0
    var_78.b = 0
    int32_t var_94
    
    if (var_94 u>= 0x10)
        sub_403160(var_a8, var_94 + 1, 1)
    
    result.b = ebx.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
