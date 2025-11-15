// 函数: sub_6e5bd3
// 地址: 0x6e5bd3
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0x14
int32_t (* var_c)(void* arg1) = sub_749e4f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
void* const var_38_24 = &data_6e5bdf
int32_t var_8_2 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8 = 0
void var_1c
int32_t* eax_1 = sub_6d0f2e(std::ios_base::getloc(arg5, &var_1c))
int32_t var_8_1 = 0xffffffff
std::_Debug_range2<class std::move_iterator<class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState*> > > > > > > >(
    &var_1c)
int32_t var_14 = 0
*arg6 = 0
int32_t arg_8
int32_t arg_10
int32_t* var_40_4
int32_t* var_3c_5
int32_t* eax_3
int32_t eax_12

if (sx.d(arg8) - 0x41 u> 0x38)
    *arg6 = 2
else
    switch (sx.d(arg8) + &jump_table_6e5ebf[6]:3)
        case &lookup_table_6e5f1b, &lookup_table_6e5f1b[0x20]
            eax_3 = std::time_get<char,class std::istreambuf_iterator<char,struct std::char_traits<char> > >::get_weekday(
                arg1, &var_1c, arg_8, arg3, arg_10, arg4, arg5, arg6, arg7)
            arg_8 = *eax_3
            arg3 = eax_3[1]
        case &lookup_table_6e5f1b[1], &lookup_table_6e5f1b[0x21], &lookup_table_6e5f1b[0x27]
            eax_3 = std::time_get<char,class std::istreambuf_iterator<char,struct std::char_traits<char> > >::get_monthname(
                arg1, &var_1c, arg_8, arg3, arg_10, arg4, arg5, arg6, arg7)
            arg_8 = *eax_3
            arg3 = eax_3[1]
        case &lookup_table_6e5f1b[2]
            int32_t* var_38_5 = eax_1
            int32_t eax_6 = std::time_get<char,class std::istreambuf_iterator<char,struct std::char_traits<char> > >::_Getint(
                arg1, &arg_8, &arg_10, 0, 0x63, &var_14) | *arg6
            *arg6 = eax_6
            
            if ((eax_6.b & 2) == 0)
                arg7[5] = (var_14 - 0x13) * 0x64
        case &lookup_table_6e5f1b[3]
            char const* const var_38_7 = "%m / %d / %y"
            goto label_6e5c81
        case &lookup_table_6e5f1b[4], &lookup_table_6e5f1b[5], &lookup_table_6e5f1b[6], 
                &lookup_table_6e5f1b[9], &lookup_table_6e5f1b[0xa], &lookup_table_6e5f1b[0xb], 
                &lookup_table_6e5f1b[0xd], &lookup_table_6e5f1b[0xe], &lookup_table_6e5f1b[0xf], 
                &lookup_table_6e5f1b[0x10], &lookup_table_6e5f1b[0x15], &lookup_table_6e5f1b[0x19], 
                &lookup_table_6e5f1b[0x1a], &lookup_table_6e5f1b[0x1b], &lookup_table_6e5f1b[0x1c], 
                &lookup_table_6e5f1b[0x1d], &lookup_table_6e5f1b[0x1e], &lookup_table_6e5f1b[0x1f], 
                &lookup_table_6e5f1b[0x25], &lookup_table_6e5f1b[0x26], &lookup_table_6e5f1b[0x28], 
                &lookup_table_6e5f1b[0x2a], &lookup_table_6e5f1b[0x2b], &lookup_table_6e5f1b[0x2e], 
                &lookup_table_6e5f1b[0x30], &lookup_table_6e5f1b[0x32], &lookup_table_6e5f1b[0x34], 
                &lookup_table_6e5f1b[0x35]
            *arg6 = 2
        case &lookup_table_6e5f1b[7]
            int32_t* var_38_8 = eax_1
            var_3c_5 = &arg7[2]
            var_40_4 = 0x17
        label_6e5d12:
            eax_12 = std::time_get<char,class std::istreambuf_iterator<char,struct std::char_traits<char> > >::_Getint(
                arg1, &arg_8, &arg_10, 0, var_40_4, var_3c_5)
            *arg6 |= eax_12
        case &lookup_table_6e5f1b[8]
            int32_t* var_38_9 = eax_1
            int32_t eax_16 = std::time_get<char,class std::istreambuf_iterator<char,struct std::char_traits<char> > >::_Getint(
                arg1, &arg_8, &arg_10, 1, 0xc, &var_14) | *arg6
            *arg6 = eax_16
            
            if ((eax_16.b & 2) == 0)
                int32_t ecx_11 = neg.d(var_14 - 0xc)
                arg7[2] = sbb.d(ecx_11, ecx_11, var_14 != 0xc) & var_14
        case &lookup_table_6e5f1b[0xc]
            int32_t* var_38_12 = eax_1
            var_3c_5 = &arg7[1]
            var_40_4 = 0x3b
            goto label_6e5d12
        case &lookup_table_6e5f1b[0x11]
            char const* const var_38_15 = "%H : %M"
            goto label_6e5c81
        case &lookup_table_6e5f1b[0x12]
            int32_t* var_38_16 = eax_1
            var_3c_5 = arg7
            var_40_4 = 0x3c
            goto label_6e5d12
        case &lookup_table_6e5f1b[0x13], &lookup_table_6e5f1b[0x17]
            char const* const var_38_17 = "%H : %M : %S"
            goto label_6e5c81
        case &lookup_table_6e5f1b[0x14], &lookup_table_6e5f1b[0x16]
            int32_t* var_38_18 = eax_1
            var_3c_5 = &arg7[7]
            var_40_4 = 0x35
            goto label_6e5d12
        case &lookup_table_6e5f1b[0x18]
            void var_24
            eax_3 = sub_6e332d(arg1, &var_24, arg_8, arg3, arg_10, arg4, arg5, arg6, arg7)
            arg_8 = *eax_3
            arg3 = eax_3[1]
        case &lookup_table_6e5f1b[0x22]
            char const* const var_38_4 = "%b %d %H : %M : %S %Y"
        label_6e5c81:
            int32_t* var_3c_3 = arg7
            eax_3 = std::time_get<char,class std::istreambuf_iterator<char,struct std::char_traits<char> > >::_Getfmt(
                arg1, &var_1c, arg_8, arg3, arg_10, arg4, arg5, arg6)
            arg_8 = *eax_3
            arg3 = eax_3[1]
        case &lookup_table_6e5f1b[0x23], &lookup_table_6e5f1b[0x24]
            int32_t* var_38_6 = eax_1
            var_3c_5 = &arg7[3]
            var_40_4 = 0x1f
        label_6e5ce4:
            eax_12 = std::time_get<char,class std::istreambuf_iterator<char,struct std::char_traits<char> > >::_Getint(
                arg1, &arg_8, &arg_10, 1, var_40_4, var_3c_5)
            *arg6 |= eax_12
        case &lookup_table_6e5f1b[0x29]
            int32_t* var_38_10 = eax_1
            var_3c_5 = &arg7[7]
            var_40_4 = 0x16e
            goto label_6e5ce4
        case &lookup_table_6e5f1b[0x2c]
            int32_t* var_38_11 = eax_1
            int32_t eax_21 = std::time_get<char,class std::istreambuf_iterator<char,struct std::char_traits<char> > >::_Getint(
                arg1, &arg_8, &arg_10, 1, 0xc, &var_14) | *arg6
            *arg6 = eax_21
            
            if ((eax_21.b & 2) == 0)
                arg7[4] = var_14 - 1
        case &lookup_table_6e5f1b[0x2d], &lookup_table_6e5f1b[0x33]
            void* const var_38_13 = &data_750214
            goto label_6e5c81
        case &lookup_table_6e5f1b[0x2f]
            int32_t eax_25 = std::_Getloctxt<char,class std::istreambuf_iterator<char,struct std::char_traits<char> > >(
                &arg_8, &arg_10, nullptr, ":AM:am:PM:pm")
            
            if (eax_25 s< 0)
                *arg6 |= 2
            else if (eax_25 s> 1)
                arg7[2] += 0xc
        case &lookup_table_6e5f1b[0x31]
            char const* const var_38_14 = "%I : %M : %S %p"
            goto label_6e5c81
        case &lookup_table_6e5f1b[0x36]
            int32_t* var_38_19 = eax_1
            var_3c_5 = &arg7[6]
            var_40_4 = 6
            goto label_6e5d12
        case &lookup_table_6e5f1b[0x37]
            char const* const var_38_20 = "%d / %m / %y"
            goto label_6e5c81
        case &lookup_table_6e5f1b[0x38]
            int32_t* var_38_21 = eax_1
            int32_t eax_32 = std::time_get<char,class std::istreambuf_iterator<char,struct std::char_traits<char> > >::_Getint(
                arg1, &arg_8, &arg_10, 0, 0x63, &var_14) | *arg6
            *arg6 = eax_32
            
            if ((eax_32.b & 2) == 0)
                int32_t ecx_8 = var_14
                
                if (ecx_8 s< 0x45)
                    ecx_8 += 0x64
                
                arg7[5] = ecx_8

if (std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(&arg_8, &arg_10) != 0)
    *arg6 |= 1

*arg2 = arg_8
arg2[1] = arg3
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6e5ebc
return arg2
