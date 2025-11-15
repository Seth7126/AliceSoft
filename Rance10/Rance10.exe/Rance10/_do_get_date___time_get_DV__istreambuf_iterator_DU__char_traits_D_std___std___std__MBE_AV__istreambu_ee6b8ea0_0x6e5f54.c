// 函数: ?do_get_date@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MBE?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AAVios_base@2@AAHPAUtm@@@Z
// 地址: 0x6e5f54
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0x24
int32_t (* var_c)(void* arg1) = sub_749e72
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebx
int32_t var_38_22 = ebx
int32_t esi
int32_t var_3c_13 = esi
int32_t edi
int32_t var_40_5 = edi
int32_t __saved_ebp
int32_t eax_53 = __security_cookie ^ &__saved_ebp
void* const var_48_13 = &data_6e5f60
int32_t var_8_2 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8 = 0
void var_24
int32_t* eax_1 = sub_6d0f2e(std::ios_base::getloc(arg5, &var_24))
int32_t var_8_1 = 0xffffffff
std::_Debug_range2<class std::move_iterator<class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState*> > > > > > > >(
    &var_24)
int32_t esi_1 = *(*arg1 + 0xc)
j_sub_4033e0()
int32_t eax_2 = esi_1(eax_53)
int32_t esi_2 = eax_2
int32_t var_18 = eax_2

if (esi_2 == 0)
    int32_t var_38 = 2
    esi_2 = 2
    var_18 = 2

int32_t var_2c
int32_t arg_8
int32_t arg_10

if (std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(&arg_8, &arg_10) == 0)
    int32_t edx_1 = arg3
    
    if (edx_1.b == 0)
        std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(&arg_8)
        edx_1 = arg3
    
    if (((sx.d(*(eax_1[3] + (zx.d(arg3:1.b) << 1))) u>> 2).b & 1) == 0)
        void var_1c
        int32_t* eax_8 = std::time_get<char,class std::istreambuf_iterator<char,struct std::char_traits<char> > >::get_monthname(
            arg1, &var_1c, arg_8, edx_1, arg_10, arg4, arg5, arg6, arg7)
        arg_8 = *eax_8
        var_18 = 2
        arg3 = eax_8[1]
    else if (esi_2 == 2)
        int32_t* var_38_3 = eax_1
        int32_t eax_10 = std::time_get<char,class std::istreambuf_iterator<char,struct std::char_traits<char> > >::_Getint(
            arg1, &arg_8, &arg_10, 1, 0xc, arg7 + 0x10)
        *arg6 |= eax_10
        *(arg7 + 0x10) -= 1
    else if (esi_2 != 1)
        int32_t* eax_14 = sub_6e332d(arg1, &var_2c, arg_8, edx_1, arg_10, arg4, arg5, arg6, arg7)
        arg_8 = *eax_14
        arg3 = eax_14[1]
    else
        int32_t* var_38_4 = eax_1
        int32_t eax_13 = std::time_get<char,class std::istreambuf_iterator<char,struct std::char_traits<char> > >::_Getint(
            arg1, &arg_8, &arg_10, esi_2, 0x1f, arg7 + 0xc)
        *arg6 |= eax_13

while (std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(&arg_8, &arg_10) == 0)
    if (arg3.b == 0)
        std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(&arg_8)
    
    if ((*(eax_1[3] + (zx.d(arg3:1.b) << 1)) & 0x48) == 0)
        break
    
    std::istreambuf_iterator<char,struct std::char_traits<char> >::_Inc(&arg_8)

char eax_17 = std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(&arg_8, &arg_10)

if (eax_17 != 0)
    goto label_6e6129

if (arg3.b == eax_17)
    std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(&arg_8)

int32_t esi_5 = *(*eax_1 + 0x28)
j_sub_4033e0()
char eax_19 = esi_5(arg3, 0)

if (eax_19 != 0x3a && eax_19 != 0x2c && eax_19 != 0x2f)
    goto label_6e6129

do
    std::istreambuf_iterator<char,struct std::char_traits<char> >::_Inc(&arg_8)
label_6e6129:
    
    if (std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(&arg_8, &arg_10) != 0)
        break
    
    if (arg3.b == 0)
        std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(&arg_8)
while ((*(eax_1[3] + (zx.d(arg3:1.b) << 1)) & 0x48) != 0)

if (std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(&arg_8, &arg_10) == 0)
    int32_t edx_2 = arg3
    
    if (edx_2.b == 0)
        std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(&arg_8)
        edx_2 = arg3
    
    if (((sx.d(*(eax_1[3] + (zx.d(arg3:1.b) << 1))) u>> 2).b & 1) != 0)
        if (var_18 == 1 || var_18 == 3)
            int32_t* var_38_12 = eax_1
            int32_t eax_31 = std::time_get<char,class std::istreambuf_iterator<char,struct std::char_traits<char> > >::_Getint(
                arg1, &arg_8, &arg_10, 1, 0xc, arg7 + 0x10)
            *arg6 |= eax_31
            *(arg7 + 0x10) -= 1
        else
            int32_t* var_38_11 = eax_1
            int32_t eax_30 = std::time_get<char,class std::istreambuf_iterator<char,struct std::char_traits<char> > >::_Getint(
                arg1, &arg_8, &arg_10, 1, 0x1f, arg7 + 0xc)
            *arg6 |= eax_30
    else if (var_18 != 2)
        int32_t* eax_26 = std::time_get<char,class std::istreambuf_iterator<char,struct std::char_traits<char> > >::get_monthname(
            arg1, &var_2c, arg_8, edx_2, arg_10, arg4, arg5, arg6, arg7)
        arg_8 = *eax_26
        arg3 = eax_26[1]
        
        if (var_18 == 4)
            var_18 = 3
    else
        *arg6 |= var_18

while (std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(&arg_8, &arg_10) == 0)
    if (arg3.b == 0)
        std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(&arg_8)
    
    if ((*(eax_1[3] + (zx.d(arg3:1.b) << 1)) & 0x48) == 0)
        break
    
    std::istreambuf_iterator<char,struct std::char_traits<char> >::_Inc(&arg_8)

char eax_34 = std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(&arg_8, &arg_10)

if (eax_34 != 0)
    goto label_6e629e

if (arg3.b == eax_34)
    std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(&arg_8)

int32_t esi_9 = *(*eax_1 + 0x28)
j_sub_4033e0()
char eax_36 = esi_9(arg3, 0)

if (eax_36 != 0x3a && eax_36 != 0x2c && eax_36 != 0x2f)
    goto label_6e629e

do
    std::istreambuf_iterator<char,struct std::char_traits<char> >::_Inc(&arg_8)
label_6e629e:
    
    if (std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(&arg_8, &arg_10) != 0)
        break
    
    if (arg3.b == 0)
        std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(&arg_8)
while ((*(eax_1[3] + (zx.d(arg3:1.b) << 1)) & 0x48) != 0)

if (std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(&arg_8, &arg_10) == 0)
    int32_t edx_3 = arg3
    
    if (edx_3.b == 0)
        std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(&arg_8)
        edx_3 = arg3
    
    int32_t* eax_43
    
    if (((sx.d(*(eax_1[3] + (zx.d(arg3:1.b) << 1))) u>> 2).b & 1) != 0)
        if (var_18 == 4)
            int32_t* var_38_18 = eax_1
            int32_t eax_45 = std::time_get<char,class std::istreambuf_iterator<char,struct std::char_traits<char> > >::_Getint(
                arg1, &arg_8, &arg_10, 1, 0xc, arg7 + 0x10)
            *arg6 |= eax_45
            *(arg7 + 0x10) -= 1
        else if (var_18 != 3)
            int32_t var_34
            eax_43 = sub_6e332d(arg1, &var_34, arg_8, edx_3, arg_10, arg4, arg5, arg6, arg7)
            arg_8 = *eax_43
            arg3 = eax_43[1]
        else
            int32_t* var_38_19 = eax_1
            int32_t eax_48 = std::time_get<char,class std::istreambuf_iterator<char,struct std::char_traits<char> > >::_Getint(
                arg1, &arg_8, &arg_10, 1, 0x1f, arg7 + 0xc)
            *arg6 |= eax_48
    else if (var_18 != 4)
        *arg6 |= 2
    else
        eax_43 = std::time_get<char,class std::istreambuf_iterator<char,struct std::char_traits<char> > >::get_monthname(
            arg1, &var_2c, arg_8, edx_3, arg_10, arg4, arg5, arg6, arg7)
        arg_8 = *eax_43
        arg3 = eax_43[1]
else
    *arg6 |= 2

if (std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(&arg_8, &arg_10) != 0)
    *arg6 |= 1

*arg2 = arg_8
arg2[1] = arg3
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6e63ab
return arg2
