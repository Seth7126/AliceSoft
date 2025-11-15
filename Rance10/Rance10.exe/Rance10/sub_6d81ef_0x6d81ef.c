// 函数: sub_6d81ef
// 地址: 0x6d81ef
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0x5c
int32_t (* var_c)(void* arg1) = sub_749672
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebx
int32_t var_70_9 = ebx
int32_t esi
int32_t var_74_5 = esi
int32_t edi
int32_t var_78_5 = edi
int32_t __saved_ebp
int32_t eax_43 = __security_cookie ^ &__saved_ebp
void* const var_80_8 = &data_6d81fb
int32_t var_8_3 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax

if (arg8 != 0)
    eax.b = *arg7

int32_t edi_1

if (arg8 != 0 && (eax.b == 0x2b || eax.b == 0x2d))
    edi_1 = 1
else
    edi_1 = 0

void* const edx

if ((*(arg5 + 0x14) & 0x3000) == 0x3000)
    edx = &data_74edec
    
    if (edi_1 + 2 u<= arg8 && arg7[edi_1] == 0x30)
        void* ecx
        ecx.b = arg7[edi_1 + 1]
        
        if (ecx.b == 0x78 || ecx.b == 0x58)
            edi_1 += 2
else
    edx = &data_74ede8

uint32_t eax_4
void* ecx_1
eax_4, ecx_1 = _strcspn(arg7, edx)
int32_t var_88 = 0x2e
int16_t var_4c = 0x2e
char* eax_6
eax_6.b = **_localeconv(ecx_1)
var_4c.b = eax_6.b
uint32_t ebx_2 = _strcspn(arg7, &var_4c)
int32_t var_8 = 0
void var_5c
struct std::ctype_base::std::ctype<wchar_t>::VTable* eax_9 =
    sub_633850(std::ios_base::getloc(arg5, &var_5c))
int32_t var_8_1 = 0xffffffff
std::_Debug_range2<class std::move_iterator<class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState*> > > > > > > >(
    &var_5c)
int32_t var_1c = 0
int32_t var_18 = 7
int16_t var_2c = 0
sub_632bc0(&var_2c, arg8, 0)
int16_t* eax_10 = var_2c.d
int32_t var_8_2 = 1

if (var_18 u< 8)
    eax_10 = &var_2c

int32_t esi_3 = *(eax_9->vFunc_0 + 0x2c)
j_sub_4033e0()
esi_3(arg7, arg8 + arg7, eax_10, eax_43)
var_8_2.b = 2
int32_t* eax_13 = sub_6d7479(std::ios_base::getloc(arg5, &var_5c))
var_8_2.b = 1
std::_Debug_range2<class std::move_iterator<class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState*> > > > > > > >(
    &var_5c)
var_8_2.b = 3
int16_t* var_44
int32_t esi_6 = *(*std::_Mpunct<wchar_t>::grouping(eax_13, &var_44) + 0x10)
j_sub_4033e0()
uint32_t edx_2 = zx.d(esi_6(arg2, arg8, eax_4, arg5).w)
uint32_t var_50_1 = edx_2
int16_t* eax_15

if (ebx_2 == arg8)
    ebx_2 = eax_4
else
    int32_t esi_7 = *(*eax_13 + 0xc)
    j_sub_4033e0()
    int16_t eax_18 = esi_7()
    eax_15 = var_2c.d
    
    if (var_18 u< 8)
        eax_15 = &var_2c
    
    edx_2 = var_50_1
    eax_15[ebx_2] = eax_18

int16_t* esi_8 = var_44
int32_t var_30

if (var_30 u< 0x10)
    esi_8 = &var_44

while (true)
    eax_15.b = *esi_8
    
    if (eax_15.b == 0x7f)
        break
    
    if (eax_15.b s<= 0)
        break
    
    int32_t ecx_17 = sx.d(eax_15.b)
    
    if (ecx_17 u>= ebx_2 - edi_1)
        break
    
    ebx_2 -= ecx_17
    sub_6e3437(&var_2c, ebx_2, 1, edx_2.w)
    
    if (*(esi_8 + 1) s> 0)
        esi_8 += 1
    
    edx_2 = var_50_1

int32_t temp0 = *(arg5 + 0x24)
int32_t esi_9

if (temp0 s>= 0 && (temp0 s> 0 || *(arg5 + 0x20) u> 0))
    esi_9 = *(arg5 + 0x20)

int32_t esi_10

if (temp0 s< 0 || (temp0 s<= 0 && *(arg5 + 0x20) u<= 0) || esi_9 u<= var_1c)
    esi_10 = 0
else
    esi_10 = esi_9 - var_1c

int32_t eax_23 = *(arg5 + 0x14) & 0x1c0
int32_t* eax_32
int32_t* ebx_3

if (eax_23 == 0x40)
    int16_t* eax_33 = var_2c.d
    
    if (var_18 u< 8)
        eax_33 = &var_2c
    
    ebx_3 = arg1
    int32_t var_70_7 = edi_1
    int16_t* var_74_3 = eax_33
    eax_32 = std::num_put<uint16_t,class std::ostreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> > >::_Put(
        ebx_3, &var_5c, arg3, arg4)
else if (eax_23 == 0x100)
    int16_t* eax_28 = var_2c.d
    
    if (var_18 u< 8)
        eax_28 = &var_2c
    
    ebx_3 = arg1
    int32_t var_70_6 = edi_1
    int16_t* var_74_2 = eax_28
    int32_t* eax_29 = std::num_put<uint16_t,class std::ostreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> > >::_Put(
        ebx_3, &var_5c, arg3, arg4)
    int32_t var_88_3 = esi_10
    int32_t var_8c_1 = arg6
    arg3 = *eax_29
    arg4 = eax_29[1]
    eax_32 = std::num_put<char,class std::ostreambuf_iterator<char,struct std::char_traits<char> > >::_Rep(
        ebx_3, &var_5c, *eax_29, eax_29[1])
    esi_10 = 0
else
    ebx_3 = arg1
    int32_t var_70_4 = esi_10
    int32_t var_74 = arg6
    int32_t* eax_24 = std::num_put<char,class std::ostreambuf_iterator<char,struct std::char_traits<char> > >::_Rep(
        ebx_3, &var_5c, arg3, arg4)
    esi_10 = 0
    arg3 = *eax_24
    arg4 = eax_24[1]
    int16_t* eax_27 = var_2c.d
    
    if (var_18 u< 8)
        eax_27 = &var_2c
    
    int32_t var_70_5 = edi_1
    int16_t* var_74_1 = eax_27
    eax_32 = std::num_put<uint16_t,class std::ostreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> > >::_Put(
        ebx_3, &var_5c, *eax_24, eax_24[1])

int16_t* ecx_22 = *eax_32
arg3 = ecx_22
int32_t edx_3 = eax_32[1]
int16_t* eax_34 = var_2c.d
arg4 = edx_3

if (var_18 u< 8)
    eax_34 = &var_2c

int32_t var_70_8 = var_1c - edi_1
void* var_74_4 = &eax_34[edi_1]
void var_54
int32_t* eax_39 = std::num_put<uint16_t,class std::ostreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> > >::_Put(
    ebx_3, &var_54, ecx_22, edx_3)
int32_t var_88_4 = esi_10
int32_t var_8c_2 = arg6
int16_t* ecx_23 = *eax_39
arg3 = ecx_23
int32_t eax_40 = eax_39[1]
arg4 = eax_40
*(arg5 + 0x20) = 0
*(arg5 + 0x24) = 0
std::num_put<char,class std::ostreambuf_iterator<char,struct std::char_traits<char> > >::_Rep(
    ebx_3, arg2, ecx_23, eax_40)
sub_4033f0(&var_44, 1, nullptr)
sub_631740(&var_2c, 1, nullptr)
@__security_check_cookie@4(eax_43 ^ &__saved_ebp)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6d851d
return arg2
