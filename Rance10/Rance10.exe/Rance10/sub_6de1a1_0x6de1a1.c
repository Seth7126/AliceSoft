// 函数: sub_6de1a1
// 地址: 0x6de1a1
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0xe4
int32_t (* var_c)(void* arg1) = sub_749c6d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebx
int32_t var_f8_3 = ebx
int32_t esi
int32_t var_fc_20 = esi
int32_t edi
int32_t var_100_9 = edi
int32_t __saved_ebp
int32_t eax_74 = __security_cookie ^ &__saved_ebp
void* const var_108_13 = &data_6de1b0
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t ecx = zx.d(arg5)
uint32_t ecx_1 = zx.d(arg9)
int32_t var_8 = 0
int32_t* var_7c
void* ecx_3
int32_t* edi_1

if (arg3 == 0)
    var_8.b = 2
    void var_ac
    int32_t* eax_5 = sub_6d6f91(std::ios_base::getloc(arg4, &var_ac))
    edi_1 = eax_5
    var_7c = eax_5
    ecx_3 = &var_ac
else
    var_8.b = 1
    void var_a4
    edi_1 = sub_6d6ef4(std::ios_base::getloc(arg4, &var_a4))
    ecx_3 = &var_a4
    var_7c = edi_1

var_8.b = 0
std::_Debug_range2<class std::move_iterator<class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState*> > > > > > > >(
    ecx_3)
int32_t* var_5c
std::_Mpunct<wchar_t>::grouping(edi_1, &var_5c)
var_8.b = 3
int32_t esi_1 = *(*edi_1 + 0x24)
j_sub_4033e0()
int32_t eax_8
int32_t edx
edx:eax_8 = sx.q(esi_1(eax_74))
uint32_t i_6 = (eax_8 ^ edx) - edx
uint32_t i_3 = i_6
uint32_t i_2
int32_t* arg_20

if (arg7 u> i_6)
    int32_t* eax_9 = var_5c
    int32_t* ecx_12 = eax_9
    int32_t var_48
    
    if (var_48 u< 0x10)
        ecx_12 = &var_5c
    
    if (*ecx_12 != 0x7f)
        if (var_48 u< 0x10)
            eax_9 = &var_5c
        
        if (*eax_9 s> 0)
            int32_t esi_2 = *(*edi_1 + 0x10)
            j_sub_4033e0()
            int16_t i_4 = esi_2()
            int32_t** edi_2 = var_5c
            i_2 = zx.d(i_4)
            
            if (var_48 u< 0x10)
                edi_2 = &var_5c
            
            uint32_t eax_11
            eax_11.b = *edi_2
            int32_t esi_4 = arg7 - i_6
            
            if (eax_11.b != 0x7f)
                uint16_t i_5 = i_2.w
                
                while (eax_11.b s> 0)
                    int32_t eax_12 = sx.d(eax_11.b)
                    
                    if (eax_12 u>= esi_4)
                        break
                    
                    esi_4 -= eax_12
                    sub_6e338e(&arg_20, esi_4, 1, i_5)
                    
                    if (*(edi_2 + 1) s> 0)
                        edi_2 += 1
                    
                    eax_11.b = *edi_2
                    
                    if (eax_11.b == 0x7f)
                        break
                
                i_6 = i_3
            
            edi_1 = var_7c
else
    sub_6e338e(&arg_20, 0, i_6 - arg7 + 1, ecx_1.w)

int32_t var_1c = 0
int32_t var_18 = 7
int16_t var_2c = 0
void* eax_13 = *edi_1
var_8.b = 4
int32_t* var_f8_2 = &i_2
void var_74
void** eax_15

if (arg6 == 0)
    int32_t esi_6 = *(eax_13 + 0x28)
    j_sub_4033e0()
    esi_6(var_f8_2)
    i_3 = i_2
    eax_15 = sub_6e3618(edi_1, &var_74)
else
    int32_t esi_5 = *(eax_13 + 0x2c)
    j_sub_4033e0()
    esi_5(var_f8_2)
    i_3 = i_2
    eax_15 = sub_6e6a81(edi_1, &var_74)

sub_6d79dd(&var_2c, eax_15)
std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> >::_Tidy(
    &var_74, 1, nullptr)
int32_t var_34 = 0
int32_t var_30 = 7
int16_t var_44 = 0
var_8.b = 5

if ((*(arg4 + 0x14) & 8) != 0)
    sub_6d79dd(&var_44, sub_6e59c0(edi_1, &var_74))
    std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> >::_Tidy(
        &var_74, 1, nullptr)

int32_t edx_1
edx_1.b = 0
int32_t ecx_27 = 0
char var_75 = 0

for (int32_t i = 0; i u< 4; i += 1)
    int32_t eax_19 = sx.d(*(&i_3 + i))
    
    if (eax_19 == 0x20)
        ecx_27 += 1
    label_6de417:
        
        if (i != 3)
            edx_1.b = 1
            var_75 = 1
    else if (eax_19 == 0x24)
        ecx_27 += var_34
    else if (eax_19 == 0x2b)
        ecx_27 += var_1c
    else if (eax_19 == 0x76)
        if (arg7 u> i_6)
            edx_1 = 0
        else
            edx_1 = i_6 - arg7 + 1
        
        int32_t eax_29 = neg.d(sbb.d(0, 0, 0 u< i_6)) + arg7 + edx_1
        edx_1.b = var_75
        ecx_27 += eax_29
    else if (eax_19 == 0x78)
        goto label_6de417

int32_t temp5 = *(arg4 + 0x24)
int32_t edi_3

if (temp5 s>= 0 && (temp5 s> 0 || *(arg4 + 0x20) u> 0))
    edi_3 = *(arg4 + 0x20)

int32_t edi_4

if (temp5 s< 0 || (temp5 s<= 0 && *(arg4 + 0x20) u<= 0) || edi_3 u<= ecx_27)
    edi_4 = 0
else
    edi_4 = edi_3 - ecx_27

int32_t eax_32 = *(arg4 + 0x14) & 0x1c0
int32_t arg_8
int32_t edx_4
int16_t* esi_7

if (eax_32 == 0x40 || (eax_32 == 0x100 && edx_1.b != 0))
    esi_7 = arg2
    edx_4 = arg_8
else
    int32_t var_fc_6 = edi_4
    void var_8c
    int32_t* eax_33 = std::money_put<uint16_t,class std::ostreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> > >::_Rep(
        &var_8c, arg_8, arg2, ecx)
    edi_4 = 0
    edx_4 = *eax_33
    arg_8 = edx_4
    esi_7 = eax_33[1]
    arg2 = esi_7

uint32_t i_1 = 0
i_2 = 0
void var_b4

do
    int32_t eax_34 = sx.d(*(&i_3 + i_1))
    int32_t* eax_43
    
    if (eax_34 == 0x20)
        int32_t var_fc_16 = 1
        int32_t var_f4
        int32_t* eax_66 = std::money_put<uint16_t,class std::ostreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> > >::_Rep(
            &var_f4, edx_4, esi_7, ecx)
        edx_4 = *eax_66
        arg_8 = edx_4
        esi_7 = eax_66[1]
        arg2 = esi_7
    label_6de656:
        
        if (eax_32 == 0x100)
            int32_t var_fc_17 = edi_4
            eax_43 = std::money_put<uint16_t,class std::ostreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> > >::_Rep(
                &var_b4, edx_4, esi_7, ecx)
            edi_4 = 0
        label_6de679:
            edx_4 = *eax_43
            arg_8 = edx_4
            esi_7 = eax_43[1]
            arg2 = esi_7
    else
        int32_t* var_100_2
        int32_t* eax_42
        
        if (eax_34 == 0x24)
            int32_t* eax_65 = var_44.d
            
            if (var_30 u< 8)
                eax_65 = &var_44
            
            int32_t var_fc_15 = var_34
            var_100_2 = eax_65
            int32_t var_ec
            eax_42 = &var_ec
        label_6de4ea:
            eax_43 = std::money_put<uint16_t,class std::ostreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> > >::_Put(
                eax_42, edx_4, esi_7, var_100_2)
            goto label_6de679
        
        if (eax_34 != 0x2b)
            if (eax_34 == 0x76)
                if (i_6 == 0)
                    int32_t* eax_41 = arg_20
                    
                    if (arg8 u< 8)
                        eax_41 = &arg_20
                    
                    int32_t var_fc_7 = arg7
                    var_100_2 = eax_41
                    void var_bc
                    eax_42 = &var_bc
                    goto label_6de4ea
                
                int32_t var_108_6
                int16_t* var_104_1
                
                if (arg7 u> i_6)
                    int32_t** ecx_34 = arg_20
                    
                    if (arg8 u< 8)
                        ecx_34 = &arg_20
                    
                    int32_t var_fc_12 = arg7 - i_6
                    void var_d4
                    int32_t* eax_54 = std::money_put<uint16_t,class std::ostreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> > >::_Put(
                        &var_d4, edx_4, esi_7, ecx_34)
                    arg_8 = *eax_54
                    int16_t* eax_56 = eax_54[1]
                    int32_t esi_9 = *(*var_7c + 0xc)
                    j_sub_4033e0()
                    sub_6d7a2e(&arg_8, zx.d(esi_9(var_f8_2)))
                    int32_t** ecx_39 = arg_20
                    
                    if (arg8 u< 8)
                        ecx_39 = &arg_20
                    
                    uint32_t i_7 = i_6
                    var_100_2 = ecx_39 + (arg7 << 1) - i_6 * 2
                    var_104_1 = eax_56
                    void var_dc
                    eax_42 = &var_dc
                    var_108_6 = arg_8
                else
                    sub_6d7a2e(&arg_8, ecx_1)
                    int32_t esi_8 = *(*var_7c + 0xc)
                    j_sub_4033e0()
                    sub_6d7a2e(&arg_8, zx.d(esi_8(var_f8_2)))
                    int32_t var_fc_10 = i_6 - arg7
                    void var_c4
                    int32_t* eax_49 = std::money_put<uint16_t,class std::ostreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> > >::_Rep(
                        &var_c4, arg_8, arg2, ecx_1)
                    int32_t* ecx_33 = arg_20
                    arg_8 = *eax_49
                    arg2 = eax_49[1]
                    
                    if (arg8 u< 8)
                        ecx_33 = &arg_20
                    
                    int32_t var_fc_11 = arg7
                    void var_cc
                    eax_42 = &var_cc
                    var_100_2 = ecx_33
                    var_104_1 = eax_49[1]
                    var_108_6 = *eax_49
                
                eax_43 = std::money_put<uint16_t,class std::ostreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> > >::_Put(
                    eax_42, var_108_6, var_104_1, var_100_2)
                goto label_6de679
            
            if (eax_34 == 0x78)
                goto label_6de656
        else if (var_1c u> 0)
            int32_t* eax_64 = var_2c.d
            
            if (var_18 u< 8)
                eax_64 = &var_2c
            
            int32_t var_fc_14 = 1
            var_100_2 = eax_64
            void var_e4
            eax_42 = &var_e4
            goto label_6de4ea
    i_1 = i_2 + 1
    i_2 = i_1
while (i_1 u< 4)

if (var_1c u> 1)
    int16_t* ecx_41 = var_2c.d
    
    if (var_18 u< 8)
        ecx_41 = &var_2c
    
    int32_t var_fc_18 = var_1c - 1
    int32_t* eax_70 = std::money_put<uint16_t,class std::ostreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> > >::_Put(
        &var_b4, edx_4, esi_7, &ecx_41[1])
    edx_4 = *eax_70
    arg_8 = edx_4
    esi_7 = eax_70[1]
    arg2 = esi_7

int32_t var_fc_19 = edi_4
*(arg4 + 0x20) = 0
*(arg4 + 0x24) = 0
std::money_put<uint16_t,class std::ostreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> > >::_Rep(
    arg1, edx_4, esi_7, ecx)
std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> >::_Tidy(
    &var_44, 1, nullptr)
std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> >::_Tidy(
    &var_2c, 1, nullptr)
sub_4033f0(&var_5c, 1, nullptr)
std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> >::_Tidy(
    &arg_20, 1, nullptr)
@__security_check_cookie@4(eax_74 ^ &__saved_ebp)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6de727
return arg1
