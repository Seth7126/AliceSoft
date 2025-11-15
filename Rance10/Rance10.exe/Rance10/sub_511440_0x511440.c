// 函数: sub_511440
// 地址: 0x511440
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_738079
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_104 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_3 = arg1[6]
void* var_f0 = arg2
void* var_108 = arg2
void* result = sub_4f15e0(*eax_3 + 0x34)

if (result == 0)
    result.b = 0
else
    int32_t edx_1 = *(result + 8)
    
    if (arg2 s< edx_1 || *(result + 4) + edx_1 s<= arg2)
        result.b = 0
    else
        result.b = *(*(result + 0xc) + ((arg2 - edx_1) << 2)) != 0
        
        if (result.b == 0)
            result.b = 0
        else
            int32_t var_18_1 = 0xf
            int32_t var_1c_1 = 0
            char var_2c = 0
            int32_t* eax_4 = sub_403490(&var_2c, &data_794c78, nullptr)
            int32_t var_8_1 = 0
            int32_t** esi_2 = arg1[3]
            void* var_5c
            int32_t* eax_5 = sub_4175e0(eax_4, &var_2c, &var_5c, "\r\n")
            var_8_1.b = 1
            sub_4055a0(*esi_2, eax_5, 0, 0xffffffff)
            int32_t var_48
            
            if (var_48 u>= 0x10)
                sub_403160(var_5c, var_48 + 1, 1)
            
            int32_t var_8_2 = 0xffffffff
            
            if (var_18_1 u>= 0x10)
                sub_403160(var_2c.d, var_18_1 + 1, 1)
            
            void* var_e4
            sub_514240(arg1[5], &var_e4, &var_f0)
            int32_t var_8_3 = 2
            void* var_74
            char* eax_10 = sub_4b6410(&var_74, &var_e4)
            var_8_3.b = 3
            char var_44
            int32_t* eax_11 = sub_4175e0(eax_10, arg3, &var_44, U""")
            var_8_3.b = 4
            char* eax_12 = sub_4177a0(eax_11, eax_11, &var_2c, eax_10)
            var_8_3.b = 5
            char var_8c
            char* eax_13 = sub_4176f0(eax_12.b, eax_12, &var_8c, U""")
            var_8_3.b = 6
            int32_t* esi_4 = arg1[3]
            int32_t* eax_14 = sub_4175e0(eax_13, eax_13, &var_5c, "\r\n")
            var_8_3.b = 7
            sub_4055a0(*esi_4, eax_14, 0, 0xffffffff)
            
            if (var_48 u>= 0x10)
                sub_403160(var_5c, var_48 + 1, 1)
            
            int32_t var_78
            
            if (var_78 u>= 0x10)
                sub_403160(var_8c.d, var_78 + 1, 1)
            
            int32_t var_78_1 = 0xf
            int32_t var_7c_1 = 0
            var_8c = 0
            
            if (var_18_1 u>= 0x10)
                sub_403160(var_2c.d, var_18_1 + 1, 1)
            
            int32_t var_18_2 = 0xf
            int32_t var_1c_2 = 0
            var_2c = 0
            int32_t var_30
            
            if (var_30 u>= 0x10)
                sub_403160(var_44.d, var_30 + 1, 1)
            
            var_8_3.b = 2
            int32_t var_60
            int32_t eax_23 = var_60
            int32_t var_30_1 = 0xf
            int32_t var_34_1 = 0
            var_44 = 0
            
            if (eax_23 u>= 0x10)
                eax_23 = sub_403160(var_74, eax_23 + 1, 1)
            
            char var_cc
            sub_4175e0(eax_23, arg3, &var_cc, "*\t")
            int32_t* ecx_14 = arg1[5]
            int32_t edx_8 = *ecx_14
            int32_t ecx_15 = ecx_14[2]
            char var_ac_1 = ecx_14[1].b
            struct std::_Func_base<class std::string, int32_t>::std::_Func_impl<class std::_Binder<struct std::_Unforced,class std::_Mem_fn<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > (__thiscall*)(* this, int32_t) const>,class partsengine::CActivityData* const,struct std::_Ph<1> const&>,class std::allocator<int32_t>,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,int32_t>::VTable
                * const var_b4 = &std::_Func_impl<class std::_Binder<struct std::_Unforced,class std::_Mem_fn<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > (__thiscall*)(* this, int32_t) const>,class partsengine::CActivityData* const,struct std::_Ph<1> const&>,class std::allocator<int32_t>,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,int32_t>::`vftable'{for `std::_Func_base<class std::string, int32_t>'}
            int32_t var_b0_1 = edx_8
            int32_t var_a8_1 = ecx_15
            struct std::_Func_base<class std::string, int32_t>::std::_Func_impl<class std::_Binder<struct std::_Unforced,class std::_Mem_fn<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > (__thiscall*)(* this, int32_t) const>,class partsengine::CActivityData* const,struct std::_Ph<1> const&>,class std::allocator<int32_t>,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,int32_t>::VTable
                * const* var_90_1 = &var_b4
            var_8_3.b = 9
            void* esi_5 = var_f0
            void* var_108_3 = esi_5
            struct partsengine::CPartsList::VTable** eax_27 = sub_4f14d0(*arg1[6] + 0x34)
            int32_t edx_9
            
            if (eax_27 != 0)
                edx_9 = eax_27[2]
            
            struct common::SuicideRefCounter<class IInterface>::partsengine::CGUIComponent::VTable**
                 eax_33
            
            if (eax_27 == 0 || esi_5 s< edx_9 || eax_27[1] + edx_9 s<= esi_5)
                eax_33 = nullptr
            else
                int32_t edx_10 = (esi_5 - edx_9) << 2
                int32_t eax_32 = eax_27[3]
                
                if (*(edx_10 + eax_32) == 0)
                    void* var_108_4 = esi_5
                    eax_33 = sub_526580(eax_27)
                else
                    eax_33 = *(edx_10 + eax_32)
            
            bool eax_34 = sub_4f0950(eax_33, &var_cc, *arg1, &var_b4) == 0
            var_8_3.b = 0xa
            
            if (var_90_1 != 0)
                (*var_90_1)->__offset(0x10).d(var_90_1 != &var_b4)
            
            var_8_3.b = 8
            int32_t** ebx
            
            if (eax_34 == 0)
                void* ebx_1 = arg1[1]
                void** eax_37 = sub_432330(ebx_1 + 8, &var_e4)
                void** edi_1 = *(ebx_1 + 8)
                void** esi_6 = eax_37
                char eax_39
                
                if (esi_6 != edi_1)
                    eax_39 = sub_412ca0(&var_e4, &esi_6[4])
                
                if (esi_6 == edi_1 || eax_39 != 0)
                    esi_6 = edi_1
                
                int32_t eax_40
                eax_40.b = esi_6 != edi_1
                int32_t var_ec = eax_40
                int32_t* eax_41 = sub_4175e0(eax_40, &var_cc, &var_5c, 0x796f18)
                var_8_3.b = 0xb
                
                if (eax_41[5] u>= 0x10)
                    eax_41 = *eax_41
                
                sub_403360(&var_2c, eax_41)
                var_8_3.b = 0xc
                char* eax_43 = sub_409350(&var_ec, &var_2c, &var_44, &var_ec)
                var_8_3.b = 0xd
                sub_5113b0(arg1[3], eax_43)
                
                if (var_30_1 u>= 0x10)
                    sub_403160(var_44.d, var_30_1 + 1, 1)
                
                int32_t var_30_2 = 0xf
                int32_t var_34_2 = 0
                var_44 = 0
                
                if (var_18_2 u>= 0x10)
                    sub_403160(var_2c.d, var_18_2 + 1, 1)
                
                var_8_3.b = 8
                int32_t var_18_3 = 0xf
                int32_t var_1c_3 = 0
                var_2c = 0
                
                if (var_48 u>= 0x10)
                    sub_403160(var_5c, var_48 + 1, 1)
                
                void* ebx_2 = arg1[1]
                void** eax_50 = sub_432330(ebx_2 + 0x10, &var_e4)
                void** edi_2 = *(ebx_2 + 0x10)
                void** esi_8 = eax_50
                char eax_52
                
                if (esi_8 != edi_2)
                    eax_52 = sub_412ca0(&var_e4, &esi_8[4])
                
                if (esi_8 == edi_2 || eax_52 != 0)
                    esi_8 = edi_2
                
                int32_t eax_53
                eax_53.b = esi_8 != edi_2
                var_ec = eax_53
                int32_t* eax_54 = sub_4175e0(eax_53, &var_cc, &var_5c, 0x796f04)
                var_8_3.b = 0xe
                
                if (eax_54[5] u>= 0x10)
                    eax_54 = *eax_54
                
                sub_403360(&var_2c, eax_54)
                var_8_3.b = 0xf
                char* eax_56 = sub_409350(&var_ec, &var_2c, &var_44, &var_ec)
                var_8_3.b = 0x10
                sub_5113b0(arg1[3], eax_56)
                
                if (var_30_2 u>= 0x10)
                    sub_403160(var_44.d, var_30_2 + 1, 1)
                
                int32_t var_30_3 = 0xf
                int32_t var_34_3 = 0
                var_44 = 0
                
                if (var_18_3 u>= 0x10)
                    sub_403160(var_2c.d, var_18_3 + 1, 1)
                
                int32_t var_18_4 = 0xf
                int32_t var_1c_4 = 0
                var_2c = 0
                
                if (var_48 u>= 0x10)
                    sub_403160(var_5c, var_48 + 1, 1)
                
                void* var_20 = nullptr
                int32_t var_1c_5 = 0
                int32_t var_18_5 = 0
                var_8_3.b = 0x11
                struct 
                    common::SuicideRefCounter<class IInterface>::partsengine::CGUIComponent::VTable*
                    * eax_64 = sub_510a00(arg1[1], &var_20, var_f0, *arg1[6])
                void* ecx_32 = var_20
                
                if (eax_64.b != 0)
                    eax_64.b = ecx_32 == var_1c_5
                    
                    if (eax_64.b == 0)
                        int32_t var_78_2 = 0xf
                        int32_t var_7c_2 = 0
                        var_8c = 0
                        var_8_3.b = 0x12
                        void* esi_9 = ecx_32
                        void* var_a4
                        
                        if (ecx_32 != var_1c_5)
                            do
                                int32_t* ecx_33 = arg1[5]
                                var_ec = *esi_9
                                var_8_3.b = 0x13
                                char* eax_67 =
                                    sub_4b6410(&var_5c, sub_514240(ecx_33, &var_a4, &var_ec))
                                var_8_3.b = 0x14
                                char* eax_68 = sub_41a330(eax_67.b, U""", &var_74, eax_67)
                                var_8_3.b = 0x15
                                var_8_3.b = 0x16
                                sub_4055a0(&var_8c, sub_4176f0(eax_68.b, eax_68, &var_44, "", "), 
                                    0, 0xffffffff)
                                
                                if (var_30_3 u>= 0x10)
                                    sub_403160(var_44.d, var_30_3 + 1, 1)
                                
                                var_30_3 = 0xf
                                int32_t var_34_4 = 0
                                var_44 = 0
                                
                                if (var_60 u>= 0x10)
                                    sub_403160(var_74, var_60 + 1, 1)
                                
                                var_60 = 0xf
                                int32_t var_64_1 = 0
                                var_74.b = 0
                                
                                if (var_48 u>= 0x10)
                                    sub_403160(var_5c, var_48 + 1, 1)
                                
                                var_8_3.b = 0x12
                                eax_64 = var_90_1
                                var_48 = 0xf
                                int32_t var_4c_1 = 0
                                var_5c.b = 0
                                
                                if (eax_64 u>= 0x10)
                                    eax_64 = sub_403160(var_a4, eax_64 + 1, 1)
                                
                                esi_9 += 4
                            while (esi_9 != var_1c_5)
                        
                        int32_t* eax_77 = sub_4175e0(eax_64, &var_cc, &var_a4, 0x796f38)
                        var_8_3.b = 0x17
                        char* eax_78 = sub_417750(eax_77, eax_77, &var_74, &var_8c)
                        var_8_3.b = 0x18
                        char* eax_79 = sub_4176f0(eax_78.b, eax_78, &var_5c, U"]")
                        var_8_3.b = 0x19
                        sub_5113b0(arg1[3], eax_79)
                        
                        if (var_48 u>= 0x10)
                            sub_403160(var_5c, var_48 + 1, 1)
                        
                        int32_t var_48_1 = 0xf
                        int32_t var_4c_2 = 0
                        var_5c.b = 0
                        
                        if (var_60 u>= 0x10)
                            sub_403160(var_74, var_60 + 1, 1)
                        
                        var_8_3.b = 0x12
                        struct std::_Func_base<class std::string, int32_t>::std::_Func_impl<class std::_Binder<struct std::_Unforced,class std::_Mem_fn<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > (__thiscall*)(* this, int32_t) const>,class partsengine::CActivityData* const,struct std::_Ph<1> const&>,class std::allocator<int32_t>,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,int32_t>::VTable
                            * const* eax_84 = var_90_1
                        int32_t var_60_1 = 0xf
                        int32_t var_64_2 = 0
                        var_74.b = 0
                        
                        if (eax_84 u>= 0x10)
                            eax_84 = sub_403160(var_a4, eax_84 + 1, 1)
                        
                        int32_t* eax_86 = sub_4175e0(eax_84, &var_cc, &var_a4, 0x796f2c)
                        var_8_3.b = 0x1a
                        sub_5113b0(arg1[3], eax_86)
                        var_8_3.b = 0x12
                        struct std::_Func_base<class std::string, int32_t>::std::_Func_impl<class std::_Binder<struct std::_Unforced,class std::_Mem_fn<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > (__thiscall*)(* this, int32_t) const>,class partsengine::CActivityData* const,struct std::_Ph<1> const&>,class std::allocator<int32_t>,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,int32_t>::VTable
                            * const* eax_87 = var_90_1
                        
                        if (eax_87 u>= 0x10)
                            eax_87 = sub_403160(var_a4, eax_87 + 1, 1)
                        
                        void* esi_10 = var_20
                        
                        if (esi_10 == var_1c_5)
                        label_511c99:
                            ebx.b = 1
                        else
                            while (true)
                                int32_t edi_4 = *esi_10
                                int32_t* eax_89 = sub_4175e0(eax_87, &var_cc, &var_a4, "*\t")
                                var_8_3.b = 0x1b
                                void* ecx_44 = arg1[2]
                                var_ec = edi_4
                                int32_t* ecx_45 = *(ecx_44 + 0x24)
                                
                                if (ecx_45 == 0)
                                    sub_6d090a()
                                    noreturn
                                
                                bool cond:2_1 = (*(*ecx_45 + 8))(&var_ec, eax_89) == 0
                                var_8_3.b = 0x12
                                eax_87 = var_90_1
                                
                                if (eax_87 u>= 0x10)
                                    eax_87 = sub_403160(var_a4, eax_87 + 1, 1)
                                
                                if (cond:2_1 != 0)
                                    ebx.b = 0
                                    break
                                
                                esi_10 += 4
                                
                                if (esi_10 == var_1c_5)
                                    goto label_511c99
                        
                        if (var_78_2 u>= 0x10)
                            sub_403160(var_8c.d, var_78_2 + 1, 1)
                        
                        ecx_32 = var_20
                    else
                        ebx.b = 1
                else
                    ebx.b = 0
                
                if (ecx_32 != 0)
                    sub_403160(ecx_32, (var_18_5 - ecx_32) s>> 2, 4)
            else
                ebx.b = 0
            
            void* var_b8
            
            if (var_b8 u>= 0x10)
                sub_403160(var_cc.d, var_b8 + 1, 1)
            
            int32_t var_b8_1 = 0xf
            int32_t var_bc_1 = 0
            var_cc = 0
            int32_t var_d0
            
            if (var_d0 u>= 0x10)
                sub_403160(var_e4, var_d0 + 1, 1)
            
            result.b = ebx.b

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
