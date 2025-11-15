// 函数: ?_Putmfld@?$money_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@ABE?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@_NAAVios_base@2@D1V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@D@Z
// 地址: 0x6e541d
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0xf0
int32_t (* var_c)(void* arg1) = sub_74a2ad
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebx
int32_t var_104_3 = ebx
int32_t esi
int32_t var_108_21 = esi
int32_t edi
int32_t var_10c_9 = edi
int32_t __saved_ebp
int32_t eax_73 = __security_cookie ^ &__saved_ebp
void* const var_114_13 = &data_6e542c
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax
eax.b = arg5
char var_84 = eax.b
eax.b = arg9
char var_8c = eax.b
int32_t var_8 = 0
int32_t* eax_2
void* ecx_1

if (arg3 == 0)
    var_8.b = 2
    void var_b8
    eax_2 = sub_6e3b99(std::ios_base::getloc(arg4, &var_b8))
    ecx_1 = &var_b8
else
    var_8.b = 1
    void var_b0
    eax_2 = sub_6e3afc(std::ios_base::getloc(arg4, &var_b0))
    ecx_1 = &var_b0

var_8.b = 0
std::_Debug_range2<class std::move_iterator<class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState*> > > > > > > >(
    ecx_1)
int32_t* var_5c
std::_Mpunct<wchar_t>::grouping(eax_2, &var_5c)
var_8.b = 3
int32_t esi_1 = *(*eax_2 + 0x24)
j_sub_4033e0()
int32_t eax_6
int32_t edx
edx:eax_6 = sx.q(esi_1(eax_73))
int32_t edi_3 = (eax_6 ^ edx) - edx
int32_t var_80 = edi_3
int32_t i_2
int32_t* arg_20

if (arg7 u> edi_3)
    int32_t* eax_10 = var_5c
    int32_t* ecx_6 = eax_10
    int32_t var_48
    
    if (var_48 u< 0x10)
        ecx_6 = &var_5c
    
    if (*ecx_6 != 0x7f)
        if (var_48 u< 0x10)
            eax_10 = &var_5c
        
        if (*eax_10 s> 0)
            int32_t esi_2 = *(*eax_2 + 0x10)
            j_sub_4033e0()
            void* eax_12 = esi_2()
            int32_t** edi_4 = var_5c
            i_2.b = eax_12.b
            
            if (var_48 u< 0x10)
                edi_4 = &var_5c
            
            void* esi_4 = arg7 - var_80
            
            while (true)
                eax_12.b = *edi_4
                
                if (eax_12.b == 0x7f)
                    break
                
                if (eax_12.b s<= 0)
                    break
                
                int32_t eax_13 = sx.d(eax_12.b)
                
                if (eax_13 u>= esi_4)
                    break
                
                esi_4 -= eax_13
                sub_6c51e0(&arg_20, esi_4, 1, i_2.b)
                
                if (*(edi_4 + 1) s> 0)
                    edi_4 += 1
            
            edi_3 = var_80
else
    sub_6c51e0(&arg_20, nullptr, edi_3 - arg7 + 1, var_8c)

int32_t var_1c = 0
int32_t var_18 = 0xf
char var_2c = 0
void* eax_14 = *eax_2
var_8.b = 4
int32_t* var_104_2 = &i_2
int32_t i_3
void var_74
int32_t* eax_16

if (arg6 == 0)
    int32_t esi_6 = *(eax_14 + 0x28)
    j_sub_4033e0()
    esi_6(var_104_2)
    i_3 = i_2
    eax_16 = sub_6e3618(eax_2, &var_74)
else
    int32_t esi_5 = *(eax_14 + 0x2c)
    j_sub_4033e0()
    esi_5(var_104_2)
    i_3 = i_2
    eax_16 = sub_6e6a81(eax_2, &var_74)

sub_409670(&var_2c, eax_16)
sub_4033f0(&var_74, 1, nullptr)
int32_t var_34 = 0
int32_t var_30 = 0xf
char var_44 = 0
var_8.b = 5

if ((*(arg4 + 0x14) & 8) != 0)
    sub_409670(&var_44, sub_6e59c0(eax_2, &var_74))
    sub_4033f0(&var_74, 1, nullptr)

void* edx_1
edx_1.b = 0
void* ecx_21 = nullptr
char var_75 = 0

for (int32_t i = 0; i u< 4; i += 1)
    int32_t eax_20 = sx.d(*(&i_3 + i))
    
    if (eax_20 == 0x20)
        ecx_21 += 1
    label_6e566f:
        
        if (i != 3)
            edx_1.b = 1
            var_75 = 1
    else if (eax_20 == 0x24)
        ecx_21 += var_34
    else if (eax_20 == 0x2b)
        ecx_21 += var_1c
    else if (eax_20 == 0x76)
        if (arg7 u> edi_3)
            edx_1 = nullptr
        else
            edx_1 = edi_3 - arg7 + 1
        
        void* eax_30 = neg.d(sbb.d(0, 0, 0 u< edi_3)) + arg7 + edx_1
        edx_1.b = var_75
        ecx_21 += eax_30
    else if (eax_20 == 0x78)
        goto label_6e566f

int32_t temp5 = *(arg4 + 0x24)
int32_t edi_5

if (temp5 s>= 0 && (temp5 s> 0 || *(arg4 + 0x20) u> 0))
    edi_5 = *(arg4 + 0x20)

void* edi_6

if (temp5 s< 0 || (temp5 s<= 0 && *(arg4 + 0x20) u<= 0) || edi_5 u<= ecx_21)
    edi_6 = nullptr
else
    edi_6 = edi_5 - ecx_21

int32_t eax_33 = *(arg4 + 0x14) & 0x1c0
int32_t arg_8
int32_t edx_4
char* esi_7

if (eax_33 == 0x40 || (eax_33 == 0x100 && edx_1.b != 0))
    esi_7 = arg2
    edx_4 = arg_8
else
    void* var_108_6 = edi_6
    void var_a8
    int32_t* eax_34 = std::money_put<char,class std::ostreambuf_iterator<char,struct std::char_traits<char> > >::_Rep(
        &var_a8, arg_8, arg2.b, var_84.d)
    edi_6 = nullptr
    edx_4 = *eax_34
    arg_8 = edx_4
    esi_7 = eax_34[1]
    arg2 = esi_7

int32_t i_1 = 0
i_2 = 0
void var_c0

do
    int32_t eax_35 = sx.d(*(&i_3 + i_1))
    int32_t* eax_44
    
    if (eax_35 == 0x20)
        int32_t var_108_17 = 1
        int32_t var_100
        int32_t* eax_65 = std::money_put<char,class std::ostreambuf_iterator<char,struct std::char_traits<char> > >::_Rep(
            &var_100, edx_4, esi_7.b, var_84.d)
        edx_4 = *eax_65
        arg_8 = edx_4
        esi_7 = eax_65[1]
        arg2 = esi_7
    label_6e58c8:
        
        if (eax_33 == 0x100)
            void* var_108_18 = edi_6
            eax_44 = std::money_put<char,class std::ostreambuf_iterator<char,struct std::char_traits<char> > >::_Rep(
                &var_c0, edx_4, esi_7.b, var_84.d)
            edi_6 = nullptr
        label_6e58eb:
            edx_4 = *eax_44
            arg_8 = edx_4
            esi_7 = eax_44[1]
            arg2 = esi_7
    else
        int32_t* var_10c_2
        int32_t* eax_43
        
        if (eax_35 == 0x24)
            char* eax_64 = var_44.d
            
            if (var_30 u< 0x10)
                eax_64 = &var_44
            
            int32_t var_108_16 = var_34
            var_10c_2 = eax_64
            int32_t var_f8
            eax_43 = &var_f8
        label_6e5745:
            eax_44 = std::money_put<char,class std::ostreambuf_iterator<char,struct std::char_traits<char> > >::_Put(
                eax_43, edx_4, esi_7, var_10c_2)
            goto label_6e58eb
        
        if (eax_35 != 0x2b)
            if (eax_35 == 0x76)
                if (var_80 == 0)
                    int32_t* eax_42 = arg_20
                    
                    if (arg8 u< 0x10)
                        eax_42 = &arg_20
                    
                    void* var_108_7 = arg7
                    var_10c_2 = eax_42
                    void var_c8
                    eax_43 = &var_c8
                    goto label_6e5745
                
                int32_t var_114_6
                char* var_110_1
                
                if (arg7 u> var_80)
                    int32_t* eax_52 = arg_20
                    
                    if (arg8 u< 0x10)
                        eax_52 = &arg_20
                    
                    void* var_108_12 = arg7 - var_80
                    void var_e0
                    int32_t* eax_55 = std::money_put<char,class std::ostreambuf_iterator<char,struct std::char_traits<char> > >::_Put(
                        &var_e0, edx_4, esi_7, eax_52)
                    arg_8 = *eax_55
                    char* eax_57 = eax_55[1]
                    int32_t esi_9 = *(*eax_2 + 0xc)
                    j_sub_4033e0()
                    std::ostreambuf_iterator<char,struct std::char_traits<char> >::operator=(
                        &arg_8, esi_9(var_104_2))
                    int32_t** ecx_32 = arg_20
                    
                    if (arg8 u< 0x10)
                        ecx_32 = &arg_20
                    
                    int32_t var_108_14 = var_80
                    var_10c_2 = arg7 + ecx_32 - var_80
                    var_110_1 = eax_57
                    void var_e8
                    eax_43 = &var_e8
                    var_114_6 = arg_8
                else
                    std::ostreambuf_iterator<char,struct std::char_traits<char> >::operator=(
                        &arg_8, var_8c)
                    int32_t esi_8 = *(*eax_2 + 0xc)
                    j_sub_4033e0()
                    std::ostreambuf_iterator<char,struct std::char_traits<char> >::operator=(
                        &arg_8, esi_8(var_104_2))
                    void* var_108_10 = var_80 - arg7
                    void var_d0
                    int32_t* eax_49 = std::money_put<char,class std::ostreambuf_iterator<char,struct std::char_traits<char> > >::_Rep(
                        &var_d0, arg_8, arg2.b, var_8c.d)
                    int32_t* ecx_27 = arg_20
                    arg_8 = *eax_49
                    arg2 = eax_49[1]
                    
                    if (arg8 u< 0x10)
                        ecx_27 = &arg_20
                    
                    void* var_108_11 = arg7
                    void var_d8
                    eax_43 = &var_d8
                    var_10c_2 = ecx_27
                    var_110_1 = eax_49[1]
                    var_114_6 = *eax_49
                
                eax_44 = std::money_put<char,class std::ostreambuf_iterator<char,struct std::char_traits<char> > >::_Put(
                    eax_43, var_114_6, var_110_1, var_10c_2)
                goto label_6e58eb
            
            if (eax_35 == 0x78)
                goto label_6e58c8
        else if (var_1c u> 0)
            char* eax_63 = var_2c.d
            
            if (var_18 u< 0x10)
                eax_63 = &var_2c
            
            int32_t var_108_15 = 1
            var_10c_2 = eax_63
            void var_f0
            eax_43 = &var_f0
            goto label_6e5745
    i_1 = i_2 + 1
    i_2 = i_1
while (i_1 u< 4)

if (var_1c u> 1)
    char* ecx_34 = var_2c.d
    
    if (var_18 u< 0x10)
        ecx_34 = &var_2c
    
    int32_t var_108_19 = var_1c - 1
    int32_t* eax_69 = std::money_put<char,class std::ostreambuf_iterator<char,struct std::char_traits<char> > >::_Put(
        &var_c0, edx_4, esi_7, &ecx_34[1])
    edx_4 = *eax_69
    arg_8 = edx_4
    esi_7 = eax_69[1]
    arg2 = esi_7

void* var_108_20 = edi_6
*(arg4 + 0x20) = 0
*(arg4 + 0x24) = 0
std::money_put<char,class std::ostreambuf_iterator<char,struct std::char_traits<char> > >::_Rep(
    arg1, edx_4, esi_7.b, var_84.d)
sub_4033f0(&var_44, 1, nullptr)
sub_4033f0(&var_2c, 1, nullptr)
sub_4033f0(&var_5c, 1, nullptr)
sub_4033f0(&arg_20, 1, nullptr)
@__security_check_cookie@4(eax_73 ^ &__saved_ebp)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6e5991
return arg1
