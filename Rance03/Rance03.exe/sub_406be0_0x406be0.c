// 函数: sub_406be0
// 地址: 0x406be0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b3100
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_50
int32_t eax_2 = __security_cookie ^ &var_50
int32_t __saved_edi
int32_t var_60 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** ecx = arg4
*arg3 = 0
int32_t edi = ecx[5]
char* eax_5

if (edi u< 0x10)
    eax_5 = ecx
else
    eax_5 = *ecx

int32_t eax_7 = sx.d(*eax_5) - 0x21
void* result
int32_t* ecx_3
void* edi_1

if (eax_7 u> 0x5b)
    result = nullptr
else
    switch (eax_7)
        case 0
            int32_t eax_18 = ecx[4]
            
            if (eax_18 u<= 1)
                result = nullptr
            else
                void** edx_1
                
                if (edi u< 0x10)
                    edx_1 = ecx
                else
                    edx_1 = *ecx
                
                if (*(edx_1 + 1) != 0x3d)
                    result = nullptr
                else
                    if (eax_18 u> 2 && edi u>= 0x10)
                        ecx = *ecx
                    
                    if (eax_18 u<= 2 || *(ecx + 2) != 0x3d)
                        struct dpanalysis::IToken::dpanalysis::CBinaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::NotEqual(class dpanalysis::CTokenResult const &) const, 90>::VTable
                            ** eax_20 = sub_69adc6(0xc)
                        
                        if (eax_20 == 0)
                            *arg3 = 0
                            result = 2
                        else
                            *eax_20 = &dpanalysis::CBinaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::NotEqual(class dpanalysis::CTokenResult const &) const, 90>::`vftable'{for `dpanalysis::IToken'}
                            eax_20[1] = 0
                            eax_20[2] = 0
                            *arg3 = eax_20
                            result = 2
                    else
                        struct dpanalysis::IToken::dpanalysis::CRefCompareToken<0>::VTable** 
                            eax_19 = sub_69adc6(0xc)
                        
                        if (eax_19 == 0)
                            *arg3 = 0
                            result = 3
                        else
                            *eax_19 = &
                                dpanalysis::CRefCompareToken<0>::`vftable'{for `dpanalysis::IToken'}
                            eax_19[1] = 0
                            eax_19[2] = 0
                            *arg3 = eax_19
                            result = 3
        case 1, 2, 3, 6, 7, 8, 0xb, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 
                0x19, 0x1a, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 
                0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 
                0x39, 0x3b, 0x3c, 0x3e, 0x3f, 0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 
                0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 
                0x57, 0x58, 0x59, 0x5a
            result = nullptr
        case 4
            struct dpanalysis::IToken::dpanalysis::CModulusToken::VTable** eax_14 = sub_69adc6(0xc)
            
            if (eax_14 == 0)
                *arg3 = 0
                result = 1
            else
                *eax_14 = &dpanalysis::CModulusToken::`vftable'{for `dpanalysis::IToken'}
                eax_14[1] = 0
                eax_14[2] = 0
                *arg3 = eax_14
                result = 1
        case 5
            if (ecx[4] u<= 1)
            label_407087:
                struct dpanalysis::IToken::dpanalysis::CBinaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::BitAnd(class dpanalysis::CTokenResult const &) const, 100>::VTable
                    ** eax_30 = sub_69adc6(0xc)
                
                if (eax_30 == 0)
                    *arg3 = 0
                    result = 1
                else
                    *eax_30 = &dpanalysis::CBinaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::BitAnd(class dpanalysis::CTokenResult const &) const, 100>::`vftable'{for `dpanalysis::IToken'}
                    eax_30[1] = 0
                    eax_30[2] = 0
                    *arg3 = eax_30
                    result = 1
            else
                if (edi u>= 0x10)
                    ecx = *ecx
                
                if (*(ecx + 1) != 0x26)
                    goto label_407087
                
                struct dpanalysis::IToken::dpanalysis::CBinaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::LogicalAnd(class dpanalysis::CTokenResult const &) const, 130>::VTable
                    ** eax_29 = sub_69adc6(0xc)
                
                if (eax_29 == 0)
                    *arg3 = 0
                    result = 2
                else
                    *eax_29 = &dpanalysis::CBinaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::LogicalAnd(class dpanalysis::CTokenResult const &) const, 130>::`vftable'{for `dpanalysis::IToken'}
                    eax_29[1] = 0
                    eax_29[2] = 0
                    *arg3 = eax_29
                    result = 2
        case 9
            struct dpanalysis::IToken::dpanalysis::CBinaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::Multiply(class dpanalysis::CTokenResult const &) const, 50>::VTable
                ** eax_12 = sub_69adc6(0xc)
            
            if (eax_12 == 0)
                *arg3 = 0
                result = 1
            else
                *eax_12 = &dpanalysis::CBinaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::Multiply(class dpanalysis::CTokenResult const &) const, 50>::`vftable'{for `dpanalysis::IToken'}
                eax_12[1] = 0
                eax_12[2] = 0
                *arg3 = eax_12
                result = 1
        case 0xa
            struct dpanalysis::IToken::dpanalysis::CBinaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::Add(class dpanalysis::CTokenResult const &) const, 60>::VTable
                ** eax_10 = sub_69adc6(0xc)
            
            if (eax_10 == 0)
                *arg3 = 0
                result = 1
            else
                *eax_10 = &dpanalysis::CBinaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::Add(class dpanalysis::CTokenResult const &) const, 60>::`vftable'{for `dpanalysis::IToken'}
                eax_10[1] = 0
                eax_10[2] = 0
                *arg3 = eax_10
                result = 1
        case 0xc
            struct dpanalysis::IToken::dpanalysis::CBinaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::Subtract(class dpanalysis::CTokenResult const &) const, 60>::VTable
                ** eax_11 = sub_69adc6(0xc)
            
            if (eax_11 == 0)
                *arg3 = 0
                result = 1
            else
                *eax_11 = &dpanalysis::CBinaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::Subtract(class dpanalysis::CTokenResult const &) const, 60>::`vftable'{for `dpanalysis::IToken'}
                eax_11[1] = 0
                eax_11[2] = 0
                *arg3 = eax_11
                result = 1
        case 0xd
            struct dpanalysis::IToken::dpanalysis::CDotOperatorToken::VTable** eax_9 =
                sub_69adc6(0xc)
            
            if (eax_9 == 0)
                *arg3 = 0
                result = 1
            else
                *eax_9 = &dpanalysis::CDotOperatorToken::`vftable'{for `dpanalysis::IToken'}
                eax_9[1] = 0
                eax_9[2] = 0
                *arg3 = eax_9
                result = 1
        case 0xe
            struct dpanalysis::IToken::dpanalysis::CBinaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::Divide(class dpanalysis::CTokenResult const &) const, 50>::VTable
                ** eax_13 = sub_69adc6(0xc)
            
            if (eax_13 == 0)
                *arg3 = 0
                result = 1
            else
                *eax_13 = &dpanalysis::CBinaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::Divide(class dpanalysis::CTokenResult const &) const, 50>::`vftable'{for `dpanalysis::IToken'}
                eax_13[1] = 0
                eax_13[2] = 0
                *arg3 = eax_13
                result = 1
        case 0x1b
            int32_t eax_21 = ecx[4]
            
            if (eax_21 u<= 1)
            label_406f4b:
                struct dpanalysis::IToken::dpanalysis::CBinaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::Less(class dpanalysis::CTokenResult const &) const, 80>::VTable
                    ** eax_24 = sub_69adc6(0xc)
                
                if (eax_24 == 0)
                    *arg3 = 0
                    result = 1
                else
                    *eax_24 = &dpanalysis::CBinaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::Less(class dpanalysis::CTokenResult const &) const, 80>::`vftable'{for `dpanalysis::IToken'}
                    eax_24[1] = 0
                    eax_24[2] = 0
                    *arg3 = eax_24
                    result = 1
            else
                void** edx_2
                
                if (edi u< 0x10)
                    edx_2 = ecx
                else
                    edx_2 = *ecx
                
                if (*(edx_2 + 1) != 0x3c)
                    if (eax_21 u<= 1)
                        goto label_406f4b
                    
                    if (edi u>= 0x10)
                        ecx = *ecx
                    
                    if (*(ecx + 1) != 0x3d)
                        goto label_406f4b
                    
                    struct dpanalysis::IToken::dpanalysis::CBinaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::LessEqual(class dpanalysis::CTokenResult const &) const, 80>::VTable
                        ** eax_23 = sub_69adc6(0xc)
                    
                    if (eax_23 == 0)
                        *arg3 = 0
                        result = 2
                    else
                        *eax_23 = &dpanalysis::CBinaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::LessEqual(class dpanalysis::CTokenResult const &) const, 80>::`vftable'{for `dpanalysis::IToken'}
                        eax_23[1] = 0
                        eax_23[2] = 0
                        *arg3 = eax_23
                        result = 2
                else
                    struct dpanalysis::IToken::dpanalysis::CBinaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::LeftShift(class dpanalysis::CTokenResult const &) const, 70>::VTable
                        ** eax_22 = sub_69adc6(0xc)
                    
                    if (eax_22 == 0)
                        *arg3 = 0
                        result = 2
                    else
                        *eax_22 = &dpanalysis::CBinaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::LeftShift(class dpanalysis::CTokenResult const &) const, 70>::`vftable'{for `dpanalysis::IToken'}
                        eax_22[1] = 0
                        eax_22[2] = 0
                        *arg3 = eax_22
                        result = 2
        case 0x1c
            int32_t eax_15 = ecx[4]
            
            if (eax_15 u<= 1)
                result = nullptr
            else
                void** edx
                
                if (edi u< 0x10)
                    edx = ecx
                else
                    edx = *ecx
                
                if (*(edx + 1) != 0x3d)
                    result = nullptr
                else
                    if (eax_15 u> 2 && edi u>= 0x10)
                        ecx = *ecx
                    
                    if (eax_15 u<= 2 || *(ecx + 2) != 0x3d)
                        struct dpanalysis::IToken::dpanalysis::CBinaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::Equal(class dpanalysis::CTokenResult const &) const, 90>::VTable
                            ** eax_17 = sub_69adc6(0xc)
                        
                        if (eax_17 == 0)
                            *arg3 = 0
                            result = 2
                        else
                            *eax_17 = &dpanalysis::CBinaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::Equal(class dpanalysis::CTokenResult const &) const, 90>::`vftable'{for `dpanalysis::IToken'}
                            eax_17[1] = 0
                            eax_17[2] = 0
                            *arg3 = eax_17
                            result = 2
                    else
                        struct dpanalysis::IToken::dpanalysis::CRefCompareToken<1>::VTable** 
                            eax_16 = sub_69adc6(0xc)
                        
                        if (eax_16 == 0)
                            *arg3 = 0
                            result = 3
                        else
                            *eax_16 = &
                                dpanalysis::CRefCompareToken<1>::`vftable'{for `dpanalysis::IToken'}
                            eax_16[1] = 0
                            eax_16[2] = 0
                            *arg3 = eax_16
                            result = 3
        case 0x1d
            int32_t eax_25 = ecx[4]
            
            if (eax_25 u<= 1)
            label_407010:
                struct dpanalysis::IToken::dpanalysis::CBinaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::Greater(class dpanalysis::CTokenResult const &) const, 80>::VTable
                    ** eax_28 = sub_69adc6(0xc)
                
                if (eax_28 == 0)
                    *arg3 = 0
                    result = 1
                else
                    *eax_28 = &dpanalysis::CBinaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::Greater(class dpanalysis::CTokenResult const &) const, 80>::`vftable'{for `dpanalysis::IToken'}
                    eax_28[1] = 0
                    eax_28[2] = 0
                    *arg3 = eax_28
                    result = 1
            else
                void** edx_3
                
                if (edi u< 0x10)
                    edx_3 = ecx
                else
                    edx_3 = *ecx
                
                if (*(edx_3 + 1) != 0x3e)
                    if (eax_25 u<= 1)
                        goto label_407010
                    
                    if (edi u>= 0x10)
                        ecx = *ecx
                    
                    if (*(ecx + 1) != 0x3d)
                        goto label_407010
                    
                    struct dpanalysis::IToken::dpanalysis::CBinaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::GreaterEqual(class dpanalysis::CTokenResult const &) const, 80>::VTable
                        ** eax_27 = sub_69adc6(0xc)
                    
                    if (eax_27 == 0)
                        *arg3 = 0
                        result = 2
                    else
                        *eax_27 = &dpanalysis::CBinaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::GreaterEqual(class dpanalysis::CTokenResult const &) const, 80>::`vftable'{for `dpanalysis::IToken'}
                        eax_27[1] = 0
                        eax_27[2] = 0
                        *arg3 = eax_27
                        result = 2
                else
                    struct dpanalysis::IToken::dpanalysis::CBinaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::RightShift(class dpanalysis::CTokenResult const &) const, 70>::VTable
                        ** eax_26 = sub_69adc6(0xc)
                    
                    if (eax_26 == 0)
                        *arg3 = 0
                        result = 2
                    else
                        *eax_26 = &dpanalysis::CBinaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::RightShift(class dpanalysis::CTokenResult const &) const, 70>::`vftable'{for `dpanalysis::IToken'}
                        eax_26[1] = 0
                        eax_26[2] = 0
                        *arg3 = eax_26
                        result = 2
        case 0x1e
            int32_t* var_4c = nullptr
            void var_2c
            char* eax_37 = sub_403070(ecx, &var_2c, 1, 0xffffffff)
            int32_t var_4_2 = 1
            int32_t var_4_3 = 0xffffffff
            edi_1 = sub_406a30(eax_37, eax_37, &var_4c, 0x3a)
            sub_401fb0(&var_2c)
            ecx_3 = var_4c
            
            if (ecx_3 == 0)
                result = nullptr
            else if (edi_1 == 0)
                (*(*ecx_3 + 8))(1)
                result = nullptr
            else
                struct dpanalysis::IToken::dpanalysis::CConditionalToken::VTable** eax_39 =
                    sub_69adc6(0x10)
                
                if (eax_39 == 0)
                    *arg3 = 0
                    result = edi_1 + 2
                else
                    int32_t* ecx_7 = var_4c
                    *eax_39 = &dpanalysis::CConditionalToken::`vftable'{for `dpanalysis::IToken'}
                    eax_39[1] = 0
                    eax_39[2] = ecx_7
                    eax_39[3] = 0
                    *arg3 = eax_39
                    result = edi_1 + 2
        case 0x3a
            int32_t* var_48 = nullptr
            void var_44
            int32_t* eax_34 = sub_403070(ecx, &var_44, 1, 0xffffffff)
            int32_t var_4 = 0
            int32_t var_4_1 = 0xffffffff
            edi_1 = sub_406a30(eax_34, eax_34, &var_48, 0x5d)
            sub_401fb0(&var_44)
            ecx_3 = var_48
            
            if (ecx_3 == 0)
                result = nullptr
            else if (edi_1 == 0)
                (*(*ecx_3 + 8))(1)
                result = nullptr
            else
                *arg2 = 0
                struct dpanalysis::IToken::dpanalysis::CArraySubscriptToken::VTable** eax_36 =
                    sub_69adc6(0xc)
                
                if (eax_36 == 0)
                    *arg3 = 0
                    result = edi_1 + 2
                else
                    int32_t* ecx_4 = var_48
                    *eax_36 = &dpanalysis::CArraySubscriptToken::`vftable'{for `dpanalysis::IToken'}
                    eax_36[1] = 0
                    eax_36[2] = ecx_4
                    *arg3 = eax_36
                    result = edi_1 + 2
        case 0x3d
            struct dpanalysis::IToken::dpanalysis::CBinaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::BitNot(class dpanalysis::CTokenResult const &) const, 110>::VTable
                ** eax_33 = sub_69adc6(0xc)
            
            if (eax_33 == 0)
                *arg3 = 0
                result = 1
            else
                *eax_33 = &dpanalysis::CBinaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::BitNot(class dpanalysis::CTokenResult const &) const, 110>::`vftable'{for `dpanalysis::IToken'}
                eax_33[1] = 0
                eax_33[2] = 0
                *arg3 = eax_33
                result = 1
        case 0x5b
            if (ecx[4] u<= 1)
            label_4070fe:
                struct dpanalysis::IToken::dpanalysis::CBinaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::BitOr(class dpanalysis::CTokenResult const &) const, 120>::VTable
                    ** eax_32 = sub_69adc6(0xc)
                
                if (eax_32 == 0)
                    *arg3 = 0
                    result = 1
                else
                    *eax_32 = &dpanalysis::CBinaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::BitOr(class dpanalysis::CTokenResult const &) const, 120>::`vftable'{for `dpanalysis::IToken'}
                    eax_32[1] = 0
                    eax_32[2] = 0
                    *arg3 = eax_32
                    result = 1
            else
                if (edi u>= 0x10)
                    ecx = *ecx
                
                if (*(ecx + 1) != 0x7c)
                    goto label_4070fe
                
                struct dpanalysis::IToken::dpanalysis::CBinaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::LogicalOr(class dpanalysis::CTokenResult const &) const, 140>::VTable
                    ** eax_31 = sub_69adc6(0xc)
                
                if (eax_31 == 0)
                    *arg3 = 0
                    result = 2
                else
                    *eax_31 = &dpanalysis::CBinaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::LogicalOr(class dpanalysis::CTokenResult const &) const, 140>::`vftable'{for `dpanalysis::IToken'}
                    eax_31[1] = 0
                    eax_31[2] = 0
                    *arg3 = eax_31
                    result = 2
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_50)
return result
