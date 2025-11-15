// 函数: sub_5ea000
// 地址: 0x5ea000
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7419c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg3 s>= 0)
    void* edi_1 = data_7fd4cc
    
    if (arg3 s< (*(edi_1 + 0x58) - *(edi_1 + 0x54)) s>> 3)
        int32_t edi_2 = *(edi_1 + 0x54)
        void* esi_2 = (arg3 << 3) + 4 + edi_2
        __Smtx_lock_shared(esi_2)
        void* edi_3 = *(edi_2 + (arg3 << 3))
        __Smtx_unlock_shared(esi_2)
        
        if (edi_3 != 0)
            int32_t var_28_1 = arg4
            int32_t var_20 = 0
            int32_t var_1c_1 = 0
            int32_t var_18_1 = 0
            struct common::CPoint::VTable* const var_2c = &common::CPoint::`vftable'
            int32_t var_24_1 = arg5
            int32_t var_8_1 = 0
            
            if (sub_5c64e0(edi_3 + 0x10, arg2, &var_2c, &var_20).b != 0)
                *arg6 = var_20
                *arg7 = var_1c_1
                *arg8 = var_18_1
                int32_t* eax_10
                eax_10.b = 1
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_10

struct _EXCEPTION_REGISTRATION_RECORD** eax_3
eax_3.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
