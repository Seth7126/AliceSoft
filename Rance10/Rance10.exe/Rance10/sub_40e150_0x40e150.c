// 函数: sub_40e150
// 地址: 0x40e150
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727ae0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_5c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** ecx = arg4
*arg3 = 0
int32_t edi = ecx[5]
char* eax_3

if (edi u< 0x10)
    eax_3 = ecx
else
    eax_3 = *ecx

int32_t eax_5 = sx.d(*eax_3) - 0x21
void* result
int32_t* var_4c
int32_t* var_48
int32_t* eax_7
int32_t* eax_9
int32_t* eax_10
int32_t* eax_16
int32_t* ecx_3
int32_t* ecx_4
void* edi_1

if (eax_5 u> 0x5b)
    result = nullptr
else
    switch (eax_5)
        case 0
            int32_t eax_11 = ecx[4]
            
            if (eax_11 u<= 1)
                result = nullptr
            else
                void** edx_1
                
                if (edi u< 0x10)
                    edx_1 = ecx
                else
                    edx_1 = *ecx
                
                if (*(edx_1 + 1) == 0x3d)
                    if (eax_11 u> 2 && edi u>= 0x10)
                        ecx = *ecx
                    
                    if (eax_11 u<= 2 || *(ecx + 2) != 0x3d)
                        eax_10 = sub_6e810c(0xc)
                        var_48 = eax_10
                        *eax_10 = &dpanalysis::CBinaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::NotEqual(class dpanalysis::CTokenResult const &) const, 8>::`vftable'{for `dpanalysis::IToken'}
                        goto label_40e2aa
                    
                    eax_9 = sub_6e810c(0xc)
                    var_48 = eax_9
                    *eax_9 = &dpanalysis::CRefCompareToken<0>::`vftable'{for `dpanalysis::IToken'}
                    goto label_40e27d
                
                result = nullptr
        case 1, 2, 3, 6, 7, 8, 0xb, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 
                0x19, 0x1a, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 
                0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 
                0x39, 0x3b, 0x3c, 0x3e, 0x3f, 0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 
                0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 
                0x57, 0x58, 0x59, 0x5a
            result = nullptr
        case 4
            eax_7 = sub_6e810c(0xc)
            var_48 = eax_7
            *eax_7 = &dpanalysis::CModulusToken::`vftable'{for `dpanalysis::IToken'}
            goto label_40e1c3
        case 5
            if (ecx[4] u> 1)
                if (edi u>= 0x10)
                    ecx = *ecx
                
                if (*(ecx + 1) == 0x26)
                    eax_10 = sub_6e810c(0xc)
                    var_48 = eax_10
                    *eax_10 = &dpanalysis::CBinaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::LogicalAnd(class dpanalysis::CTokenResult const &) const, 12>::`vftable'{for `dpanalysis::IToken'}
                    goto label_40e2aa
            
            eax_7 = sub_6e810c(0xc)
            var_48 = eax_7
            *eax_7 = &dpanalysis::CBinaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::BitAnd(class dpanalysis::CTokenResult const &) const, 9>::`vftable'{for `dpanalysis::IToken'}
            goto label_40e1c3
        case 9
            eax_7 = sub_6e810c(0xc)
            var_48 = eax_7
            *eax_7 = &dpanalysis::CBinaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::Multiply(class dpanalysis::CTokenResult const &) const, 4>::`vftable'{for `dpanalysis::IToken'}
            goto label_40e1c3
        case 0xa
            eax_7 = sub_6e810c(0xc)
            var_48 = eax_7
            *eax_7 = &dpanalysis::CBinaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::Add(class dpanalysis::CTokenResult const &) const, 5>::`vftable'{for `dpanalysis::IToken'}
            goto label_40e1c3
        case 0xc
            eax_7 = sub_6e810c(0xc)
            var_48 = eax_7
            *eax_7 = &dpanalysis::CBinaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::Subtract(class dpanalysis::CTokenResult const &) const, 5>::`vftable'{for `dpanalysis::IToken'}
            goto label_40e1c3
        case 0xd
            eax_7 = sub_6e810c(0xc)
            var_48 = eax_7
            *eax_7 = &dpanalysis::CDotOperatorToken::`vftable'{for `dpanalysis::IToken'}
        label_40e1c3:
            eax_7[1] = 0
            eax_7[2] = 0
            *arg3 = eax_7
            result = 1
        case 0xe
            eax_7 = sub_6e810c(0xc)
            var_48 = eax_7
            *eax_7 = &dpanalysis::CBinaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::Divide(class dpanalysis::CTokenResult const &) const, 4>::`vftable'{for `dpanalysis::IToken'}
            goto label_40e1c3
        case 0x1b
            int32_t eax_12 = ecx[4]
            
            if (eax_12 u<= 1)
            label_40e378:
                eax_7 = sub_6e810c(0xc)
                var_48 = eax_7
                *eax_7 = &dpanalysis::CBinaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::Less(class dpanalysis::CTokenResult const &) const, 7>::`vftable'{for `dpanalysis::IToken'}
                goto label_40e1c3
            
            void** edx_2
            
            if (edi u< 0x10)
                edx_2 = ecx
            else
                edx_2 = *ecx
            
            if (*(edx_2 + 1) != 0x3c)
                if (eax_12 u<= 1)
                    goto label_40e378
                
                if (edi u>= 0x10)
                    ecx = *ecx
                
                if (*(ecx + 1) != 0x3d)
                    goto label_40e378
                
                eax_10 = sub_6e810c(0xc)
                var_48 = eax_10
                *eax_10 = &dpanalysis::CBinaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::LessEqual(class dpanalysis::CTokenResult const &) const, 7>::`vftable'{for `dpanalysis::IToken'}
                goto label_40e2aa
            
            eax_10 = sub_6e810c(0xc)
            var_48 = eax_10
            *eax_10 = &dpanalysis::CBinaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::LeftShift(class dpanalysis::CTokenResult const &) const, 6>::`vftable'{for `dpanalysis::IToken'}
        label_40e2aa:
            eax_10[1] = 0
            eax_10[2] = 0
            *arg3 = eax_10
            result = 2
        case 0x1c
            int32_t eax_8 = ecx[4]
            
            if (eax_8 u<= 1)
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
                    if (eax_8 u> 2 && edi u>= 0x10)
                        ecx = *ecx
                    
                    if (eax_8 u<= 2 || *(ecx + 2) != 0x3d)
                        eax_10 = sub_6e810c(0xc)
                        var_48 = eax_10
                        *eax_10 = &dpanalysis::CBinaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::Equal(class dpanalysis::CTokenResult const &) const, 8>::`vftable'{for `dpanalysis::IToken'}
                        goto label_40e2aa
                    
                    eax_9 = sub_6e810c(0xc)
                    var_48 = eax_9
                    *eax_9 = &dpanalysis::CRefCompareToken<1>::`vftable'{for `dpanalysis::IToken'}
                label_40e27d:
                    eax_9[1] = 0
                    eax_9[2] = 0
                    *arg3 = eax_9
                    result = 3
        case 0x1d
            int32_t eax_13 = ecx[4]
            
            if (eax_13 u> 1)
                void** edx_3
                
                if (edi u< 0x10)
                    edx_3 = ecx
                else
                    edx_3 = *ecx
                
                if (*(edx_3 + 1) == 0x3e)
                    eax_10 = sub_6e810c(0xc)
                    var_48 = eax_10
                    *eax_10 = &dpanalysis::CBinaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::RightShift(class dpanalysis::CTokenResult const &) const, 6>::`vftable'{for `dpanalysis::IToken'}
                    goto label_40e2aa
                
                if (eax_13 u> 1)
                    if (edi u>= 0x10)
                        ecx = *ecx
                    
                    if (*(ecx + 1) == 0x3d)
                        eax_10 = sub_6e810c(0xc)
                        var_48 = eax_10
                        *eax_10 = &dpanalysis::CBinaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::GreaterEqual(class dpanalysis::CTokenResult const &) const, 7>::`vftable'{for `dpanalysis::IToken'}
                        goto label_40e2aa
            
            eax_7 = sub_6e810c(0xc)
            var_48 = eax_7
            *eax_7 = &dpanalysis::CBinaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::Greater(class dpanalysis::CTokenResult const &) const, 7>::`vftable'{for `dpanalysis::IToken'}
            goto label_40e1c3
        case 0x1e
            var_48 = nullptr
            void var_44
            char* eax_17 = sub_405480(ecx, &var_44, 1, 0xffffffff)
            int32_t var_8_3 = 1
            int32_t var_8_4 = 0xffffffff
            edi_1 = sub_40dfb0(eax_17, eax_17, &var_48, 0x3a)
            sub_403320(&var_44)
            ecx_3 = var_48
            
            if (ecx_3 == 0)
                result = nullptr
            else
                if (edi_1 != 0)
                    eax_16 = sub_6e810c(0x10)
                    var_4c = eax_16
                    ecx_4 = var_48
                    *eax_16 = &dpanalysis::CConditionalToken::`vftable'{for `dpanalysis::IToken'}
                    eax_16[3] = 0
                    goto label_40e54a
                
                (*(*ecx_3 + 8))(1)
                result = nullptr
        case 0x3a
            var_4c = nullptr
            void var_2c
            int32_t* eax_14 = sub_405480(ecx, &var_2c, 1, 0xffffffff)
            int32_t var_8_1 = 0
            int32_t var_8_2 = 0xffffffff
            edi_1 = sub_40dfb0(eax_14, eax_14, &var_4c, 0x5d)
            sub_403320(&var_2c)
            ecx_3 = var_4c
            
            if (ecx_3 == 0)
                result = nullptr
            else if (edi_1 == 0)
                (*(*ecx_3 + 8))(1)
                result = nullptr
            else
                *arg2 = 0
                eax_16 = sub_6e810c(0xc)
                var_48 = eax_16
                ecx_4 = var_4c
                *eax_16 = &dpanalysis::CArraySubscriptToken::`vftable'{for `dpanalysis::IToken'}
            label_40e54a:
                eax_16[1] = 0
                eax_16[2] = ecx_4
                *arg3 = eax_16
                result = edi_1 + 2
        case 0x3d
            eax_7 = sub_6e810c(0xc)
            var_48 = eax_7
            *eax_7 = &dpanalysis::CBinaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::BitNot(class dpanalysis::CTokenResult const &) const, 10>::`vftable'{for `dpanalysis::IToken'}
            goto label_40e1c3
        case 0x5b
            if (ecx[4] u> 1)
                if (edi u>= 0x10)
                    ecx = *ecx
                
                if (*(ecx + 1) == 0x7c)
                    eax_10 = sub_6e810c(0xc)
                    var_48 = eax_10
                    *eax_10 = &dpanalysis::CBinaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::LogicalOr(class dpanalysis::CTokenResult const &) const, 13>::`vftable'{for `dpanalysis::IToken'}
                    goto label_40e2aa
            
            eax_7 = sub_6e810c(0xc)
            var_48 = eax_7
            *eax_7 = &dpanalysis::CBinaryOperatorToken<&public: class dpanalysis::CTokenResult __thiscall dpanalysis::CTokenResult::BitOr(class dpanalysis::CTokenResult const &) const, 11>::`vftable'{for `dpanalysis::IToken'}
            goto label_40e1c3
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
