// 函数: sub_40e620
// 地址: 0x40e620
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727b37
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_5c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_48 = arg2
int32_t* edi = arg3
*edi = 0
int32_t esi = arg4[5]
char* eax_3

if (esi u< 0x10)
    eax_3 = arg4
else
    eax_3 = *arg4

void* result

switch (sx.d(*eax_3) - 0x21)
    case 0
        *arg2 = 1
        int32_t* eax_9 = sub_6e810c(8)
        var_48 = eax_9
        *eax_9 = &dpanalysis::CUnaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::LogicalNot(void) const, 3>::`vftable'{for `dpanalysis::IToken'}
        eax_9[1] = 0
        *edi = eax_9
        result = 1
    case 1
        result = sub_40ec30(arg3, arg4)
    case 6
        result = sub_40ea90(arg3, arg4)
    case 7
        var_48 = nullptr
        void var_44
        char* eax_11 = sub_405480(arg4, &var_44, 1, 0xffffffff)
        int32_t var_8_1 = 0
        void* eax_12 = sub_40dfb0(eax_11, eax_11, &var_48, 0x29)
        int32_t var_8_2 = 0xffffffff
        sub_403320(&var_44)
        int32_t* ecx_3 = var_48
        
        if (ecx_3 == 0)
            result = nullptr
        else if (eax_12 == 0)
            (*(*ecx_3 + 8))(1)
            result = nullptr
        else
            struct dpanalysis::IToken::dpanalysis::CParenthesisToken::VTable** eax_13 =
                sub_6e810c(8)
            struct dpanalysis::IToken::dpanalysis::CParenthesisToken::VTable** var_4c_1 = eax_13
            int32_t* ecx_4 = var_48
            *eax_13 = &dpanalysis::CParenthesisToken::`vftable'{for `dpanalysis::IToken'}
            eax_13[1] = ecx_4
            *edi = eax_13
            result = eax_12 + 2
    case 0xa
        *arg2 = 1
        int32_t* eax_7 = sub_6e810c(8)
        var_48 = eax_7
        *eax_7 = &dpanalysis::CUnaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::Plus(void) const, 3>::`vftable'{for `dpanalysis::IToken'}
        eax_7[1] = 0
        *edi = eax_7
        result = 1
    case 0xc
        *arg2 = 1
        int32_t* eax_8 = sub_6e810c(8)
        var_48 = eax_8
        *eax_8 = &dpanalysis::CUnaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::Negate(void) const, 3>::`vftable'{for `dpanalysis::IToken'}
        eax_8[1] = 0
        *edi = eax_8
        result = 1
    case 0x5d
        *arg2 = 1
        int32_t* eax_10 = sub_6e810c(8)
        var_48 = eax_10
        *eax_10 = &dpanalysis::CUnaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::Complement(void) const, 3>::`vftable'{for `dpanalysis::IToken'}
        eax_10[1] = 0
        *edi = eax_10
        result = 1
    default
        char* eax_15
        
        if (esi u< 0x10)
            eax_15 = arg4
        else
            eax_15 = *arg4
        
        eax_15.b = *eax_15
        eax_15.b -= 0x30
        
        if (eax_15.b u> 9)
            void* result_1 = nullptr
            char i
            
            do
                char* eax_16
                
                if (esi u< 0x10)
                    eax_16 = arg4
                else
                    eax_16 = *arg4
                
                eax_16.b = *(eax_16 + result_1)
                int32_t eax_17
                
                if (eax_16.b u< 0x81 || eax_16.b u> 0x9f)
                    eax_16.b += 0x20
                    
                    eax_17 = eax_16.b u> 0xf ? 1 : 2
                else
                    eax_17 = 2
                
                result_1 += eax_17
                
                if (result_1 u>= arg4[4])
                    break
                
                int32_t* eax_18
                
                if (esi u< 0x10)
                    eax_18 = arg4
                else
                    eax_18 = *arg4
                
                arg3.b = *(eax_18 + result_1)
                i = sub_40f280(arg3.b)
            while (i == 0)
            void* var_2c
            sub_405480(arg4, &var_2c, 0, result_1)
            int32_t var_8_3 = 1
            
            if (sub_407560(&var_2c, "true") == 0)
                if (sub_407560(&var_2c, "false") == 0)
                    if (sub_407560(&var_2c, "NULL") == 0)
                        if (sub_407560(&var_2c, 0x75cdf0) == 0)
                            if (sub_407560(&var_2c, "float") == 0)
                                if (sub_407560(&var_2c, "string") == 0)
                                    if (sub_407560(&var_2c, "bool") == 0)
                                        struct 
                                            dpanalysis::IToken::dpanalysis::CVariableToken::VTable**
                                             eax_37 = sub_6e810c(0x1c)
                                        struct 
                                            dpanalysis::IToken::dpanalysis::CVariableToken::VTable**
                                             var_4c_9 = eax_37
                                        var_8_3.b = 3
                                        *eax_37 = &dpanalysis::CVariableToken::`vftable'{for `dpanalysis::IToken'}
                                        eax_37[6] = 0xf
                                        eax_37[5] = 0
                                        eax_37[1].b = 0
                                        sub_403590(&eax_37[1], &var_2c, 0, 0xffffffff)
                                        *edi = eax_37
                                    else
                                        *var_48 = 1
                                        struct 
                                            dpanalysis::IToken::dpanalysis::CCastToken<47>::VTable**
                                             eax_36 = sub_6e810c(8)
                                        struct 
                                            dpanalysis::IToken::dpanalysis::CCastToken<47>::VTable**
                                             var_4c_8 = eax_36
                                        *eax_36 = &dpanalysis::CCastToken<47>::`vftable'{for `dpanalysis::IToken'}
                                        eax_36[1] = 0
                                        *edi = eax_36
                                else
                                    *var_48 = 1
                                    struct dpanalysis::IToken::dpanalysis::CCastToken<12>::VTable** 
                                        eax_33 = sub_6e810c(8)
                                    struct dpanalysis::IToken::dpanalysis::CCastToken<12>::VTable** 
                                        var_4c_7 = eax_33
                                    *eax_33 = &dpanalysis::CCastToken<12>::`vftable'{for `dpanalysis::IToken'}
                                    eax_33[1] = 0
                                    *edi = eax_33
                            else
                                *var_48 = 1
                                struct dpanalysis::IToken::dpanalysis::CCastToken<11>::VTable** 
                                    eax_30 = sub_6e810c(8)
                                struct dpanalysis::IToken::dpanalysis::CCastToken<11>::VTable** 
                                    var_4c_6 = eax_30
                                *eax_30 =
                                    &dpanalysis::CCastToken<11>::`vftable'{for `dpanalysis::IToken'}
                                eax_30[1] = 0
                                *edi = eax_30
                        else
                            *var_48 = 1
                            struct dpanalysis::IToken::dpanalysis::CCastToken<10>::VTable** 
                                eax_27 = sub_6e810c(8)
                            struct dpanalysis::IToken::dpanalysis::CCastToken<10>::VTable** 
                                var_4c_5 = eax_27
                            *eax_27 =
                                &dpanalysis::CCastToken<10>::`vftable'{for `dpanalysis::IToken'}
                            eax_27[1] = 0
                            *edi = eax_27
                    else
                        struct dpanalysis::IToken::dpanalysis::CNullToken::VTable** eax_24 =
                            sub_6e810c(4)
                        struct dpanalysis::IToken::dpanalysis::CNullToken::VTable** var_4c_4 =
                            eax_24
                        *eax_24 = &dpanalysis::CNullToken::`vftable'{for `dpanalysis::IToken'}
                        *edi = eax_24
                else
                    struct dpanalysis::IToken::dpanalysis::CValueLiteralToken<bool>::VTable** 
                        eax_22 = sub_6e810c(8)
                    struct dpanalysis::IToken::dpanalysis::CValueLiteralToken<bool>::VTable** 
                        var_4c_3 = eax_22
                    *eax_22 =
                        &dpanalysis::CValueLiteralToken<bool>::`vftable'{for `dpanalysis::IToken'}
                    eax_22[1].b = 0
                    *edi = eax_22
            else
                struct dpanalysis::IToken::dpanalysis::CValueLiteralToken<bool>::VTable** eax_20 =
                    sub_6e810c(8)
                struct dpanalysis::IToken::dpanalysis::CValueLiteralToken<bool>::VTable** 
                    var_4c_2 = eax_20
                *eax_20 = &dpanalysis::CValueLiteralToken<bool>::`vftable'{for `dpanalysis::IToken'}
                eax_20[1].b = 1
                *edi = eax_20
            
            int32_t var_18
            
            if (var_18 u>= 0x10)
                sub_403160(var_2c, var_18 + 1, 1)
            
            result = result_1
        else
            result = sub_40ee20(arg3, arg4)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
