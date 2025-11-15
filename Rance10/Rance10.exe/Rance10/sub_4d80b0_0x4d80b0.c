// 函数: sub_4d80b0
// 地址: 0x4d80b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_734572
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_90 = arg3

if (arg2 != 0)
    sub_4d7fb0(arg1)
    *(arg1 + 8) = arg2
    (**arg2)(eax_2)
    int32_t* var_c4
    struct common::CRect::VTable* var_b8
    void** var_9c
    void** var_98
    int32_t* var_94
    int32_t* var_8c
    struct common::CPoint::VTable* const var_4c
    
    if (arg5 != 3)
        result = arg4
        
        if (result s> 0)
            *(arg1 + 0x38) = arg5
            *(arg1 + 0x30) = result
            sub_405070(&var_4c, arg3)
            int32_t var_8_4 = 3
            char var_88
            sub_404d80(&var_88, arg3)
            var_8_4.b = 4
            int32_t* edi_2 = sub_4dd5b0(*(arg1 + 0xc), arg3)
            
            if (edi_2 != 0)
            label_4d8320:
                void** eax_18 = sub_6e810c(0x6c)
                var_98 = eax_18
                var_8_4.b = 5
                int32_t* eax_19 = sub_54d5a0(eax_18)
                var_8_4.b = 4
                bool cond:1_1 = *(arg1 + 0x3c) == 0
                var_8c = eax_19
                
                if (not(cond:1_1))
                    void* ecx_21 = *eax_19
                    eax_19[0xd].b = 1
                    
                    if (ecx_21 != 0)
                        sub_451b40(ecx_21)
                
                if (*eax_19 == 0)
                    sub_54d770(eax_19)
                
                sub_450940(*eax_19, edi_2)
                *(eax_19 + 0x16) = 0
                int32_t* var_e0_13 = edi_2
                char eax_20 = sub_4ce120(*(arg1 + 8))
                void* ecx_25 = *eax_19
                
                if (ecx_25 != 0)
                    *(ecx_25 + 0x115) = eax_20
                
                void* eax_21 = *eax_19
                
                if (eax_21 != 0)
                    eax_19[5].b = 0
                    *(eax_21 + 0x18) = 0
                
                sub_42ccf0(arg1 + 0x10, &var_8c)
                int32_t* esi_5 = var_90
                sub_424db0(arg1 + 0x1c, esi_5)
                sub_404960(&var_b8)
                var_8_4.b = 6
                
                if (sub_4d8a30(arg1, esi_5, &var_b8) != 0)
                    void var_70
                    sub_4d91c0(&var_70, &var_8c, &var_b8)
                    var_8_4.b = 7
                    void** var_e0_18 = var_98
                    void* var_e4_6 = &var_70
                    sub_4d9310(arg1 + 0x28, &var_c4, &var_70)
                
                var_8_4.b = 4
            else
                edi_2 = sub_4ce060(*(arg1 + 8), arg3)
                
                if (edi_2 != 0)
                    goto label_4d8320
            
            void* esi_6 = 1
            void* var_68
            int32_t var_54
            
            while (true)
                var_8c = esi_6
                var_9c = std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >::c_str(
                    &var_4c)
                int32_t var_18_1 = 0xf
                int32_t var_1c_1 = 0
                char var_2c = 0
                sub_403490(&var_2c, "%s_%02d.%s", 0xa)
                var_8_4.b = 8
                sub_4d9200(&var_9c, &var_2c, &var_68, &var_9c, esi_6, 
                    std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >::c_str(
                        &var_88))
                var_8_4.b = 0xa
                
                if (var_18_1 u>= 0x10)
                    sub_403160(var_2c.d, var_18_1 + 1, 1)
                
                void* ecx_36 = *(arg1 + 0xc)
                int32_t var_18_2 = 0xf
                int32_t var_1c_2 = 0
                var_2c = 0
                int32_t* esi_7 = sub_4dd5b0(ecx_36, &var_68)
                
                if (esi_7 == 0)
                    esi_7 = sub_4ce060(*(arg1 + 8), &var_68)
                    
                    if (esi_7 == 0)
                        break
                
                int32_t* eax_30 = sub_6e810c(0x6c)
                var_8_4.b = 0xb
                int32_t* eax_31 = sub_54d5a0(eax_30)
                var_8_4.b = 0xa
                bool cond:2_1 = *(arg1 + 0x3c) == 0
                var_90 = eax_31
                
                if (not(cond:2_1))
                    void* ecx_39 = *eax_31
                    eax_31[0xd].b = 1
                    
                    if (ecx_39 != 0)
                        sub_451b40(ecx_39)
                
                if (*eax_31 == 0)
                    sub_54d770(eax_31)
                
                sub_450940(*eax_31, esi_7)
                *(eax_31 + 0x16) = 0
                var_94 = esi_7
                void* esi_8 = *(arg1 + 8)
                sub_4cedf0(esi_8 + 0x4c, &var_98, &var_94)
                void** eax_32 = var_98
                bool ecx_43
                
                if (eax_32 != *(esi_8 + 0x4c))
                    ecx_43 = eax_32[5] == 1
                else
                    ecx_43 = false
                
                void* eax_33 = *eax_31
                
                if (eax_33 != 0)
                    *(eax_33 + 0x115) = ecx_43
                
                void* eax_34 = *eax_31
                
                if (eax_34 != 0)
                    eax_31[5].b = 0
                    *(eax_34 + 0x18) = 0
                
                sub_42ccf0(arg1 + 0x10, &var_90)
                sub_424db0(arg1 + 0x1c, &var_68)
                int32_t esi_9 = 0
                var_b8 = &common::CRect::`vftable'
                int32_t edi_4 = 0
                struct common::CPoint::VTable* const var_b4_2 = &common::CPoint::`vftable'
                int32_t var_b0_2 = 0
                int32_t var_ac_2 = 0
                struct common::CSize::VTable* const var_a8_2 = &common::CSize::`vftable'
                int32_t var_a4_2 = 0
                int32_t var_a0_2 = 0
                var_8_4.b = 0xc
                char eax_35
                int32_t ecx_47
                eax_35, ecx_47 = sub_4dd530(*(arg1 + 0xc), &var_68)
                
                if (eax_35 == 0)
                    eax_35, ecx_47 = sub_4ce540(*(arg1 + 8), &var_68, &var_b8)
                    edi_4 = var_ac_2
                    esi_9 = var_b0_2
                else
                    eax_35 = 0
                
                if (eax_35 != 0)
                    int32_t* var_34 = var_90
                    int32_t var_1c_3 = var_a4_2
                    struct common::CRect::VTable* const var_30_1 = &common::CRect::`vftable'
                    var_2c.d = &common::CPoint::`vftable'
                    int32_t var_28_1 = esi_9
                    int32_t var_24_1 = edi_4
                    struct common::CSize::VTable* const var_20_1 = &common::CSize::`vftable'
                    int32_t var_18_3 = var_a0_2
                    var_8_4.b = 0xd
                    int32_t* var_e0_28 = eax_30
                    int32_t** var_e4_11 = &var_34
                    int32_t* var_cc
                    sub_4d9310(arg1 + 0x28, &var_cc, ecx_47)
                
                var_8_4.b = 4
                
                if (var_54 u>= 0x10)
                    sub_403160(var_68, var_54 + 1, 1)
                
                esi_6 = var_8c + 1
            
            if (var_54 u>= 0x10)
                sub_403160(var_68, var_54 + 1, 1)
            
            int32_t var_74
            
            if (var_74 u>= 0x10)
                sub_403160(var_88.d, var_74 + 1, 1)
            
            struct _EXCEPTION_REGISTRATION_RECORD** result_1
            result = result_1
            int32_t var_74_1 = 0xf
            int32_t var_78_1 = 0
            var_88 = 0
            
            if (result u>= 0x10)
                result = sub_403160(var_4c, result + 1, 1)
    else
        void** eax_4 = sub_6e810c(0x6c)
        var_98 = eax_4
        int32_t var_8_1 = 0
        int32_t* eax_5 = sub_54d5a0(eax_4)
        int32_t var_8_2 = 0xffffffff
        bool cond:0_1 = *(arg1 + 0x3c) == 0
        var_8c = eax_5
        
        if (not(cond:0_1))
            void* ecx_3 = *eax_5
            eax_5[0xd].b = 1
            
            if (ecx_3 != 0)
                sub_451b40(ecx_3)
        
        int32_t* eax_6 = sub_4dd5b0(*(arg1 + 0xc), arg3)
        var_94 = eax_6
        int32_t* esi_1
        
        if (eax_6 == 0)
            esi_1 = sub_4ce060(*(arg1 + 8), arg3)
        else
            esi_1 = eax_6
        
        if (*eax_5 == 0)
            sub_54d770(eax_5)
        
        sub_450940(*eax_5, esi_1)
        *(eax_5 + 0x16) = 0
        var_94 = esi_1
        void* esi_2 = *(arg1 + 8)
        sub_4cedf0(esi_2 + 0x4c, &var_9c, &var_94)
        void** eax_8 = var_9c
        bool ecx_9
        
        if (eax_8 != *(esi_2 + 0x4c))
            ecx_9 = eax_8[5] == 1
        else
            ecx_9 = false
        
        void* eax_9 = *eax_5
        
        if (eax_9 != 0)
            *(eax_9 + 0x115) = ecx_9
        
        void* eax_10 = *eax_5
        
        if (eax_10 != 0)
            eax_5[5].b = 0
            *(eax_10 + 0x18) = 0
        
        sub_42ccf0(arg1 + 0x10, &var_8c)
        char* esi_3 = var_90
        sub_424db0(arg1 + 0x1c, esi_3)
        struct common::CRect::VTable* const var_50 = &common::CRect::`vftable'
        var_4c = &common::CPoint::`vftable'
        int32_t var_48_1 = 0
        int32_t var_44_1 = 0
        struct common::CSize::VTable* const var_40_1 = &common::CSize::`vftable'
        int32_t var_3c_1 = 0
        int32_t var_38 = 0
        int32_t var_8_3 = 1
        result = sub_4dd530(*(arg1 + 0xc), esi_3)
        
        if (result.b == 0)
            int32_t ecx_14
            result, ecx_14 = sub_4ce540(*(arg1 + 8), esi_3, &var_50)
            
            if (result.b != 0)
                int32_t* var_bc = var_8c
                int32_t var_b0_1 = var_48_1
                int32_t var_ac_1 = var_44_1
                int32_t var_a4_1 = var_3c_1
                var_b8 = &common::CRect::`vftable'
                struct common::CPoint::VTable* const var_b4_1 = &common::CPoint::`vftable'
                struct common::CSize::VTable* const var_a8_1 = &common::CSize::`vftable'
                int32_t var_a0_1 = var_38
                var_8_3.b = 2
                void** var_e0_9 = var_98
                int32_t** var_e4_3 = &var_bc
                result = sub_4d9310(arg1 + 0x28, &var_c4, ecx_14)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
