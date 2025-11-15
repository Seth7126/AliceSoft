// 函数: sub_513180
// 地址: 0x513180
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7383cc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct common::SuicideRefCounter<class IEXReader>::exfile::CEXReader::VTable** result

if (arg3 != 0)
    int32_t eax_3 = *(arg2 + 8)
    int32_t esi_1 = *(arg2 + 4)
    result = sub_46d660(sbb.d(arg1, arg1, esi_1 u< eax_3) & esi_1, eax_3 - esi_1)
    
    if (result == 0)
        result.b = 0
    else
        int32_t* eax_4 = sub_404080(data_7fcb78)
        sub_492a50(eax_4, result)
        arg1[0xa] = eax_4
        struct common::CEXReader::VTable* const var_a4 = &common::CEXReader::`vftable'
        struct common::SuicideRefCounter<class IEXReader>::exfile::CEXReader::VTable** result_1 =
            result
        (*result)->vFunc_0(eax_2)
        int32_t var_8_1 = 0
        (*result)->vFunc_1()
        void** var_2c
        sub_403360(&var_2c, 0x766788)
        var_8_1.b = 1
        struct common::SuicideRefCounter<class IEXReader>::exfile::CEXReader::VTable** result_4 =
            result_1
        int32_t var_18
        int32_t* i_6
        
        if (result_4 != 0)
            void** edx_4 = &var_2c
            
            if (var_18 u>= 0x10)
                edx_4 = var_2c
            
            result = result_4[1]->vFunc_1(edx_4)
            result_4 = result_1
            i_6.b = result.b
        else
            i_6.b = 0
        
        var_8_1.b = 0
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c, var_18 + 1, 1)
            result_4 = result_1
        
        if (i_6.b != 0)
            void** var_44
            sub_403360(&var_44, 0x766798)
            var_8_1.b = 3
            struct common::SuicideRefCounter<class IEXReader>::exfile::CEXReader::VTable** result_3
            int32_t var_30
            
            if (result_1 != 0)
                void** edx_6 = &var_44
                
                if (var_30 u>= 0x10)
                    edx_6 = var_44
                
                result_3 = result_1[1]->vFunc_2(edx_6, 0)
            else
                result_3 = result_1
            
            var_8_1.b = 0
            sub_403320(&var_44)
            sub_403360(&var_44, 0x766770)
            var_8_1.b = 4
            struct common::SuicideRefCounter<class IEXReader>::exfile::CEXReader::VTable** result_2
            
            if (result_1 != 0)
                void** edx_7 = &var_44
                
                if (var_30 u>= 0x10)
                    edx_7 = var_44
                
                result_2 = result_1[1]->vFunc_2(edx_7, 0)
            else
                result_2 = result_1
            
            sub_403320(&var_44)
            int32_t* edi_2 = arg1
            var_8_1.b = 5
            sub_4f2d00(*(edi_2[8] + 4))
            void* eax_13 = edi_2[8]
            *(eax_13 + 4) = eax_13
            int32_t* eax_14 = edi_2[8]
            *eax_14 = eax_14
            void* eax_15 = edi_2[8]
            var_8_1.b = 0
            *(eax_15 + 8) = eax_15
            edi_2[9] = 0
            sub_403360(&var_44, 0x76677c)
            var_8_1.b = 6
            int32_t* esi_3
            
            if (result_1 != 0)
                void** edx_8 = &var_44
                
                if (var_30 u>= 0x10)
                    edx_8 = var_44
                
                esi_3 = (*(result_1[1] + 0x2c))(edx_8)
            else
                esi_3 = nullptr
            
            struct common::CEXArrayReader::VTable* const var_c0_1 =
                &common::CEXArrayReader::`vftable'
            int32_t* var_bc_1 = esi_3
            var_8_1.b = 8
            sub_403320(&var_44)
            int32_t* var_b8
            int32_t* var_a8
            int32_t* var_80
            
            if (esi_3 != 0)
                int32_t* eax_19 = (*(*esi_3 + 8))()
                int32_t edi_3 = 0
                var_a8 = eax_19
                
                if (eax_19 s> 0)
                    do
                        int32_t* eax_20
                        int32_t ecx_25
                        eax_20, ecx_25 = (*(*esi_3 + 0xc))(edi_3, 0)
                        struct common::SuicideRefCounter<class IEXReader>::exfile::CEXReader::VTable
                            ** result_5 = result_3
                        var_80 = eax_20
                        int32_t* var_dc_5 = &var_80
                        sub_514cb0(&edi_2[8], &var_b8, ecx_25)
                        edi_3 += 1
                    while (edi_3 s< var_a8)
                
                edi_2 = arg1
            
            int32_t* i_12 = nullptr
            int32_t var_88_1 = 0
            i_12 = sub_44e4c0()
            var_8_1.b = 9
            int32_t var_18_1 = 0xf
            int32_t var_1c_1 = 0
            var_2c.b = 0
            sub_403490(&var_2c, 0x7668b4, 0xe)
            var_8_1.b = 0xa
            sub_513c70(&var_2c, &var_a4, &i_12, &var_2c)
            var_8_1.b = 9
            
            if (var_18_1 u>= 0x10)
                sub_403160(var_2c, var_18_1 + 1, 1)
            
            int32_t** eax_25 = *edi_2
            int32_t* i = *eax_25
            int32_t* i_2 = i
            int32_t* eax_32
            
            if (i == eax_25)
                eax_32 = arg1
            else
                do
                    void** i_18 = sub_432330(&i_12, &i[4])
                    int32_t* i_15 = i_12
                    void** i_17 = i_18
                    char eax_29
                    
                    if (i_17 != i_15)
                        eax_29 = sub_412ca0(&i[4], &i_17[4])
                    
                    if (i_17 == i_15 || eax_29 != 0)
                        i_17 = i_15
                    
                    if (i_17 != i_15)
                        sub_44e100(&i_12, &var_a8, i_17)
                        sub_429080(&i_2)
                    else
                        int32_t esi_4 = i[0xa]
                        int32_t var_d8_7 = esi_4
                        
                        if (sub_4f45c0(&arg3[0xc]) == 0)
                            int32_t var_d8_8 = esi_4
                            struct partsengine::CPartsList::VTable** eax_31 = sub_4f14d0(&arg3[0xd])
                            
                            if (eax_31 != 0)
                                sub_5267c0(eax_31, esi_4)
                        
                        sub_429080(&i_2)
                        sub_4575f0(arg1, &var_80, i)
                    
                    eax_32 = arg1
                    i = i_2
                while (i != *eax_32)
            
            int32_t* edi_4 = eax_32[6]
            i_6 = i_12
            void** i_1 = *edi_4
            void** i_3 = i_1
            
            for (; i_1 != edi_4; i_1 = i_3)
                var_80 = &i_1[4]
                void** i_13 = sub_432330(&i_12, &i_1[4])
                char eax_36
                
                if (i_13 != i_6)
                    eax_36 = sub_412ca0(var_80, &i_13[4])
                
                if (i_13 == i_6 || eax_36 != 0)
                    i_13 = i_6
                
                if (i_13 != i_6)
                    sub_44e100(&i_12, &var_a8, i_13)
                    i_6 = i_12
                
                sub_429080(&i_3)
            
            void** i_4 = *i_6
            i_2 = i_6
            i_3 = i_4
            char var_78
            int32_t* edi_6
            
            if (i_4 == i_6)
                edi_6 = arg1
            else
                void* ecx_41 = &arg3[0x18]
                struct common::CEXTreeReader::VTable* const var_ac =
                    &common::CEXTreeReader::`vftable'
                var_80 = ecx_41
                
                do
                    int32_t eax_37 = sub_404080(ecx_41)
                    int32_t* eax_38
                    
                    if (result_1 != 0)
                        void* edx_11 = &i_4[0xa]
                        
                        if (i_4[0xf] u>= 0x10)
                            edx_11 = *edx_11
                        
                        eax_38 = (*(result_1[1] + 0x24))(edx_11)
                    else
                        eax_38 = nullptr
                    
                    var_a8 = eax_38
                    edi_6 = arg1
                    var_8_1.b = 0xb
                    bool cond:5_1 = sub_511ff0(edi_6, &var_ac, arg3, eax_37, &i_4[4]) == 0
                    var_8_1.b = 9
                    var_ac = &common::CEXTreeReader::`vftable'
                    
                    if (cond:5_1 != 0)
                    label_513b56:
                        i_6 = i_12
                        var_78 = 0
                        goto label_513bfa
                    
                    sub_429080(&i_3)
                    i_4 = i_3
                    ecx_41 = var_80
                while (i_4 != i_6)
                
                i_6 = i_12
                i_2 = i_6
            
            int32_t* eax_88 = *i_6
            var_80 = eax_88
            
            if (eax_88 != i_6)
                do
                    void** i_5 = sub_432330(edi_6, &eax_88[4])
                    void** i_16 = *edi_6
                    void** i_14 = i_5
                    
                    if (i_14 != i_16)
                        i_5 = sub_412ca0(&eax_88[4], &i_14[4])
                    
                    if (i_14 == i_16 || i_5.b != 0)
                        i_14 = i_16
                    
                    if (i_14 != i_16)
                        i_5 = i_14[0xa]
                        i_3 = i_5
                    else
                        i_3 = nullptr
                    
                    void** edi_7 = &eax_88[4]
                    void* var_74
                    int32_t* eax_43 = sub_419600(i_5, 0x7668c4, &var_74, edi_7)
                    void* esi_7 = edi_7[0xa] - eax_43[4]
                    int32_t var_60
                    int32_t eax_44 = var_60
                    
                    if (eax_44 u>= 0x10)
                        eax_44 = sub_403160(var_74, eax_44 + 1, 1)
                    
                    if (esi_7 != 0)
                        void* var_5c
                        sub_405480(&edi_7[6], &var_5c, 0, esi_7)
                        int32_t var_d8_21 = 1
                        var_8_1.b = 0xd
                        var_78 = 0x2e
                        void* eax_46
                        int32_t ecx_50
                        eax_46, ecx_50 = sub_42cb30(&var_5c, &var_78, 0)
                        int32_t var_48
                        
                        if (eax_46 != 0xffffffff)
                            int32_t var_d8_22 = ecx_50
                            var_78 = 0x2e
                            char* eax_49 = sub_405480(&var_5c, &var_74, 
                                sub_510160(&var_5c, &var_78, 0xffffffff) + 1, 0xffffffff)
                            
                            if (&var_5c != eax_49)
                                if (var_48 u>= 0x10)
                                    sub_403160(var_5c, var_48 + 1, 1)
                                
                                var_48 = 0xf
                                int32_t var_4c_1 = 0
                                var_5c.b = 0
                                sub_4056a0(&var_5c, eax_49)
                            
                            var_8_1.b = 0xd
                            
                            if (var_60 u>= 0x10)
                                sub_403160(var_74, var_60 + 1, 1)
                            
                            void** edi_8 = arg1
                            void** eax_54 = sub_432330(edi_8, &var_5c)
                            void** edi_9 = *edi_8
                            void** esi_9 = eax_54
                            char eax_56
                            
                            if (esi_9 != edi_9)
                                eax_56 = sub_412ca0(&var_5c, &esi_9[4])
                            
                            if (esi_9 == edi_9 || eax_56 != 0)
                                esi_9 = edi_9
                            
                            int32_t esi_10
                            
                            if (esi_9 != edi_9)
                                esi_10 = esi_9[0xa]
                            else
                                esi_10 = 0
                            
                            int32_t var_d8_26 = esi_10
                            struct partsengine::CPartsList::VTable** eax_57 = sub_4f14d0(&arg3[0xd])
                            int32_t edx_12
                            
                            if (eax_57 != 0)
                                edx_12 = eax_57[2]
                            
                            struct common::SuicideRefCounter<class IInterface>::partsengine::CGUIComponent::VTable
                                ** eax_63
                            
                            if (eax_57 == 0 || esi_10 s< edx_12 || eax_57[1] + edx_12 s<= esi_10)
                                eax_63 = nullptr
                            else
                                struct common::SuicideRefCounter<class IInterface>::partsengine::CGUIComponent::VTable
                                    *** edx_13 = (esi_10 - edx_12) << 2
                                int32_t eax_62 = eax_57[3]
                                
                                if (*(edx_13 + eax_62) == 0)
                                    int32_t var_d8_27 = esi_10
                                    eax_63 = sub_526580(eax_57)
                                else
                                    eax_63 = *(edx_13 + eax_62)
                            
                            void** i_8 = i_3
                            
                            if (sub_4f2400(&eax_63[0x19], i_8) != 0)
                                sub_504200(eax_63[0x1c], i_8)
                            
                            edi_7 = &eax_88[4]
                        
                        var_8_1.b = 9
                        eax_44 = var_48
                        
                        if (eax_44 u>= 0x10)
                            eax_44 = sub_403160(var_5c, eax_44 + 1, 1)
                    
                    int32_t* edx_15 = sub_4175e0(eax_44, &edi_7[6], &var_44, 0x7668a4)
                    var_8_1.b = 0xf
                    int32_t* esi_11
                    
                    if (result_1 != 0)
                        if (edx_15[5] u>= 0x10)
                            edx_15 = *edx_15
                        
                        esi_11 = (*(result_1[1] + 0x2c))(edx_15)
                    else
                        esi_11 = nullptr
                    
                    var_b8 = &common::CEXArrayReader::`vftable'
                    int32_t* var_b4_1 = esi_11
                    var_8_1.b = 0x11
                    
                    if (var_30 u>= 0x10)
                        sub_403160(var_44, var_30 + 1, 1)
                    
                    var_30 = 0xf
                    int32_t var_34_1 = 0
                    var_44.b = 0
                    int32_t* eax_71
                    
                    if (esi_11 != 0)
                        eax_71 = (*(*esi_11 + 8))()
                    else
                        eax_71 = nullptr
                    
                    int32_t esi_12 = 0
                    var_a8 = eax_71
                    int32_t var_98_2 = 0
                    
                    if (eax_71 s> 0)
                        void** i_7 = i_3
                        
                        do
                            int32_t var_18_2 = 0xf
                            int32_t var_1c_2 = 0
                            var_2c.b = 0
                            sub_403490(&var_2c, 0x75d306, nullptr)
                            var_8_1.b = 0x12
                            sub_403230(&var_b8, &var_74, esi_12, &var_2c)
                            var_8_1.b = 0x14
                            
                            if (var_18_2 u>= 0x10)
                                sub_403160(var_2c, var_18_2 + 1, 1)
                            
                            int32_t var_18_3 = 0xf
                            int32_t var_1c_3 = 0
                            var_2c.b = 0
                            void** eax_75 = sub_432330(arg1, &var_74)
                            void** edi_12 = *arg1
                            void** esi_13 = eax_75
                            char eax_77
                            
                            if (esi_13 != edi_12)
                                eax_77 = sub_412ca0(&var_74, &esi_13[4])
                            
                            if (esi_13 == edi_12 || eax_77 != 0)
                                esi_13 = edi_12
                            
                            void* esi_14
                            
                            if (esi_13 != edi_12)
                                esi_14 = esi_13[0xa]
                            else
                                esi_14 = nullptr
                            
                            void** i_9 = i_7
                            struct partsengine::CPartsList::VTable** eax_78 = sub_4f14d0(&arg3[0xd])
                            int32_t edx_16
                            
                            if (eax_78 != 0)
                                edx_16 = eax_78[2]
                            
                            struct common::SuicideRefCounter<class IInterface>::partsengine::CGUIComponent::VTable
                                ** eax_84
                            
                            if (eax_78 == 0 || i_7 s< edx_16 || eax_78[1] + edx_16 s<= i_7)
                                eax_84 = nullptr
                            else
                                struct common::SuicideRefCounter<class IInterface>::partsengine::CGUIComponent::VTable
                                    *** edx_17 = (i_7 - edx_16) << 2
                                int32_t eax_83 = eax_78[3]
                                
                                if (*(edx_17 + eax_83) == 0)
                                    void** i_10 = i_7
                                    eax_84 = sub_526580(eax_78)
                                else
                                    eax_84 = *(edx_17 + eax_83)
                            
                            if (sub_4f2400(&eax_84[0x19], esi_14) != 0)
                                sub_504200(eax_84[0x1c], esi_14)
                            
                            var_8_1.b = 0x11
                            
                            if (var_60 u>= 0x10)
                                sub_403160(var_74, var_60 + 1, 1)
                            
                            esi_12 = var_98_2 + 1
                            var_98_2 = esi_12
                        while (esi_12 s< var_a8)
                        
                        i_6 = i_2
                    
                    var_8_1.b = 9
                    var_b8 = &common::CEXArrayReader::`vftable'
                    sub_429080(&var_80)
                    eax_88 = var_80
                    edi_6 = arg1
                while (eax_88 != i_6)
                
                i_6 = i_12
            
            int32_t* eax_89 = *i_6
            void*** edi_14 = arg1
            var_80 = eax_89
            
            if (eax_89 != i_6)
                var_b8 = &common::CEXTreeReader::`vftable'
                
                do
                    var_a8 = &eax_89[4]
                    int32_t eax_90
                    
                    if (result_1 != 0)
                        void* edx_18 = &eax_89[0xa]
                        
                        if (eax_89[0xf] u>= 0x10)
                            edx_18 = *edx_18
                        
                        eax_90 = (*(result_1[1] + 0x24))(edx_18)
                    else
                        eax_90 = 0
                    
                    int32_t var_b4_2 = eax_90
                    var_8_1.b = 0x15
                    void** eax_92 = sub_432330(edi_14, &eax_89[4])
                    void** edi_15 = *edi_14
                    void** esi_17 = eax_92
                    char eax_94
                    
                    if (esi_17 != edi_15)
                        eax_94 = sub_412ca0(var_a8, &esi_17[4])
                    
                    if (esi_17 == edi_15 || eax_94 != 0)
                        esi_17 = edi_15
                    
                    int32_t eax_95
                    
                    if (esi_17 != edi_15)
                        eax_95 = esi_17[0xa]
                    else
                        eax_95 = 0
                    
                    edi_14 = arg1
                    bool cond:7_1 = sub_512130(result_3, result_2, &var_b8, arg3, eax_95) == 0
                    var_8_1.b = 9
                    var_b8 = &common::CEXTreeReader::`vftable'
                    
                    if (cond:7_1 != 0)
                        goto label_513b56
                    
                    sub_429080(&var_80)
                    eax_89 = var_80
                while (eax_89 != i_6)
                
                i_6 = i_12
            
            struct common::SuicideRefCounter<class IEXReader>::exfile::CEXReader::VTable** 
                result_6 = *i_6
            result_3 = result_6
            
            if (result_6 != i_6)
                do
                    void** eax_97 = sub_432330(edi_14, &result_6[4])
                    void** edi_16 = *edi_14
                    void** esi_19 = eax_97
                    char eax_99
                    
                    if (esi_19 != edi_16)
                        eax_99 = sub_412ca0(&result_6[4], &esi_19[4])
                    
                    if (esi_19 == edi_16 || eax_99 != 0)
                        esi_19 = edi_16
                    
                    int32_t esi_20
                    
                    if (esi_19 != edi_16)
                        esi_20 = esi_19[0xa]
                    else
                        esi_20 = 0
                    
                    int32_t var_d8_42 = esi_20
                    struct partsengine::CPartsList::VTable** eax_100 = sub_4f14d0(&arg3[0xd])
                    int32_t edx_19
                    
                    if (eax_100 != 0)
                        edx_19 = eax_100[2]
                    
                    struct common::SuicideRefCounter<class IInterface>::partsengine::CGUIComponent::VTable
                        ** esi_21
                    
                    if (eax_100 == 0 || esi_20 s< edx_19 || eax_100[1] + edx_19 s<= esi_20)
                        esi_21 = nullptr
                    else
                        struct common::SuicideRefCounter<class IInterface>::partsengine::CGUIComponent::VTable
                            *** edx_20 = (esi_20 - edx_19) << 2
                        int32_t eax_105 = eax_100[3]
                        
                        if (*(edx_20 + eax_105) == 0)
                            int32_t var_d8_43 = esi_20
                            esi_21 = sub_526580(eax_100)
                        else
                            esi_21 = *(edx_20 + eax_105)
                    
                    int32_t* ecx_82 = esi_21[0x1d]
                    
                    if (ecx_82 != 0 && (*(*ecx_82 + 8))(1) == 9)
                        sub_51a9d0(sub_4ef6a0(esi_21))
                    
                    sub_429080(&result_3)
                    result_6 = result_3
                    edi_14 = arg1
                while (result_6 != i_6)
                
                i_6 = i_12
            
            var_78 = 1
        label_513bfa:
            int32_t* i_11 = i_6
            sub_44dda0(&i_12, &result_3, *i_6)
            sub_403160(i_12, 1, 0x40)
            result_4 = result_1
            i_6.b = var_78
        
        int32_t var_8_2 = 0x17
        var_a4 = &common::CEXReader::`vftable'
        
        if (result_4 != 0)
            (*result_4)->vFunc_1()
        
        result.b = i_6.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
