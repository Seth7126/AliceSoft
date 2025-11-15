// 函数: sub_6dac89
// 地址: 0x6dac89
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0x18
int32_t (* var_c)(void* arg1) = sub_74a0eb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_38 = __security_cookie ^ &__saved_ebp
void* const var_3c_6 = &data_6dac95
int32_t var_8_2 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8 = 0
int32_t var_8_1 = 0xffffffff
void var_20
struct std::ctype_base::std::ctype<wchar_t>::VTable* esi =
    sub_633850(std::ios_base::getloc(arg5, &var_20))
struct std::ctype_base::std::ctype<wchar_t>::VTable* var_14 = esi
std::_Debug_range2<class std::move_iterator<class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState*> > > > > > > >(
    &var_20)
char* ebx = arg8
int32_t arg_8
int32_t arg_10

while (true)
    int32_t ecx_2
    ecx_2.b = *ebx
    
    if (ecx_2.b == 0)
        break
    
    if (ecx_2.b == 0x25)
        ebx = &ebx[1]
        uint32_t eax_2 = zx.d(*ebx)
        void* esi_2 = *arg1
        *(esi_2 + 0x24)
        int32_t var_54_1 = arg_10
        int32_t var_5c_1 = arg_8
        j_sub_4033e0()
        void var_28
        int32_t* eax_3 =
            (*(esi_2 + 0x24))(&var_28, var_5c_1, arg3, var_54_1, arg4, arg5, arg6, arg7, eax_2, 0)
        arg_8 = *eax_3
        arg3 = eax_3[1]
    else if (ecx_2.b != 0x20)
        if (arg3.b == 0)
            std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(&arg_8)
        
        int32_t esi_4 = *(esi->vFunc_0 + 0x38)
        j_sub_4033e0()
        
        if (esi_4(arg3, 0) != *ebx)
            *arg6 |= 2
            break
        
        std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Inc(&arg_8)
    else
        char i
        i, ecx_2 = sub_6e320e(&arg_8, &arg_10)
        
        while (i == 0)
            if (arg3.b == 0)
                std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(&arg_8)
            
            int32_t esi_3 = *(esi->vFunc_0 + 0x10)
            j_sub_4033e0()
            char eax_6
            eax_6, ecx_2 = esi_3(0x48, arg3)
            
            if (eax_6 == 0)
                break
            
            std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Inc(&arg_8)
            i, ecx_2 = sub_6e320e(&arg_8, &arg_10)
            esi = var_14
    
    esi = var_14
    ebx = &ebx[1]

if (sub_6e320e(&arg_8, &arg_10) != 0)
    *arg6 |= 1

*arg2 = arg_8
arg2[1] = arg3
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6dadd2
return arg2
