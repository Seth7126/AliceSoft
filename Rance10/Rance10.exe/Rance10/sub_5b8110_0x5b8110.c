// 函数: sub_5b8110
// 地址: 0x5b8110
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73f5d2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = (*(*arg2 + 0x24))(0x769ed0)
struct common::CEXTreeReader::VTable* const var_c4 = &common::CEXTreeReader::`vftable'
int32_t* result_2 = result
int32_t var_8_1 = 0

if (result != 0)
    result = (*(*result + 0x14))(eax_2)
    int32_t ebx_1 = 0
    int32_t* result_1 = result
    int32_t var_bc_1 = 0
    
    if (result s> 0)
        do
            char var_30
            char* ecx_3 = sub_403dc0(&var_c4, &var_30, ebx_1)
            var_8_1.b = 1
            int32_t* esi_1
            
            if (result_2 != 0)
                if (*(ecx_3 + 0x14) u>= 0x10)
                    ecx_3 = *ecx_3
                
                esi_1 = (*(*result_2 + 0x24))(ecx_3)
            else
                esi_1 = nullptr
            
            int32_t* result_5
            
            if (result_5 u>= 0x10)
                sub_403160(var_30.d, result_5 + 1, 1)
            
            result_5 = 0xf
            int32_t var_20_1 = 0
            var_30 = 0
            struct common::CEXTreeReader::VTable* const var_ac = &common::CEXTreeReader::`vftable'
            var_8_1.b = 2
            int32_t* result_4 = 0xf
            int32_t var_38_1 = 0
            char var_48 = 0
            sub_403490(&var_48, 0x769ec4, 8)
            var_8_1.b = 3
            char var_60
            char* eax_7 = sub_403dc0(&var_c4, &var_60, ebx_1)
            var_8_1.b = 4
            int32_t eax_8
            
            if (esi_1 != 0)
                char* ecx_9 = &var_48
                
                if (result_4 u>= 0x10)
                    ecx_9 = var_48.d
                
                eax_8 = (*(*esi_1 + 8))(ecx_9, 0)
            else
                eax_8 = 0
            
            eax_8.b = eax_8 != 0
            uint32_t var_104_4 = zx.d(eax_8.b)
            void** var_a4
            sub_5bb8b0(arg1, &var_a4, eax_7)
            int32_t var_4c
            
            if (var_4c u>= 0x10)
                sub_403160(var_60.d, var_4c + 1, 1)
            
            var_4c = 0xf
            int32_t var_50_1 = 0
            var_60 = 0
            var_8_1.b = 7
            result = result_4
            
            if (result u>= 0x10)
                result = sub_403160(var_48.d, result + 1, 1)
            
            int32_t var_34_1 = 0xf
            int32_t var_38_2 = 0
            var_48 = 0
            int32_t* result_3
            int32_t* result_6
            
            if (esi_1 != 0)
                result = (*(*esi_1 + 0x18))()
                result_6 = result
                result_3 = result
            else
                result_6 = nullptr
                result_3 = nullptr
            
            int32_t ebx_2 = 0
            int32_t var_98_1 = 0
            int32_t var_a0
            
            if (result_6 s> 0)
                do
                    sub_403e80(&var_ac, &var_30, ebx_2)
                    var_8_1.b = 8
                    char* ecx_14 = &var_30
                    int32_t eax_15 = 0xc
                    
                    if (result_5 u>= 0x10)
                        ecx_14 = var_30.d
                    
                    if (var_20_1 u< 0xc)
                        eax_15 = var_20_1
                    
                    int16_t top
                    
                    if (sub_406ac0(eax_15, 0x769f38, ecx_14, eax_15) != 0 || var_20_1 u< 0xc
                            || var_20_1 u> 0xc)
                        char* ecx_18 = &var_30
                        int32_t eax_19 = 0x12
                        
                        if (result_5 u>= 0x10)
                            ecx_18 = var_30.d
                        
                        if (var_20_1 u< 0x12)
                            eax_19 = var_20_1
                        
                        if (sub_406ac0(eax_19, 0x769f24, ecx_18, eax_19) != 0 || var_20_1 u< 0x12
                                || var_20_1 u> 0x12)
                            char* ecx_22 = &var_30
                            int32_t eax_23 = 0x12
                            
                            if (result_5 u>= 0x10)
                                ecx_22 = var_30.d
                            
                            if (var_20_1 u< 0x12)
                                eax_23 = var_20_1
                            
                            if (sub_406ac0(eax_23, 0x769f10, ecx_22, eax_23) != 0
                                    || var_20_1 u< 0x12 || var_20_1 u> 0x12)
                                char* ecx_27 = &var_30
                                int32_t eax_32 = 0xc
                                
                                if (result_5 u>= 0x10)
                                    ecx_27 = var_30.d
                                
                                if (var_20_1 u< 0xc)
                                    eax_32 = var_20_1
                                
                                int32_t eax_33
                                int32_t ecx_28
                                eax_33, ecx_28 = sub_406ac0(eax_32, 0x769f00, ecx_27, eax_32)
                                
                                if (eax_33 != 0 || var_20_1 u< 0xc || var_20_1 u> 0xc)
                                    char* ecx_36 = &var_30
                                    int32_t eax_43 = 0xe
                                    
                                    if (result_5 u>= 0x10)
                                        ecx_36 = var_30.d
                                    
                                    if (var_20_1 u< 0xe)
                                        eax_43 = var_20_1
                                    
                                    if (sub_406ac0(eax_43, 0x76a098, ecx_36, eax_43) != 0
                                            || var_20_1 u< 0xe || var_20_1 u> 0xe)
                                        char* ecx_39 = &var_30
                                        int32_t eax_48 = 0x12
                                        
                                        if (result_5 u>= 0x10)
                                            ecx_39 = var_30.d
                                        
                                        if (var_20_1 u< 0x12)
                                            eax_48 = var_20_1
                                        
                                        if (sub_406ac0(eax_48, 0x76a084, ecx_39, eax_48) != 0
                                                || var_20_1 u< 0x12 || var_20_1 u> 0x12)
                                            if (sub_407560(&var_30, 0x76a070) == 0)
                                                if (sub_407560(&var_30, 0x76a060) == 0)
                                                    if (sub_407560(&var_30, 0x76a0c8) == 0)
                                                        if (sub_407560(&var_30, 0x76a0a8) == 0)
                                                            if (sub_407560(&var_30, 0x76a110) == 0)
                                                                if (sub_407560(&var_30, 0x76a0f8) == 0)
                                                                    if (sub_407560(&var_30, 0x76a0e8) == 0)
                                                                        if (sub_407560(&var_30, 0x76a0d8) == 0)
                                                                            if (sub_407560(&var_30, 0x76a154) == 0)
                                                                                if (sub_407560(&var_30, 0x76a140) == 0)
                                                                                    if (sub_407560(&var_30, 0x76a130) != 0)
                                                                                        void* esi_19 = var_a4
                                                                                        
                                                                                        if (esi_19 == var_a0)
                                                                                            result_6 = result_3
                                                                                        else
                                                                                            do
                                                                                                int32_t eax_87
                                                                                                
                                                                                                if (esi_1 != 0)
                                                                                                    char* ecx_84 = &var_30
                                                                                                    
                                                                                                    if (result_5 u>= 0x10)
                                                                                                        ecx_84 = var_30.d
                                                                                                    
                                                                                                    eax_87 = (*(*esi_1 + 8))(ecx_84, 0)
                                                                                                else
                                                                                                    eax_87 = 0
                                                                                                
                                                                                                void* ecx_86 = *esi_19
                                                                                                eax_87.b = eax_87 != 0
                                                                                                esi_19 += 4
                                                                                                *(ecx_86 + 0x22) = eax_87.b
                                                                                            while (esi_19 != var_a0)
                                                                                            
                                                                                            ebx_2 = var_98_1
                                                                                            result_6 = result_3
                                                                                else
                                                                                    void** esi_18 = var_a4
                                                                                    
                                                                                    if (esi_18 == var_a0)
                                                                                        result_6 = result_3
                                                                                    else
                                                                                        do
                                                                                            int32_t eax_84
                                                                                            
                                                                                            if (esi_1 != 0)
                                                                                                char* ecx_80 = &var_30
                                                                                                
                                                                                                if (result_5 u>= 0x10)
                                                                                                    ecx_80 = var_30.d
                                                                                                
                                                                                                eax_84 = (*(*esi_1 + 8))(ecx_80, 0)
                                                                                            else
                                                                                                eax_84 = 0
                                                                                            
                                                                                            void* ecx_82 = *esi_18
                                                                                            eax_84.b = eax_84 != 0
                                                                                            esi_18 = &esi_18[1]
                                                                                            *(ecx_82 + 0x77) = eax_84.b
                                                                                        while (esi_18 != var_a0)
                                                                                        
                                                                                        ebx_2 = var_98_1
                                                                                        result_6 = result_3
                                                                            else
                                                                                void** esi_17 = var_a4
                                                                                
                                                                                if (esi_17 == var_a0)
                                                                                    result_6 = result_3
                                                                                else
                                                                                    do
                                                                                        int32_t eax_81
                                                                                        
                                                                                        if (esi_1 != 0)
                                                                                            char* ecx_76 = &var_30
                                                                                            
                                                                                            if (result_5 u>= 0x10)
                                                                                                ecx_76 = var_30.d
                                                                                            
                                                                                            eax_81 = (*(*esi_1 + 8))(ecx_76, 0)
                                                                                        else
                                                                                            eax_81 = 0
                                                                                        
                                                                                        void* ecx_78 = *esi_17
                                                                                        eax_81.b = eax_81 != 0
                                                                                        esi_17 = &esi_17[1]
                                                                                        *(ecx_78 + 0x76) = eax_81.b
                                                                                    while (esi_17 != var_a0)
                                                                                    
                                                                                    ebx_2 = var_98_1
                                                                                    result_6 = result_3
                                                                        else
                                                                            void** esi_16 = var_a4
                                                                            
                                                                            if (esi_16 == var_a0)
                                                                                result_6 = result_3
                                                                            else
                                                                                do
                                                                                    int32_t eax_78
                                                                                    
                                                                                    if (esi_1 != 0)
                                                                                        char* ecx_72 = &var_30
                                                                                        
                                                                                        if (result_5 u>= 0x10)
                                                                                            ecx_72 = var_30.d
                                                                                        
                                                                                        eax_78 = (*(*esi_1 + 8))(ecx_72, 0)
                                                                                    else
                                                                                        eax_78 = 0
                                                                                    
                                                                                    void* ecx_74 = *esi_16
                                                                                    eax_78.b = eax_78 != 0
                                                                                    esi_16 = &esi_16[1]
                                                                                    *(ecx_74 + 0x3d) = eax_78.b
                                                                                while (esi_16 != var_a0)
                                                                                
                                                                                ebx_2 = var_98_1
                                                                                result_6 = result_3
                                                                    else
                                                                        void** esi_15 = var_a4
                                                                        
                                                                        if (esi_15 == var_a0)
                                                                            result_6 = result_3
                                                                        else
                                                                            do
                                                                                int32_t eax_75
                                                                                
                                                                                if (esi_1 != 0)
                                                                                    char* ecx_68 = &var_30
                                                                                    
                                                                                    if (result_5 u>= 0x10)
                                                                                        ecx_68 = var_30.d
                                                                                    
                                                                                    eax_75 = (*(*esi_1 + 8))(ecx_68, 0)
                                                                                else
                                                                                    eax_75 = 0
                                                                                
                                                                                void* ecx_70 = *esi_15
                                                                                eax_75.b = eax_75 != 0
                                                                                esi_15 = &esi_15[1]
                                                                                *(ecx_70 + 0x74) = eax_75.b
                                                                            while (esi_15 != var_a0)
                                                                            
                                                                            ebx_2 = var_98_1
                                                                            result_6 = result_3
                                                                else
                                                                    void** esi_14 = var_a4
                                                                    
                                                                    if (esi_14 == var_a0)
                                                                        result_6 = result_3
                                                                    else
                                                                        do
                                                                            int32_t eax_72
                                                                            
                                                                            if (esi_1 != 0)
                                                                                char* ecx_64 = &var_30
                                                                                
                                                                                if (result_5 u>= 0x10)
                                                                                    ecx_64 = var_30.d
                                                                                
                                                                                eax_72 = (*(*esi_1 + 8))(ecx_64, 0)
                                                                            else
                                                                                eax_72 = 0
                                                                            
                                                                            void* ecx_66 = *esi_14
                                                                            eax_72.b = eax_72 != 0
                                                                            esi_14 = &esi_14[1]
                                                                            *(ecx_66 + 0x75) = eax_72.b
                                                                        while (esi_14 != var_a0)
                                                                        
                                                                        ebx_2 = var_98_1
                                                                        result_6 = result_3
                                                            else
                                                                void** esi_13 = var_a4
                                                                
                                                                if (esi_13 == var_a0)
                                                                    result_6 = result_3
                                                                else
                                                                    do
                                                                        int32_t eax_69
                                                                        
                                                                        if (esi_1 != 0)
                                                                            char* ecx_60 = &var_30
                                                                            
                                                                            if (result_5 u>= 0x10)
                                                                                ecx_60 = var_30.d
                                                                            
                                                                            eax_69 = (*(*esi_1 + 8))(ecx_60, 0)
                                                                        else
                                                                            eax_69 = 0
                                                                        
                                                                        void* ecx_62 = *esi_13
                                                                        eax_69.b = eax_69 != 0
                                                                        esi_13 = &esi_13[1]
                                                                        *(ecx_62 + 0x23) = eax_69.b
                                                                    while (esi_13 != var_a0)
                                                                    
                                                                    ebx_2 = var_98_1
                                                                    result_6 = result_3
                                                        else
                                                            void** esi_12 = var_a4
                                                            
                                                            if (esi_12 == var_a0)
                                                                result_6 = result_3
                                                            else
                                                                do
                                                                    int32_t eax_66
                                                                    
                                                                    if (esi_1 != 0)
                                                                        char* ecx_56 = &var_30
                                                                        
                                                                        if (result_5 u>= 0x10)
                                                                            ecx_56 = var_30.d
                                                                        
                                                                        eax_66 = (*(*esi_1 + 8))(ecx_56, 0)
                                                                    else
                                                                        eax_66 = 0
                                                                    
                                                                    void* ecx_58 = *esi_12
                                                                    eax_66.b = eax_66 != 0
                                                                    esi_12 = &esi_12[1]
                                                                    *(ecx_58 + 0x78) = eax_66.b
                                                                while (esi_12 != var_a0)
                                                                
                                                                ebx_2 = var_98_1
                                                                result_6 = result_3
                                                    else
                                                        void var_90
                                                        sub_403360(&var_90, 0x75d55e)
                                                        var_8_1.b = 0xb
                                                        void* var_78
                                                        sub_403cd0(&var_ac, &var_78, &var_30, 
                                                            &var_90)
                                                        sub_403320(&var_90)
                                                        char eax_61 = sub_407560(&var_78, 0x76a0bc)
                                                        void** esi_11 = var_a4
                                                        int32_t ebx_11
                                                        ebx_11.b = eax_61 != 0
                                                        int32_t ecx_54 = 0
                                                        uint32_t edx_8 = (var_a0 - esi_11 + 3) u>> 2
                                                        
                                                        if (esi_11 u> var_a0)
                                                            edx_8 = 0
                                                        
                                                        if (edx_8 != 0)
                                                            do
                                                                void* eax_62 = *esi_11
                                                                esi_11 = &esi_11[1]
                                                                ecx_54 += 1
                                                                *(eax_62 + 0x70) = ebx_11
                                                            while (ecx_54 != edx_8)
                                                        
                                                        int32_t var_64
                                                        
                                                        if (var_64 u>= 0x10)
                                                            sub_403160(var_78, var_64 + 1, 1)
                                                        
                                                        ebx_2 = var_98_1
                                                else
                                                    void** esi_10 = var_a4
                                                    
                                                    if (esi_10 == var_a0)
                                                        result_6 = result_3
                                                    else
                                                        do
                                                            int32_t eax_58
                                                            
                                                            if (esi_1 != 0)
                                                                char* ecx_46 = &var_30
                                                                
                                                                if (result_5 u>= 0x10)
                                                                    ecx_46 = var_30.d
                                                                
                                                                eax_58 = (*(*esi_1 + 8))(ecx_46, 0)
                                                            else
                                                                eax_58 = 0
                                                            
                                                            void* ecx_48 = *esi_10
                                                            eax_58.b = eax_58 != 0
                                                            esi_10 = &esi_10[1]
                                                            *(ecx_48 + 0x6c) = eax_58.b
                                                        while (esi_10 != var_a0)
                                                        
                                                        ebx_2 = var_98_1
                                                        result_6 = result_3
                                            else
                                                void** esi_9 = var_a4
                                                
                                                if (esi_9 == var_a0)
                                                    result_6 = result_3
                                                else
                                                    do
                                                        int32_t xmm0_7
                                                        
                                                        if (esi_1 != 0)
                                                            char* ecx_43 = &var_30
                                                            
                                                            if (result_5 u>= 0x10)
                                                                ecx_43 = var_30.d
                                                            
                                                            char* var_104_22 = ecx_43
                                                            (*(*esi_1 + 0xc))(ecx_43, 0)
                                                            int32_t var_b0_4 = fconvert.s(
                                                                unimplemented  {fstp dword [ebp-0xac], 
                                                                st0})
                                                            unimplemented  {fstp dword [ebp-0xac], 
                                                                st0}
                                                            top += 1
                                                            xmm0_7 = var_b0_4
                                                        else
                                                            xmm0_7 = (zx.o(0)).d
                                                        
                                                        void* eax_56 = *esi_9
                                                        esi_9 = &esi_9[1]
                                                        *(eax_56 + 0x4c) = xmm0_7
                                                    while (esi_9 != var_a0)
                                                    
                                                    ebx_2 = var_98_1
                                                    result_6 = result_3
                                        else
                                            void** esi_8 = var_a4
                                            
                                            if (esi_8 == var_a0)
                                                result_6 = result_3
                                            else
                                                do
                                                    int32_t xmm0_6
                                                    
                                                    if (esi_1 != 0)
                                                        char* ecx_40 = &var_30
                                                        
                                                        if (result_5 u>= 0x10)
                                                            ecx_40 = var_30.d
                                                        
                                                        char* var_104_21 = ecx_40
                                                        (*(*esi_1 + 0xc))(ecx_40, 0)
                                                        int32_t var_b0_3 = fconvert.s(unimplemented
                                                              {fstp dword [ebp-0xac], st0})
                                                        unimplemented  {fstp dword [ebp-0xac], st0}
                                                        top += 1
                                                        xmm0_6 = var_b0_3
                                                    else
                                                        xmm0_6 = (zx.o(0)).d
                                                    
                                                    void* eax_52 = *esi_8
                                                    esi_8 = &esi_8[1]
                                                    *(eax_52 + 0x48) = xmm0_6
                                                while (esi_8 != var_a0)
                                                
                                                ebx_2 = var_98_1
                                                result_6 = result_3
                                    else
                                        void** esi_7 = var_a4
                                        
                                        if (esi_7 == var_a0)
                                            result_6 = result_3
                                        else
                                            do
                                                int32_t xmm0_5
                                                
                                                if (esi_1 != 0)
                                                    char* ecx_37 = &var_30
                                                    
                                                    if (result_5 u>= 0x10)
                                                        ecx_37 = var_30.d
                                                    
                                                    char* var_104_19 = ecx_37
                                                    (*(*esi_1 + 0xc))(ecx_37, 0)
                                                    int32_t var_b0_2 = fconvert.s(unimplemented  {
                                                        fstp dword [ebp-0xac], st0})
                                                    unimplemented  {fstp dword [ebp-0xac], st0}
                                                    top += 1
                                                    xmm0_5 = var_b0_2
                                                else
                                                    xmm0_5 = (zx.o(0)).d
                                                
                                                void* eax_47 = *esi_7
                                                esi_7 = &esi_7[1]
                                                *(eax_47 + 0x68) = xmm0_5
                                            while (esi_7 != var_a0)
                                            
                                            ebx_2 = var_98_1
                                            result_6 = result_3
                                else
                                    void** esi_6 = var_a4
                                    
                                    if (esi_6 == var_a0)
                                        result_6 = result_3
                                    else
                                        int32_t var_d8_1 = 0x3f800000
                                        struct common::CEXArrayReader::VTable* const var_ec_1 =
                                            &common::CEXArrayReader::`vftable'
                                        
                                        do
                                            int32_t* ebx_6
                                            
                                            if (esi_1 != 0)
                                                char* ecx_29 = &var_30
                                                
                                                if (result_5 u>= 0x10)
                                                    ecx_29 = var_30.d
                                                
                                                int32_t* eax_35
                                                eax_35, ecx_28 = (*(*esi_1 + 0x2c))(ecx_29)
                                                ebx_6 = eax_35
                                            else
                                                ebx_6 = nullptr
                                            
                                            int32_t* var_e8_1 = ebx_6
                                            var_8_1.b = 0xa
                                            int32_t xmm0_3
                                            int32_t xmm1_2
                                            int32_t xmm2_1
                                            
                                            if (ebx_6 != 0)
                                                int32_t var_104_15 = ecx_28
                                                int32_t var_104_16 = (*(*ebx_6 + 0x10))(2, 0)
                                                float var_b8_2 = fconvert.s(unimplemented  {fstp 
                                                    dword [ebp-0xb4], st0})
                                                unimplemented  {fstp dword [ebp-0xb4], st0}
                                                int32_t var_104_17 = (*(*ebx_6 + 0x10))(1, 0)
                                                int32_t var_b4_3 = fconvert.s(unimplemented  {fstp 
                                                    dword [ebp-0xb0], st0})
                                                unimplemented  {fstp dword [ebp-0xb0], st0}
                                                ecx_28 = (*(*ebx_6 + 0x10))(0, 0)
                                                xmm0_3 = var_b8_2
                                                xmm1_2 = var_b4_3
                                                float var_b0_1 = fconvert.s(unimplemented  {fstp 
                                                    dword [ebp-0xac], st0})
                                                unimplemented  {fstp dword [ebp-0xac], st0}
                                                top += 3
                                                xmm2_1 = var_b0_1
                                            else
                                                xmm2_1 = (zx.o(0)).d
                                                xmm0_3 = (zx.o(0)).d
                                                xmm1_2 = (zx.o(0)).d
                                            
                                            void* eax_42 = *esi_6
                                            esi_6 = &esi_6[1]
                                            int32_t var_e0_1 = xmm1_2
                                            int32_t var_dc_1 = xmm0_3
                                            var_8_1.b = 8
                                            *(eax_42 + 0x58) = xmm2_1.o
                                        while (esi_6 != var_a0)
                                        
                                        ebx_2 = var_98_1
                                        result_6 = result_3
                            else
                                int32_t* ecx_23 = esi_1
                                int32_t* ebx_5
                                
                                if (ecx_23 != 0)
                                    char* edx_3 = &var_30
                                    
                                    if (result_5 u>= 0x10)
                                        edx_3 = var_30.d
                                    
                                    int32_t* eax_26
                                    eax_26, ecx_23 = (*(*ecx_23 + 0x2c))(edx_3)
                                    ebx_5 = eax_26
                                else
                                    ebx_5 = nullptr
                                
                                struct common::CEXArrayReader::VTable* const var_d4_1 =
                                    &common::CEXArrayReader::`vftable'
                                int32_t* var_d0_1 = ebx_5
                                var_8_1.b = 9
                                void** esi_5 = var_a4
                                
                                while (esi_5 != var_a0)
                                    int32_t xmm0_2
                                    int32_t xmm1_1
                                    
                                    if (ebx_5 != 0)
                                        int32_t* var_104_11 = ecx_23
                                        int32_t var_104_12 = (*(*ebx_5 + 0x10))(1, 0)
                                        int32_t var_b8_1 =
                                            fconvert.s(unimplemented  {fstp dword [ebp-0xb4], st0})
                                        unimplemented  {fstp dword [ebp-0xb4], st0}
                                        ecx_23 = (*(*ebx_5 + 0x10))(0, 0)
                                        xmm0_2 = var_b8_1
                                        float var_b4_2 =
                                            fconvert.s(unimplemented  {fstp dword [ebp-0xb0], st0})
                                        unimplemented  {fstp dword [ebp-0xb0], st0}
                                        top += 2
                                        xmm1_1 = var_b4_2
                                    else
                                        xmm1_1 = (zx.o(0)).d
                                        xmm0_2 = (zx.o(0)).d
                                    
                                    void* eax_31 = *esi_5
                                    esi_5 = &esi_5[1]
                                    *(eax_31 + 0x50) = xmm1_1
                                    *(eax_31 + 0x54) = xmm0_2
                                
                                struct common::CEXArrayReader::VTable* const var_d4_2 =
                                    &common::CEXArrayReader::`vftable'
                                ebx_2 = var_98_1
                                result_6 = result_3
                        else
                            void** esi_4 = var_a4
                            
                            if (esi_4 == var_a0)
                                result_6 = result_3
                            else
                                do
                                    int32_t eax_21
                                    
                                    if (esi_1 != 0)
                                        char* ecx_19 = &var_30
                                        
                                        if (result_5 u>= 0x10)
                                            ecx_19 = var_30.d
                                        
                                        eax_21 = (*(*esi_1 + 8))(ecx_19, 0)
                                    else
                                        eax_21 = 0
                                    
                                    void* ecx_21 = *esi_4
                                    eax_21.b = eax_21 != 0
                                    esi_4 = &esi_4[1]
                                    *(ecx_21 + 0x44) = eax_21.b
                                while (esi_4 != var_a0)
                                
                                ebx_2 = var_98_1
                                result_6 = result_3
                    else
                        void** esi_3 = var_a4
                        
                        if (esi_3 == var_a0)
                            result_6 = result_3
                        else
                            do
                                int32_t xmm0_1
                                
                                if (esi_1 != 0)
                                    char* ecx_15 = &var_30
                                    
                                    if (result_5 u>= 0x10)
                                        ecx_15 = var_30.d
                                    
                                    char* var_104_7 = ecx_15
                                    (*(*esi_1 + 0xc))(ecx_15, 0)
                                    int32_t var_b4_1 =
                                        fconvert.s(unimplemented  {fstp dword [ebp-0xb0], st0})
                                    unimplemented  {fstp dword [ebp-0xb0], st0}
                                    top += 1
                                    xmm0_1 = var_b4_1
                                else
                                    xmm0_1 = (zx.o(0)).d
                                
                                void* eax_16
                                eax_16.b = xmm0_1 f> 0
                                *(*esi_3 + 0x3c) = eax_16.b
                                eax_16 = *esi_3
                                esi_3 = &esi_3[1]
                                *(eax_16 + 0x40) = xmm0_1
                            while (esi_3 != var_a0)
                            
                            ebx_2 = var_98_1
                            result_6 = result_3
                    var_8_1.b = 7
                    result = result_5
                    
                    if (result u>= 0x10)
                        result = sub_403160(var_30.d, result + 1, 1)
                    
                    ebx_2 += 1
                    var_98_1 = ebx_2
                while (ebx_2 s< result_6)
            
            void** esi_20 = var_a4
            
            if (esi_20 != 0)
                int32_t var_9c
                result = sub_403160(esi_20, (var_9c - esi_20) s>> 2, 4)
                var_a4 = nullptr
                var_a0 = 0
                var_9c = 0
            
            ebx_1 = var_bc_1 + 1
            var_8_1.b = 0
            var_ac = &common::CEXTreeReader::`vftable'
            var_bc_1 = ebx_1
        while (ebx_1 s< result_1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
