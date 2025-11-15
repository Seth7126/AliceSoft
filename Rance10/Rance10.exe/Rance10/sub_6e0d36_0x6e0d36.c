// 函数: sub_6e0d36
// 地址: 0x6e0d36
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0x24
int32_t (* var_c)(void* arg1) = sub_749e72
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebx
int32_t var_38_29 = ebx
int32_t esi
int32_t var_3c_13 = esi
int32_t edi
int32_t var_40_5 = edi
int32_t __saved_ebp
int32_t eax_52 = __security_cookie ^ &__saved_ebp
void* const var_48_13 = &data_6e0d42
int32_t var_8_2 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8 = 0
void var_24
int32_t* eax_1 = sub_6d6aa9(std::ios_base::getloc(arg6, &var_24))
int32_t var_8_1 = 0xffffffff
std::_Debug_range2<class std::move_iterator<class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState*> > > > > > > >(
    &var_24)
int32_t esi_1 = *(*arg1 + 0xc)
j_sub_4033e0()
int32_t eax_2 = esi_1(eax_52)
int32_t var_18 = eax_2

if (eax_2 == 0)
    var_18 = 2

int32_t var_2c
int32_t arg_8
int32_t arg_e

if (sub_6e320e(&arg_8, &arg_e:2) == 0)
    if (arg3 == 0)
        std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(&arg_8)
    
    int32_t var_38_1 = arg_e
    int32_t esi_3 = *(*eax_1 + 0x10)
    j_sub_4033e0()
    
    if (esi_3(4, var_38_1) == 0)
        void var_1c
        int32_t* eax_7 = std::time_get<char,class std::istreambuf_iterator<char,struct std::char_traits<char> > >::get_monthname(
            arg1, &var_1c, arg_8, arg3.d, arg4, arg5, arg6, arg7, arg8)
        int32_t var_38_3 = 2
        arg_8 = *eax_7
        var_18 = 2
        arg3.d = eax_7[1]
    else if (var_18 == 2)
        int32_t* var_38_4 = eax_1
        int32_t eax_9 = sub_6db59d(arg1, &arg_8, &arg_e:2, 1, 0xc, arg8 + 0x10)
        *arg7 |= eax_9
        *(arg8 + 0x10) -= 1
    else if (var_18 != 1)
        int32_t* eax_13 = sub_6e332d(arg1, &var_2c, arg_8, arg3.d, arg4, arg5, arg6, arg7, arg8)
        arg_8 = *eax_13
        arg3.d = eax_13[1]
    else
        int32_t* var_38_5 = eax_1
        int32_t eax_12 = sub_6db59d(arg1, &arg_8, &arg_e:2, var_18, 0x1f, arg8 + 0xc)
        *arg7 |= eax_12

while (sub_6e320e(&arg_8, &arg_e:2) == 0)
    if (arg3 == 0)
        std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(&arg_8)
    
    int32_t var_38_7 = arg_e
    int32_t esi_7 = *(*eax_1 + 0x10)
    j_sub_4033e0()
    
    if (esi_7(0x48, var_38_7) == 0)
        break
    
    std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Inc(&arg_8)

char eax_17 = sub_6e320e(&arg_8, &arg_e:2)

if (eax_17 != 0)
    goto label_6e0f30

if (arg3 == eax_17)
    std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(&arg_8)

int32_t var_3c_4 = arg_e
int32_t esi_8 = *(*eax_1 + 0x38)
j_sub_4033e0()
char eax_19 = esi_8(var_3c_4, 0)

if (eax_19 != 0x3a && eax_19 != 0x2c && eax_19 != 0x2f)
    goto label_6e0f30

char i

do
    std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Inc(&arg_8)
label_6e0f30:
    
    if (sub_6e320e(&arg_8, &arg_e:2) != 0)
        break
    
    if (arg3 == 0)
        std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(&arg_8)
    
    int32_t var_38_10 = arg_e
    int32_t esi_9 = *(*eax_1 + 0x10)
    j_sub_4033e0()
    i = esi_9(0x48, var_38_10)
while (i != 0)
char eax_22 = sub_6e320e(&arg_8, &arg_e:2)

if (eax_22 == 0)
    if (arg3 == eax_22)
        std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(&arg_8)
    
    int32_t var_38_13 = arg_e
    int32_t esi_10 = *(*eax_1 + 0x10)
    j_sub_4033e0()
    
    if (esi_10(4, var_38_13) != 0)
        if (var_18 == 1 || var_18 == 3)
            int32_t* var_38_16 = eax_1
            int32_t eax_30 = sub_6db59d(arg1, &arg_8, &arg_e:2, 1, 0xc, arg8 + 0x10)
            *arg7 |= eax_30
            *(arg8 + 0x10) -= 1
        else
            int32_t* var_38_15 = eax_1
            int32_t eax_29 = sub_6db59d(arg1, &arg_8, &arg_e:2, 1, 0x1f, arg8 + 0xc)
            *arg7 |= eax_29
    else if (var_18 != 2)
        int32_t* eax_25 = std::time_get<char,class std::istreambuf_iterator<char,struct std::char_traits<char> > >::get_monthname(
            arg1, &var_2c, arg_8, arg3.d, arg4, arg5, arg6, arg7, arg8)
        arg_8 = *eax_25
        arg3.d = eax_25[1]
        
        if (var_18 == 4)
            var_18 = 3
    else
        *arg7 |= var_18

while (sub_6e320e(&arg_8, &arg_e:2) == 0)
    if (arg3 == 0)
        std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(&arg_8)
    
    int32_t var_38_17 = arg_e
    int32_t esi_14 = *(*eax_1 + 0x10)
    j_sub_4033e0()
    
    if (esi_14(0x48, var_38_17) == 0)
        break
    
    std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Inc(&arg_8)

char eax_34 = sub_6e320e(&arg_8, &arg_e:2)

if (eax_34 != 0)
    goto label_6e10c8

if (arg3 == eax_34)
    std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(&arg_8)

int32_t var_3c_8 = arg_e
int32_t esi_15 = *(*eax_1 + 0x38)
j_sub_4033e0()
char eax_36 = esi_15(var_3c_8, 0)

if (eax_36 != 0x3a && eax_36 != 0x2c && eax_36 != 0x2f)
    goto label_6e10c8

char i_1

do
    std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Inc(&arg_8)
label_6e10c8:
    
    if (sub_6e320e(&arg_8, &arg_e:2) != 0)
        break
    
    if (arg3 == 0)
        std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(&arg_8)
    
    int32_t var_38_20 = arg_e
    int32_t esi_16 = *(*eax_1 + 0x10)
    j_sub_4033e0()
    i_1 = esi_16(0x48, var_38_20)
while (i_1 != 0)

if (sub_6e320e(&arg_8, &arg_e:2) == 0)
    if (arg3 == 0)
        std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(&arg_8)
    
    int32_t var_38_23 = arg_e
    int32_t esi_17 = *(*eax_1 + 0x10)
    j_sub_4033e0()
    int32_t* eax_42
    
    if (esi_17(4, var_38_23) != 0)
        if (var_18 == 4)
            int32_t* var_38_25 = eax_1
            int32_t eax_44 = sub_6db59d(arg1, &arg_8, &arg_e:2, 1, 0xc, arg8 + 0x10)
            *arg7 |= eax_44
            *(arg8 + 0x10) -= 1
        else if (var_18 != 3)
            int32_t var_34
            eax_42 = sub_6e332d(arg1, &var_34, arg_8, arg3.d, arg4, arg5, arg6, arg7, arg8)
            arg_8 = *eax_42
            arg3.d = eax_42[1]
        else
            int32_t* var_38_26 = eax_1
            int32_t eax_47 = sub_6db59d(arg1, &arg_8, &arg_e:2, 1, 0x1f, arg8 + 0xc)
            *arg7 |= eax_47
    else if (var_18 != 4)
        *arg7 |= 2
    else
        eax_42 = std::time_get<char,class std::istreambuf_iterator<char,struct std::char_traits<char> > >::get_monthname(
            arg1, &var_2c, arg_8, arg3.d, arg4, arg5, arg6, arg7, arg8)
        arg_8 = *eax_42
        arg3.d = eax_42[1]
else
    *arg7 |= 2

if (sub_6e320e(&arg_8, &arg_e:2) != 0)
    *arg7 |= 1

*arg2 = arg_8
arg2[1] = arg3.d
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6e11dc
return arg2
