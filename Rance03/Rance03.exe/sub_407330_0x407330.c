// 函数: sub_407330
// 地址: 0x407330
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b3153
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_4c
int32_t eax_2 = __security_cookie ^ &var_4c
int32_t __saved_edi
int32_t var_60 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg3
*ebx = 0
int32_t edi = arg4[5]
char* eax_5

if (edi u< 0x10)
    eax_5 = arg4
else
    eax_5 = *arg4

int32_t* var_48
void* result

switch (sx.d(*eax_5) - 0x21)
    case 0
        *arg2 = 1
        struct dpanalysis::IToken::dpanalysis::CUnaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::LogicalNot(void) const, 30>::VTable
            ** eax_11 = sub_69adc6(8)
        
        if (eax_11 == 0)
            *ebx = 0
            result = 1
        else
            *eax_11 = &dpanalysis::CUnaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::LogicalNot(void) const, 30>::`vftable'{for `dpanalysis::IToken'}
            eax_11[1] = 0
            *ebx = eax_11
            result = 1
    case 1
        result = sub_407a20(arg3, arg4)
    case 6
        result = sub_407830(arg3, arg4)
    case 7
        var_48 = nullptr
        void var_2c
        char* eax_13 = sub_403070(arg4, &var_2c, 1, 0xffffffff)
        int32_t var_4 = 0
        void* eax_14 = sub_406a30(eax_13, eax_13, &var_48, 0x29)
        int32_t var_4_1 = 0xffffffff
        sub_401fb0(&var_2c)
        int32_t* ecx_3 = var_48
        
        if (ecx_3 == 0)
            result = nullptr
        else if (eax_14 == 0)
            (*(*ecx_3 + 8))(1)
            result = nullptr
        else
            struct dpanalysis::IToken::dpanalysis::CParenthesisToken::VTable** eax_15 =
                sub_69adc6(8)
            
            if (eax_15 == 0)
                *ebx = 0
                result = eax_14 + 2
            else
                int32_t* ecx_4 = var_48
                *eax_15 = &dpanalysis::CParenthesisToken::`vftable'{for `dpanalysis::IToken'}
                eax_15[1] = ecx_4
                *ebx = eax_15
                result = eax_14 + 2
    case 0xa
        *arg2 = 1
        struct dpanalysis::IToken::dpanalysis::CUnaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::Plus(void) const, 30>::VTable
            ** eax_9 = sub_69adc6(8)
        
        if (eax_9 == 0)
            *ebx = 0
            result = 1
        else
            *eax_9 = &dpanalysis::CUnaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::Plus(void) const, 30>::`vftable'{for `dpanalysis::IToken'}
            eax_9[1] = 0
            *ebx = eax_9
            result = 1
    case 0xc
        *arg2 = 1
        struct dpanalysis::IToken::dpanalysis::CUnaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::Negate(void) const, 30>::VTable
            ** eax_10 = sub_69adc6(8)
        
        if (eax_10 == 0)
            *ebx = 0
            result = 1
        else
            *eax_10 = &dpanalysis::CUnaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::Negate(void) const, 30>::`vftable'{for `dpanalysis::IToken'}
            eax_10[1] = 0
            *ebx = eax_10
            result = 1
    case 0x5d
        *arg2 = 1
        struct dpanalysis::IToken::dpanalysis::CUnaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::Complement(void) const, 30>::VTable
            ** eax_12 = sub_69adc6(8)
        
        if (eax_12 == 0)
            *ebx = 0
            result = 1
        else
            *eax_12 = &dpanalysis::CUnaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::Complement(void) const, 30>::`vftable'{for `dpanalysis::IToken'}
            eax_12[1] = 0
            *ebx = eax_12
            result = 1
    default
        char* eax_17
        
        if (edi u< 0x10)
            eax_17 = arg4
        else
            eax_17 = *arg4
        
        char* eax_18
        
        if (*eax_17 u>= 0x30)
            if (edi u< 0x10)
                eax_18 = arg4
            else
                eax_18 = *arg4
        
        if (*eax_17 u< 0x30 || *eax_18 u> 0x39)
            void* result_1 = nullptr
            char i
            
            do
                char* eax_19
                
                if (edi u< 0x10)
                    eax_19 = arg4
                else
                    eax_19 = *arg4
                
                char* eax_20
                
                if (*(eax_19 + result_1) u>= 0x81)
                    if (edi u< 0x10)
                        eax_20 = arg4
                    else
                        eax_20 = *arg4
                
                char* eax_21
                char* eax_22
                
                if (*(eax_19 + result_1) u< 0x81 || *(eax_20 + result_1) u> 0x9f)
                    if (edi u< 0x10)
                        eax_21 = arg4
                    else
                        eax_21 = *arg4
                    
                    if (*(eax_21 + result_1) u>= 0xe0)
                        if (edi u< 0x10)
                            eax_22 = arg4
                        else
                            eax_22 = *arg4
                
                if ((*(eax_19 + result_1) u< 0x81 || *(eax_20 + result_1) u> 0x9f)
                        && (*(eax_21 + result_1) u< 0xe0 || *(eax_22 + result_1) u> 0xef))
                    result_1 += 1
                else
                    result_1 += 2
                
                if (result_1 u>= arg4[4])
                    break
                
                int32_t* eax_23
                
                if (edi u< 0x10)
                    eax_23 = arg4
                else
                    eax_23 = *arg4
                
                arg3.b = *(eax_23 + result_1)
                i = sub_4080c0(arg3.b)
            while (i == 0)
            void* var_44
            sub_403070(arg4, &var_44, 0, result_1)
            int32_t var_4_2 = 1
            
            if (sub_40c250(&var_44, "true") == 0)
                if (sub_40c250(&var_44, "false") == 0)
                    if (sub_40c250(&var_44, "NULL") == 0)
                        if (sub_40c250(&var_44, 0x6da18c) == 0)
                            if (sub_40c250(&var_44, "float") == 0)
                                if (sub_40c250(&var_44, "string") == 0)
                                    if (sub_40c250(&var_44, "bool") == 0)
                                        int32_t* edi_1 = sub_69adc6(0x1c)
                                        var_48 = edi_1
                                        var_4_2.b = 2
                                        
                                        if (edi_1 == 0)
                                            edi_1 = nullptr
                                        else
                                            var_4_2.b = 3
                                            *edi_1 = &dpanalysis::CVariableToken::`vftable'{for `dpanalysis::IToken'}
                                            edi_1[6] = 0xf
                                            edi_1[5] = 0
                                            edi_1[1].b = 0
                                            sub_401ff0(&edi_1[1], &var_44, 0, 0xffffffff)
                                        
                                        *ebx = edi_1
                                    else
                                        *arg2 = 1
                                        struct 
                                            dpanalysis::IToken::dpanalysis::CCastToken<47>::VTable**
                                             eax_37 = sub_69adc6(8)
                                        
                                        if (eax_37 == 0)
                                            *ebx = 0
                                        else
                                            *eax_37 = &dpanalysis::CCastToken<47>::`vftable'{for `dpanalysis::IToken'}
                                            eax_37[1] = 0
                                            *ebx = eax_37
                                else
                                    *arg2 = 1
                                    struct dpanalysis::IToken::dpanalysis::CCastToken<12>::VTable** 
                                        eax_35 = sub_69adc6(8)
                                    
                                    if (eax_35 == 0)
                                        *ebx = 0
                                    else
                                        *eax_35 = &dpanalysis::CCastToken<12>::`vftable'{for `dpanalysis::IToken'}
                                        eax_35[1] = 0
                                        *ebx = eax_35
                            else
                                *arg2 = 1
                                struct dpanalysis::IToken::dpanalysis::CCastToken<11>::VTable** 
                                    eax_33 = sub_69adc6(8)
                                
                                if (eax_33 == 0)
                                    *ebx = 0
                                else
                                    *eax_33 = &dpanalysis::CCastToken<11>::`vftable'{for `dpanalysis::IToken'}
                                    eax_33[1] = 0
                                    *ebx = eax_33
                        else
                            *arg2 = 1
                            struct dpanalysis::IToken::dpanalysis::CCastToken<10>::VTable** 
                                eax_31 = sub_69adc6(8)
                            
                            if (eax_31 == 0)
                                *ebx = 0
                            else
                                *eax_31 =
                                    &dpanalysis::CCastToken<10>::`vftable'{for `dpanalysis::IToken'}
                                eax_31[1] = 0
                                *ebx = eax_31
                    else
                        struct dpanalysis::IToken::dpanalysis::CNullToken::VTable** eax_29 =
                            sub_69adc6(4)
                        
                        if (eax_29 == 0)
                            *ebx = 0
                        else
                            *eax_29 = &dpanalysis::CNullToken::`vftable'{for `dpanalysis::IToken'}
                            *ebx = eax_29
                else
                    struct dpanalysis::IToken::dpanalysis::CValueLiteralToken<bool>::VTable** 
                        eax_27 = sub_69adc6(8)
                    
                    if (eax_27 == 0)
                        *ebx = 0
                    else
                        *eax_27 = &dpanalysis::CValueLiteralToken<bool>::`vftable'{for `dpanalysis::IToken'}
                        eax_27[1].b = 0
                        *ebx = eax_27
            else
                struct dpanalysis::IToken::dpanalysis::CValueLiteralToken<bool>::VTable** eax_25 =
                    sub_69adc6(8)
                
                if (eax_25 == 0)
                    *ebx = 0
                else
                    *eax_25 =
                        &dpanalysis::CValueLiteralToken<bool>::`vftable'{for `dpanalysis::IToken'}
                    eax_25[1].b = 1
                    *ebx = eax_25
            
            int32_t var_30
            
            if (var_30 u>= 0x10)
                j__free(var_44)
            
            result = result_1
        else
            result = sub_407c30(arg3, arg4)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_4c)
return result
