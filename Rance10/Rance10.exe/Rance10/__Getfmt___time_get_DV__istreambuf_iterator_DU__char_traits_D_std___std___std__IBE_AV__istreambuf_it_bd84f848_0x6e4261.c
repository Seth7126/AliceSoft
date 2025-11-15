// 函数: ?_Getfmt@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@IBE?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AAVios_base@2@AAHPAUtm@@PBD@Z
// 地址: 0x6e4261
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0x18
int32_t (* var_c)(void* arg1) = sub_74a0eb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_38 = __security_cookie ^ &__saved_ebp
void* const var_3c_4 = &data_6e426d
int32_t var_8_2 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8 = 0
int32_t var_8_1 = 0xffffffff
void var_20
int32_t* esi = sub_6d0f2e(std::ios_base::getloc(arg5, &var_20))
int32_t* var_14 = esi
std::_Debug_range2<class std::move_iterator<class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState*> > > > > > > >(
    &var_20)
char* ebx = arg8
uint32_t arg_8
int32_t arg_10

while (true)
    uint32_t ecx_2
    ecx_2.b = *ebx
    
    if (ecx_2.b == 0)
        break
    
    if (ecx_2.b == 0x25)
        ebx = &ebx[1]
        uint32_t eax_2 = zx.d(*ebx)
        void* esi_2 = *arg1
        *(esi_2 + 0x24)
        int32_t var_54_1 = arg_10
        uint32_t var_5c_1 = arg_8
        j_sub_4033e0()
        void var_28
        int32_t* eax_3 =
            (*(esi_2 + 0x24))(&var_28, var_5c_1, arg3, var_54_1, arg4, arg5, arg6, arg7, eax_2, 0)
        arg_8 = *eax_3
        arg3 = eax_3[1]
        esi = var_14
    else if (ecx_2.b == 0x20)
        while (true)
            char eax_8
            eax_8, ecx_2 = std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(
                &arg_8, &arg_10)
            
            if (eax_8 != 0)
                break
            
            if (arg3.b == 0)
                std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(&arg_8)
            
            if ((*(esi[3] + (zx.d(arg3:1.b) << 1)) & 0x48) == 0)
                break
            
            std::istreambuf_iterator<char,struct std::char_traits<char> >::_Inc(&arg_8)
    else
        if (arg3.b == 0)
            std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(&arg_8)
        
        int32_t esi_3 = *(*esi + 0x28)
        j_sub_4033e0()
        
        if (esi_3(arg3, 0) != *ebx)
            *arg6 |= 2
            break
        
        std::istreambuf_iterator<char,struct std::char_traits<char> >::_Inc(&arg_8)
        esi = var_14
    
    ebx = &ebx[1]

if (std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(&arg_8, &arg_10) != 0)
    *arg6 |= 1

*arg2 = arg_8
arg2[1] = arg3
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6e4386
return arg2
