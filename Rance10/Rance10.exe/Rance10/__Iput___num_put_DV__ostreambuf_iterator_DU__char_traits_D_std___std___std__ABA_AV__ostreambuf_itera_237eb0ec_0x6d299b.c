// 函数: ?_Iput@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@ABA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AAVios_base@2@DPADI@Z
// 地址: 0x6d299b
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0x50
int32_t (* var_c)(void* arg1) = sub_74923a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebx
int32_t var_64_9 = ebx
int32_t esi
int32_t var_68_5 = esi
int32_t edi
int32_t var_6c_5 = edi
int32_t __saved_ebp
int32_t eax_37 = __security_cookie ^ &__saved_ebp
void* const var_74_7 = &data_6d29a7
int32_t var_8_3 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx_1 = arg8
int32_t eax

if (ebx_1 != 0)
    eax.b = *arg7

int32_t edi_1

if (ebx_1 != 0 && (eax.b == 0x2b || eax.b == 0x2d))
    edi_1 = 1
else
    edi_1 = 0

if ((*(arg5 + 0x14) & 0xe00) == 0x800 && edi_1 + 2 u<= ebx_1 && arg7[edi_1] == 0x30)
    char edx = arg7[edi_1 + 1]
    
    if (edx == 0x78 || edx == 0x58)
        edi_1 += 2

int32_t var_8 = 0
int32_t var_54
int32_t* eax_5 = sub_6d0f2e(std::ios_base::getloc(arg5, &var_54))
int32_t var_8_1 = 0xffffffff
std::_Debug_range2<class std::move_iterator<class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState*> > > > > > > >(
    &var_54)
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_4e2870(&var_2c, ebx_1, 0)
char* eax_6 = var_2c.d
int32_t var_8_2 = 1

if (var_18 u< 0x10)
    eax_6 = &var_2c

int32_t esi_2 = *(*eax_5 + 0x1c)
j_sub_4033e0()
esi_2(arg7, ebx_1 + arg7, eax_6, eax_37)
var_8_2.b = 2
int32_t var_5c
int32_t* eax_9 = sub_6d1105(std::ios_base::getloc(arg5, &var_5c))
var_8_2.b = 1
int32_t* var_50 = eax_9
std::_Debug_range2<class std::move_iterator<class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState*> > > > > > > >(
    &var_5c)
int32_t* var_44
int32_t* esi_4 = std::_Mpunct<wchar_t>::grouping(eax_9, &var_44)
int32_t* eax_10 = var_44
var_8_2.b = 3
int32_t var_30

if (var_30 u< 0x10)
    eax_10 = &var_44

int32_t* var_48_1 = eax_10
eax_10.b = *eax_10

if (eax_10.b != 0x7f && eax_10.b s> 0)
    int32_t esi_5 = *(*esi_4 + 0x10)
    j_sub_4033e0()
    int32_t* esi_6 = var_48_1
    var_50.b = esi_5(arg2).b
    
    while (true)
        void* eax_12
        eax_12.b = *esi_6
        
        if (eax_12.b == 0x7f)
            break
        
        if (eax_12.b s<= 0)
            break
        
        int32_t ecx_12 = sx.d(eax_12.b)
        
        if (ecx_12 u>= ebx_1 - edi_1)
            break
        
        ebx_1 -= ecx_12
        sub_6c51e0(&var_2c, ebx_1, 1, var_50.b)
        
        if (*(esi_6 + 1) s> 0)
            esi_6 += 1

int32_t temp0 = *(arg5 + 0x24)
int32_t esi_7

if (temp0 s>= 0 && (temp0 s> 0 || *(arg5 + 0x20) u> 0))
    esi_7 = *(arg5 + 0x20)

int32_t esi_8

if (temp0 s< 0 || (temp0 s<= 0 && *(arg5 + 0x20) u<= 0) || esi_7 u<= var_1c)
    esi_8 = 0
else
    esi_8 = esi_7 - var_1c

int32_t eax_17 = *(arg5 + 0x14) & 0x1c0
int32_t* eax_26

if (eax_17 == 0x40)
    char* eax_27 = var_2c.d
    
    if (var_18 u< 0x10)
        eax_27 = &var_2c
    
    int32_t var_64_7 = edi_1
    char* var_68_3 = eax_27
    eax_26 = std::num_put<char,class std::ostreambuf_iterator<char,struct std::char_traits<char> > >::_Put(
        arg1, &var_5c, arg3, arg4)
else if (eax_17 == 0x100)
    char* eax_22 = var_2c.d
    
    if (var_18 u< 0x10)
        eax_22 = &var_2c
    
    int32_t var_64_6 = edi_1
    char* var_68_2 = eax_22
    int32_t* eax_23 = std::num_put<char,class std::ostreambuf_iterator<char,struct std::char_traits<char> > >::_Put(
        arg1, &var_5c, arg3, arg4)
    int32_t var_7c_1 = esi_8
    int32_t var_80_1 = arg6
    arg3 = *eax_23
    arg4 = eax_23[1]
    eax_26 = std::num_put<char,class std::ostreambuf_iterator<char,struct std::char_traits<char> > >::_Rep(
        arg1, &var_5c, (*eax_23).b, eax_23[1])
    esi_8 = 0
else
    int32_t var_64_4 = esi_8
    int32_t var_68 = arg6
    int32_t* eax_18 = std::num_put<char,class std::ostreambuf_iterator<char,struct std::char_traits<char> > >::_Rep(
        arg1, &var_5c, arg3.b, arg4)
    esi_8 = 0
    arg3 = *eax_18
    arg4 = eax_18[1]
    char* eax_21 = var_2c.d
    
    if (var_18 u< 0x10)
        eax_21 = &var_2c
    
    int32_t var_64_5 = edi_1
    char* var_68_1 = eax_21
    eax_26 = std::num_put<char,class std::ostreambuf_iterator<char,struct std::char_traits<char> > >::_Put(
        arg1, &var_5c, *eax_18, eax_18[1])

char* ecx_16 = *eax_26
arg3 = ecx_16
int32_t edx_1 = eax_26[1]
char* eax_28 = var_2c.d
arg4 = edx_1

if (var_18 u< 0x10)
    eax_28 = &var_2c

int32_t var_64_8 = var_1c - edi_1
void* var_68_4 = &eax_28[edi_1]
int32_t* eax_33 =
    std::num_put<char,class std::ostreambuf_iterator<char,struct std::char_traits<char> > >::_Put(
    arg1, &var_5c, ecx_16, edx_1)
int32_t var_7c_2 = esi_8
int32_t var_80_2 = arg6
char* ecx_17 = *eax_33
arg3 = ecx_17
int32_t eax_34 = eax_33[1]
*(arg5 + 0x20) = 0
*(arg5 + 0x24) = 0
arg4 = eax_34
std::num_put<char,class std::ostreambuf_iterator<char,struct std::char_traits<char> > >::_Rep(arg1, 
    arg2, ecx_17.b, eax_34)
sub_4033f0(&var_44, 1, nullptr)
sub_4033f0(&var_2c, 1, nullptr)
@__security_check_cookie@4(eax_37 ^ &__saved_ebp)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6d2c5a
return arg2
