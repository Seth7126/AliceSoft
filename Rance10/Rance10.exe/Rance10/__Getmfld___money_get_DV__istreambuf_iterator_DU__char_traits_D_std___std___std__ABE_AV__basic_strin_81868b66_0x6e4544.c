// 函数: ?_Getmfld@?$money_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@ABE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@0_NAAVios_base@2@PAD@Z
// 地址: 0x6e4544
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0xc4
int32_t (* var_c)(void* arg1) = __ehhandler$?_Getmfld@?$money_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@ABE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@0_NAAVios_base@2@PAD@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebx
int32_t var_d8_34 = ebx
int32_t esi
int32_t var_dc_3 = esi
int32_t edi
int32_t var_e0 = edi
int32_t __saved_ebp
int32_t eax_65 = __security_cookie ^ &__saved_ebp
void* const var_e8_5 = &data_6e4553
int32_t var_8_5 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result_1 = arg1
int32_t var_84 = 0
int32_t* edi_1 = arg2
int32_t* result = result_1
int32_t* result_2 = result_1
int32_t* var_b8 = edi_1
int32_t* var_74
void* ecx_2
int32_t* esi_1

if (arg4 == 0)
    int32_t var_8_1 = 2
    int32_t var_cc
    int32_t* eax_5 = sub_6e3b99(std::ios_base::getloc(arg5, &var_cc))
    esi_1 = eax_5
    var_74 = eax_5
    ecx_2 = &var_cc
else
    int32_t var_8 = 1
    void var_c4
    esi_1 = sub_6e3afc(std::ios_base::getloc(arg5, &var_c4))
    ecx_2 = &var_c4
    var_74 = esi_1

std::_Debug_range2<class std::move_iterator<class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState*> > > > > > > >(
    ecx_2)
int32_t var_48 = 0xf
char var_5d = 0
char var_6d = 0
void* var_4c = nullptr
char var_5c = 0
int32_t var_8_2 = 3
int32_t esi_2 = *(*esi_1 + 0x2c)
j_sub_4033e0()
char var_9c[0x4]
esi_2(&var_9c, eax_65)
result_1[5] = 0xf
bool cond:1 = result_1[5] u< 0x10
result_1[4] = 0
char* result_3

if (cond:1)
    result_3 = result_1
else
    result_3 = *result_1

*result_3 = 0
int32_t var_68 = 1
int32_t var_84_1 = 1
var_8_2.b = 4
int32_t var_d4
int32_t* eax_8 = sub_6d0f2e(std::ios_base::getloc(arg5, &var_d4))
var_8_2.b = 3
std::_Debug_range2<class std::move_iterator<class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState*> > > > > > > >(
    &var_d4)
int32_t esi_4 = *(*eax_8 + 0x1c)
j_sub_4033e0()
esi_4("0123456789-", "0123456789abcdefghijklmnopqrstuvwxyz", arg6)
void* i = nullptr
void* eax_9
eax_9.b = var_5d

while (i u< 4)
    int32_t eax_11 = sx.d(*(&var_9c + i))
    void* i_1
    
    if (eax_11 == 0x20)
    label_6e4dad:
        i_1 = i
        
        if (i_1 != 3)
            result_1.b = 0
            
            while (std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(edi_1, arg3)
                    == 0)
                if (edi_1[1].b == 0)
                    std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(edi_1)
                
                if ((*(eax_8[3] + (zx.d(*(edi_1 + 5)) << 1)) & 0x48) == 0)
                    break
                
                result_1.b = 1
                std::istreambuf_iterator<char,struct std::char_traits<char> >::_Inc(edi_1)
            
            i_1 = i
            
            if (*(&var_9c + i_1) != 0x20)
                result_1 = result
            else
                bool cond:5_1 = result_1.b != 0
                result_1 = result
                
                if (not(cond:5_1))
                    var_5d = 1
    else
        uint32_t var_2c
        void* const var_1c
        int32_t var_18
        
        if (eax_11 == 0x24)
            sub_6e59c0(var_74, &var_2c)
            var_8_2.b = 5
            
            if ((*(arg5 + 0x14) & 8) != 0)
            label_6e4ce1:
                
                if (i == 3 && var_4c u<= 1)
                    char eax_50 =
                        std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(edi_1, 
                        arg3)
                    
                    if (eax_50 != 0)
                        sub_4037f0(&var_2c, 0)
                    else
                        if (edi_1[1].b == eax_50)
                            std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(
                                edi_1)
                        
                        uint32_t* eax_51 = var_2c
                        
                        if (var_18 u< 0x10)
                            eax_51 = &var_2c
                        
                        if (*(edi_1 + 5) != *eax_51)
                            sub_4037f0(&var_2c, 0)
            else
                char eax_48 = std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(
                    edi_1, arg3)
                
                if (eax_48 != 0)
                    goto label_6e4ce1
                
                if (edi_1[1].b == eax_48)
                    std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(edi_1)
                
                uint32_t* eax_49 = var_2c
                
                if (var_18 u< 0x10)
                    eax_49 = &var_2c
                
                if (*(edi_1 + 5) == *eax_49)
                    goto label_6e4ce1
                
                sub_4037f0(&var_2c, 0)
            
            char* esi_21 = var_2c
            
            if (var_18 u< 0x10)
                esi_21 = &var_2c
            
            if (std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(edi_1, arg3)
                    == 0)
                char j
                
                do
                    uint32_t* ecx_89 = var_2c
                    
                    if (var_18 u< 0x10)
                        ecx_89 = &var_2c
                    
                    if (esi_21 == var_1c + ecx_89)
                        break
                    
                    if (edi_1[1].b == 0)
                        std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(edi_1)
                    
                    void* eax_54
                    eax_54.b = *(edi_1 + 5)
                    
                    if (eax_54.b != *esi_21)
                        break
                    
                    esi_21 = &esi_21[1]
                    std::istreambuf_iterator<char,struct std::char_traits<char> >::_Inc(edi_1)
                    j = std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(edi_1, 
                        arg3)
                while (j == 0)
                result_1 = result
            
            uint32_t* ecx_93 = var_2c
            
            if (var_18 u< 0x10)
                ecx_93 = &var_2c
            
            if (esi_21 != var_1c + ecx_93)
                var_5d = 1
            
            var_8_2.b = 3
            sub_4033f0(&var_2c, 1, nullptr)
            i_1 = i
        else
            int32_t* var_44
            
            if (eax_11 == 0x2b)
                if (std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(edi_1, 
                        arg3) != 0)
                    i_1 = i
                else
                    int32_t ecx_51 = var_68 | 2
                    var_8_2.b = 6
                    bool cond:3_1 = *(sub_6e3618(var_74, &var_2c) + 0x10) u<= 0
                    int32_t var_84_2 = ecx_51
                    uint32_t eax_40
                    char* esi_16
                    
                    if (not(cond:3_1))
                        esi_16 = sub_6e3618(var_74, &var_44)
                        ecx_51 |= 4
                        int32_t var_8_3 = 7
                        int32_t var_84_3 = ecx_51
                        
                        if (*(esi_16 + 0x14) u>= 0x10)
                            esi_16 = *esi_16
                        
                        if (edi_1[1].b == 0)
                            std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(
                                edi_1)
                        
                        eax_40.b = *(edi_1 + 5)
                    
                    int32_t* ebx_5
                    
                    if (cond:3_1 || *esi_16 != eax_40.b)
                        ebx_5.b = 0
                    else
                        ebx_5.b = 1
                    
                    if ((ecx_51.b & 4) != 0)
                        sub_4033f0(&var_44, 1, nullptr)
                        ecx_51 &= 0xfffffffb
                    
                    int32_t ecx_57 = ecx_51 & 0xfffffffd
                    var_8_2 = 3
                    var_68 = ecx_57
                    int32_t var_84_4 = ecx_57
                    sub_4033f0(&var_2c, 1, nullptr)
                    
                    if (ebx_5.b == 0)
                        int32_t ecx_64 = var_68 | 8
                        var_8_2.b = 8
                        bool cond:11_1 = *(sub_6e6a81(var_74, &var_2c) + 0x10) u<= 0
                        int32_t var_84_5 = ecx_64
                        uint32_t eax_43
                        char* esi_17
                        
                        if (not(cond:11_1))
                            esi_17 = sub_6e6a81(var_74, &var_44)
                            ecx_64 |= 0x10
                            int32_t var_8_4 = 9
                            int32_t var_84_6 = ecx_64
                            
                            if (*(esi_17 + 0x14) u>= 0x10)
                                esi_17 = *esi_17
                            
                            if (edi_1[1].b == 0)
                                std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(
                                    edi_1)
                            
                            eax_43.b = *(edi_1 + 5)
                        
                        int32_t* ebx_6
                        
                        if (cond:11_1 || *esi_17 != eax_43.b)
                            ebx_6.b = 0
                        else
                            ebx_6.b = 1
                        
                        if ((ecx_64.b & 0x10) != 0)
                            sub_4033f0(&var_44, 1, nullptr)
                            ecx_64 &= 0xffffffef
                        
                        int32_t ecx_70 = ecx_64 & 0xfffffff7
                        var_8_2 = 3
                        var_68 = ecx_70
                        int32_t var_84_7 = ecx_70
                        sub_4033f0(&var_2c, 1, nullptr)
                        
                        if (ebx_6.b == 0)
                            int32_t esi_18 = *(sub_6e3618(var_74, &var_44) + 0x10)
                            sub_4033f0(&var_44, 1, nullptr)
                            
                            if (esi_18 == 0)
                                result_1 = result
                                i_1 = i
                            else
                                int32_t esi_19 = *(sub_6e6a81(var_74, &var_44) + 0x10)
                                sub_4033f0(&var_44, 1, nullptr)
                                result_1 = result
                                i_1 = i
                                
                                if (esi_19 == 0)
                                    var_6d = 1
                        else
                            std::istreambuf_iterator<char,struct std::char_traits<char> >::_Inc(
                                edi_1)
                            sub_409670(&var_5c, sub_6e6a81(var_74, &var_44))
                            sub_4033f0(&var_44, 1, nullptr)
                            var_6d = 1
                            result_1 = result
                            i_1 = i
                    else
                        std::istreambuf_iterator<char,struct std::char_traits<char> >::_Inc(edi_1)
                        sub_409670(&var_5c, sub_6e3618(var_74, &var_44))
                    label_6e4901:
                        sub_4033f0(&var_44, 1, nullptr)
                        result_1 = result
                        i_1 = i
            else
                if (eax_11 == 0x76)
                    int32_t var_8c_1 = 0
                    int32_t esi_6 = *(*var_74 + 0x24)
                    j_sub_4033e0()
                    int32_t eax_20 = esi_6()
                    int32_t* esi_8 = std::_Mpunct<wchar_t>::grouping(var_74, &var_44)
                    var_8_2.b = 0xa
                    int32_t var_34
                    
                    if (var_34 == 0)
                    label_6e4978:
                        
                        while (std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(
                                edi_1, arg3) == 0)
                            if (edi_1[1].b == 0)
                                std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(
                                    edi_1)
                            
                            void* eax_31 = std::_Find_elem<char>(arg6, (*(edi_1 + 5)).d.b)
                            
                            if (eax_31 u>= 0xa)
                                break
                            
                            eax_31.b = *(eax_31 + "0123456789-")
                            sub_405500(result_1, 1, eax_31.b)
                            std::istreambuf_iterator<char,struct std::char_traits<char> >::_Inc(
                                edi_1)
                        
                    label_6e4986:
                        int32_t esi_12 = *(*var_74 + 0xc)
                        j_sub_4033e0()
                        int32_t* ebx_3
                        ebx_3.b = esi_12()
                        char eax_34 =
                            std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(
                            edi_1, arg3)
                        
                        if (eax_34 == 0 && ebx_3.b != 0 && edi_1[1].b == eax_34)
                            std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(
                                edi_1)
                        
                        int32_t ebx_4
                        int32_t esi_14
                        
                        if (eax_34 != 0 || ebx_3.b == 0 || *(edi_1 + 5) != ebx_3.b)
                            ebx_4 = eax_20
                            esi_14 = var_8c_1
                        else
                            std::istreambuf_iterator<char,struct std::char_traits<char> >::_Inc(
                                edi_1)
                            char eax_35 = std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(
                                edi_1, arg3)
                            ebx_4 = eax_20
                            esi_14 = var_8c_1
                            
                            while (true)
                                if (eax_35 == 0)
                                    if (esi_14 s>= ebx_4)
                                        break
                                    
                                    if (edi_1[1].b == eax_35)
                                        std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(
                                            edi_1)
                                    
                                    void* eax_36 = std::_Find_elem<char>(arg6, (*(edi_1 + 5)).d.b)
                                    
                                    if (eax_36 u< 0xa)
                                        eax_36.b = *(eax_36 + "0123456789-")
                                        sub_405500(result, 1, eax_36.b)
                                        esi_14 += 1
                                        std::istreambuf_iterator<char,struct std::char_traits<char> >::_Inc(
                                            edi_1)
                                        eax_35 = std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(
                                            edi_1, arg3)
                                        continue
                                
                                if (esi_14 s>= ebx_4)
                                    break
                                
                                var_5d = 1
                                break
                        
                        if (result[4] == 0)
                            var_5d = 1
                        else if (esi_14 s< ebx_4)
                            int32_t j_2 = ebx_4 - esi_14
                            int32_t j_1
                            
                            do
                                sub_405500(result, 1, 0x30)
                                j_1 = j_2
                                j_2 -= 1
                            while (j_1 != 1)
                            edi_1 = var_b8
                    else
                        int32_t esi_9 = *(*esi_8 + 0x10)
                        j_sub_4033e0()
                        char eax_22 = esi_9()
                        
                        if (eax_22 == 0)
                            goto label_6e4978
                        
                        int32_t* ecx_17 = var_44
                        int32_t var_30
                        
                        if (var_30 u< 0x10)
                            ecx_17 = &var_44
                        
                        if (*ecx_17 u>= 0x7f)
                            goto label_6e4978
                        
                        var_18 = 0xf
                        var_1c = nullptr
                        var_2c.b = 0
                        sub_4e2870(&var_2c, 1, 0)
                        var_8_2.b = 0xb
                        int32_t esi_10 = 0
                        int32_t ebx_2 = var_18
                        bool cond:13_1 =
                            std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(
                            edi_1, arg3) != 0
                        uint32_t var_7c_1 = var_2c
                        uint32_t eax_24
                        
                        if (cond:13_1)
                            eax_24.b = var_5d
                        else
                            do
                                if (edi_1[1].b == 0)
                                    std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(
                                        edi_1)
                                
                                eax_24.b = *(edi_1 + 5)
                                void* eax_25 = std::_Find_elem<char>(arg6, eax_24.b)
                                
                                if (eax_25 u>= 0xa)
                                    eax_24 = var_7c_1
                                    
                                    if (ebx_2 u< 0x10)
                                        eax_24 = &var_2c
                                    
                                    if (*(eax_24 + esi_10) == 0)
                                        break
                                    
                                    if (edi_1[1].b == 0)
                                        std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(
                                            edi_1)
                                    
                                    eax_24.b = *(edi_1 + 5)
                                    
                                    if (eax_24.b != eax_22)
                                        break
                                    
                                    sub_405500(&var_2c, 1, 0)
                                    esi_10 += 1
                                    ebx_2 = var_18
                                    var_7c_1 = var_2c
                                else
                                    eax_25.b = *(eax_25 + "0123456789-")
                                    sub_405500(result, 1, eax_25.b)
                                    uint32_t ecx_23 = var_7c_1
                                    uint32_t eax_26 = ecx_23
                                    
                                    if (ebx_2 u< 0x10)
                                        eax_26 = &var_2c
                                    
                                    if (*(eax_26 + esi_10) != 0x7f)
                                        if (ebx_2 u< 0x10)
                                            ecx_23 = &var_2c
                                        
                                        *(ecx_23 + esi_10) += 1
                                        ebx_2 = var_18
                                        var_7c_1 = var_2c
                                
                                std::istreambuf_iterator<char,struct std::char_traits<char> >::_Inc(
                                    edi_1)
                                eax_24 = std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(
                                    edi_1, arg3)
                            while (eax_24.b == 0)
                            
                            if (esi_10 == 0)
                                eax_24.b = var_5d
                            else
                                eax_24 = var_7c_1
                                
                                if (ebx_2 u< 0x10)
                                    eax_24 = &var_2c
                                
                                if (*(eax_24 + esi_10) s<= 0)
                                    eax_24.b = 1
                                    var_5d = 1
                                else
                                    esi_10 += 1
                                    eax_24.b = var_5d
                        
                        int32_t** edx_2 = var_44
                        
                        if (var_30 u< 0x10)
                            edx_2 = &var_44
                        
                        if (eax_24.b == 0)
                            while (true)
                                if (esi_10 != 0)
                                    char ecx_20 = *edx_2
                                    
                                    if (ecx_20 != 0x7f)
                                        int32_t temp7_1 = esi_10
                                        esi_10 -= 1
                                        uint32_t eax_28
                                        
                                        if (temp7_1 != 1)
                                            eax_28 = var_7c_1
                                            
                                            if (ebx_2 u< 0x10)
                                                eax_28 = &var_2c
                                        
                                        if (temp7_1 != 1 && ecx_20 != *(eax_28 + esi_10))
                                            var_5d = 1
                                            break
                                        
                                        if (esi_10 == 0)
                                            uint32_t eax_29 = var_7c_1
                                            
                                            if (ebx_2 u< 0x10)
                                                eax_29 = &var_2c
                                            
                                            if (ecx_20 s< *eax_29)
                                                var_5d = 1
                                                break
                                        
                                        if (*(edx_2 + 1) s<= 0)
                                            continue
                                        else
                                            edx_2 += 1
                                            continue
                                
                                var_8_2.b = 0xa
                                sub_4033f0(&var_2c, 1, nullptr)
                                goto label_6e4986
                        
                        sub_4033f0(&var_2c, 1, nullptr)
                    
                    var_8_2.b = 3
                    goto label_6e4901
                
                if (eax_11 == 0x78)
                    goto label_6e4dad
                
                i_1 = i
    
    i = i_1 + 1
    eax_9.b = var_5d
    
    if (eax_9.b != 0)
        break

if (eax_9.b != 0)
    sub_4037f0(result, 0)
else
    void* ebx_1 = var_4c
    
    if (ebx_1 u<= 1)
    label_6e4e76:
        eax_9.b = var_6d
        
        if (eax_9.b != 0)
            sub_6c51e0(result, nullptr, 1, 0x2d)
    else
        int32_t edx_1 = var_48
        char* ecx_11 = var_5c.d
        char* esi_5 = ecx_11
        
        if (edx_1 u< 0x10)
            esi_5 = &var_5c
            goto label_6e4702
        
    label_6e470b:
        char* eax_60 = ecx_11
        
        while (true)
            esi_5 = &esi_5[1]
            
            if (esi_5 == eax_60 + ebx_1)
                break
            
            char eax_62 =
                std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(edi_1, arg3)
            
            if (eax_62 == 0)
                if (edi_1[1].b == eax_62)
                    std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(edi_1)
                
                if (*(edi_1 + 5) == *esi_5)
                    std::istreambuf_iterator<char,struct std::char_traits<char> >::_Inc(edi_1)
                    edx_1 = var_48
                    ebx_1 = var_4c
                    ecx_11 = var_5c.d
                label_6e4702:
                    
                    if (edx_1 u>= 0x10)
                        goto label_6e470b
                    
                    eax_60 = &var_5c
                    continue
            
            edx_1 = var_48
            ebx_1 = var_4c
            ecx_11 = var_5c.d
            break
        
        if (edx_1 u< 0x10)
            ecx_11 = &var_5c
        
        if (esi_5 == ebx_1 + ecx_11)
            goto label_6e4e76
        
        sub_4037f0(result, 0)

sub_4033f0(&var_5c, 1, nullptr)
@__security_check_cookie@4(eax_65 ^ &__saved_ebp)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6e4eab
return result
