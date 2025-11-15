// 函数: sub_6dc0c7
// 地址: 0x6dc0c7
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0xb8
int32_t (* var_c)(void* arg1) = sub_749a62
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebx
int32_t var_cc_35 = ebx
int32_t esi
int32_t var_d0_3 = esi
int32_t edi
int32_t var_d4 = edi
int32_t __saved_ebp
int32_t eax_71 = __security_cookie ^ &__saved_ebp
void* const var_dc_5 = &data_6dc0d6
int32_t var_8_5 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_80 = 0
int32_t* edi_1 = arg2
int32_t* var_b0 = arg1
int32_t* var_ac = edi_1
int32_t* var_6c
void* ecx_2
int32_t* esi_1

if (arg4 == 0)
    int32_t var_8_1 = 2
    int32_t var_c0
    int32_t* eax_5 = sub_6d70cb(std::ios_base::getloc(arg5, &var_c0))
    esi_1 = eax_5
    var_6c = eax_5
    ecx_2 = &var_c0
else
    int32_t var_8 = 1
    void var_b8
    esi_1 = sub_6d702e(std::ios_base::getloc(arg5, &var_b8))
    ecx_2 = &var_b8
    var_6c = esi_1

std::_Debug_range2<class std::move_iterator<class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState*> > > > > > > >(
    ecx_2)
int32_t var_4c = 0
char var_65 = 0
char var_5d = 0
int32_t var_48 = 7
int16_t var_5c = 0
int32_t var_8_2 = 3
int32_t esi_2 = *(*esi_1 + 0x2c)
j_sub_4033e0()
char var_98[0x4]
esi_2(&var_98, eax_71)
arg1[5] = 0xf
bool cond:1 = arg1[5] u< 0x10
arg1[4] = 0
int32_t* eax_7

if (cond:1)
    eax_7 = arg1
else
    eax_7 = *arg1

*eax_7 = 0
void* ebx_2 = arg5
int32_t var_64 = 1
int32_t var_80_1 = 1
var_8_2.b = 4
int32_t var_c8
struct std::ctype_base::std::ctype<wchar_t>::VTable* eax_9 =
    sub_633850(std::ios_base::getloc(ebx_2, &var_c8))
var_8_2.b = 3
std::_Debug_range2<class std::move_iterator<class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState*> > > > > > > >(
    &var_c8)
int32_t esi_4 = *(eax_9->vFunc_0 + 0x2c)
j_sub_4033e0()
esi_4("0123456789-", "0123456789-+Ee", arg6)
void* i_1 = nullptr
void* eax_10
eax_10.b = var_5d
void* i = nullptr

while (i u< 4)
    int32_t eax_12 = sx.d(*(&var_98 + i_1))
    
    if (eax_12 != 0x20)
        uint32_t var_2c
        int32_t var_1c
        int32_t var_18
        uint32_t* ecx_63
        
        if (eax_12 == 0x24)
            sub_6e59c0(var_6c, &var_2c)
            var_8_2.b = 5
            
            if ((*(ebx_2 + 0x14) & 8) != 0)
            label_6dc885:
                
                if (i_1 == 3 && var_4c u<= 1)
                    char eax_55 = sub_6e320e(edi_1, arg3)
                    
                    if (eax_55 != 0)
                        sub_632060(&var_2c, 0)
                    else
                        if (edi_1[1].b == eax_55)
                            std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(
                                edi_1)
                        
                        uint32_t* eax_56 = var_2c
                        
                        if (var_18 u< 8)
                            eax_56 = &var_2c
                        
                        if (*(edi_1 + 6) != *eax_56)
                            sub_632060(&var_2c, 0)
            else
                char eax_53 = sub_6e320e(edi_1, arg3)
                
                if (eax_53 != 0)
                    goto label_6dc885
                
                if (edi_1[1].b == eax_53)
                    std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(
                        edi_1)
                
                uint32_t* eax_54 = var_2c
                
                if (var_18 u< 8)
                    eax_54 = &var_2c
                
                if (*(edi_1 + 6) == *eax_54)
                    goto label_6dc885
                
                sub_632060(&var_2c, 0)
            
            uint32_t* esi_19 = var_2c
            
            if (var_18 u< 8)
                esi_19 = &var_2c
            
            while (sub_6e320e(edi_1, arg3) == 0)
                uint32_t* ecx_90 = var_2c
                
                if (var_18 u< 8)
                    ecx_90 = &var_2c
                
                if (esi_19 == ecx_90 + (var_1c << 1))
                    break
                
                if (edi_1[1].b == 0)
                    std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(
                        edi_1)
                
                if (*(edi_1 + 6) != *esi_19)
                    break
                
                esi_19 += 2
                std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Inc(edi_1)
            
            uint32_t* ecx_94 = var_2c
            
            if (var_18 u< 8)
                ecx_94 = &var_2c
            
            if (esi_19 != ecx_94 + (var_1c << 1))
                var_5d = 1
            
            var_8_2.b = 3
            ecx_63 = &var_2c
            goto label_6dc709
        
        uint32_t var_44
        
        if (eax_12 == 0x2b)
            if (sub_6e320e(edi_1, arg3).b != 0)
                ebx_2 = arg5
                eax_10.b = var_5d
            else
                int32_t ecx_52 = var_64 | 2
                var_8_2.b = 6
                bool cond:4_1 = *(sub_6e3618(var_6c, &var_2c) + 0x10) u<= 0
                int32_t var_80_2 = ecx_52
                int32_t* esi_15
                
                if (not(cond:4_1))
                    esi_15 = sub_6e3618(var_6c, &var_44)
                    ecx_52 |= 4
                    int32_t var_8_3 = 7
                    int32_t var_80_3 = ecx_52
                    
                    if (esi_15[5] u>= 8)
                        esi_15 = *esi_15
                    
                    if (edi_1[1].b == 0)
                        std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(
                            edi_1)
                
                int32_t* ebx_9
                
                if (cond:4_1 || *esi_15 != *(edi_1 + 6))
                    ebx_9.b = 0
                else
                    ebx_9.b = 1
                
                if ((ecx_52.b & 4) != 0)
                    sub_631740(&var_44, 1, nullptr)
                    ecx_52 &= 0xfffffffb
                
                int32_t ecx_58 = ecx_52 & 0xfffffffd
                var_8_2 = 3
                var_64 = ecx_58
                int32_t var_80_4 = ecx_58
                sub_631740(&var_2c, 1, nullptr)
                
                if (ebx_9.b == 0)
                    int32_t ecx_66 = var_64 | 8
                    var_8_2.b = 8
                    bool cond:13_1 = *(sub_6e6a81(var_6c, &var_2c) + 0x10) u<= 0
                    int32_t var_80_5 = ecx_66
                    int32_t* esi_16
                    
                    if (not(cond:13_1))
                        esi_16 = sub_6e6a81(var_6c, &var_44)
                        ecx_66 |= 0x10
                        int32_t var_8_4 = 9
                        int32_t var_80_6 = ecx_66
                        
                        if (esi_16[5] u>= 8)
                            esi_16 = *esi_16
                        
                        if (edi_1[1].b == 0)
                            std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(
                                edi_1)
                    
                    int32_t* ebx_10
                    
                    if (cond:13_1 || *esi_16 != *(edi_1 + 6))
                        ebx_10.b = 0
                    else
                        ebx_10.b = 1
                    
                    if ((ecx_66.b & 0x10) != 0)
                        sub_631740(&var_44, 1, nullptr)
                        ecx_66 &= 0xffffffef
                    
                    int32_t ecx_72 = ecx_66 & 0xfffffff7
                    var_8_2 = 3
                    var_64 = ecx_72
                    int32_t var_80_7 = ecx_72
                    sub_631740(&var_2c, 1, nullptr)
                    
                    if (ebx_10.b == 0)
                        int32_t esi_17 = *(sub_6e3618(var_6c, &var_44) + 0x10)
                        sub_631740(&var_44, 1, nullptr)
                        
                        if (esi_17 == 0)
                            ebx_2 = arg5
                            eax_10.b = var_5d
                        else
                            int32_t esi_18 = *(sub_6e6a81(var_6c, &var_44) + 0x10)
                            sub_631740(&var_44, 1, nullptr)
                            eax_10.b = var_5d
                            ebx_2 = arg5
                            
                            if (esi_18 == 0)
                                var_65 = 1
                    else
                        std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Inc(
                            edi_1)
                        sub_635110(&var_5c, sub_6e6a81(var_6c, &var_44))
                        sub_631740(&var_44, 1, nullptr)
                        var_65 = 1
                        ebx_2 = arg5
                        eax_10.b = var_5d
                else
                    std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Inc(
                        edi_1)
                    sub_635110(&var_5c, sub_6e3618(var_6c, &var_44))
                    ecx_63 = &var_44
                label_6dc709:
                    sub_631740(ecx_63, 1, nullptr)
                    ebx_2 = arg5
                    eax_10.b = var_5d
        else if (eax_12 == 0x76)
            int32_t var_88_1 = 0
            int32_t esi_5 = *(*var_6c + 0x24)
            j_sub_4033e0()
            int32_t ebx_4 = esi_5()
            int32_t* esi_7 = std::_Mpunct<wchar_t>::grouping(var_6c, &var_44)
            var_8_2.b = 0xa
            int32_t var_34
            
            if (var_34 == 0)
            label_6dc4c7:
                
                if (sub_6e320e(edi_1, arg3) == 0)
                    char j
                    
                    do
                        if (edi_1[1].b == 0)
                            std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(
                                edi_1)
                        
                        int32_t eax_33 = std::_Find_elem<uint16_t>(arg6, *(edi_1 + 6))
                        
                        if (eax_33 u>= 0xa)
                            break
                        
                        eax_33.b = (*"0123456789-")[eax_33]
                        sub_405500(arg1, 1, eax_33.b)
                        std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Inc(
                            edi_1)
                        j = sub_6e320e(edi_1, arg3)
                    while (j == 0)
                
            label_6dc530:
                int32_t esi_12 = *(*var_6c + 0xc)
                j_sub_4033e0()
                int16_t eax_36 = esi_12()
                char eax_37 = sub_6e320e(edi_1, arg3)
                
                if (eax_37 == 0 && eax_36 != 0 && edi_1[1].b == eax_37)
                    std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(
                        edi_1)
                
                int32_t esi_14
                
                if (eax_37 != 0 || eax_36 == 0 || *(edi_1 + 6) != eax_36)
                    esi_14 = var_88_1
                else
                    std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Inc(
                        edi_1)
                    char eax_39 = sub_6e320e(edi_1, arg3)
                    esi_14 = var_88_1
                    
                    while (true)
                        if (eax_39 == 0)
                            if (esi_14 s>= ebx_4)
                                break
                            
                            if (edi_1[1].b == eax_39)
                                std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(
                                    edi_1)
                            
                            int32_t eax_41 = std::_Find_elem<uint16_t>(arg6, *(edi_1 + 6))
                            
                            if (eax_41 u< 0xa)
                                eax_41.b = (*"0123456789-")[eax_41]
                                sub_405500(arg1, 1, eax_41.b)
                                esi_14 += 1
                                std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Inc(
                                    edi_1)
                                eax_39 = sub_6e320e(edi_1, arg3)
                                continue
                        
                        if (esi_14 s>= ebx_4)
                            break
                        
                        var_5d = 1
                        break
                
                if (arg1[4] == 0)
                    var_5d = 1
                else if (esi_14 s< ebx_4)
                    int32_t j_2 = ebx_4 - esi_14
                    int32_t j_1
                    
                    do
                        sub_405500(arg1, 1, 0x30)
                        j_1 = j_2
                        j_2 -= 1
                    while (j_1 != 1)
                    edi_1 = var_ac
            else
                int32_t esi_8 = *(*esi_7 + 0x10)
                j_sub_4033e0()
                int16_t eax_20 = esi_8()
                
                if (eax_20 == 0)
                    goto label_6dc4c7
                
                uint32_t* eax_22 = var_44
                int32_t var_30
                
                if (var_30 u< 0x10)
                    eax_22 = &var_44
                
                if (*eax_22 u>= 0x7f)
                    goto label_6dc4c7
                
                var_18 = 0xf
                var_1c = 0
                var_2c.b = 0
                sub_4e2870(&var_2c, 1, 0)
                var_8_2.b = 0xb
                int32_t esi_9 = 0
                int32_t ebx_5 = var_18
                bool cond:15_1 = sub_6e320e(edi_1, arg3) != 0
                uint32_t var_78_1 = var_2c
                uint32_t eax_24
                
                if (cond:15_1)
                    eax_24.b = var_5d
                else
                    do
                        if (edi_1[1].b == 0)
                            std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(
                                edi_1)
                        
                        int32_t eax_26 = std::_Find_elem<uint16_t>(arg6, *(edi_1 + 6))
                        
                        if (eax_26 u>= 0xa)
                            eax_24 = var_78_1
                            
                            if (ebx_5 u< 0x10)
                                eax_24 = &var_2c
                            
                            if (*(eax_24 + esi_9) == 0)
                                break
                            
                            if (edi_1[1].b == 0)
                                std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(
                                    edi_1)
                            
                            if (*(edi_1 + 6) != eax_20)
                                break
                            
                            sub_405500(&var_2c, 1, 0)
                            esi_9 += 1
                            ebx_5 = var_18
                            var_78_1 = var_2c
                        else
                            eax_26.b = (*"0123456789-")[eax_26]
                            sub_405500(arg1, 1, eax_26.b)
                            uint32_t ecx_21 = var_78_1
                            uint32_t eax_27 = ecx_21
                            
                            if (ebx_5 u< 0x10)
                                eax_27 = &var_2c
                            
                            if (*(eax_27 + esi_9) != 0x7f)
                                if (ebx_5 u< 0x10)
                                    ecx_21 = &var_2c
                                
                                *(ecx_21 + esi_9) += 1
                                ebx_5 = var_18
                                var_78_1 = var_2c
                        
                        std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Inc(
                            edi_1)
                        eax_24 = sub_6e320e(edi_1, arg3)
                    while (eax_24.b == 0)
                    
                    if (esi_9 == 0)
                        eax_24.b = var_5d
                    else
                        eax_24 = var_78_1
                        
                        if (ebx_5 u< 0x10)
                            eax_24 = &var_2c
                        
                        if (*(eax_24 + esi_9) s<= 0)
                            eax_24.b = 1
                            var_5d = 1
                        else
                            esi_9 += 1
                            eax_24.b = var_5d
                
                uint32_t* edx_1 = var_44
                
                if (var_30 u< 0x10)
                    edx_1 = &var_44
                
                if (eax_24.b == 0)
                    while (true)
                        if (esi_9 != 0)
                            char ecx_18 = *edx_1
                            
                            if (ecx_18 != 0x7f)
                                int32_t temp7_1 = esi_9
                                esi_9 -= 1
                                uint32_t eax_29
                                
                                if (temp7_1 != 1)
                                    eax_29 = var_78_1
                                    
                                    if (ebx_5 u< 0x10)
                                        eax_29 = &var_2c
                                
                                if (temp7_1 != 1 && ecx_18 != *(eax_29 + esi_9))
                                    var_5d = 1
                                    break
                                
                                if (esi_9 == 0)
                                    uint32_t eax_30 = var_78_1
                                    
                                    if (ebx_5 u< 0x10)
                                        eax_30 = &var_2c
                                    
                                    if (ecx_18 s< *eax_30)
                                        var_5d = 1
                                        break
                                
                                if (*(edx_1 + 1) s<= 0)
                                    continue
                                else
                                    edx_1 += 1
                                    continue
                        
                        var_8_2.b = 0xa
                        sub_4033f0(&var_2c, 1, nullptr)
                        goto label_6dc530
                
                sub_4033f0(&var_2c, 1, nullptr)
            
            var_8_2.b = 3
            sub_4033f0(&var_44, 1, nullptr)
            ebx_2 = arg5
            eax_10.b = var_5d
        else
            if (eax_12 == 0x78 && i_1 != 3)
                goto label_6dc260
            
            eax_10.b = var_5d
    else if (i_1 == 3)
        eax_10.b = var_5d
    else
    label_6dc260:
        ebx_2.b = 0
        
        while (sub_6e320e(edi_1, arg3) == 0)
            if (edi_1[1].b == 0)
                std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(edi_1)
            
            uint32_t eax_63 = zx.d(*(edi_1 + 6))
            int32_t esi_20 = *(eax_9->vFunc_0 + 0x10)
            j_sub_4033e0()
            
            if (esi_20(0x48, eax_63) == 0)
                break
            
            ebx_2.b = 1
            std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Inc(edi_1)
        
        if (*(&var_98 + i_1) != 0x20)
            ebx_2 = arg5
            eax_10.b = var_5d
        else
            bool cond:6_1 = ebx_2.b != 0
            ebx_2 = arg5
            
            if (cond:6_1)
                eax_10.b = var_5d
            else
                eax_10.b = 1
                var_5d = 1
    
    i = i_1 + 1
    i_1 = i
    
    if (eax_10.b != 0)
        break

if (eax_10.b != 0)
    sub_4037f0(arg1, 0)
else
    int32_t ebx_6 = var_4c
    
    if (ebx_6 u<= 1)
    label_6dca0a:
        eax_10.b = var_65
        
        if (eax_10.b != 0)
            sub_6c51e0(arg1, nullptr, 1, 0x2d)
    else
        int32_t edx_2 = var_48
        int16_t* ecx_29 = var_5c.d
        int16_t* esi_10 = ecx_29
        
        if (edx_2 u< 8)
            esi_10 = &var_5c
            goto label_6dc49f
        
    label_6dc4a8:
        int16_t* eax_66 = ecx_29
        
        while (true)
            esi_10 = &esi_10[1]
            
            if (esi_10 == &eax_66[ebx_6])
                break
            
            int16_t eax_68 = sub_6e320e(edi_1, arg3)
            
            if (eax_68.b == 0)
                if (edi_1[1].b == eax_68.b)
                    std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(
                        edi_1)
                
                if (*(edi_1 + 6) == *esi_10)
                    std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Inc(
                        edi_1)
                    edx_2 = var_48
                    ebx_6 = var_4c
                    ecx_29 = var_5c.d
                label_6dc49f:
                    
                    if (edx_2 u>= 8)
                        goto label_6dc4a8
                    
                    eax_66 = &var_5c
                    continue
            
            edx_2 = var_48
            ebx_6 = var_4c
            ecx_29 = var_5c.d
            break
        
        if (edx_2 u< 8)
            ecx_29 = &var_5c
        
        if (esi_10 == &ecx_29[ebx_6])
            goto label_6dca0a
        
        sub_4037f0(arg1, 0)

sub_631740(&var_5c, 1, nullptr)
@__security_check_cookie@4(eax_71 ^ &__saved_ebp)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6dca3f
return arg1
